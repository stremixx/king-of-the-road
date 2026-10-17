
undefined4 __thiscall FUN_004bf6b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  param_1[0x18] = param_2;
  param_1[0xb] = *param_1;
  iVar1 = FUN_00631d33(*param_1 << 5);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  param_1[0x21] = iVar1;
  if (iVar1 != 0) {
    iVar1 = 0;
    if (*param_1 != 1 && -1 < *param_1 + -1) {
      iVar2 = 0;
      do {
        iVar1 = iVar1 + 1;
        *(int *)(iVar2 + param_1[0x21]) = iVar2 + 0x20 + param_1[0x21];
        iVar2 = iVar2 + 0x20;
      } while (iVar1 < *param_1 + -1);
    }
    *(undefined4 *)(*param_1 * 0x20 + -0x20 + param_1[0x21]) = 0;
    param_1[0x1f] = param_1[0x21];
    param_1[0x20] = 0;
    return 0;
  }
  return 0x8007000e;
}

