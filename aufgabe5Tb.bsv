package Aufgabe5Tb;
    import StmtFSM :: *;
    import UART :: *;
    import GetPut::*;


    module mkAufgabe5Tb(Empty);
        TX_ifc dut <- mkTX();

        Stmt s = seq
            $display("StartTB ...");
            action
                let pin = dut.pin;
                $display("Pin State: ", pin);
                if(pin != 1) action
                    $display("Wrong Idle Output!");
                endaction
            endaction
            dut.data.put(8'b10101010);
            repeat (16) action
                let pin = dut.pin;
                if(pin != 0) action
                    $display("Wrong Data Notification!");
                endaction
            endaction
            repeat (16) action
                let pin = dut.pin;
                if(pin != 0) $display("1 Wrong Data expected: 0 got: ", pin);
            endaction
            repeat (16) action
                let pin = dut.pin;
                if(pin != 1) $display("2 Wrong Data expected: 1 got: ", pin);
            endaction
            repeat (16) action
                let pin = dut.pin;
                if(pin != 0) $display("3 Wrong Data expected: 0 got: ", pin);
            endaction
            repeat (16) action
                let pin = dut.pin;
                if(pin != 1) $display("4 Wrong Data expected: 1 got: ", pin);
            endaction
            repeat (16) action
                let pin = dut.pin;
                if(pin != 0) $display("5 Wrong Data expected: 0 got: ", pin);
            endaction
            repeat (16) action
                let pin = dut.pin;
                if(pin != 1) $display("6 Wrong Data expected: 1 got: ", pin);
            endaction
            repeat (16) action
                let pin = dut.pin;
                if(pin != 0) $display("7 Wrong Data expected: 0 got: ", pin);
            endaction
            repeat (16) action
                let pin = dut.pin;
                if(pin != 1) $display("8 Wrong Data expected: 1 got: ", pin);
            endaction

            // Waiting for the last bit to be sent
            repeat (16) action
                let pin = dut.pin;
                if(pin != 1) $display("Wrong END Bit: 0 got: ", pin);
            endaction
            
        endseq;
        mkAutoFSM(s);
    endmodule    
endpackage : Aufgabe5Tb
