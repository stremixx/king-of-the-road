
undefined4 __thiscall FUN_005ed1c0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) <= *(int *)(param_1 + 0x30)) {
    return 0;
  }
  iVar1 = FUN_005ba410();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar1;
  *(undefined4 *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x30) * 4) = param_2;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return 1;
}

