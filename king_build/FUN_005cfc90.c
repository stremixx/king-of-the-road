
void FUN_005cfc90(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int local_4;
  
  if (*(int *)(param_1 + 0x10) < *(int *)(param_2 + 0x10)) {
    uVar7 = (uint)(DAT_007229e8 == 1);
    iVar2 = param_2;
    param_2 = param_1;
  }
  else {
    uVar7 = DAT_007229e8 ^ 1;
    iVar2 = param_1;
  }
  uVar9 = *(uint *)(iVar2 + 0x10);
  iVar3 = *(int *)(param_2 + 0x10);
  iVar6 = iVar3 >> 0x14;
  param_1 = (int)(uVar9 - iVar3) >> 10;
  uVar1 = iVar3 >> 10 & 0x3ff;
  if (iVar6 == (int)uVar9 >> 0x14) {
    if ((uVar1 == 0) && ((uVar9 & 0xffc00) != 0)) {
      iVar2 = (iVar6 + uVar7 * 0x514) * 0x18;
      *(undefined4 *)(&DAT_0070e350 + iVar2) = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(&DAT_0070e364 + iVar2) = *(undefined4 *)(param_2 + 0x28);
      if (iVar6 < DAT_0071d73c) {
        DAT_0071d73c = iVar6;
      }
      if (DAT_0071d738 < iVar6) {
        DAT_0071d738 = iVar6;
        return;
      }
    }
  }
  else {
    iVar3 = 0;
    if (uVar1 != 0) {
      iVar6 = iVar6 + 1;
      iVar3 = 0x3ff - uVar1;
    }
    if (iVar6 < DAT_0071d73c) {
      DAT_0071d73c = iVar6;
    }
    iVar4 = *(int *)(iVar2 + 0x10) >> 0x14;
    if (DAT_0071d738 < iVar4) {
      DAT_0071d738 = iVar4;
    }
    if (param_1 == 0) {
      local_4 = 0;
      param_1 = 0;
    }
    else {
      local_4 = (*(int *)(iVar2 + 0xc) - *(int *)(param_2 + 0xc)) / param_1;
      param_1 = (*(int *)(iVar2 + 0x28) - *(int *)(param_2 + 0x28)) / param_1;
    }
    iVar4 = local_4 * iVar3 + *(int *)(param_2 + 0xc);
    iVar5 = param_1 * iVar3 + *(int *)(param_2 + 0x28);
    uVar9 = iVar6 + 1;
    iVar3 = (iVar6 + uVar7 * 0x514) * 0x18;
    *(int *)(&DAT_0070e350 + iVar3) = iVar4;
    *(int *)(&DAT_0070e364 + iVar3) = iVar5;
    piVar8 = (int *)(&DAT_0070e368 + iVar3);
    if ((int)uVar9 <= *(int *)(iVar2 + 0x10) >> 0x14) {
      do {
        iVar4 = iVar4 + local_4 * 0x400;
        iVar5 = iVar5 + param_1 * 0x400;
        uVar7 = uVar9 & 7;
        *piVar8 = iVar4;
        uVar9 = uVar9 + 1;
        piVar8[5] = *(int *)(&DAT_0067e9c0 + uVar7 * 4) + iVar5;
        piVar8 = piVar8 + 6;
      } while ((int)uVar9 <= *(int *)(iVar2 + 0x10) >> 0x14);
    }
  }
  return;
}

