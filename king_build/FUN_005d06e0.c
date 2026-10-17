
void FUN_005d06e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  iVar2 = param_1;
  if (*(int *)(param_1 + 0x10) < *(int *)(param_2 + 0x10)) {
    uVar12 = (uint)(DAT_007229e8 == 1);
    param_1 = param_2;
    param_2 = iVar2;
  }
  else {
    uVar12 = DAT_007229e8 ^ 1;
  }
  iVar2 = *(int *)(param_2 + 0x10);
  uVar6 = *(uint *)(param_1 + 0x10);
  iVar13 = iVar2 >> 0x14;
  iVar7 = (int)(uVar6 - iVar2) >> 10;
  local_14 = iVar2 >> 10 & 0x3ff;
  if (iVar13 == (int)uVar6 >> 0x14) {
    if ((local_14 == 0) && ((uVar6 & 0xffc00) != 0)) {
      iVar2 = (iVar13 + uVar12 * 0x514) * 0x18;
      *(undefined4 *)(&DAT_0070e350 + iVar2) = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(&DAT_0070e35c + iVar2) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(&DAT_0070e360 + iVar2) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(&DAT_0070e358 + iVar2) = *(undefined4 *)(param_2 + 0x14);
      if (iVar13 < DAT_0071d73c) {
        DAT_0071d73c = iVar13;
      }
      if (DAT_0071d738 < iVar13) {
        DAT_0071d738 = iVar13;
        return;
      }
    }
  }
  else {
    iVar15 = 0;
    if (local_14 != 0) {
      iVar13 = iVar13 + 1;
      local_14 = 0x400 - local_14;
    }
    if (iVar13 < DAT_0071d73c) {
      DAT_0071d73c = iVar13;
    }
    iVar3 = *(int *)(param_1 + 0x10) >> 0x14;
    if (DAT_0071d738 < iVar3) {
      DAT_0071d738 = iVar3;
    }
    iVar3 = *(int *)(param_2 + 0xc);
    iVar14 = *(int *)(param_2 + 0x14);
    if (iVar7 == 0) {
      local_1c = 0;
      local_18 = 0;
      local_20 = 0;
    }
    else {
      local_20 = (*(int *)(param_1 + 0xc) - iVar3) / iVar7;
      if (iVar7 < 0x801) {
        local_1c = (*(int *)(param_1 + 0x14) << 6) / iVar7 << 4;
        local_18 = ((*(int *)(param_1 + 0x14) - iVar14) * 0x40) / iVar7 << 4;
        iVar2 = (local_18 >> 4) * local_14;
        iVar15 = (local_1c >> 4) * local_14;
      }
      else {
        local_18 = (int)(uVar6 - iVar2) >> 0xe;
        local_1c = (*(int *)(param_1 + 0x14) << 6) / local_18;
        local_18 = ((*(int *)(param_1 + 0x14) - iVar14) * 0x40) / local_18;
        iVar2 = ((int)local_14 >> 4) * local_18;
        iVar15 = ((int)local_14 >> 4) * local_1c;
      }
      iVar14 = iVar14 + (iVar2 >> 6);
      iVar15 = iVar15 >> 6;
      iVar3 = iVar3 + local_20 * local_14;
    }
    iVar4 = (iVar15 << 6) / (iVar14 >> 4);
    local_20 = local_20 * 0x400;
    iVar7 = *(int *)(param_2 + 0x18);
    iVar1 = *(int *)(param_2 + 0x1c);
    iVar10 = *(int *)(param_1 + 0x18) - iVar7;
    iVar5 = *(int *)(param_1 + 0x1c) - iVar1;
    uVar6 = iVar5 >> 10;
    uVar11 = iVar10 >> 10;
    iVar2 = (iVar13 + uVar12 * 0x514) * 0x18;
    *(uint *)(&DAT_0070e35c + iVar2) = uVar11 * iVar4 + iVar7;
    *(int *)(&DAT_0070e350 + iVar2) = iVar3;
    *(uint *)(&DAT_0070e360 + iVar2) = uVar6 * iVar4 + iVar1;
    uVar12 = iVar10 >> 0x1f;
    *(int *)(&DAT_0070e358 + iVar2) = iVar14;
    if ((int)((uVar11 ^ uVar12) - uVar12) < 0xf) {
      piVar8 = (int *)(&DAT_0070e368 + iVar2);
      param_2 = iVar13 + 1;
      piVar9 = piVar8;
      if (param_2 <= *(int *)(param_1 + 0x10) >> 0x14) {
        do {
          iVar14 = iVar14 + local_18;
          iVar15 = iVar15 + local_1c;
          piVar9[3] = iVar7;
          iVar3 = iVar3 + local_20;
          *piVar9 = iVar3;
          piVar9[2] = iVar14;
          piVar8 = piVar9 + 6;
          piVar9[4] = ((iVar15 * 0x40) / (iVar14 >> 4)) * uVar6 + iVar1;
          param_2 = param_2 + 1;
          piVar9 = piVar8;
        } while (param_2 <= *(int *)(param_1 + 0x10) >> 0x14);
      }
    }
    else {
      uVar12 = iVar5 >> 0x1f;
      if ((int)((uVar6 ^ uVar12) - uVar12) < 0xf) {
        param_2 = iVar13 + 1;
        piVar8 = (int *)(&DAT_0070e368 + iVar2);
        piVar9 = piVar8;
        if (param_2 <= *(int *)(param_1 + 0x10) >> 0x14) {
          do {
            iVar15 = iVar15 + local_1c;
            iVar14 = iVar14 + local_18;
            iVar3 = iVar3 + local_20;
            *piVar9 = iVar3;
            piVar9[2] = iVar14;
            piVar8 = piVar9 + 6;
            piVar9[3] = ((iVar15 * 0x40) / (iVar14 >> 4)) * uVar11 + iVar7;
            piVar9[4] = iVar1;
            param_2 = param_2 + 1;
            piVar9 = piVar8;
          } while (param_2 <= *(int *)(param_1 + 0x10) >> 0x14);
        }
      }
      else {
        param_2 = iVar13 + 1;
        piVar8 = (int *)(&DAT_0070e368 + iVar2);
        piVar9 = piVar8;
        if (param_2 <= *(int *)(param_1 + 0x10) >> 0x14) {
          do {
            iVar15 = iVar15 + local_1c;
            iVar14 = iVar14 + local_18;
            iVar3 = iVar3 + local_20;
            iVar2 = (iVar15 * 0x40) / (iVar14 >> 4);
            *piVar9 = iVar3;
            piVar9[2] = iVar14;
            piVar8 = piVar9 + 6;
            piVar9[3] = uVar11 * iVar2 + iVar7;
            piVar9[4] = uVar6 * iVar2 + iVar1;
            param_2 = param_2 + 1;
            piVar9 = piVar8;
          } while (param_2 <= *(int *)(param_1 + 0x10) >> 0x14);
        }
      }
    }
    if (0xffffff < piVar8[-4]) {
      piVar8[-4] = 0xffffff;
    }
  }
  return;
}

