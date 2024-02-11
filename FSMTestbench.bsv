package FSMTestbench;
    import CalcUnitFSM :: *;
    import StmtFSM :: *;
    import GetPut :: *;
    import ClientServer :: *;

    module mkFSMTestbench(Empty);
        FSMCalc dut <- mkCalcUniFSM;

        Stmt s = seq
            $display("Start FSM...");
            dut.request.put(tuple4(1,2,3,4));
            action
                let result <- dut.response.get();
                $display("result: %d", result);
            endaction
            $display("finish!");
        endseq;
        mkAutoFSM(s);
    endmodule
endpackage
