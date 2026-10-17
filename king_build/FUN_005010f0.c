
void __thiscall FUN_005010f0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (((*(short *)(param_1 + 0x274a) != 0) && (-1 < param_2)) && (param_2 < 0x1b)) {
    iVar2 = param_2 * 5 + 0xf28;
    piVar1 = (int *)(param_1 + iVar2 * 4);
    iVar2 = *(int *)(param_1 + iVar2 * 4);
    if (-1 < iVar2) {
      param_1 = param_1 + param_2 * 0x14;
      iVar3 = iVar2 + 1;
      if (*(int *)(param_1 + 0x3ca4) < iVar2 + 1) {
        iVar3 = *(int *)(param_1 + 0x3ca4);
      }
      *piVar1 = iVar3;
      *(float *)(param_1 + 0x3cac) = (float)iVar3 / (float)*(int *)(param_1 + 0x3ca4);
      return;
    }
    param_1 = param_1 + param_2 * 0x14;
    iVar3 = iVar2 + -1;
    if (iVar2 + -1 < *(int *)(param_1 + 0x3ca8)) {
      iVar3 = *(int *)(param_1 + 0x3ca8);
    }
    *piVar1 = iVar3;
    if (*(int *)(param_1 + 0x3ca8) == 0) {
      *(undefined4 *)(param_1 + 0x3cac) = 0;
      return;
    }
    *(float *)(param_1 + 0x3cac) = (float)iVar3 / (float)*(int *)(param_1 + 0x3ca8);
  }
  return;
}

