
undefined4 FUN_004418e0(int param_1)

{
  int iVar1;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1fc) != 0)) &&
     ((iVar1 = *(int *)(*(int *)(DAT_0068bf38 + *(int *)(*(int *)(param_1 + 0x1fc) + 4) * 4) + 0x20)
      , iVar1 == 2 || (iVar1 == 3)))) {
    return 1;
  }
  return 0;
}

