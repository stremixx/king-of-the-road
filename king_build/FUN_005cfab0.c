
void FUN_005cfab0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint local_4;
  
  if (*(int *)(param_1 + 0x10) < *(int *)(param_2 + 0x10)) {
    uVar8 = (uint)(DAT_007229e8 == 1);
    iVar2 = param_2;
  }
  else {
    uVar8 = DAT_007229e8 ^ 1;
    iVar2 = param_1;
    param_1 = param_2;
  }
  uVar1 = *(uint *)(iVar2 + 0x10);
  iVar7 = *(int *)(param_1 + 0x10);
  iVar6 = iVar7 >> 0x14;
  iVar5 = (int)uVar1 >> 0x14;
  iVar3 = (int)(uVar1 - iVar7) >> 10;
  local_4 = iVar7 >> 10 & 0x3ff;
  if (iVar6 == iVar5) {
    if ((local_4 == 0) && ((uVar1 & 0xffc00) != 0)) {
      iVar2 = (iVar6 + uVar8 * 0x514) * 0x18;
      *(undefined4 *)(&DAT_0070e350 + iVar2) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(&DAT_0070e358 + iVar2) = *(undefined4 *)(param_1 + 0x14);
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
    if (local_4 != 0) {
      iVar6 = iVar6 + 1;
      local_4 = 0x400 - local_4;
    }
    if (iVar6 < DAT_0071d73c) {
      DAT_0071d73c = iVar6;
    }
    if (DAT_0071d738 < iVar5) {
      DAT_0071d738 = iVar5;
    }
    param_2 = *(int *)(param_1 + 0xc);
    iVar7 = *(int *)(param_1 + 0x14);
    if (iVar3 == 0) {
      iVar5 = 0;
      param_1 = 0;
    }
    else {
      param_1 = (*(int *)(iVar2 + 0xc) - param_2) / iVar3;
      if (iVar3 < 0x801) {
        iVar5 = ((*(int *)(iVar2 + 0x14) - iVar7) * 0x40) / iVar3 << 4;
        iVar3 = (iVar5 >> 4) * local_4;
      }
      else {
        iVar5 = (((*(int *)(iVar2 + 0x14) - iVar7) * 0x40) / iVar3) * 0x10;
        iVar3 = ((int)local_4 >> 4) * iVar5;
      }
      iVar7 = iVar7 + (iVar3 >> 6);
      param_2 = param_2 + param_1 * local_4;
    }
    iVar3 = (iVar6 + uVar8 * 0x514) * 0x18;
    *(int *)(&DAT_0070e350 + iVar3) = param_2;
    *(int *)(&DAT_0070e358 + iVar3) = iVar7;
    iVar6 = iVar6 + 1;
    piVar4 = (int *)(&DAT_0070e368 + iVar3);
    if (iVar6 <= *(int *)(iVar2 + 0x10) >> 0x14) {
      do {
        param_2 = param_2 + param_1 * 0x400;
        iVar7 = iVar7 + iVar5;
        *piVar4 = param_2;
        piVar4[2] = iVar7;
        iVar6 = iVar6 + 1;
        piVar4 = piVar4 + 6;
      } while (iVar6 <= *(int *)(iVar2 + 0x10) >> 0x14);
    }
    if (0xffffff < piVar4[-4]) {
      piVar4[-4] = 0xffffff;
    }
  }
  return;
}

