
void __thiscall FUN_004741b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x3d8);
  if (iVar1 != param_2) {
    if (iVar1 != -1) {
      iVar2 = *(int *)(param_1 + 0x54);
      if ((((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 6)) || (iVar2 == 5)) {
        piVar3 = (int *)(DAT_006898b8 + 0x1c + iVar1 * 0x38);
      }
      else {
        piVar3 = (int *)(DAT_006898b8 + 0x20 + iVar1 * 0x38);
      }
      *piVar3 = *piVar3 + -1;
    }
    *(int *)(param_1 + 0x3d8) = param_2;
    if (param_2 != -1) {
      iVar1 = *(int *)(param_1 + 0x54);
      if (((iVar1 != 1) && (iVar1 != 2)) && ((iVar1 != 6 && (iVar1 != 5)))) {
        *(int *)(DAT_006898b8 + 0x20 + param_2 * 0x38) =
             *(int *)(DAT_006898b8 + 0x20 + param_2 * 0x38) + 1;
        return;
      }
      piVar3 = (int *)(DAT_006898b8 + 0x1c + param_2 * 0x38);
      *piVar3 = *piVar3 + 1;
    }
  }
  return;
}

