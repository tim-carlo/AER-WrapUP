
package AmpelTest;
    import Ampel :: *;
    import StmtFSM :: *;

    module mkAmpelTest(Empty);
        AmpelIf ampel <- mkAmpel();
        Reg#(int) counter <- mkReg(0);
        Stmt s = seq
            ampel.request_pedestrian();

            while (True) action
                let pedestrian = ampel.get_pedestrian_state;
                let ampelState = ampel.get_state;

                $display("time: %d ampel: %d, pedestrian: %d", $time, ampelState, pedestrian);
                counter <= counter + 1;
                if(counter > 50) $finish;
            endaction
        endseq;

        mkAutoFSM(s);
    endmodule
endpackage