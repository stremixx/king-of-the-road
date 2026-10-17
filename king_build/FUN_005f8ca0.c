
undefined4 __thiscall FUN_005f8ca0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_005eee30(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 0x38);
  }
  if (*(int *)(param_1 + 0x34) < iVar1) {
    iVar1 = *(int *)(param_1 + 0x34);
  }
  FUN_005f16f0(iVar1,param_2,param_3);
  return 1;
}

