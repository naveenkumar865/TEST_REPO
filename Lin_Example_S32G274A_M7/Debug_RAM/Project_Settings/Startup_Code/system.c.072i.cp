
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SystemWfiConfig.part.0/12:
  Jump functions of caller  NVIC_SetPriorityGrouping/11:
  Jump functions of caller  SystemWfiConfig/10:
    callsite  SystemWfiConfig/10 -> SystemWfiConfig.part.0/12 : 
  Jump functions of caller  SystemInit/6:
    callsite  SystemInit/6 -> SystemWfiConfig/10 : 
  Jump functions of caller  Sys_GetCoreID/5:
  Jump functions of caller  default_interrupt_routine/4:
  Jump functions of caller  startup_go_to_user_mode/3:

 Propagating constants:

Not considering SystemWfiConfig for cloning; -fipa-cp-clone disabled.
Not considering SystemInit for cloning; -fipa-cp-clone disabled.
Not considering Sys_GetCoreID for cloning; -fipa-cp-clone disabled.
Not considering default_interrupt_routine for cloning; -fipa-cp-clone disabled.
Not considering startup_go_to_user_mode for cloning; -fipa-cp-clone disabled.

overall_size: 160, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: SystemWfiConfig.part.0/12:
  Node: SystemWfiConfig/10:
  Node: SystemInit/6:
  Node: Sys_GetCoreID/5:
  Node: default_interrupt_routine/4:
  Node: startup_go_to_user_mode/3:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

CSWTCH.14/14 (CSWTCH.14) @0602f000
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: SystemInit/6 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
SystemWfiConfig.part.0/12 (SystemWfiConfig.part.0) @05e4fee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: SystemWfiConfig/10 (536870912 (estimated locally),0.50 per call) 
  Calls: 
NVIC_SetPriorityGrouping/11 (NVIC_SetPriorityGrouping) @05e75380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SystemInit/6 (10737418 (estimated locally),1.00 per call) 
  Calls: 
SystemWfiConfig/10 (SystemWfiConfig) @05e4f2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: SystemInit/6 (10737419 (estimated locally),1.00 per call) 
  Calls: SystemWfiConfig.part.0/12 (536870912 (estimated locally),0.50 per call) 
SystemInit/6 (SystemInit) @05e4f700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CSWTCH.14/14 (read)rbar/0 (read)rasr/1 (read)
  Referring: 
  Availability: available
  Function flags: count:10737418 (estimated locally) body optimize_size
  Called by: 
  Calls: SystemWfiConfig/10 (10737419 (estimated locally),1.00 per call) NVIC_SetPriorityGrouping/11 (10737418 (estimated locally),1.00 per call) 
Sys_GetCoreID/5 (Sys_GetCoreID) @05e4f460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
default_interrupt_routine/4 (default_interrupt_routine) @05e4f1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body executed_once optimize_size
  Called by: 
  Calls: 
startup_go_to_user_mode/3 (startup_go_to_user_mode) @05e6fee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
RESET_CATCH_CORE/2 (RESET_CATCH_CORE) @05e70678
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags:
rasr/1 (rasr) @05e04e58
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: SystemInit/6 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
rbar/0 (rbar) @05e04d80
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: SystemInit/6 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function startup_go_to_user_mode (startup_go_to_user_mode, funcdef_no=0, decl_uid=6174, cgraph_uid=1, symbol_order=3)

Modification phase of node startup_go_to_user_mode/3
startup_go_to_user_mode ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function default_interrupt_routine (default_interrupt_routine, funcdef_no=1, decl_uid=6161, cgraph_uid=2, symbol_order=4) (executed once)

Modification phase of node default_interrupt_routine/4
default_interrupt_routine ()
{
  <bb 2> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}



;; Function Sys_GetCoreID (Sys_GetCoreID, funcdef_no=2, decl_uid=6142, cgraph_uid=3, symbol_order=5)

