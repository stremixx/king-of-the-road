
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d1a0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = param_4;
    return;
  }
  do {
    iVar2 = (param_2 + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar2 * 4);
    if (*(double *)(iVar1 + 0x1f8) - *(double *)(param_4 + 0x1f8) == _DAT_0064a668) break;
    *(int *)(param_1 + param_2 * 4) = iVar1;
    param_2 = iVar2;
  } while (param_3 < iVar2);
  *(int *)(param_1 + param_2 * 4) = param_4;
  return;
}

