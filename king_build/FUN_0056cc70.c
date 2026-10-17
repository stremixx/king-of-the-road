
undefined4 * __thiscall FUN_0056cc70(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646c78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_005ee8e0(0,s_Wiper2Space_0067aa00);
  uVar2 = FUN_005ee8e0(0,s_Wiper2_0067a9f8,uVar1);
  uVar3 = FUN_005ee8e0(0,s_Wiper1Space_0067a9ec,uVar2);
  uVar4 = FUN_005ee8e0(0,s_Wiper1_0067a9e4,uVar3);
  uVar5 = FUN_005ee8e0(0,s_WiperSpace_0067a9d8,uVar4);
  uVar6 = FUN_005ee8e0(0,s_Wiper_0067a9d0,uVar5);
  pcVar9 = s_glass_00674da0;
  uVar7 = FUN_005ee8e0(0,s_GlassKey_0067a9c4,s_glass_00674da0,uVar6);
  uVar8 = FUN_005ee8e0(0,s_rain_node_0067a9b8,uVar7);
  FUN_005a5830(param_2,uVar8,uVar7,pcVar9,uVar6,uVar5,uVar4,uVar3,uVar2,uVar1);
  *param_1 = &PTR_FUN_0064ee50;
  param_1[0x35] = 1;
  param_1[0x29] = param_1[0x29] | 0xe;
  local_4 = 0;
  if (DAT_00695808 != 0) {
    uVar1 = FUN_005eea00(s_wipersSound_0067a9ac);
    param_1[0x34] = uVar1;
    ExceptionList = local_c;
    return param_1;
  }
  param_1[0x34] = 0;
  ExceptionList = local_c;
  return param_1;
}

