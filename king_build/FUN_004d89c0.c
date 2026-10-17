
byte FUN_004d89c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_005e4980(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return *(byte *)(*(int *)(iVar1 + 0xc) + 0xfac) & 1;
}

