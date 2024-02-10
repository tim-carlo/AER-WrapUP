package CalcUnitRules;
typedef Server#(Tuple2#(Int#(32), Int#(32)), Int#(32)) AddUnit;
typedef Server#(Tuple2#(Int#(32), Int#(32)), Int#(32)) MulUnit;
typedef Server#(Int#(32), Int#(32)) SqrtUnit;

typedef Server#(Tuple4#(Int#(32), Int#(32), Int#(32), Int#(32)), Int#(32)) FSMCalc;

typedef enum {IDLE, ADDPARAMS1, ADDPARAMS2, MULT, ADD16, SQRT} States deriving (Bits, Eq);

module mkCalcUnitRules(FSMCalc);
    AddUnit adder <- mkAdder();
    MulUnit mul <- mkMul();
    SqrtUnit sqrt <- mkSqrt();
    Reg#(States) states <- mkReg(IDLE);
    FIFO#(Tuple4#(Int#(32), Int#(32), Int#(32), Int#(32))) incoming <- mkFIFO();

    Reg#(Tuple2#(Int#(32), Int#(32))) candd <- mkRegU;
    Reg#(Int#(32)) aplusb <- mkRegU;



    rule idleState(states == IDLE);
        let data <- incoming.first();
        incoming.deq;
        match {.a, .b, .c, .d} = data;
        adder.request.put(tupel2(a,b));
        candd <= tupel2(c,-d);
        states <= ADDPARAMS1;
    endrule
    rule addParamsState(states == ADDPARAMS1);
        let result <- adder.response.get;
        aplusb <= result;
        adder.request.put(candd);
        states <= MULT;
    endrule

    rule addParamsState(states == ADDPARAMS2);
        let result <- adder.request.get;
        mul.request.put(aplusb, request);
        states <= MULT;
    endrule

    rule multState(states == MULT);
        let result <- mul.request.get;
        adder.request.put(tupel2(result, 16));
        states <= ADD16;
    endrule
    
    rule add16State(states == ADD16);
        let result <- adder.request.get;
        sqrt.request.put(result);
        states <= SQRT;
    endrule

    
    interface request = toPut(incoming);
    interface response = sqrt.response;
endmodule : mkCalcUnitRules
    
endpackage : CalcUnitRules