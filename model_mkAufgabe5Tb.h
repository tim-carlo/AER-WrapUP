/*
 * Generated by Bluespec Compiler, version 2023.07-7-g527eaa0b (build 527eaa0b)
 * 
 * On Sun Feb 11 11:46:22 UTC 2024
 * 
 */

/* Generation options: */
#ifndef __model_mkAufgabe5Tb_h__
#define __model_mkAufgabe5Tb_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"

#include "bs_model.h"
#include "mkAufgabe5Tb.h"

/* Class declaration for a model of mkAufgabe5Tb */
class MODEL_mkAufgabe5Tb : public Model {
 
 /* Top-level module instance */
 private:
  MOD_mkAufgabe5Tb *mkAufgabe5Tb_instance;
 
 /* Handle to the simulation kernel */
 private:
  tSimStateHdl sim_hdl;
 
 /* Constructor */
 public:
  MODEL_mkAufgabe5Tb();
 
 /* Functions required by the kernel */
 public:
  void create_model(tSimStateHdl simHdl, bool master);
  void destroy_model();
  void reset_model(bool asserted);
  void get_version(char const **name, char const **build);
  time_t get_creation_time();
  void * get_instance();
  void dump_state();
  void dump_VCD_defs();
  void dump_VCD(tVCDDumpType dt);
};

/* Function for creating a new model */
extern "C" {
  void * new_MODEL_mkAufgabe5Tb();
}

#endif /* ifndef __model_mkAufgabe5Tb_h__ */
