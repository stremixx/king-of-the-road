
undefined4 __thiscall FUN_005ed210(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x38)) {
    return 0;
  }
  iVar1 = FUN_005bb5a0();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar1;
  *(undefined4 *)(*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x38) * 4) = param_2;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return 1;
}

