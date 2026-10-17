
void FUN_0046b200(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if ((int)(param_2 - param_1 & 0xfffffffcU) < 8) {
    return;
  }
  iVar4 = param_2 - param_1 >> 2;
  iVar9 = (iVar4 + -2) / 2;
  iVar8 = iVar9 * 2 + 2;
  puVar5 = (uint *)(param_1 + iVar9 * 4);
  do {
    uVar2 = *puVar5;
    iVar7 = iVar8;
    iVar1 = iVar9;
    while (iVar6 = iVar7, iVar6 < iVar4) {
      if (*(uint *)(param_1 + iVar6 * 4) < *(uint *)(param_1 + -4 + iVar6 * 4)) {
        iVar6 = iVar6 + -1;
      }
      *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar6 * 4);
      iVar1 = iVar6;
      iVar7 = iVar6 * 2 + 2;
    }
    if (iVar6 == iVar4) {
      *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + -4 + iVar6 * 4);
      iVar1 = iVar6 + -1;
    }
    while (iVar9 < iVar1) {
      iVar7 = (iVar1 + -1) / 2;
      uVar3 = *(uint *)(param_1 + iVar7 * 4);
      if (uVar2 <= uVar3) break;
      *(uint *)(param_1 + iVar1 * 4) = uVar3;
      iVar1 = iVar7;
    }
    *(uint *)(param_1 + iVar1 * 4) = uVar2;
    if (iVar9 == 0) {
      return;
    }
    iVar8 = iVar8 + -2;
    iVar9 = iVar9 + -1;
    puVar5 = puVar5 + -1;
  } while( true );
}

