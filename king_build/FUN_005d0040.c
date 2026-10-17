
void FUN_005d0040(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int local_28;
  int local_24;
  int local_1c;
  
  iVar1 = param_1;
  if (*(int *)(param_1 + 0x10) < *(int *)(param_2 + 0x10)) {
    uVar9 = (uint)(DAT_007229e8 == 1);
    param_1 = param_2;
    param_2 = iVar1;
  }
  else {
    uVar9 = DAT_007229e8 ^ 1;
  }
  iVar1 = *(int *)(param_2 + 0x10);
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar12 = iVar1 >> 10 & 0x3ff;
  iVar11 = iVar1 >> 0x14;
  iVar16 = (int)(uVar5 - iVar1) >> 10;
  if (iVar11 == (int)uVar5 >> 0x14) {
    if ((uVar12 == 0) && ((uVar5 & 0xffc00) != 0)) {
      iVar1 = (iVar11 + uVar9 * 0x514) * 0x18;
      *(undefined4 *)(&DAT_0070e350 + iVar1) = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(&DAT_0070e35c + iVar1) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(&DAT_0070e360 + iVar1) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(&DAT_0070e358 + iVar1) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(&DAT_0070e364 + iVar1) = *(undefined4 *)(param_2 + 0x28);
      if (iVar11 < DAT_0071d73c) {
        DAT_0071d73c = iVar11;
      }
      if (DAT_0071d738 < iVar11) {
        DAT_0071d738 = iVar11;
        return;
      }
    }
  }
  else {
    iVar2 = 0;
    iVar13 = 0;
    if (uVar12 != 0) {
      iVar11 = iVar11 + 1;
      iVar13 = 0x400 - uVar12;
    }
    if (iVar11 < DAT_0071d73c) {
      DAT_0071d73c = iVar11;
    }
    iVar14 = *(int *)(param_1 + 0x10) >> 0x14;
    if (DAT_0071d738 < iVar14) {
      DAT_0071d738 = iVar14;
    }
    iVar14 = *(int *)(param_2 + 0xc);
    iVar15 = *(int *)(param_2 + 0x14);
    iVar10 = 0;
    if (iVar16 == 0) {
      local_24 = 0;
      local_1c = 0;
      local_28 = 0;
    }
    else {
      local_28 = (*(int *)(param_1 + 0xc) - iVar14) / iVar16;
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar16 < 0x801) {
        local_24 = (iVar2 << 6) / iVar16 << 4;
        local_1c = ((iVar2 - iVar15) * 0x40) / iVar16 << 4;
        iVar1 = (local_1c >> 4) * iVar13;
        iVar10 = (local_24 >> 4) * iVar13;
      }
      else {
        local_1c = (int)(uVar5 - iVar1) >> 0xe;
        local_24 = (iVar2 << 6) / local_1c;
        local_1c = ((*(int *)(param_1 + 0x14) - iVar15) * 0x40) / local_1c;
        iVar1 = (iVar13 >> 4) * local_1c;
        iVar10 = (iVar13 >> 4) * local_24;
      }
      iVar15 = iVar15 + (iVar1 >> 6);
      iVar10 = iVar10 >> 6;
      iVar2 = (*(int *)(param_1 + 0x28) - *(int *)(param_2 + 0x28)) / iVar16;
      iVar14 = iVar14 + local_28 * iVar13;
    }
    iVar3 = iVar2 * 0x400;
    iVar17 = iVar2 * iVar13 + *(int *)(param_2 + 0x28);
    iVar2 = (iVar10 << 6) / (iVar15 >> 4);
    local_28 = local_28 * 0x400;
    iVar16 = *(int *)(param_2 + 0x18);
    iVar13 = *(int *)(param_2 + 0x1c);
    iVar8 = *(int *)(param_1 + 0x18) - iVar16;
    iVar4 = *(int *)(param_1 + 0x1c) - iVar13;
    uVar5 = iVar4 >> 10;
    uVar12 = iVar8 >> 10;
    iVar1 = (iVar11 + uVar9 * 0x514) * 0x18;
    *(uint *)(&DAT_0070e35c + iVar1) = uVar12 * iVar2 + iVar16;
    *(uint *)(&DAT_0070e360 + iVar1) = uVar5 * iVar2 + iVar13;
    *(int *)(&DAT_0070e350 + iVar1) = iVar14;
    uVar9 = iVar8 >> 0x1f;
    *(int *)(&DAT_0070e358 + iVar1) = iVar15;
    *(int *)(&DAT_0070e364 + iVar1) = iVar17;
    if ((int)((uVar12 ^ uVar9) - uVar9) < 0xf) {
      param_2 = iVar11 + 1;
      piVar6 = (int *)(&DAT_0070e368 + iVar1);
      piVar7 = piVar6;
      if ((int)param_2 <= *(int *)(param_1 + 0x10) >> 0x14) {
        do {
          iVar14 = iVar14 + local_28;
          iVar15 = iVar15 + local_1c;
          iVar10 = iVar10 + local_24;
          piVar7[3] = iVar16;
          *piVar7 = iVar14;
          piVar7[2] = iVar15;
          piVar6 = piVar7 + 6;
          piVar7[4] = ((iVar10 * 0x40) / (iVar15 >> 4)) * uVar5 + iVar13;
          iVar17 = iVar17 + iVar3;
          uVar9 = param_2 & 7;
          param_2 = param_2 + 1;
          piVar7[5] = *(int *)(&DAT_0067e9c0 + uVar9 * 4) + iVar17;
          piVar7 = piVar6;
        } while ((int)param_2 <= *(int *)(param_1 + 0x10) >> 0x14);
      }
    }
    else {
      uVar9 = iVar4 >> 0x1f;
      if ((int)((uVar5 ^ uVar9) - uVar9) < 0xf) {
        param_2 = iVar11 + 1;
        piVar6 = (int *)(&DAT_0070e368 + iVar1);
        piVar7 = piVar6;
        if ((int)param_2 <= *(int *)(param_1 + 0x10) >> 0x14) {
          do {
            iVar14 = iVar14 + local_28;
            iVar10 = iVar10 + local_24;
            iVar15 = iVar15 + local_1c;
            *piVar7 = iVar14;
            piVar7[2] = iVar15;
            piVar6 = piVar7 + 6;
            piVar7[3] = ((iVar10 * 0x40) / (iVar15 >> 4)) * uVar12 + iVar16;
            piVar7[4] = iVar13;
            iVar17 = iVar17 + iVar3;
            uVar9 = param_2 & 7;
            param_2 = param_2 + 1;
            piVar7[5] = *(int *)(&DAT_0067e9c0 + uVar9 * 4) + iVar17;
            piVar7 = piVar6;
          } while ((int)param_2 <= *(int *)(param_1 + 0x10) >> 0x14);
        }
      }
      else {
        param_2 = iVar11 + 1;
        piVar6 = (int *)(&DAT_0070e368 + iVar1);
        piVar7 = piVar6;
        if ((int)param_2 <= *(int *)(param_1 + 0x10) >> 0x14) {
          do {
            iVar14 = iVar14 + local_28;
            iVar10 = iVar10 + local_24;
            iVar15 = iVar15 + local_1c;
            piVar7[2] = iVar15;
            iVar1 = (iVar10 * 0x40) / (iVar15 >> 4);
            *piVar7 = iVar14;
            piVar6 = piVar7 + 6;
            piVar7[3] = uVar12 * iVar1 + iVar16;
            iVar17 = iVar17 + iVar3;
            piVar7[4] = uVar5 * iVar1 + iVar13;
            uVar9 = param_2 & 7;
            param_2 = param_2 + 1;
            piVar7[5] = *(int *)(&DAT_0067e9c0 + uVar9 * 4) + iVar17;
            piVar7 = piVar6;
          } while ((int)param_2 <= *(int *)(param_1 + 0x10) >> 0x14);
        }
      }
    }
    if (0xffffff < piVar6[-4]) {
      piVar6[-4] = 0xffffff;
    }
  }
  return;
}

