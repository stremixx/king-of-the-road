
undefined4 * __thiscall FUN_005773b0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160 [5];
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 *puStack_140;
  undefined4 *puStack_13c;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined4 uStack_128;
  CHAR aCStack_124 [20];
  undefined1 local_110 [272];
  
  puVar1 = param_1 + 1;
  *param_1 = 0;
  *puVar1 = 0;
  if ((DAT_006f3ae8 != (int *)0x0) && (DAT_006f3ae0 != 0)) {
    local_168 = param_2;
    local_160[1] = 1000000;
    local_160[0] = 0;
    local_164 = 0;
    FUN_00576420(s_JOYSTICK__cFFBEF_bounce__enumera_0067b8a8);
    iVar2 = (**(code **)(*DAT_006f3ae8 + 0x4c))(DAT_006f3ae8,&LAB_00578680,local_110,1);
    if (iVar2 < 0) {
      FUN_00576420(s_JOYSTICK__cFFBEF_bounce__enumera_0067b868);
      *puVar1 = 0;
      return param_1;
    }
    puVar3 = local_160;
    for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    puStack_140 = &local_168;
    uStack_128 = 1;
    uStack_144 = 1;
    param_1[2] = param_2;
    puStack_13c = &uStack_128;
    local_160[0] = 0x38;
    local_160[3] = 0;
    uStack_14c = 0xffffffff;
    uStack_148 = 0;
    local_160[4] = param_2;
    local_168 = 0;
    local_160[1] = 0x12;
    local_160[2] = 100000;
    uStack_134 = 0x10;
    puStack_130 = &stack0xfffffe88;
    iVar2 = (**(code **)(*DAT_006f3ae8 + 0x48))(DAT_006f3ae8,&DAT_00654390,local_160,puVar1,0);
    if (iVar2 < 0) {
      wsprintfA(aCStack_124,s_CreateEffect_cFFBEF_Constant__fa_0067b7c0,iVar2);
      FUN_00576420(aCStack_124);
      *puVar1 = 0;
      return param_1;
    }
    FUN_00592690(param_1);
  }
  return param_1;
}

