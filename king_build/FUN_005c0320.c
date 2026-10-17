
void __thiscall FUN_005c0320(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x148))) {
    iVar1 = *(int *)(param_1 + 0x128);
    for (iVar2 = param_2; ((iVar1 != 0 && (*(int *)(iVar1 + 8) != 0)) && (0 < iVar2));
        iVar2 = iVar2 + -1) {
      iVar1 = *(int *)(iVar1 + 8);
    }
    iVar2 = 0;
    *(int *)(param_1 + 300) = iVar1;
    iVar1 = *(int *)(param_1 + 0x128);
    while (((iVar1 != 0 && (*(int *)(iVar1 + 8) != 0)) && (iVar1 != *(int *)(param_1 + 0x150)))) {
      iVar2 = iVar2 + 1;
      iVar1 = *(int *)(iVar1 + 8);
    }
    if (param_2 < iVar2) {
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 300);
      iVar2 = param_2;
    }
    iVar1 = FUN_005bfda0();
    for (iVar1 = iVar1 + iVar2; iVar1 <= param_2; iVar1 = iVar1 + iVar2) {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(*(int *)(param_1 + 0x150) + 8);
      iVar1 = FUN_005bfda0();
    }
    iVar1 = FUN_005bfda0();
    if (*(int *)(param_1 + 0x148) == iVar1 || *(int *)(param_1 + 0x148) - iVar1 < 0) {
      *(undefined2 *)(param_1 + 0x14c) = 0;
      return;
    }
    *(short *)(param_1 + 0x14c) = (short)iVar2;
  }
  return;
}

