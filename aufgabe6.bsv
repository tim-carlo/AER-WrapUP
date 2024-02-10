package Ampel;

import StmtFSM :: *;

typedef enum {Red, RedYellow, Yellow, Green} AmpelState deriving (Bits, Eq);
typedef enum {PRed, PGreen} PedestrianState deriving (Bits, Eq);
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

    Stmt s = seq
        // State1
        action
            state[0] <= Red;
            pedestrian_state[0] <= Red;
            idle_counter <= 0;
        endaction
        // State2
        state[0] <= RedYellow;
        //State 3

        while(idle_counter <= 5) action
            state[0] <= Green;
            idle_counter <= idle_counter + 1
        endaction

        while(idle_counter <= 15 && !request_pedestrian[1]) action
            idle_counter <= idle_counter + 1;
        endaction
        if (request_pedestrian) seq
            repeat (5) noAction;
        endseq
        
        state[0] <= Yellow;
        state[0] <= Red;
        state[0] <= Green;
        repeat (10) noAction;
    endseq;

    FSM testFSM <- mkFSM(s);
    rule startit;
        testFSM.start;
    endrule
    // When done restart
    rule sequel (testFSM.done);
        testFSM.start;
    endrule


    method Action request_pedestrian;
        pedestrian_request[0] <= True;
    endmethod    
    method AmpelState get_state = state[1]._read;
    method PedestrianState = pedestrian_state[1]._read;
    mkAutoFSM(s);

endpackage    