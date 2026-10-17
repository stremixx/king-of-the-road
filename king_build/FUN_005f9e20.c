
undefined4 __thiscall FUN_005f9e20(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005eee30(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_005b4670(param_1 + 0x14);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_2 & 1) == 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      iVar2 = 0;
      do {
        FUN_005b26c0(*(int *)(param_1 + 0x34) + iVar2,*(undefined4 *)(param_1 + 0x38),
                     *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x28;
      } while (iVar1 < *(int *)(param_1 + 0x30));
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30);
    if (-1 < iVar1 + -1) {
      iVar2 = (iVar1 + -1) * 0x28;
      do {
        FUN_005b26c0(*(int *)(param_1 + 0x34) + iVar2,*(undefined4 *)(param_1 + 0x38),
                     *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
        iVar2 = iVar2 + -0x28;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      return 1;
    }
  }
  return 1;
}

