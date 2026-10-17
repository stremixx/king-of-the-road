
void FUN_0046b920(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_2 + -4);
  *(undefined4 *)(param_2 + -4) = *param_1;
  iVar4 = 0;
  iVar2 = (param_2 - (int)param_1) + -4 >> 2;
  iVar3 = 2;
  iVar5 = iVar4;
  if (2 < iVar2) {
    do {
      iVar4 = iVar3;
      if (*(int *)(param_1[iVar3] + 0x18) < *(int *)(param_1[iVar3 + -1] + 0x18)) {
        iVar4 = iVar3 + -1;
      }
      param_1[iVar5] = param_1[iVar4];
      iVar3 = iVar4 * 2 + 2;
      iVar5 = iVar4;
    } while (iVar3 < iVar2);
  }
  if (iVar3 == iVar2) {
    param_1[iVar4] = param_1[iVar3 + -1];
    iVar4 = iVar3 + -1;
  }
  while (0 < iVar4) {
    iVar3 = (iVar4 + -1) / 2;
    if (*(int *)(iVar1 + 0x18) <= *(int *)(param_1[iVar3] + 0x18)) break;
    param_1[iVar4] = param_1[iVar3];
    iVar4 = iVar3;
  }
  param_1[iVar4] = iVar1;
  return;
}

