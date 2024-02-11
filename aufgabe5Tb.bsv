package Aufgabe5Tb;
    import StmtFSM :: *;
    import UART :: *;
    import GetPut::*;


    module mkAufgabe5Tb(Empty);
        TX_ifc dut <- mkTX();
        Bit#(8) data = 8'b10101010;
        Reg#(int) counter <- mkReg(0);
        Reg#(int) mistakes <- mkReg(0);

        Stmt s = seq
            $display("StartTB ...");
            action
                let pin = dut.pin;
                if(pin != 1) action
                    $display("Wrong Idle Output!");
                    mistakes <= mistakes + 1;
                endaction
            endaction
            dut.data.put(data);
            action
                $display("Waiting for Data to be sent ...");
                await( dut.pin == 0 );
            endaction

            // Waiting for the start bit to be sent
            repeat (15) action
                let pin = dut.pin;
                if(pin != 0) action
                    $display("Wrong Data Notification!");
                    mistakes <= mistakes + 1;
                endaction
            endaction
            for(counter <= 0; counter < 8; counter <= counter + 1) seq
                repeat (16) action
                    $display("Data: %d ... Fetching Data from Tackt: %d",counter, $time);
                    let pin = dut.pin;
                    if(pin != data[counter]) action
                        $display("%d Wrong Data expected: %d got: %d  Time: %d", counter, data[counter],pin, $time);
                        mistakes <= mistakes + 1;
                    endaction    
                endaction
            endseq
                
            // Waiting for the last bit to be sent
            repeat (16) action
                let pin = dut.pin;
                if(pin != 1) action
                    $display("Wrong END Bit: 1 got: ", pin);
                endaction    
            endaction

            $display("Code executed with %d Mistakes!", mistakes);
            
        endseq;
        mkAutoFSM(s);
    endmodule    
endpackage : Aufgabe5Tb
