/*
 * Generated by Bluespec Compiler, version 2023.07-7-g527eaa0b (build 527eaa0b)
 * 
 * On Sun Feb 11 11:41:45 UTC 2024
 * 
 */
#include "bluesim_primitives.h"
#include "model_mkAufgabe5Tb.h"

#include <cstdlib>
#include <time.h>
#include "bluesim_kernel_api.h"
#include "bs_vcd.h"
#include "bs_reset.h"


/* Constructor */
MODEL_mkAufgabe5Tb::MODEL_mkAufgabe5Tb()
{
  mkAufgabe5Tb_instance = NULL;
}

/* Function for creating a new model */
void * new_MODEL_mkAufgabe5Tb()
{
  MODEL_mkAufgabe5Tb *model = new MODEL_mkAufgabe5Tb();
  return (void *)(model);
}

/* Schedule functions */

static void schedule_posedge_CLK(tSimStateHdl simHdl, void *instance_ptr)
       {
	 MOD_mkAufgabe5Tb &INST_top = *((MOD_mkAufgabe5Tb *)(instance_ptr));
	 tUInt8 DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d76;
	 tUInt8 DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d86;
	 tUInt8 DEF_INST_top_DEF_NOT_jj_repeat_count_read__2_BIT_0_3___d74;
	 tUInt8 DEF_INST_top_DEF_counter_2_SLT_8___d93;
	 tUInt8 DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d112;
	 tUInt8 DEF_INST_top_DEF_NOT_jj_1_repeat_count_read__4_BIT_0_5___d96;
	 tUInt8 DEF_INST_top_DEF_counter_2_SLT_8_3_AND_jj_1_repeat_count_read___ETC___d103;
	 tUInt8 DEF_INST_top_DEF_NOT_counter_2_SLT_8_3___d129;
	 tUInt8 DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d143;
	 tUInt8 DEF_INST_top_DEF_NOT_jj_2_repeat_count_read__30_BIT_0_31___d132;
	 tUInt8 DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d101;
	 tUInt8 DEF_INST_top_DEF_abort_whas__6_AND_abort_wget__7_8_OR_state_mkF_ETC___d174;
	 tUInt8 DEF_INST_top_DEF_abort_whas__6_AND_abort_wget__7_8_OR_state_mkF_ETC___d178;
	 tUInt8 DEF_INST_top_DEF_abort_whas__6_AND_abort_wget__7___d28;
	 tUInt8 DEF_INST_top_DEF_NOT_start_wire_whas__9_0_OR_NOT_start_wire_wge_ETC___d33;
	 tUInt8 DEF_INST_top_DEF_abort_whas__6_AND_abort_wget__7_8_OR_state_mkF_ETC___d57;
	 tUInt8 DEF_INST_top_DEF_start_wire_whas__9_AND_start_wire_wget__1___d52;
	 tUInt8 DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50;
	 tUInt8 DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_O_ETC___d78;
	 tUInt8 DEF_INST_top_DEF_NOT_jj_repeat_count_read__2_BIT_0_3_4_AND_NOT__ETC___d87;
	 tUInt8 DEF_INST_top_DEF_jj_repeat_count_read__2_BIT_0_3_AND_NOT_abort__ETC___d82;
	 tUInt8 DEF_INST_top_DEF_counter_2_SLT_8_3_AND_jj_1_repeat_count_read___ETC___d108;
	 tUInt8 DEF_INST_top_DEF_NOT_jj_1_repeat_count_read__4_BIT_0_5_6_AND_NO_ETC___d113;
	 tUInt8 DEF_INST_top_DEF_counter_2_SLT_8_3_AND_jj_1_repeat_count_read___ETC___d117;
	 tUInt8 DEF_INST_top_DEF_NOT_counter_2_SLT_8_3_29_AND_jj_2_repeat_count_ETC___d136;
	 tUInt8 DEF_INST_top_DEF_NOT_jj_2_repeat_count_read__30_BIT_0_31_32_AND_ETC___d144;
	 tUInt8 DEF_INST_top_DEF_state_mkFSMstate_read__3_EQ_9___d98;
	 tUInt8 DEF_INST_top_DEF_state_mkFSMstate_read__3_EQ_14___d99;
	 tUInt8 DEF_INST_top_DEF_state_mkFSMstate_read__3_EQ_15___d137;
	 tUInt8 DEF_INST_top_DEF_state_mkFSMstate_read__3_EQ_19___d56;
	 tUInt8 DEF_INST_top_DEF_jj_repeat_count_read__2_BIT_0___d73;
	 tUInt8 DEF_INST_top_DEF_jj_1_repeat_count_read__4_BIT_0___d95;
	 tUInt8 DEF_INST_top_DEF_jj_2_repeat_count_read__30_BIT_0___d131;
	 tUInt8 DEF_INST_top_DEF_abort_wget____d27;
	 tUInt8 DEF_INST_top_DEF_abort_whas____d26;
	 tUInt8 DEF_INST_top_DEF_start_reg__h79489;
	 tUInt8 DEF_INST_top_DEF_running__h79575;
	 tUInt8 DEF_INST_top_DEF_start_wire_wget____d31;
	 tUInt8 DEF_INST_top_DEF_start_wire_whas____d29;
	 tUInt8 DEF_INST_top_DEF_start_reg_1__h71658;
	 tUInt8 DEF_INST_top_DEF_state_fired__h71660;
	 tUInt8 DEF_INST_top_DEF_dut_states__h457;
	 tUInt8 DEF_INST_top_DEF_state_mkFSMstate_read____d53;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dut_r1;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dut_r1;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dut_r2;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dut_r2;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dut_r3;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dut_r3;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dut_r4;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dut_r4;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_start_reg__dreg_update;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_start_reg__dreg_update;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_state_handle_abort;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_state_handle_abort;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_state_fired__dreg_update;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_state_fired__dreg_update;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_state_every;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_state_every;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_restart;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_restart;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_action_l14c13;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_action_l15c13;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_action_l22c16;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_action_l23c13;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l29c13;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_action_l29c25;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_action_f_init_l36c13;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l37c17;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_action_l37c29;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_action_f_update_l36c13;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l48c13;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_action_l48c25;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_action_l55c13;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l29c13;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_action_ovlp_r_update_l29c13;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l37c17;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_action_ovlp_r_update_l37c17;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l48c13;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_action_ovlp_r_update_l48c13;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_idle_l13c18;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_idle_l13c18;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_fsm_start;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_fsm_start;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_auto_start;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_auto_start;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_auto_finish;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_auto_finish;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE___me_check_9;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE___me_check_9;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE___me_check_10;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE___me_check_10;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE___me_check_11;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE___me_check_11;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE___me_check_12;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE___me_check_12;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE___me_check_13;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE___me_check_13;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE___me_check_14;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE___me_check_14;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE___me_check_15;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE___me_check_15;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE___me_check_16;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE___me_check_16;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE___me_check_17;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE___me_check_17;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE___me_check_18;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE___me_check_18;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE___me_check_19;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE___me_check_19;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE___me_check_20;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE___me_check_20;
	 INST_top.DEF_jj_repeat_count_read____d72 = INST_top.INST_jj_repeat_count.METH_read();
	 DEF_INST_top_DEF_state_mkFSMstate_read____d53 = INST_top.INST_state_mkFSMstate.METH_read();
	 DEF_INST_top_DEF_abort_whas____d26 = INST_top.INST_abort.METH_whas();
	 DEF_INST_top_DEF_abort_wget____d27 = INST_top.INST_abort.METH_wget();
	 DEF_INST_top_DEF_jj_repeat_count_read__2_BIT_0___d73 = (tUInt8)((tUInt8)1u & (INST_top.DEF_jj_repeat_count_read____d72));
	 DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50 = !DEF_INST_top_DEF_abort_whas____d26 || !DEF_INST_top_DEF_abort_wget____d27;
	 DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d86 = DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50 && DEF_INST_top_DEF_state_mkFSMstate_read____d53 == (tUInt8)7u;
	 DEF_INST_top_DEF_CAN_FIRE_RL_action_f_init_l36c13 = DEF_INST_top_DEF_jj_repeat_count_read__2_BIT_0___d73 && DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d86;
	 INST_top.DEF_WILL_FIRE_RL_action_f_init_l36c13 = DEF_INST_top_DEF_CAN_FIRE_RL_action_f_init_l36c13;
	 INST_top.DEF_jj_1_repeat_count_read____d94 = INST_top.INST_jj_1_repeat_count.METH_read();
	 DEF_INST_top_DEF_jj_1_repeat_count_read__4_BIT_0___d95 = (tUInt8)((tUInt8)1u & (INST_top.DEF_jj_1_repeat_count_read____d94));
	 DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d112 = DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50 && DEF_INST_top_DEF_state_mkFSMstate_read____d53 == (tUInt8)12u;
	 DEF_INST_top_DEF_CAN_FIRE_RL_action_f_update_l36c13 = DEF_INST_top_DEF_jj_1_repeat_count_read__4_BIT_0___d95 && DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d112;
	 INST_top.DEF_WILL_FIRE_RL_action_f_update_l36c13 = DEF_INST_top_DEF_CAN_FIRE_RL_action_f_update_l36c13;
	 DEF_INST_top_DEF_CAN_FIRE_RL_action_l15c13 = DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50 && DEF_INST_top_DEF_state_mkFSMstate_read____d53 == (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_action_l15c13 = DEF_INST_top_DEF_CAN_FIRE_RL_action_l15c13;
	 DEF_INST_top_DEF_CAN_FIRE_RL_action_l22c16 = INST_top.INST_dut_dataIn.METH_i_notFull() && (DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50 && DEF_INST_top_DEF_state_mkFSMstate_read____d53 == (tUInt8)2u);
	 INST_top.DEF_WILL_FIRE_RL_action_l22c16 = DEF_INST_top_DEF_CAN_FIRE_RL_action_l22c16;
	 INST_top.DEF_jj_2_repeat_count_read____d130 = INST_top.INST_jj_2_repeat_count.METH_read();
	 DEF_INST_top_DEF_jj_2_repeat_count_read__30_BIT_0___d131 = (tUInt8)((tUInt8)1u & (INST_top.DEF_jj_2_repeat_count_read____d130));
	 DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d143 = DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50 && DEF_INST_top_DEF_state_mkFSMstate_read____d53 == (tUInt8)17u;
	 DEF_INST_top_DEF_CAN_FIRE_RL_action_l55c13 = DEF_INST_top_DEF_jj_2_repeat_count_read__30_BIT_0___d131 && DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d143;
	 INST_top.DEF_WILL_FIRE_RL_action_l55c13 = DEF_INST_top_DEF_CAN_FIRE_RL_action_l55c13;
	 INST_top.DEF_state_can_overlap__h7354 = INST_top.INST_state_can_overlap.METH_read();
	 DEF_INST_top_DEF_NOT_jj_repeat_count_read__2_BIT_0_3___d74 = !DEF_INST_top_DEF_jj_repeat_count_read__2_BIT_0___d73;
	 DEF_INST_top_DEF_NOT_jj_repeat_count_read__2_BIT_0_3_4_AND_NOT__ETC___d87 = DEF_INST_top_DEF_NOT_jj_repeat_count_read__2_BIT_0_3___d74 && DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d86;
	 DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d76 = DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50 && DEF_INST_top_DEF_state_mkFSMstate_read____d53 == (tUInt8)4u;
	 DEF_INST_top_DEF_jj_repeat_count_read__2_BIT_0_3_AND_NOT_abort__ETC___d82 = (DEF_INST_top_DEF_jj_repeat_count_read__2_BIT_0___d73 && DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d76) || (DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50 && DEF_INST_top_DEF_state_mkFSMstate_read____d53 == (tUInt8)5u);
	 DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l29c13 = INST_top.DEF_state_can_overlap__h7354 && (DEF_INST_top_DEF_jj_repeat_count_read__2_BIT_0_3_AND_NOT_abort__ETC___d82 || DEF_INST_top_DEF_NOT_jj_repeat_count_read__2_BIT_0_3_4_AND_NOT__ETC___d87);
	 DEF_INST_top_DEF_WILL_FIRE_RL_action_ovlp_r_update_l29c13 = DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l29c13;
	 INST_top.DEF_x__h75960 = INST_top.INST_counter.METH_read();
	 DEF_INST_top_DEF_state_mkFSMstate_read__3_EQ_14___d99 = DEF_INST_top_DEF_state_mkFSMstate_read____d53 == (tUInt8)14u;
	 DEF_INST_top_DEF_state_mkFSMstate_read__3_EQ_9___d98 = DEF_INST_top_DEF_state_mkFSMstate_read____d53 == (tUInt8)9u;
	 DEF_INST_top_DEF_NOT_jj_1_repeat_count_read__4_BIT_0_5___d96 = !DEF_INST_top_DEF_jj_1_repeat_count_read__4_BIT_0___d95;
	 DEF_INST_top_DEF_NOT_jj_1_repeat_count_read__4_BIT_0_5_6_AND_NO_ETC___d113 = DEF_INST_top_DEF_NOT_jj_1_repeat_count_read__4_BIT_0_5___d96 && DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d112;
	 DEF_INST_top_DEF_counter_2_SLT_8___d93 = primSLT8(1u,
							   32u,
							   (tUInt32)(INST_top.DEF_x__h75960),
							   32u,
							   8u);
	 DEF_INST_top_DEF_counter_2_SLT_8_3_AND_jj_1_repeat_count_read___ETC___d103 = DEF_INST_top_DEF_counter_2_SLT_8___d93 && DEF_INST_top_DEF_jj_1_repeat_count_read__4_BIT_0___d95;
	 DEF_INST_top_DEF_counter_2_SLT_8_3_AND_jj_1_repeat_count_read___ETC___d117 = DEF_INST_top_DEF_counter_2_SLT_8_3_AND_jj_1_repeat_count_read___ETC___d103 && (DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50 && DEF_INST_top_DEF_state_mkFSMstate_read__3_EQ_14___d99);
	 DEF_INST_top_DEF_counter_2_SLT_8_3_AND_jj_1_repeat_count_read___ETC___d108 = (DEF_INST_top_DEF_counter_2_SLT_8_3_AND_jj_1_repeat_count_read___ETC___d103 && (DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50 && DEF_INST_top_DEF_state_mkFSMstate_read__3_EQ_9___d98)) || (DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50 && DEF_INST_top_DEF_state_mkFSMstate_read____d53 == (tUInt8)10u);
	 DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l37c17 = INST_top.DEF_state_can_overlap__h7354 && (DEF_INST_top_DEF_counter_2_SLT_8_3_AND_jj_1_repeat_count_read___ETC___d108 || (DEF_INST_top_DEF_NOT_jj_1_repeat_count_read__4_BIT_0_5_6_AND_NO_ETC___d113 || DEF_INST_top_DEF_counter_2_SLT_8_3_AND_jj_1_repeat_count_read___ETC___d117));
	 DEF_INST_top_DEF_WILL_FIRE_RL_action_ovlp_r_update_l37c17 = DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l37c17;
	 DEF_INST_top_DEF_state_mkFSMstate_read__3_EQ_15___d137 = DEF_INST_top_DEF_state_mkFSMstate_read____d53 == (tUInt8)15u;
	 DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d101 = DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50 && (DEF_INST_top_DEF_state_mkFSMstate_read__3_EQ_9___d98 || DEF_INST_top_DEF_state_mkFSMstate_read__3_EQ_14___d99);
	 DEF_INST_top_DEF_NOT_jj_2_repeat_count_read__30_BIT_0_31___d132 = !DEF_INST_top_DEF_jj_2_repeat_count_read__30_BIT_0___d131;
	 DEF_INST_top_DEF_NOT_jj_2_repeat_count_read__30_BIT_0_31_32_AND_ETC___d144 = DEF_INST_top_DEF_NOT_jj_2_repeat_count_read__30_BIT_0_31___d132 && DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d143;
	 DEF_INST_top_DEF_NOT_counter_2_SLT_8_3___d129 = !DEF_INST_top_DEF_counter_2_SLT_8___d93;
	 DEF_INST_top_DEF_NOT_counter_2_SLT_8_3_29_AND_jj_2_repeat_count_ETC___d136 = (DEF_INST_top_DEF_NOT_counter_2_SLT_8_3___d129 && DEF_INST_top_DEF_jj_2_repeat_count_read__30_BIT_0___d131) && DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d101;
	 DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l48c13 = INST_top.DEF_state_can_overlap__h7354 && (DEF_INST_top_DEF_NOT_counter_2_SLT_8_3_29_AND_jj_2_repeat_count_ETC___d136 || ((DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50 && DEF_INST_top_DEF_state_mkFSMstate_read__3_EQ_15___d137) || DEF_INST_top_DEF_NOT_jj_2_repeat_count_read__30_BIT_0_31_32_AND_ETC___d144));
	 DEF_INST_top_DEF_WILL_FIRE_RL_action_ovlp_r_update_l48c13 = DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l48c13;
	 DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l29c13 = DEF_INST_top_DEF_NOT_jj_repeat_count_read__2_BIT_0_3___d74 && DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d76;
	 INST_top.DEF_WILL_FIRE_RL_action_r_init_l29c13 = DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l29c13;
	 DEF_INST_top_DEF_state_fired__h71660 = INST_top.INST_state_fired.METH_read();
	 DEF_INST_top_DEF_start_reg_1__h71658 = INST_top.INST_start_reg_1.METH_read();
	 DEF_INST_top_DEF_running__h79575 = INST_top.INST_running.METH_read();
	 DEF_INST_top_DEF_start_reg__h79489 = INST_top.INST_start_reg.METH_read();
	 DEF_INST_top_DEF_state_mkFSMstate_read__3_EQ_19___d56 = DEF_INST_top_DEF_state_mkFSMstate_read____d53 == (tUInt8)19u;
	 DEF_INST_top_DEF_abort_whas__6_AND_abort_wget__7___d28 = DEF_INST_top_DEF_abort_whas____d26 && DEF_INST_top_DEF_abort_wget____d27;
	 DEF_INST_top_DEF_abort_whas__6_AND_abort_wget__7_8_OR_state_mkF_ETC___d57 = (DEF_INST_top_DEF_abort_whas__6_AND_abort_wget__7___d28 || DEF_INST_top_DEF_state_mkFSMstate_read____d53 == (tUInt8)0u) || DEF_INST_top_DEF_state_mkFSMstate_read__3_EQ_19___d56;
	 DEF_INST_top_DEF_abort_whas__6_AND_abort_wget__7_8_OR_state_mkF_ETC___d174 = DEF_INST_top_DEF_abort_whas__6_AND_abort_wget__7_8_OR_state_mkF_ETC___d57 && (!DEF_INST_top_DEF_start_reg_1__h71658 || DEF_INST_top_DEF_state_fired__h71660);
	 DEF_INST_top_DEF_abort_whas__6_AND_abort_wget__7_8_OR_state_mkF_ETC___d178 = DEF_INST_top_DEF_abort_whas__6_AND_abort_wget__7_8_OR_state_mkF_ETC___d174 && !DEF_INST_top_DEF_start_reg__h79489;
	 DEF_INST_top_DEF_CAN_FIRE_RL_auto_finish = DEF_INST_top_DEF_running__h79575 && DEF_INST_top_DEF_abort_whas__6_AND_abort_wget__7_8_OR_state_mkF_ETC___d178;
	 DEF_INST_top_DEF_WILL_FIRE_RL_auto_finish = DEF_INST_top_DEF_CAN_FIRE_RL_auto_finish;
	 DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l37c17 = (DEF_INST_top_DEF_counter_2_SLT_8___d93 && DEF_INST_top_DEF_NOT_jj_1_repeat_count_read__4_BIT_0_5___d96) && DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d101;
	 INST_top.DEF_WILL_FIRE_RL_action_r_init_l37c17 = DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l37c17;
	 DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l48c13 = (DEF_INST_top_DEF_NOT_counter_2_SLT_8_3___d129 && DEF_INST_top_DEF_NOT_jj_2_repeat_count_read__30_BIT_0_31___d132) && DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_A_ETC___d101;
	 INST_top.DEF_WILL_FIRE_RL_action_r_init_l48c13 = DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l48c13;
	 DEF_INST_top_DEF_CAN_FIRE_RL_auto_start = DEF_INST_top_DEF_abort_whas__6_AND_abort_wget__7_8_OR_state_mkF_ETC___d178 && !DEF_INST_top_DEF_running__h79575;
	 DEF_INST_top_DEF_WILL_FIRE_RL_auto_start = DEF_INST_top_DEF_CAN_FIRE_RL_auto_start;
	 DEF_INST_top_DEF_dut_states__h457 = INST_top.INST_dut_states.METH_read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_dut_r1 = INST_top.INST_dut_dataIn.METH_i_notEmpty() && DEF_INST_top_DEF_dut_states__h457 == (tUInt8)0u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dut_r1 = DEF_INST_top_DEF_CAN_FIRE_RL_dut_r1;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dut_r2 = DEF_INST_top_DEF_dut_states__h457 == (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dut_r2 = DEF_INST_top_DEF_CAN_FIRE_RL_dut_r2;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dut_r3 = DEF_INST_top_DEF_dut_states__h457 == (tUInt8)2u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dut_r3 = DEF_INST_top_DEF_CAN_FIRE_RL_dut_r3;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dut_r4 = DEF_INST_top_DEF_dut_states__h457 == (tUInt8)3u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dut_r4 = DEF_INST_top_DEF_CAN_FIRE_RL_dut_r4;
	 DEF_INST_top_DEF_CAN_FIRE_RL_fsm_start = DEF_INST_top_DEF_abort_whas__6_AND_abort_wget__7_8_OR_state_mkF_ETC___d174 && DEF_INST_top_DEF_start_reg__h79489;
	 DEF_INST_top_DEF_WILL_FIRE_RL_fsm_start = DEF_INST_top_DEF_CAN_FIRE_RL_fsm_start;
	 DEF_INST_top_DEF_CAN_FIRE_RL_restart = (DEF_INST_top_DEF_start_reg_1__h71658 && !DEF_INST_top_DEF_state_fired__h71660) && DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50;
	 DEF_INST_top_DEF_WILL_FIRE_RL_restart = DEF_INST_top_DEF_CAN_FIRE_RL_restart;
	 DEF_INST_top_DEF_CAN_FIRE_RL_start_reg__dreg_update = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_start_reg__dreg_update = DEF_INST_top_DEF_CAN_FIRE_RL_start_reg__dreg_update;
	 DEF_INST_top_DEF_CAN_FIRE_RL_state_every = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_state_every = DEF_INST_top_DEF_CAN_FIRE_RL_state_every;
	 DEF_INST_top_DEF_CAN_FIRE_RL_state_fired__dreg_update = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_state_fired__dreg_update = DEF_INST_top_DEF_CAN_FIRE_RL_state_fired__dreg_update;
	 DEF_INST_top_DEF_CAN_FIRE___me_check_10 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE___me_check_10 = DEF_INST_top_DEF_CAN_FIRE___me_check_10;
	 DEF_INST_top_DEF_CAN_FIRE___me_check_11 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE___me_check_11 = DEF_INST_top_DEF_CAN_FIRE___me_check_11;
	 DEF_INST_top_DEF_CAN_FIRE___me_check_12 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE___me_check_12 = DEF_INST_top_DEF_CAN_FIRE___me_check_12;
	 DEF_INST_top_DEF_CAN_FIRE___me_check_13 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE___me_check_13 = DEF_INST_top_DEF_CAN_FIRE___me_check_13;
	 DEF_INST_top_DEF_CAN_FIRE___me_check_14 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE___me_check_14 = DEF_INST_top_DEF_CAN_FIRE___me_check_14;
	 DEF_INST_top_DEF_CAN_FIRE___me_check_15 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE___me_check_15 = DEF_INST_top_DEF_CAN_FIRE___me_check_15;
	 DEF_INST_top_DEF_CAN_FIRE___me_check_16 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE___me_check_16 = DEF_INST_top_DEF_CAN_FIRE___me_check_16;
	 DEF_INST_top_DEF_CAN_FIRE___me_check_17 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE___me_check_17 = DEF_INST_top_DEF_CAN_FIRE___me_check_17;
	 DEF_INST_top_DEF_CAN_FIRE___me_check_18 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE___me_check_18 = DEF_INST_top_DEF_CAN_FIRE___me_check_18;
	 DEF_INST_top_DEF_CAN_FIRE___me_check_19 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE___me_check_19 = DEF_INST_top_DEF_CAN_FIRE___me_check_19;
	 DEF_INST_top_DEF_CAN_FIRE___me_check_20 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE___me_check_20 = DEF_INST_top_DEF_CAN_FIRE___me_check_20;
	 DEF_INST_top_DEF_CAN_FIRE___me_check_9 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE___me_check_9 = DEF_INST_top_DEF_CAN_FIRE___me_check_9;
	 if (INST_top.DEF_WILL_FIRE_RL_action_f_init_l36c13)
	   INST_top.RL_action_f_init_l36c13();
	 if (INST_top.DEF_WILL_FIRE_RL_action_f_update_l36c13)
	   INST_top.RL_action_f_update_l36c13();
	 if (INST_top.DEF_WILL_FIRE_RL_action_l22c16)
	   INST_top.RL_action_l22c16();
	 if (INST_top.DEF_WILL_FIRE_RL_action_l55c13)
	   INST_top.RL_action_l55c13();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_action_ovlp_r_update_l29c13)
	   INST_top.RL_action_ovlp_r_update_l29c13();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_action_ovlp_r_update_l37c17)
	   INST_top.RL_action_ovlp_r_update_l37c17();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_action_ovlp_r_update_l48c13)
	   INST_top.RL_action_ovlp_r_update_l48c13();
	 if (INST_top.DEF_WILL_FIRE_RL_action_r_init_l29c13)
	   INST_top.RL_action_r_init_l29c13();
	 if (INST_top.DEF_WILL_FIRE_RL_action_r_init_l37c17)
	   INST_top.RL_action_r_init_l37c17();
	 if (INST_top.DEF_WILL_FIRE_RL_action_r_init_l48c13)
	   INST_top.RL_action_r_init_l48c13();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_auto_start)
	   INST_top.RL_auto_start();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dut_r2)
	   INST_top.RL_dut_r2();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dut_r3)
	   INST_top.RL_dut_r3();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dut_r4)
	   INST_top.RL_dut_r4();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_fsm_start)
	   INST_top.RL_fsm_start();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_restart)
	   INST_top.RL_restart();
	 DEF_INST_top_DEF_start_wire_whas____d29 = INST_top.INST_start_wire.METH_whas();
	 DEF_INST_top_DEF_start_wire_wget____d31 = INST_top.INST_start_wire.METH_wget();
	 DEF_INST_top_DEF_start_wire_whas__9_AND_start_wire_wget__1___d52 = DEF_INST_top_DEF_start_wire_whas____d29 && DEF_INST_top_DEF_start_wire_wget____d31;
	 DEF_INST_top_DEF_CAN_FIRE_RL_action_l14c13 = (DEF_INST_top_DEF_start_wire_whas__9_AND_start_wire_wget__1___d52 && DEF_INST_top_DEF_abort_whas__6_AND_abort_wget__7_8_OR_state_mkF_ETC___d57) && !((((DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l48c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l37c17) || (DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l29c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_l55c13)) || ((DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l48c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_f_update_l36c13) || (DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l37c17 || DEF_INST_top_DEF_CAN_FIRE_RL_action_f_init_l36c13))) || (DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l29c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_l22c16));
	 INST_top.DEF_WILL_FIRE_RL_action_l14c13 = DEF_INST_top_DEF_CAN_FIRE_RL_action_l14c13;
	 DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_O_ETC___d78 = DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50 || DEF_INST_top_DEF_start_wire_whas__9_AND_start_wire_wget__1___d52;
	 DEF_INST_top_DEF_CAN_FIRE_RL_action_l29c25 = (DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_O_ETC___d78 && (DEF_INST_top_DEF_jj_repeat_count_read__2_BIT_0_3_AND_NOT_abort__ETC___d82 || ((DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50 && DEF_INST_top_DEF_state_mkFSMstate_read____d53 == (tUInt8)6u) || DEF_INST_top_DEF_NOT_jj_repeat_count_read__2_BIT_0_3_4_AND_NOT__ETC___d87))) && !((((DEF_INST_top_DEF_CAN_FIRE_RL_auto_start || DEF_INST_top_DEF_CAN_FIRE_RL_fsm_start) || (DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l48c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l37c17)) || ((DEF_INST_top_DEF_CAN_FIRE_RL_action_l55c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l48c13) || (DEF_INST_top_DEF_CAN_FIRE_RL_action_f_update_l36c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l37c17))) || ((DEF_INST_top_DEF_CAN_FIRE_RL_action_f_init_l36c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l29c13) || DEF_INST_top_DEF_CAN_FIRE_RL_action_l22c16));
	 INST_top.DEF_WILL_FIRE_RL_action_l29c25 = DEF_INST_top_DEF_CAN_FIRE_RL_action_l29c25;
	 DEF_INST_top_DEF_CAN_FIRE_RL_action_l37c29 = (DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_O_ETC___d78 && ((DEF_INST_top_DEF_counter_2_SLT_8_3_AND_jj_1_repeat_count_read___ETC___d108 || ((DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50 && DEF_INST_top_DEF_state_mkFSMstate_read____d53 == (tUInt8)11u) || DEF_INST_top_DEF_NOT_jj_1_repeat_count_read__4_BIT_0_5_6_AND_NO_ETC___d113)) || DEF_INST_top_DEF_counter_2_SLT_8_3_AND_jj_1_repeat_count_read___ETC___d117)) && !((((DEF_INST_top_DEF_CAN_FIRE_RL_auto_start || DEF_INST_top_DEF_CAN_FIRE_RL_fsm_start) || (DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l48c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l29c13)) || ((DEF_INST_top_DEF_CAN_FIRE_RL_action_l55c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l48c13) || (DEF_INST_top_DEF_CAN_FIRE_RL_action_f_update_l36c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l37c17))) || ((DEF_INST_top_DEF_CAN_FIRE_RL_action_f_init_l36c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l29c13) || DEF_INST_top_DEF_CAN_FIRE_RL_action_l22c16));
	 INST_top.DEF_WILL_FIRE_RL_action_l37c29 = DEF_INST_top_DEF_CAN_FIRE_RL_action_l37c29;
	 DEF_INST_top_DEF_NOT_start_wire_whas__9_0_OR_NOT_start_wire_wge_ETC___d33 = !DEF_INST_top_DEF_start_wire_whas____d29 || !DEF_INST_top_DEF_start_wire_wget____d31;
	 DEF_INST_top_DEF_CAN_FIRE_RL_idle_l13c18 = (DEF_INST_top_DEF_NOT_start_wire_whas__9_0_OR_NOT_start_wire_wge_ETC___d33 && (DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50 && DEF_INST_top_DEF_state_mkFSMstate_read__3_EQ_19___d56)) && !((((DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l48c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l37c17) || (DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l29c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_l55c13)) || ((DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l48c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_f_update_l36c13) || (DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l37c17 || DEF_INST_top_DEF_CAN_FIRE_RL_action_f_init_l36c13))) || (DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l29c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_l22c16));
	 DEF_INST_top_DEF_WILL_FIRE_RL_idle_l13c18 = DEF_INST_top_DEF_CAN_FIRE_RL_idle_l13c18;
	 DEF_INST_top_DEF_CAN_FIRE_RL_action_l48c25 = (DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9_0_O_ETC___d78 && ((DEF_INST_top_DEF_NOT_counter_2_SLT_8_3_29_AND_jj_2_repeat_count_ETC___d136 || (DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50 && (DEF_INST_top_DEF_state_mkFSMstate_read__3_EQ_15___d137 || DEF_INST_top_DEF_state_mkFSMstate_read____d53 == (tUInt8)16u))) || DEF_INST_top_DEF_NOT_jj_2_repeat_count_read__30_BIT_0_31_32_AND_ETC___d144)) && !((((DEF_INST_top_DEF_CAN_FIRE_RL_auto_start || DEF_INST_top_DEF_CAN_FIRE_RL_fsm_start) || (DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l37c17 || DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l29c13)) || ((DEF_INST_top_DEF_CAN_FIRE_RL_action_l55c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l48c13) || (DEF_INST_top_DEF_CAN_FIRE_RL_action_f_update_l36c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l37c17))) || ((DEF_INST_top_DEF_CAN_FIRE_RL_action_f_init_l36c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l29c13) || DEF_INST_top_DEF_CAN_FIRE_RL_action_l22c16));
	 INST_top.DEF_WILL_FIRE_RL_action_l48c25 = DEF_INST_top_DEF_CAN_FIRE_RL_action_l48c25;
	 DEF_INST_top_DEF_CAN_FIRE_RL_state_handle_abort = (DEF_INST_top_DEF_abort_whas__6_AND_abort_wget__7___d28 && DEF_INST_top_DEF_NOT_start_wire_whas__9_0_OR_NOT_start_wire_wge_ETC___d33) && !((((DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l48c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l37c17) || (DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l29c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_l55c13)) || ((DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l48c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_f_update_l36c13) || (DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l37c17 || DEF_INST_top_DEF_CAN_FIRE_RL_action_f_init_l36c13))) || ((DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l29c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_l22c16) || DEF_INST_top_DEF_CAN_FIRE_RL_restart));
	 DEF_INST_top_DEF_WILL_FIRE_RL_state_handle_abort = DEF_INST_top_DEF_CAN_FIRE_RL_state_handle_abort;
	 if (INST_top.DEF_WILL_FIRE_RL_action_l14c13)
	   INST_top.RL_action_l14c13();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_auto_finish)
	   INST_top.RL_auto_finish();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dut_r1)
	   INST_top.RL_dut_r1();
	 INST_top.DEF_dut_pinData_port1__read____d61 = INST_top.INST_dut_pinData.METH_port1__read();
	 INST_top.DEF_NOT_dut_pinData_port1__read__1___d62 = !(INST_top.DEF_dut_pinData_port1__read____d61);
	 DEF_INST_top_DEF_CAN_FIRE_RL_action_l23c13 = (INST_top.DEF_NOT_dut_pinData_port1__read__1___d62 && (DEF_INST_top_DEF_NOT_abort_whas__6_8_OR_NOT_abort_wget__7_9___d50 && DEF_INST_top_DEF_state_mkFSMstate_read____d53 == (tUInt8)3u)) && !((((DEF_INST_top_DEF_CAN_FIRE_RL_auto_finish || DEF_INST_top_DEF_CAN_FIRE_RL_auto_start) || (DEF_INST_top_DEF_CAN_FIRE_RL_fsm_start || DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l48c13)) || ((DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l37c17 || DEF_INST_top_DEF_CAN_FIRE_RL_action_ovlp_r_update_l29c13) || (DEF_INST_top_DEF_CAN_FIRE_RL_action_l55c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l48c13))) || (((DEF_INST_top_DEF_CAN_FIRE_RL_action_f_update_l36c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l37c17) || (DEF_INST_top_DEF_CAN_FIRE_RL_action_f_init_l36c13 || DEF_INST_top_DEF_CAN_FIRE_RL_action_r_init_l29c13)) || (DEF_INST_top_DEF_CAN_FIRE_RL_action_l22c16 || DEF_INST_top_DEF_CAN_FIRE_RL_action_l14c13)));
	 INST_top.DEF_WILL_FIRE_RL_action_l23c13 = DEF_INST_top_DEF_CAN_FIRE_RL_action_l23c13;
	 if (INST_top.DEF_WILL_FIRE_RL_action_l15c13)
	   INST_top.RL_action_l15c13();
	 if (INST_top.DEF_WILL_FIRE_RL_action_l23c13)
	   INST_top.RL_action_l23c13();
	 if (INST_top.DEF_WILL_FIRE_RL_action_l29c25)
	   INST_top.RL_action_l29c25();
	 if (INST_top.DEF_WILL_FIRE_RL_action_l48c25)
	   INST_top.RL_action_l48c25();
	 if (INST_top.DEF_WILL_FIRE_RL_action_l37c29)
	   INST_top.RL_action_l37c29();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_idle_l13c18)
	   INST_top.RL_idle_l13c18();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_state_every)
	   INST_top.RL_state_every();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_state_fired__dreg_update)
	   INST_top.RL_state_fired__dreg_update();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_state_handle_abort)
	   INST_top.RL_state_handle_abort();
	 if (DEF_INST_top_DEF_WILL_FIRE___me_check_9)
	   INST_top.__me_check_9();
	 if (DEF_INST_top_DEF_WILL_FIRE___me_check_10)
	   INST_top.__me_check_10();
	 if (DEF_INST_top_DEF_WILL_FIRE___me_check_11)
	   INST_top.__me_check_11();
	 if (DEF_INST_top_DEF_WILL_FIRE___me_check_12)
	   INST_top.__me_check_12();
	 if (DEF_INST_top_DEF_WILL_FIRE___me_check_13)
	   INST_top.__me_check_13();
	 if (DEF_INST_top_DEF_WILL_FIRE___me_check_14)
	   INST_top.__me_check_14();
	 if (DEF_INST_top_DEF_WILL_FIRE___me_check_15)
	   INST_top.__me_check_15();
	 if (DEF_INST_top_DEF_WILL_FIRE___me_check_16)
	   INST_top.__me_check_16();
	 if (DEF_INST_top_DEF_WILL_FIRE___me_check_17)
	   INST_top.__me_check_17();
	 if (DEF_INST_top_DEF_WILL_FIRE___me_check_18)
	   INST_top.__me_check_18();
	 if (DEF_INST_top_DEF_WILL_FIRE___me_check_19)
	   INST_top.__me_check_19();
	 if (DEF_INST_top_DEF_WILL_FIRE___me_check_20)
	   INST_top.__me_check_20();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_start_reg__dreg_update)
	   INST_top.RL_start_reg__dreg_update();
	 INST_top.INST_state_fired_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_state_overlap_pw.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_state_set_pw.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_abort.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_start_reg_2.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_start_wire.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_dut_pinData.clk((tUInt8)1u, (tUInt8)1u);
	 if (do_reset_ticks(simHdl))
	 {
	   INST_top.INST_dut_dataIn.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_dut_pointer.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dut_counter.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dut_states.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dut_pinData.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_counter.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mistakes.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_start_reg.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_start_reg_1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_jj_repeat_count.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_jj_1_repeat_count.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_jj_2_repeat_count.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_state_mkFSMstate.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_state_fired.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_state_can_overlap.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_running.rst_tick__clk__1((tUInt8)1u);
	 }
       };

