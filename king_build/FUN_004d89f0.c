
undefined4 FUN_004d89f0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_005e4980(param_1);
  if (((iVar1 == 0) || (*(uint *)(DAT_00695c00 + 0xa90) < *(uint *)(iVar1 + 0x10))) &&
     (*(uint *)(DAT_00695c00 + 0xa90) < DAT_0067a674)) {
    return 0;
  }
  return 1;
}