Modification phase of node Sys_GetCoreID/5
Sys_GetCoreID ()
{
  long unsigned int _1;
  uint8 _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MSCM_Type *)1075412992B].CPXNUM;
  _3 = (uint8) _1;
  return _3;

}



;; Function SystemWfiConfig (SystemWfiConfig, funcdef_no=7, decl_uid=6165, cgraph_uid=8, symbol_order=10)

Modification phase of node SystemWfiConfig/10
SystemWfiConfig ()
{
  volatile uint32 u32EdbStatus;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int u32EdbStatus.5_4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct SECURITY_Type *)1074252032B].EXT_DBGSTAT;
  _3 = _2 & 1;
  u32EdbStatus ={v} _3;
  # DEBUG BEGIN_STMT
  u32EdbStatus.5_4 ={v} u32EdbStatus;
  if (u32EdbStatus.5_4 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870912]:
  SystemWfiConfig.part.0 ();

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function SystemInit (SystemInit, funcdef_no=3, decl_uid=6159, cgraph_uid=4, symbol_order=6)

Modification phase of node SystemInit/6
SystemInit ()
{
  uint32 ccsidr;
  uint32 sets;
  uint32 ways;
  uint32 ways;
  uint32 sets;
  uint32 ccsidr;
  uint8 regionNum;
  uint32 coreMask;
  uint32 i;
  short unsigned int _2;
  short unsigned int _3;
  short unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  int _14;
  long unsigned int _15;
  long unsigned int _17;
  unsigned char _18;
  long unsigned int _19;
  long unsigned int _20;
  long unsigned int _27;
  long unsigned int _49;
  long unsigned int _51;
  long unsigned int _54;
  long unsigned int _55;
  long unsigned int _57;
  long unsigned int _58;
  long unsigned int _61;
  long unsigned int _62;
  long unsigned int _63;
  long unsigned int _64;
  long unsigned int _65;
  long unsigned int _66;
  long unsigned int _68;
  long unsigned int _70;
  long unsigned int _73;
  long unsigned int _74;
  long unsigned int _76;
  long unsigned int _77;
  long unsigned int _80;
  long unsigned int _81;
  long unsigned int _82;
  long unsigned int _83;
  long unsigned int _84;
  unsigned int _85;
  long unsigned int _90;

  <bb 2> [local count: 10737418]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG regionNum => 0
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Sys_GetCoreID
  # DEBUG BEGIN_STMT
  _84 ={v} MEM[(struct MSCM_Type *)1075412992B].CPXNUM;
  _27 = _84 & 255;
  # DEBUG coreId => _27
  # DEBUG BEGIN_STMT
  _85 = _27;
  if (_85 <= 6)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 5368709]:
<L19>:
  coreMask_1 = 0;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 5368709]:
<L20>:
  _18 = CSWTCH.14[_85];
  _90 = (long unsigned int) _18;
  coreMask_16 = _90;

  <bb 5> [local count: 10737418]:
  # coreMask_22 = PHI <coreMask_1(3), coreMask_16(4)>
