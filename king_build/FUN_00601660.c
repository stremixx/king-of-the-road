
/* WARNING: Removing unreachable block (ram,0x00601712) */
/* WARNING: Removing unreachable block (ram,0x00601715) */
/* WARNING: Removing unreachable block (ram,0x0060171e) */

undefined4 FUN_00601660(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_2;
  if (param_2 == 0) {
    FUN_00401010(0x925,100,s_C__Nek_Vrappl_Gi_Srmidp_D1gate_c_00683184,
                 s__Id__D1gate_cpp_2001_6_25_14_48__00682bd0,0x433,s_Invalid_buffer_00683268,
                 &DAT_0068c120,&DAT_0068c120);
  }
  if (param_3 == 0) {
    FUN_00401010(0x92f,100,s_C__Nek_Vrappl_Gi_Srmidp_D1gate_c_00683184,
                 s__Id__D1gate_cpp_2001_6_25_14_48__00682bd0,0x437,s_Invalid_buffer_size_00683254,
                 &DAT_0068c120,&DAT_0068c120);
  }
  if ((DAT_00722cec & 1) == 0) {
    DAT_00722cec = DAT_00722cec | 1;
    FUN_00478a20(&param_2);
    FUN_0061c439(&LAB_00601810);
  }
  DAT_00722cfc = DAT_00722cf8;
  FUN_006004d0(&DAT_00722cf8,iVar3,param_3);
  iVar1 = (**(code **)(*DAT_00722d3c + 0xc4))
                    (DAT_00722d3c,DAT_00722d40,param_1,0x601,DAT_00722cf8,
                     DAT_00722cfc - DAT_00722cf8,0,0,0,0);
  for (iVar3 = 0; (iVar1 == -0x7788fef2 && (iVar3 < DAT_00682c10)); iVar3 = iVar3 + 1) {
    iVar1 = (**(code **)(*DAT_00722d3c + 0xc4))
                      (DAT_00722d3c,DAT_00722d40,param_1,0x601,DAT_00722cf8,
                       DAT_00722cfc - DAT_00722cf8,0,0,0,0);
  }
  if ((iVar1 != -0x7ffffff6) && (iVar1 < 0)) {
    uVar2 = FUN_006001c0(iVar1,&DAT_0068c120);
    FUN_00401010(5,100,s_C__Nek_Vrappl_Gi_Srmidp_D1gate_c_00683184,
                 s__Id__D1gate_cpp_2001_6_25_14_48__00682bd0,0x44e,s_Cannot_send_message_00683240,
                 uVar2);
  }
  return 0;
}

