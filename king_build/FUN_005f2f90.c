
undefined4 __thiscall FUN_005f2f90(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8c) != 0) {
    return 0;
  }
  iVar1 = FUN_005eee30(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_005ac890(param_1 + 0x38);
  }
  FUN_005f16f0(0,param_2,param_3);
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_005ad330(param_1 + 0x38);
  }
  return 1;
}

