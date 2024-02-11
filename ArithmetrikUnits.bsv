package ArithmetrikUnits;
import FIFO :: *;
import Real :: * ;
import GetPut :: *;
import ClientServer :: *;

typedef Server#(Tuple2#(Int#(32), Int#(32)), Int#(32)) AddUnit;
typedef Server#(Tuple2#(Int#(32), Int#(32)), Int#(32)) MulUnit;
typedef Server#(Int#(32), Int#(32)) SqrtUnit;

module mkAdder(AddUnit);
    FIFO#(Tuple2#(Int#(32), Int#(32))) inputFIFO <- mkFIFO;
    FIFO#(Int#(32)) outputFIFO <- mkFIFO;

    rule compute;
        let result = inputFIFO.first; inputFIFO.deq;
        match {.a, .b} = result;
        outputFIFO.enq(a + b);
    endrule    

    interface request = toPut(inputFIFO);
    interface response = toGet(outputFIFO);
    
endmodule

module mkMul(MulUnit);
    FIFO#(Tuple2#(Int#(32), Int#(32))) inputFIFO <- mkFIFO;
    FIFO#(Int#(32)) outputFIFO <- mkFIFO;
    rule compute;
        let result = inputFIFO.first; inputFIFO.deq;
        match {.a, .b} = result;
        outputFIFO.enq(a * b);
    endrule    

    interface request = toPut(inputFIFO);
    interface response = toGet(outputFIFO);
endmodule

module mkSqrt(SqrtUnit);
    FIFO#(Int#(32)) inputFIFO <- mkFIFO;
    FIFO#(Int#(32)) outputFIFO <- mkFIFO;
    rule compute;
        $display("Compute");
        let result = inputFIFO.first; inputFIFO.deq;
        outputFIFO.enq(result + 1);
    endrule    

    interface request = toPut(inputFIFO);
    interface response = toGet(outputFIFO);
endmodule
endpackage