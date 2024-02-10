package Stack;
    interface Stack;
        method Action push(Int#(32) value);
        method ActionValue#(Int#(32)) pop();
        method Int#(32) peek();
    endinterface
    typedef enum {IDLE, TRANSFER, WAIT} States deriving (Bits, Eq, FShow);
    module mkStack(Stack);
        Reg#(int) stackPointer <- mkReg(0);
        Vector#(5, Reg#(int))

        method Action push(Int#(32) value);

        endmethod
        method ActionValue#(Int#(32)) pop();
        endmethod
        
        method Int#(32) peek();

        endmethod    
    endmodule : mkStack
    
endpackage : Stack