<L21>:
<L18>:
  # DEBUG coreMask => coreMask_22
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 1063004407]:
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct MSCM_Type *)1075412992B].IRSPRC[i_21];
  _3 = (short unsigned int) coreMask_22;
  _4 = _2 | _3;
  MEM[(struct MSCM_Type *)1075412992B].IRSPRC[i_21] ={v} _4;
  # DEBUG BEGIN_STMT
  i_47 = i_21 + 1;
  # DEBUG i => i_47

  <bb 7> [local count: 1073741824]:
  # i_21 = PHI <0(5), i_47(6)>
  # DEBUG i => i_21
  # DEBUG BEGIN_STMT
  if (i_21 != 240)
    goto <bb 6>; [99.00%]
  else
    goto <bb 8>; [1.00%]

  <bb 8> [local count: 10737418]:
  # DEBUG BEGIN_STMT
  NVIC_SetPriorityGrouping (0);
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CCR;
  _6 = _5 | 1;
  MEM[(struct S32_SCB_Type *)3758153728B].CCR ={v} _6;
  # DEBUG BEGIN_STMT
  MEM[(struct S32_SCB_Type *)3758153728B].SHPR3 ={v} 0;
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CPACR;
  _8 = _7 | 15728640;
  MEM[(struct S32_SCB_Type *)3758153728B].CPACR ={v} _8;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  _9 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CCR;
  _10 = _9 & 131072;
  if (_10 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 9> [local count: 5368709]:
  _11 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CCR;
  _12 = _11 & 65536;
  if (_12 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 10> [local count: 8053064]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY sys_m7_cache_disable
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY sys_m7_cache_clean
  # DEBUG BEGIN_STMT
  # DEBUG ccsidr => 0
  # DEBUG BEGIN_STMT
  # DEBUG sets => 0
  # DEBUG BEGIN_STMT
  # DEBUG ways => 0
  # DEBUG BEGIN_STMT
  MEM[(struct S32_SCB_Type *)3758153728B].CSSELR ={v} 0;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  ccsidr_48 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CCSIDR;
  # DEBUG ccsidr => ccsidr_48
  # DEBUG BEGIN_STMT
  _49 = ccsidr_48 >> 13;
  sets_50 = _49 & 32767;
  # DEBUG sets => sets_50

  <bb 11> [local count: 73209672]:
  # sets_53 = PHI <sets_50(10), sets_60(25)>
  # DEBUG sets => sets_53
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _51 = ccsidr_48 >> 3;
  ways_52 = _51 & 1023;
  # DEBUG ways => ways_52

  <bb 12> [local count: 665542473]:
  # ways_56 = PHI <ways_52(11), ways_59(26)>
  # DEBUG ways => ways_56
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _54 = sets_53 << 5;
  _55 = _54 & 16352;
  _57 = ways_56 << 30;
  _58 = _55 | _57;
  MEM[(struct S32_SCB_Type *)3758153728B].DCCISW ={v} _58;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  ways_59 = ways_56 + 4294967295;
  # DEBUG ways => ways_59
  if (ways_56 != 0)
    goto <bb 26>; [89.00%]
  else
    goto <bb 13>; [11.00%]

  <bb 26> [local count: 592332800]:
  goto <bb 12>; [100.00%]

  <bb 13> [local count: 73209672]:
  # DEBUG BEGIN_STMT
  sets_60 = sets_53 + 4294967295;
  # DEBUG sets => sets_60
  if (sets_53 != 0)
    goto <bb 25>; [89.00%]
  else
    goto <bb 14>; [11.00%]

  <bb 25> [local count: 65156608]:
  goto <bb 11>; [100.00%]

  <bb 14> [local count: 8053064]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  _61 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CSSELR;
  _62 = _61 | 1;
  MEM[(struct S32_SCB_Type *)3758153728B].CSSELR ={v} _62;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  MEM[(struct S32_SCB_Type *)3758153728B].ICIALLU ={v} 0;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG ways => NULL
  # DEBUG sets => NULL
  # DEBUG ccsidr => NULL
  # DEBUG BEGIN_STMT
  _63 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CCR;
  _64 = _63 & 4294836223;
  MEM[(struct S32_SCB_Type *)3758153728B].CCR ={v} _64;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  _65 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CCR;
  _66 = _65 & 4294901759;
  MEM[(struct S32_SCB_Type *)3758153728B].CCR ={v} _66;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");

  <bb 15> [local count: 10737418]:
  # regionNum_25 = PHI <0(14), 0(9)>
  goto <bb 17>; [100.00%]

  <bb 16> [local count: 118163164]:
  # DEBUG BEGIN_STMT
  _13 = (long unsigned int) regionNum_23;
  MEM[(struct S32_MPU_Type *)3758153728B].RNR ={v} _13;
  # DEBUG BEGIN_STMT
  _14 = (int) regionNum_23;
  _15 = rbar[_14];
  MEM[(struct S32_MPU_Type *)3758153728B].RBAR ={v} _15;
  # DEBUG BEGIN_STMT
  _17 = rasr[_14];
  MEM[(struct S32_MPU_Type *)3758153728B].RASR ={v} _17;
  # DEBUG BEGIN_STMT
  regionNum_45 = regionNum_23 + 1;
  # DEBUG regionNum => regionNum_45

  <bb 17> [local count: 128900582]:
  # regionNum_23 = PHI <regionNum_25(15), regionNum_45(16)>
  # DEBUG ccsidr => NULL
  # DEBUG sets => NULL
  # DEBUG ways => NULL
  # DEBUG regionNum => regionNum_23
  # DEBUG BEGIN_STMT
  if (regionNum_23 != 11)
    goto <bb 16>; [91.67%]
  else
    goto <bb 18>; [8.33%]

  <bb 18> [local count: 10737418]:
  # DEBUG BEGIN_STMT
  _19 ={v} MEM[(struct S32_MPU_Type *)3758153728B].CTRL;
  _20 = _19 | 1;
  MEM[(struct S32_MPU_Type *)3758153728B].CTRL ={v} _20;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY sys_m7_cache_init
  # DEBUG BEGIN_STMT
  # DEBUG ccsidr => 0
  # DEBUG BEGIN_STMT
  # DEBUG sets => 0
  # DEBUG BEGIN_STMT
  # DEBUG ways => 0
  # DEBUG BEGIN_STMT
  MEM[(struct S32_SCB_Type *)3758153728B].CSSELR ={v} 0;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  ccsidr_67 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CCSIDR;
  # DEBUG ccsidr => ccsidr_67
  # DEBUG BEGIN_STMT
  _68 = ccsidr_67 >> 13;
  sets_69 = _68 & 32767;
  # DEBUG sets => sets_69

  <bb 19> [local count: 97612898]:
  # sets_72 = PHI <sets_69(18), sets_79(23)>
  # DEBUG sets => sets_72
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _70 = ccsidr_67 >> 3;
  ways_71 = _70 & 1023;
  # DEBUG ways => ways_71

  <bb 20> [local count: 887389983]:
  # ways_75 = PHI <ways_71(19), ways_78(24)>
  # DEBUG ways => ways_75
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _73 = sets_72 << 5;
  _74 = _73 & 16352;
  _76 = ways_75 << 30;
  _77 = _74 | _76;
  MEM[(struct S32_SCB_Type *)3758153728B].DCISW ={v} _77;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  ways_78 = ways_75 + 4294967295;
  # DEBUG ways => ways_78
  if (ways_75 != 0)
    goto <bb 24>; [89.00%]
  else
    goto <bb 21>; [11.00%]

  <bb 24> [local count: 789777085]:
  goto <bb 20>; [100.00%]

  <bb 21> [local count: 97612898]:
  # DEBUG BEGIN_STMT
  sets_79 = sets_72 + 4294967295;
  # DEBUG sets => sets_79
  if (sets_72 != 0)
    goto <bb 23>; [89.00%]
  else
    goto <bb 22>; [11.00%]

  <bb 23> [local count: 86875479]:
  goto <bb 19>; [100.00%]

  <bb 22> [local count: 10737419]:
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  _80 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CCR;
  _81 = _80 | 65536;
  MEM[(struct S32_SCB_Type *)3758153728B].CCR ={v} _81;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  MEM[(struct S32_SCB_Type *)3758153728B].ICIALLU ={v} 0;
  # DEBUG BEGIN_STMT
  _82 ={v} MEM[(struct S32_SCB_Type *)3758153728B].CCR;
  _83 = _82 | 131072;
  MEM[(struct S32_SCB_Type *)3758153728B].CCR ={v} _83;
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG ways => NULL
  # DEBUG sets => NULL
  # DEBUG ccsidr => NULL
  # DEBUG BEGIN_STMT
  SystemWfiConfig ();
  return;

}