/* Model creation/destruction functions */

void MODEL_mkAufgabe5Tb::create_model(tSimStateHdl simHdl, bool master)
{
  sim_hdl = simHdl;
  init_reset_request_counters(sim_hdl);
  mkAufgabe5Tb_instance = new MOD_mkAufgabe5Tb(sim_hdl, "top", NULL);
  bk_get_or_define_clock(sim_hdl, "CLK");
  if (master)
  {
    bk_alter_clock(sim_hdl, bk_get_clock_by_name(sim_hdl, "CLK"), CLK_LOW, false, 0llu, 5llu, 5llu);
    bk_use_default_reset(sim_hdl);
  }
  bk_set_clock_event_fn(sim_hdl,
			bk_get_clock_by_name(sim_hdl, "CLK"),
			schedule_posedge_CLK,
			NULL,
			(tEdgeDirection)(POSEDGE));
  (mkAufgabe5Tb_instance->INST_dut_dataIn.set_clk_0)("CLK");
  (mkAufgabe5Tb_instance->INST_dut_pinData.set_clk_0)("CLK");
  (mkAufgabe5Tb_instance->INST_start_wire.set_clk_0)("CLK");
  (mkAufgabe5Tb_instance->INST_start_reg_2.set_clk_0)("CLK");
  (mkAufgabe5Tb_instance->INST_abort.set_clk_0)("CLK");
  (mkAufgabe5Tb_instance->INST_state_set_pw.set_clk_0)("CLK");
  (mkAufgabe5Tb_instance->INST_state_overlap_pw.set_clk_0)("CLK");
  (mkAufgabe5Tb_instance->INST_state_fired_1.set_clk_0)("CLK");
  (mkAufgabe5Tb_instance->set_clk_0)("CLK");
}
void MODEL_mkAufgabe5Tb::destroy_model()
{
  delete mkAufgabe5Tb_instance;
  mkAufgabe5Tb_instance = NULL;
}
void MODEL_mkAufgabe5Tb::reset_model(bool asserted)
{
  (mkAufgabe5Tb_instance->reset_RST_N)(asserted ? (tUInt8)0u : (tUInt8)1u);
}
void * MODEL_mkAufgabe5Tb::get_instance()
{
  return mkAufgabe5Tb_instance;
}

