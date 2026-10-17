
undefined4 FUN_005689f0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_005e4980(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x18) + 4);
}

