
void __thiscall FUN_00528690(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  param_1[0x241] = param_3;
  iVar1 = FUN_005c0aa0(param_2,0x18,1,(param_3 < 2) - 1 & DAT_007230f0);
  if (iVar1 != 0) {
    FUN_005d2250(s_avi_subsystem_error_006772f4,0);
  }
  (**(code **)(*param_1 + 0x24))();
  param_1[0x240] = 0;
  return;
}

