package UART;
    import FIFO :: *;
    import GetPut :: *;

    interface TX_ifc;
        interface Put#(Bit#(8)) data;
        (*always_ready*)    
        method Bit#(1) pin();     
    endinterface
    typedef enum {IDLE, GOTDATA, TRANSFER, FINISH} States deriving (Bits, Eq, FShow);

    module mkTX(TX_ifc);
        Integer ticks = 16;
        FIFO#(Bit#(8)) dataIn <- mkFIFO;
        Reg#(Bit#(8)) currentData <- mkRegU;
        Reg#(int) pointer <- mkReg(0);

        Reg#(int) counter <- mkReg(0);
        Reg#(States) states <- mkReg(IDLE);
        Reg#(Bit#(1)) pinData[2] <- mkCReg(2, 1);   

        rule r1(states == IDLE);
            $display("TX: Got data");
            let data = dataIn.first;
            dataIn.deq;
            states <= GOTDATA;
            pinData[0] <= 0;
            currentData <= data;
            counter <= 0;
            
        endrule

        rule r2(states == GOTDATA);
            if(counter < fromInteger(ticks)) begin
                counter <= counter + 1;
            end else begin
                counter <= 0;
                states <= TRANSFER;
                pinData[0] <= currentData[pointer];
            end
        endrule
        rule r3(states == TRANSFER);
            if(counter < fromInteger(ticks)) begin
                counter <= counter + 1;
            end else begin
                counter <= 0;
                let pointerplus1 = pointer + 1;
                pinData[0] <= currentData[pointerplus1];
                pointer <= pointerplus1;
                if(pointer == 7) begin
                    states <= FINISH;
                end
            end
        endrule

        rule r4(states == FINISH);
            if(counter < fromInteger(ticks)) begin
                counter <= counter + 1;
                // Show the last for a while
                pinData[0] <= 1;
            end else begin
                pinData[0] <= 1;
                counter <= 0;
                pointer <= 0;
                currentData <= 0;
                states <= IDLE;
            end
        endrule

        method Bit#(1) pin = pinData[1]._read;
        interface data = toPut(dataIn);
        
    endmodule : mkTX
endpackage