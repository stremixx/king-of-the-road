
void FUN_005cfe40(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int local_4;
  
  if (*(int *)(param_1 + 0x10) < *(int *)(param_2 + 0x10)) {
    uVar9 = (uint)(DAT_007229e8 == 1);
    iVar3 = param_1;
    iVar1 = param_2;
  }
  else {
    uVar9 = DAT_007229e8 ^ 1;
    iVar3 = param_2;
    iVar1 = param_1;
  }
  uVar10 = *(uint *)(iVar1 + 0x10);
  iVar6 = *(int *)(iVar3 + 0x10);
  param_1 = iVar6 >> 10 & 0x3ff;
  iVar7 = iVar6 >> 0x14;
  iVar5 = (int)(uVar10 - iVar6) >> 10;
  if (iVar7 == (int)uVar10 >> 0x14) {
    if ((param_1 == 0) && ((uVar10 & 0xffc00) != 0)) {
      iVar1 = (iVar7 + uVar9 * 0x514) * 0x18;
      *(undefined4 *)(&DAT_0070e350 + iVar1) = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(&DAT_0070e364 + iVar1) = *(undefined4 *)(iVar3 + 0x28);
      *(undefined4 *)(&DAT_0070e358 + iVar1) = *(undefined4 *)(iVar3 + 0x14);
      if (iVar7 < DAT_0071d73c) {
        DAT_0071d73c = iVar7;
      }
      if (DAT_0071d738 < iVar7) {
        DAT_0071d738 = iVar7;
        return;
      }
    }
  }
  else {
    if (param_1 != 0) {
      iVar7 = iVar7 + 1;
      param_1 = 0x3ff - param_1;
    }
    if (iVar7 < DAT_0071d73c) {
      DAT_0071d73c = iVar7;
    }
    iVar2 = *(int *)(iVar1 + 0x10) >> 0x14;
    if (DAT_0071d738 < iVar2) {
      DAT_0071d738 = iVar2;
    }
    iVar2 = 0;
    if (iVar5 == 0) {
      param_2 = 0;
      local_4 = 0;
    }
    else {
      param_2 = (*(int *)(iVar1 + 0xc) - *(int *)(iVar3 + 0xc)) / iVar5;
      if (iVar5 < 0x801) {
        local_4 = ((*(int *)(iVar1 + 0x14) - *(int *)(iVar3 + 0x14)) * 0x40) / iVar5 << 4;
      }
      else {
        local_4 = ((*(int *)(iVar1 + 0x14) - *(int *)(iVar3 + 0x14)) * 0x40) /
                  ((int)(uVar10 - iVar6) >> 0xe);
      }
      iVar2 = (*(int *)(iVar1 + 0x28) - *(int *)(iVar3 + 0x28)) / iVar5;
    }
    iVar5 = param_2 * param_1 + *(int *)(iVar3 + 0xc);
    iVar6 = *(int *)(iVar3 + 0x14);
    iVar8 = iVar2 * param_1 + *(int *)(iVar3 + 0x28);
    uVar10 = iVar7 + 1;
    iVar3 = (iVar7 + uVar9 * 0x514) * 0x18;
    *(int *)(&DAT_0070e350 + iVar3) = iVar5;
    *(int *)(&DAT_0070e364 + iVar3) = iVar8;
    *(int *)(&DAT_0070e358 + iVar3) = iVar6;
    piVar4 = (int *)(&DAT_0070e368 + iVar3);
    if ((int)uVar10 <= *(int *)(iVar1 + 0x10) >> 0x14) {
      do {
        iVar8 = iVar8 + iVar2 * 0x400;
        iVar5 = iVar5 + param_2 * 0x400;
        *piVar4 = iVar5;
        piVar4[5] = *(int *)(&DAT_0067e9c0 + (uVar10 & 7) * 4) + iVar8;
        iVar6 = iVar6 + local_4;
        piVar4[2] = iVar6;
        uVar10 = uVar10 + 1;
        piVar4 = piVar4 + 6;
      } while ((int)uVar10 <= *(int *)(iVar1 + 0x10) >> 0x14);
    }
  }
  return;
}

