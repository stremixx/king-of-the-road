
void FUN_005d04f0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int local_10;
  int local_8;
  
  if (*(int *)(param_1 + 0x10) < *(int *)(param_2 + 0x10)) {
    uVar9 = (uint)(DAT_007229e8 == 1);
    iVar6 = param_1;
  }
  else {
    uVar9 = DAT_007229e8 ^ 1;
    iVar6 = param_2;
    param_2 = param_1;
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  iVar3 = *(int *)(iVar6 + 0x10);
  uVar2 = iVar3 >> 10 & 0x3ff;
  iVar8 = iVar3 >> 0x14;
  uVar11 = (int)(uVar1 - iVar3) >> 10;
  if (iVar8 == (int)uVar1 >> 0x14) {
    if ((uVar2 == 0) && ((uVar1 & 0xffc00) != 0)) {
      iVar3 = (iVar8 + uVar9 * 0x514) * 0x18;
      *(undefined4 *)(&DAT_0070e350 + iVar3) = *(undefined4 *)(iVar6 + 0xc);
      *(undefined4 *)(&DAT_0070e35c + iVar3) = *(undefined4 *)(iVar6 + 0x18);
      *(undefined4 *)(&DAT_0070e360 + iVar3) = *(undefined4 *)(iVar6 + 0x1c);
      *(undefined4 *)(&DAT_0070e358 + iVar3) = *(undefined4 *)(iVar6 + 0x14);
      return;
    }
  }
  else {
    iVar4 = 0;
    if (uVar2 != 0) {
      iVar8 = iVar8 + 1;
      iVar4 = 0x3ff - uVar2;
    }
    if (iVar8 < DAT_0071d73c) {
      DAT_0071d73c = iVar8;
    }
    iVar5 = *(int *)(param_2 + 0x10) >> 0x14;
    if (DAT_0071d738 < iVar5) {
      DAT_0071d738 = iVar5;
    }
    if ((uVar11 & 0xfffffff0) == 0) {
      param_1 = 0;
      local_8 = 0;
      local_10 = 0;
    }
    else {
      param_1 = (*(int *)(param_2 + 0xc) - *(int *)(iVar6 + 0xc)) / (int)uVar11;
      local_8 = (int)(uVar1 - iVar3) >> 0xe;
      local_10 = ((*(int *)(param_2 + 0x18) - *(int *)(iVar6 + 0x18)) * 0x40) / local_8;
      local_8 = ((*(int *)(param_2 + 0x1c) - *(int *)(iVar6 + 0x1c)) * 0x40) / local_8;
    }
    iVar3 = *(int *)(iVar6 + 0x14);
    iVar12 = param_1 * iVar4 + *(int *)(iVar6 + 0xc);
    iVar5 = (local_10 >> 10) * iVar4 + *(int *)(iVar6 + 0x18);
    iVar10 = (local_8 >> 10) * iVar4 + *(int *)(iVar6 + 0x1c);
    iVar4 = iVar8 + 1;
    iVar6 = (iVar8 + uVar9 * 0x514) * 0x18;
    *(int *)(&DAT_0070e350 + iVar6) = iVar12;
    *(int *)(&DAT_0070e35c + iVar6) = iVar5;
    *(int *)(&DAT_0070e360 + iVar6) = iVar10;
    *(int *)(&DAT_0070e358 + iVar6) = iVar3;
    piVar7 = (int *)(&DAT_0070e368 + iVar6);
    if (iVar4 <= *(int *)(param_2 + 0x10) >> 0x14) {
      do {
        iVar12 = iVar12 + param_1 * 0x400;
        iVar5 = iVar5 + local_10;
        iVar10 = iVar10 + local_8;
        *piVar7 = iVar12;
        piVar7[3] = iVar5;
        piVar7[4] = iVar10;
        piVar7[2] = iVar3;
        iVar4 = iVar4 + 1;
        piVar7 = piVar7 + 6;
      } while (iVar4 <= *(int *)(param_2 + 0x10) >> 0x14);
    }
  }
  return;
}

