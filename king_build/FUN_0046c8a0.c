
void FUN_0046c8a0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_2 + -4);
  *(undefined4 *)(param_2 + -4) = *param_1;
  iVar5 = 0;
  iVar2 = (param_2 - (int)param_1) + -4 >> 2;
  iVar3 = 2;
  iVar4 = iVar5;
  if (2 < iVar2) {
    do {
      iVar4 = iVar3;
      if ((uint)param_1[iVar3] < (uint)param_1[iVar3 + -1]) {
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
    if (uVar1 <= (uint)param_1[iVar3]) break;
    param_1[iVar4] = param_1[iVar3];
    iVar4 = iVar3;
  }
  param_1[iVar4] = uVar1;
  return;
}

