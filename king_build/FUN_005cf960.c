
void FUN_005cf960(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = param_1;
  iVar3 = DAT_0071d73c;
  if (*(int *)(param_1 + 0x10) < *(int *)(param_2 + 0x10)) {
    param_1 = param_2;
    uVar9 = (uint)(DAT_007229e8 == 1);
  }
  else {
    uVar9 = DAT_007229e8 ^ 1;
    iVar8 = param_2;
  }
  iVar6 = *(int *)(iVar8 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x10);
  iVar7 = iVar6 >> 0x14;
  iVar5 = (int)uVar1 >> 0x14;
  iVar2 = (int)(uVar1 - iVar6) >> 10;
  param_2 = iVar6 >> 10 & 0x3ff;
  if (iVar7 == iVar5) {
    if ((param_2 == 0) && ((uVar1 & 0xffc00) != 0)) {
      *(undefined4 *)(&DAT_0070e350 + (iVar7 + uVar9 * 0x514) * 0x18) = *(undefined4 *)(iVar8 + 0xc)
      ;
      if (iVar7 < iVar3) {
        DAT_0071d73c = iVar7;
      }
      if (DAT_0071d738 < iVar7) {
        DAT_0071d738 = iVar7;
        return;
      }
    }
  }
  else {
    if (param_2 != 0) {
      iVar7 = iVar7 + 1;
      param_2 = 0x3ff - param_2;
    }
    if (iVar7 < DAT_0071d73c) {
      DAT_0071d73c = iVar7;
    }
    if (DAT_0071d738 < iVar5) {
      DAT_0071d738 = iVar5;
    }
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 0xc) - *(int *)(iVar8 + 0xc)) / iVar2;
    }
    iVar3 = iVar2 * param_2 + *(int *)(iVar8 + 0xc);
    iVar8 = iVar7 + 1;
    *(int *)(&DAT_0070e350 + (uVar9 * 0x514 + iVar7) * 0x18) = iVar3;
    if (iVar8 <= iVar5) {
      iVar6 = (iVar5 - iVar8) + 1;
      piVar4 = (int *)(&DAT_0070e350 + (uVar9 * 0x514 + iVar8) * 0x18);
      do {
        iVar3 = iVar3 + iVar2 * 0x400;
        *piVar4 = iVar3;
        piVar4 = piVar4 + 6;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}

