
undefined4 FUN_0056e8e0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_005e4980(param_1);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x1c) + 0x1a0);
}

