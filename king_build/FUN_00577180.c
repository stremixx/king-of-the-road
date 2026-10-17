
undefined4 * __thiscall FUN_00577180(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  CHAR aCStack_124 [20];
  undefined1 local_110 [272];
  
  puVar1 = param_1 + 1;
  *param_1 = 0;
  *puVar1 = 0;
  if ((DAT_006f3ae8 != (int *)0x0) && (DAT_006f3ae0 != 0)) {
    FUN_00576420(s_JOYSTICK__cFFBEF_Constant__enume_0067b830);
    iVar2 = (**(code **)(*DAT_006f3ae8 + 0x4c))(DAT_006f3ae8,&LAB_00578680,local_110,1);
    if (iVar2 < 0) {
      FUN_00576420(s_JOYSTICK__cFFBEF_Constant__enume_0067b7f0);
      *puVar1 = 0;
      return param_1;
    }
    puVar3 = (undefined4 *)&stack0xfffffe98;
    for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    param_1[2] = param_2;
    iVar2 = (**(code **)(*DAT_006f3ae8 + 0x48))
                      (DAT_006f3ae8,&DAT_006543a0,&stack0xfffffe98,puVar1,0);
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

