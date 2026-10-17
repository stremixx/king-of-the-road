
uint FUN_00425ca0(uint param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1fc) == 0) {
    return param_1 & 0xffffff00;
  }
  if ((((*(char *)(param_1 + 0x1e8) == '\0') && (*(int *)(param_1 + 0x54) == 2)) &&
      (iVar1 = *(int *)(param_1 + 0x5c), iVar1 != 0x100)) &&
     (((iVar1 != 0x101 && (iVar1 != 5)) &&
      (*(int *)(*(int *)(DAT_0068bf38 + *(int *)(*(int *)(param_1 + 0x1fc) + 4) * 4) + 0x20) != 3)))
     ) {
    return 1;
  }
  return 0;
}

