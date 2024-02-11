
package AmpelTest;
    import Ampel :: *;
    module mkAmpelTest(Empty);
        AmpelIf ampel <- mkAmpel();
        Reg#(int) counter <- mkReg(0);
        rule check; 
            let pedestrian = ampel.get_pedestrian_state;
            let ampelState = ampel.get_state;

            $display("time: %d ampel: %d, pedestrian: %d", $time, ampelState, pedestrian);
            counter <= counter + 1;
            ampel.request_pedestrian();
            if(counter > 50) $finish;
        endrule
    endmodule
endpackage