/* Fill in version numbers */
void MODEL_mkAufgabe5Tb::get_version(char const **name, char const **build)
{
  *name = "2023.07-7-g527eaa0b";
  *build = "527eaa0b";
}

/* Get the model creation time */
time_t MODEL_mkAufgabe5Tb::get_creation_time()
{
  
  /* Sun Feb 11 11:41:45 UTC 2024 */
  return 1707651705llu;
}

/* State dumping function */
void MODEL_mkAufgabe5Tb::dump_state()
{
  (mkAufgabe5Tb_instance->dump_state)(0u);
}

/* VCD dumping functions */
MOD_mkAufgabe5Tb & mkAufgabe5Tb_backing(tSimStateHdl simHdl)
{
  static MOD_mkAufgabe5Tb *instance = NULL;
  if (instance == NULL)
  {
    vcd_set_backing_instance(simHdl, true);
    instance = new MOD_mkAufgabe5Tb(simHdl, "top", NULL);
    vcd_set_backing_instance(simHdl, false);
  }
  return *instance;
}
void MODEL_mkAufgabe5Tb::dump_VCD_defs()
{
  (mkAufgabe5Tb_instance->dump_VCD_defs)(vcd_depth(sim_hdl));
}
void MODEL_mkAufgabe5Tb::dump_VCD(tVCDDumpType dt)
{
  (mkAufgabe5Tb_instance->dump_VCD)(dt, vcd_depth(sim_hdl), mkAufgabe5Tb_backing(sim_hdl));
}
