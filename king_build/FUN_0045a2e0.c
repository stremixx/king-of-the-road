
void FUN_0045a2e0(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 - param_1 >> 2;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 >> 1;
      if (*(uint *)(param_1 + iVar1 * 4) < *param_3) {
        param_1 = param_1 + 4 + iVar1 * 4;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  return;
}

