/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2020 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#if defined(_WIN32)
 #include "stdio.h"
 #define IKI_DLLESPEC __declspec(dllimport)
#else
 #define IKI_DLLESPEC
#endif
#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2020 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#if defined(_WIN32)
 #include "stdio.h"
 #define IKI_DLLESPEC __declspec(dllimport)
#else
 #define IKI_DLLESPEC
#endif
#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
IKI_DLLESPEC extern void execute_106(char*, char *);
IKI_DLLESPEC extern void execute_107(char*, char *);
IKI_DLLESPEC extern void execute_811(char*, char *);
IKI_DLLESPEC extern void execute_812(char*, char *);
IKI_DLLESPEC extern void execute_813(char*, char *);
IKI_DLLESPEC extern void execute_3(char*, char *);
IKI_DLLESPEC extern void vlog_const_rhs_process_execute_0_fast_for_reg(char*, char*, char*);
IKI_DLLESPEC extern void execute_794(char*, char *);
IKI_DLLESPEC extern void execute_795(char*, char *);
IKI_DLLESPEC extern void execute_796(char*, char *);
IKI_DLLESPEC extern void execute_797(char*, char *);
IKI_DLLESPEC extern void execute_798(char*, char *);
IKI_DLLESPEC extern void execute_799(char*, char *);
IKI_DLLESPEC extern void execute_800(char*, char *);
IKI_DLLESPEC extern void execute_801(char*, char *);
IKI_DLLESPEC extern void execute_802(char*, char *);
IKI_DLLESPEC extern void execute_803(char*, char *);
IKI_DLLESPEC extern void execute_804(char*, char *);
IKI_DLLESPEC extern void execute_805(char*, char *);
IKI_DLLESPEC extern void execute_806(char*, char *);
IKI_DLLESPEC extern void execute_807(char*, char *);
IKI_DLLESPEC extern void execute_808(char*, char *);
IKI_DLLESPEC extern void execute_809(char*, char *);
IKI_DLLESPEC extern void execute_810(char*, char *);
IKI_DLLESPEC extern void execute_113(char*, char *);
IKI_DLLESPEC extern void vlog_timingcheck_execute_0(char*, char*, char*);
IKI_DLLESPEC extern void execute_116(char*, char *);
IKI_DLLESPEC extern void execute_125(char*, char *);
IKI_DLLESPEC extern void execute_126(char*, char *);
IKI_DLLESPEC extern void execute_127(char*, char *);
IKI_DLLESPEC extern void execute_23(char*, char *);
IKI_DLLESPEC extern void execute_24(char*, char *);
IKI_DLLESPEC extern void execute_25(char*, char *);
IKI_DLLESPEC extern void execute_26(char*, char *);
IKI_DLLESPEC extern void execute_149(char*, char *);
IKI_DLLESPEC extern void execute_150(char*, char *);
IKI_DLLESPEC extern void execute_151(char*, char *);
IKI_DLLESPEC extern void execute_152(char*, char *);
IKI_DLLESPEC extern void execute_153(char*, char *);
IKI_DLLESPEC extern void execute_154(char*, char *);
IKI_DLLESPEC extern void execute_155(char*, char *);
IKI_DLLESPEC extern void execute_156(char*, char *);
IKI_DLLESPEC extern void execute_157(char*, char *);
IKI_DLLESPEC extern void execute_158(char*, char *);
IKI_DLLESPEC extern void execute_159(char*, char *);
IKI_DLLESPEC extern void execute_160(char*, char *);
IKI_DLLESPEC extern void execute_161(char*, char *);
IKI_DLLESPEC extern void execute_162(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_1(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_2(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_367(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_368(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_369(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_370(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_371(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_372(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_373(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_374(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_375(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_376(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_377(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_378(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_379(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_380(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_381(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_382(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_383(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_384(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_385(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_386(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_387(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_388(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_389(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_390(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_27(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_28(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_29(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_3c11f747_67151b0a_30(char*, char *);
IKI_DLLESPEC extern void execute_181(char*, char *);
IKI_DLLESPEC extern void vlog_simple_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
IKI_DLLESPEC extern void execute_186(char*, char *);
IKI_DLLESPEC extern void execute_187(char*, char *);
IKI_DLLESPEC extern void execute_188(char*, char *);
IKI_DLLESPEC extern void execute_64(char*, char *);
IKI_DLLESPEC extern void execute_470(char*, char *);
IKI_DLLESPEC extern void execute_471(char*, char *);
IKI_DLLESPEC extern void execute_469(char*, char *);
IKI_DLLESPEC extern void execute_109(char*, char *);
IKI_DLLESPEC extern void execute_110(char*, char *);
IKI_DLLESPEC extern void execute_111(char*, char *);
IKI_DLLESPEC extern void execute_112(char*, char *);
IKI_DLLESPEC extern void execute_814(char*, char *);
IKI_DLLESPEC extern void execute_815(char*, char *);
IKI_DLLESPEC extern void execute_816(char*, char *);
IKI_DLLESPEC extern void execute_817(char*, char *);
IKI_DLLESPEC extern void execute_818(char*, char *);
IKI_DLLESPEC extern void execute_819(char*, char *);
IKI_DLLESPEC extern void transaction_3(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_4(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_5(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_6(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_7(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_8(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_9(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_10(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_11(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_12(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_13(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_14(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_15(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_16(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_17(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_18(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_19(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_20(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_21(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_22(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_23(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
IKI_DLLESPEC extern void transaction_42(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_68(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_94(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_120(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_146(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_172(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_198(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_224(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_253(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_279(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_305(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_331(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_357(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_383(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_409(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_435(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[135] = {(funcp)execute_106, (funcp)execute_107, (funcp)execute_811, (funcp)execute_812, (funcp)execute_813, (funcp)execute_3, (funcp)vlog_const_rhs_process_execute_0_fast_for_reg, (funcp)execute_794, (funcp)execute_795, (funcp)execute_796, (funcp)execute_797, (funcp)execute_798, (funcp)execute_799, (funcp)execute_800, (funcp)execute_801, (funcp)execute_802, (funcp)execute_803, (funcp)execute_804, (funcp)execute_805, (funcp)execute_806, (funcp)execute_807, (funcp)execute_808, (funcp)execute_809, (funcp)execute_810, (funcp)execute_113, (funcp)vlog_timingcheck_execute_0, (funcp)execute_116, (funcp)execute_125, (funcp)execute_126, (funcp)execute_127, (funcp)execute_23, (funcp)execute_24, (funcp)execute_25, (funcp)execute_26, (funcp)execute_149, (funcp)execute_150, (funcp)execute_151, (funcp)execute_152, (funcp)execute_153, (funcp)execute_154, (funcp)execute_155, (funcp)execute_156, (funcp)execute_157, (funcp)execute_158, (funcp)execute_159, (funcp)execute_160, (funcp)execute_161, (funcp)execute_162, (funcp)timing_checker_condition_m_3c11f747_67151b0a_1, (funcp)timing_checker_condition_m_3c11f747_67151b0a_2, (funcp)timing_checker_condition_m_3c11f747_67151b0a_367, (funcp)timing_checker_condition_m_3c11f747_67151b0a_368, (funcp)timing_checker_condition_m_3c11f747_67151b0a_369, (funcp)timing_checker_condition_m_3c11f747_67151b0a_370, (funcp)timing_checker_condition_m_3c11f747_67151b0a_371, (funcp)timing_checker_condition_m_3c11f747_67151b0a_372, (funcp)timing_checker_condition_m_3c11f747_67151b0a_373, (funcp)timing_checker_condition_m_3c11f747_67151b0a_374, (funcp)timing_checker_condition_m_3c11f747_67151b0a_375, (funcp)timing_checker_condition_m_3c11f747_67151b0a_376, (funcp)timing_checker_condition_m_3c11f747_67151b0a_377, (funcp)timing_checker_condition_m_3c11f747_67151b0a_378, (funcp)timing_checker_condition_m_3c11f747_67151b0a_379, (funcp)timing_checker_condition_m_3c11f747_67151b0a_380, (funcp)timing_checker_condition_m_3c11f747_67151b0a_381, (funcp)timing_checker_condition_m_3c11f747_67151b0a_382, (funcp)timing_checker_condition_m_3c11f747_67151b0a_383, (funcp)timing_checker_condition_m_3c11f747_67151b0a_384, (funcp)timing_checker_condition_m_3c11f747_67151b0a_385, (funcp)timing_checker_condition_m_3c11f747_67151b0a_386, (funcp)timing_checker_condition_m_3c11f747_67151b0a_387, (funcp)timing_checker_condition_m_3c11f747_67151b0a_388, (funcp)timing_checker_condition_m_3c11f747_67151b0a_389, (funcp)timing_checker_condition_m_3c11f747_67151b0a_390, (funcp)timing_checker_condition_m_3c11f747_67151b0a_27, (funcp)timing_checker_condition_m_3c11f747_67151b0a_28, (funcp)timing_checker_condition_m_3c11f747_67151b0a_29, (funcp)timing_checker_condition_m_3c11f747_67151b0a_30, (funcp)execute_181, (funcp)vlog_simple_process_execute_0_fast_no_reg_no_agg, (funcp)execute_186, (funcp)execute_187, (funcp)execute_188, (funcp)execute_64, (funcp)execute_470, (funcp)execute_471, (funcp)execute_469, (funcp)execute_109, (funcp)execute_110, (funcp)execute_111, (funcp)execute_112, (funcp)execute_814, (funcp)execute_815, (funcp)execute_816, (funcp)execute_817, (funcp)execute_818, (funcp)execute_819, (funcp)transaction_3, (funcp)transaction_4, (funcp)transaction_5, (funcp)transaction_6, (funcp)transaction_7, (funcp)transaction_8, (funcp)transaction_9, (funcp)transaction_10, (funcp)transaction_11, (funcp)transaction_12, (funcp)transaction_13, (funcp)transaction_14, (funcp)transaction_15, (funcp)transaction_16, (funcp)transaction_17, (funcp)transaction_18, (funcp)transaction_19, (funcp)transaction_20, (funcp)transaction_21, (funcp)transaction_22, (funcp)transaction_23, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_42, (funcp)transaction_68, (funcp)transaction_94, (funcp)transaction_120, (funcp)transaction_146, (funcp)transaction_172, (funcp)transaction_198, (funcp)transaction_224, (funcp)transaction_253, (funcp)transaction_279, (funcp)transaction_305, (funcp)transaction_331, (funcp)transaction_357, (funcp)transaction_383, (funcp)transaction_409, (funcp)transaction_435};
const int NumRelocateId= 135;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/sync_testbench_time_synth/xsim.reloc",  (void **)funcTab, 135);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/sync_testbench_time_synth/xsim.reloc");
}

	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

void wrapper_func_0(char *dp)

{

}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/sync_testbench_time_synth/xsim.reloc");
	wrapper_func_0(dp);

	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_xsimdir_location_if_remapped(argc, argv)  ;
    iki_set_sv_type_file_path_name("xsim.dir/sync_testbench_time_synth/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/sync_testbench_time_synth/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/sync_testbench_time_synth/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, (void*)0, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
