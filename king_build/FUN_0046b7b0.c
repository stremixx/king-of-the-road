
void FUN_0046b7b0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((int)((int)param_2 - param_1 & 0xfffffffcU) < 8) {
    return;
  }
  iVar6 = (int)param_2 - param_1 >> 2;
  iVar7 = (iVar6 + -2) / 2;
  iVar5 = iVar7 * 2 + 2;
  param_2 = (int *)(param_1 + iVar7 * 4);
  do {
    iVar2 = *param_2;
    iVar3 = iVar5;
    iVar1 = iVar7;
    while (iVar4 = iVar3, iVar4 < iVar6) {
      if (*(int *)(*(int *)(param_1 + iVar4 * 4) + 0x18) <
          *(int *)(*(int *)(param_1 + -4 + iVar4 * 4) + 0x18)) {
        iVar4 = iVar4 + -1;
      }
      *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar4 * 4);
      iVar1 = iVar4;
      iVar3 = iVar4 * 2 + 2;
    }
    if (iVar4 == iVar6) {
      *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + -4 + iVar4 * 4);
      iVar1 = iVar4 + -1;
    }
    while (iVar7 < iVar1) {
      iVar4 = (iVar1 + -1) / 2;
      iVar3 = *(int *)(param_1 + iVar4 * 4);
      if (*(int *)(iVar2 + 0x18) <= *(int *)(iVar3 + 0x18)) break;
      *(int *)(param_1 + iVar1 * 4) = iVar3;
      iVar1 = iVar4;
    }
    *(int *)(param_1 + iVar1 * 4) = iVar2;
    if (iVar7 == 0) {
      return;
    }
    iVar7 = iVar7 + -1;
    iVar5 = iVar5 + -2;
    param_2 = param_2 + -1;
  } while( true );
}

