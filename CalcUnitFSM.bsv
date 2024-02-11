package CalcUnitFSM;
    import FIFO :: *;
    import StmtFSM :: *;
    import ArithmetrikUnits :: *;
    import GetPut :: *;
    import ClientServer :: *;

    typedef Server#(Tuple4#(Int#(32), Int#(32), Int#(32), Int#(32)), Int#(32)) FSMCalc;
    typedef enum {IDLE, ADDPARAMS1, ADDPARAMS2, MULT, ADD16, SQRT} States deriving (Bits, Eq);


    module mkCalcUniFSM(FSMCalc);
        AddUnit adder <- mkAdder;
        MulUnit mul <- mkMul;
        SqrtUnit sqrt <- mkSqrt;

        FIFO#(Tuple4#(Int#(32), Int#(32), Int#(32), Int#(32))) incoming <- mkFIFO();
        Reg#(Tuple2#(Int#(32), Int#(32))) candd <- mkRegU;
        Reg#(Int#(32)) addresult <- mkRegU;

        Stmt s = seq
            action
                $display("got Data!");
                let data = incoming.first; incoming.deq;
                match {.a, .b, .c, .d} = data;
                candd  <= tuple2(c, -d);
                adder.request.put(tuple2(a,b));
            endaction
            action
                $display("add");
                let result <- adder.response.get();
                adder.request.put(candd);
                addresult <= result;
            endaction
            action
                $display("mul");
                let result <- adder.response.get();
                mul.request.put(tuple2(addresult, result));
            endaction    
            action
                $display("add");
                let multresult <- mul.response.get();
                adder.request.put(tuple2(multresult, 16));
            endaction
            action
                let addresult <- adder.response.get();
                $display("sqrt %d" , addresult);
                sqrt.request.put(addresult);
            endaction
        endseq;

        mkAutoFSM(s);
        

        interface request = toPut(incoming);
        interface response = sqrt.response;
    endmodule : mkCalcUniFSM
endpackage