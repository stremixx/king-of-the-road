
void FUN_0046bca0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 - param_1 >> 2;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 >> 1;
      if (*(int *)(*(int *)(param_1 + iVar1 * 4) + 0x20) <= *(int *)(*param_3 + 0x20)) {
        param_1 = param_1 + 4 + iVar1 * 4;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  return;
}

