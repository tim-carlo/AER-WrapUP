package UART;
    import FIFOF :: *;
    import GetPut :: *;

    interface TX_ifc;
        interface Put#(Bit#(8)) data;
        method Bit#(1) pin();     
    endinterface
    typedef enum {IDLE, GOTDATA, TRANSFER, FINISH} States deriving (Bits, Eq, FShow);

    module mkTX(TX_ifc);
        Integer ticks = 16;
        FIFOF#(Bit#(8)) dataIn <- mkFIFOF;
        Reg#(Bit#(8)) currentData <- mkRegU;
        Reg#(int) counter <- mkReg(0);
        Reg#(States) states <- mkReg(IDLE);
        Wire#(Bit#(1)) pinData <- mkWire;   
        Reg#(int) pointer <- mkReg(0);

        rule r1(states == IDLE);
            if(dataIn.notEmpty) begin
                states <= GOTDATA;
                pinData <= 0;
                let data = dataIn.first;
                dataIn.deq;
                currentData <= data;
            end else begin
                pinData <= 1;
            end
        endrule

        rule r2(states == GOTDATA);
            if(counter < fromInteger(ticks) - 1) begin
                pinData <= 0;
                counter <= counter + 1;
            end else begin
                counter <= 1;
                states <= TRANSFER;
                pinData <= currentData[pointer];
            end
        endrule
        rule r3(states == TRANSFER);
            if(counter < fromInteger(ticks) - 1) begin
                counter <= counter + 1;
                pinData <= currentData[pointer];
            end else begin
                counter <= 0;
                pinData <= currentData[pointer + 1];
                pointer <= pointer + 1;
                if(pointer == 7) begin
                    states <= FINISH;
                end
            end
        endrule

        rule r4(states == FINISH);
            if(counter < fromInteger(ticks) - 1) begin
                counter <= counter + 1;
                // Show the last for a while
                pinData <= 1;
            end else begin
                pinData <= 0;
                counter <= 0;
                pointer <= 0;
                currentData <= 0;
                states <= IDLE;
            end
        endrule

        method Bit#(1) pin = pinData._read;
        interface data = toPut(dataIn);
        
    endmodule : mkTX
endpackage