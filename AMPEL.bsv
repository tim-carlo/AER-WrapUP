package Ampel;

import StmtFSM :: *;

typedef enum {Red, RedYellow, Yellow, Green} AmpelState deriving (Bits, Eq, FShow);
typedef enum {PRed, PGreen} PedestrianState deriving (Bits, Eq, FShow);
interface AmpelIf;
    (*always_enabled*)
    method Action request_pedestrian; 
    (*always_enabled*)
    method AmpelState get_state; 
    (*always_enabled*)
    method PedestrianState get_pedestrian_state;
endinterface
module mkAmpel(AmpelIf);
    Array#(Reg#(AmpelState)) state <- mkCReg(2, Red);
    Array#(Reg#(PedestrianState)) pedestrian_state <- mkCReg(2, PRed);
    Array#(Reg#(Bool)) pedestrian_request <- mkCReg(2, False);
    Reg#(UInt#(8)) idle_counter <- mkRegU;
    Reg#(Bool) startetFSM <- mkReg(False);
    Reg#(Bool) handeldRequest <- mkReg(False);

    Stmt s = seq
        // State1
        action
            state[0] <= Red;
            pedestrian_state[0] <= PRed;
            idle_counter <= 0;
        endaction
        // State2
        state[0] <= RedYellow;
        //State 3
        action
            state[0] <= Green;
            idle_counter <= 14;
        endaction

        while(idle_counter > 0) action
            state[0] <= Green;
            if(pedestrian_request[1] && !handeldRequest && idle_counter > 5) action
                idle_counter <= 5;
                handeldRequest <= True;
            endaction else action
                idle_counter <= idle_counter - 1;
            endaction
        endaction
        state[0] <= Yellow;
        state[0] <= Red;
        pedestrian_state[0] <= PGreen;
        repeat (10) noAction;
    endseq;

    FSM testFSM <- mkFSM(s);
    rule startit(!startetFSM);
        testFSM.start;
        startetFSM <= True;
        handeldRequest <= False;
    endrule
    // When done restart
    rule sequel (startetFSM && testFSM.done);
        testFSM.start;
        pedestrian_request[0] <= False;
    endrule


    method Action request_pedestrian;
        pedestrian_request[0] <= True;
    endmethod    
    method AmpelState get_state = state[1]._read;
    method PedestrianState  get_pedestrian_state = pedestrian_state[1]._read;
    endmodule
endpackage    