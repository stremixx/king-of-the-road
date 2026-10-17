
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005f49e0(byte param_1,int param_2,float *param_3,float *param_4,float param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  float *pfVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  fVar6 = *param_4 - *param_3;
  pfVar1 = (float *)(param_2 + 0x20);
  fVar7 = param_4[1] - param_3[1];
  fVar2 = *pfVar1;
  fVar3 = *(float *)(param_2 + 0x2c);
  fVar4 = *(float *)(param_2 + 0x24);
  fVar8 = param_4[2] - param_3[2];
  fVar5 = *(float *)(param_2 + 0x28);
  if ((float)_DAT_0064a738 < fVar2 * fVar6 + fVar4 * fVar7 + fVar8 * fVar5) {
    return 0;
  }
  fVar9 = *param_3 * fVar2 + param_3[1] * fVar4 + param_3[2] * fVar5;
  if ((param_1 & 2) == 0) {
    if (fVar9 + fVar3 < (float)_DAT_00650700) {
      return 0;
    }
    if ((float)_DAT_0064a738 < fVar4 * param_4[1] + fVar5 * param_4[2] + fVar2 * *param_4 + fVar3) {
      return 0;
    }
    fVar9 = fVar6 * fVar2 + fVar7 * fVar4 + fVar8 * fVar5;
    fVar10 = _DAT_0064b248;
    if ((float)_DAT_0064a920 <= ABS(fVar9)) {
      fVar10 = -(fVar2 * *param_3 + fVar4 * param_3[1] + fVar5 * param_3[2] + fVar3) / fVar9;
    }
    if ((float)_DAT_00651cf0 < fVar10) {
      return 0;
    }
    if (fVar10 < (float)_DAT_00650700) {
      return 0;
    }
    fVar11 = fVar6 * fVar10 + *param_3;
    fVar9 = fVar7 * fVar10 + param_3[1];
    fVar7 = fVar8 * fVar10 + param_3[2];
    fVar3 = fVar7 - *(float *)(param_2 + 0x10);
    fVar8 = fVar9 - *(float *)(param_2 + 0xc);
    fVar6 = fVar11 - *(float *)(param_2 + 8);
    if (SQRT(fVar3 * fVar3 + fVar8 * fVar8 + fVar6 * fVar6) <= (float)*(double *)(param_2 + 0x18)) {
      pfVar15 = *(float **)(param_2 + 4);
      uVar14 = (uint)*(ushort *)(param_2 + 2);
      iVar18 = 1;
      local_3c = pfVar15[uVar14 * 3 + -3] - fVar11;
      local_38 = pfVar15[uVar14 * 3 + -2] - fVar9;
      local_48 = (pfVar15[2] - fVar7) * local_38 -
                 (pfVar15[1] - fVar9) * (pfVar15[uVar14 * 3 + -1] - fVar7);
      local_44 = (pfVar15[uVar14 * 3 + -1] - fVar7) * (*pfVar15 - fVar11) -
                 (pfVar15[2] - fVar7) * local_3c;
      local_40 = (pfVar15[1] - fVar9) * local_3c - local_38 * (*pfVar15 - fVar11);
      if (1 < *(ushort *)(param_2 + 2)) {
        iVar17 = 0xc;
        do {
          pfVar15 = (float *)(iVar17 + *(int *)(param_2 + 4));
          FUN_0041ce10(*pfVar15 - fVar11,pfVar15[1] - fVar9,pfVar15[2] - fVar7);
          pfVar15 = (float *)(iVar17 + -0xc + *(int *)(param_2 + 4));
          local_24 = fVar2;
          local_20 = fVar4;
          local_1c = fVar5;
          FUN_0041ce10(*pfVar15 - fVar11,pfVar15[1] - fVar9,
                       *(float *)(iVar17 + -4 + *(int *)(param_2 + 4)) - fVar7);
          local_18 = local_30;
          local_14 = local_2c;
          local_10 = local_28;
          pfVar15 = (float *)FUN_004bde70(local_c,&local_18,&local_24);
          local_3c = *pfVar15;
          local_38 = pfVar15[1];
          local_34 = pfVar15[2];
          if (local_44 * local_38 + local_40 * local_34 + local_48 * local_3c < (float)_DAT_00650700
             ) {
            return 0;
          }
          iVar18 = iVar18 + 1;
          iVar17 = iVar17 + 0xc;
        } while (iVar18 < (int)(uint)*(ushort *)(param_2 + 2));
      }
      *param_3 = fVar11;
      param_3[1] = fVar9;
      param_3[2] = fVar7;
      *param_4 = *pfVar1;
      param_4[1] = *(float *)(param_2 + 0x24);
      param_4[2] = *(float *)(param_2 + 0x28);
      return 1;
    }
  }
  else {
    if (fVar3 + fVar9 < (float)_DAT_00650700) {
      return 0;
    }
    if ((float)_DAT_0064a738 <
        (fVar4 * param_4[1] + fVar5 * param_4[2] + *param_4 * fVar2 + fVar3) - param_5) {
      return 0;
    }
    fVar10 = fVar2 * fVar6 + fVar4 * fVar7 + fVar8 * fVar5;
    if (ABS(fVar10) < (float)_DAT_0064a738) {
      if (fVar10 < _DAT_0064b254) {
        fVar10 = (float)_DAT_00650700;
      }
      else {
        fVar10 = (float)_DAT_0064a738;
      }
    }
    fVar3 = -(((fVar3 - param_5) + fVar9) / fVar10);
    if ((_DAT_0064b254 <= fVar3) && (fVar3 <= _DAT_0064b240)) {
      fVar6 = fVar6 * fVar3 + *param_3;
      fVar7 = fVar7 * fVar3 + param_3[1];
      fVar3 = fVar8 * fVar3 + param_3[2];
      local_48 = fVar2 * param_5;
      local_44 = fVar4 * param_5;
      local_40 = fVar5 * param_5;
      local_3c = local_48;
      local_38 = local_44;
      local_34 = local_40;
      FUN_005aae40(&local_18,&local_48);
      uVar14 = (uint)*(ushort *)(param_2 + 2);
      pfVar15 = *(float **)(param_2 + 4);
      local_3c = *pfVar15 - fVar6;
      local_38 = pfVar15[1] - fVar7;
      local_34 = pfVar15[2] - fVar3;
      fVar8 = (pfVar15[uVar14 * 3 + -2] - fVar7) * local_34;
      fVar9 = (pfVar15[uVar14 * 3 + -1] - fVar3) * local_38;
      uVar16 = 1;
      fVar10 = (pfVar15[uVar14 * 3 + -1] - fVar3) * local_3c;
      fVar2 = local_34 * (pfVar15[uVar14 * 3 + -3] - fVar6);
      fVar4 = local_38 * (pfVar15[uVar14 * 3 + -3] - fVar6);
      fVar5 = (pfVar15[uVar14 * 3 + -2] - fVar7) * local_3c;
      if (1 < *(ushort *)(param_2 + 2)) {
        do {
          fVar11 = pfVar15[3] - fVar6;
          fVar12 = pfVar15[4] - fVar7;
          fVar13 = pfVar15[5] - fVar3;
          if ((fVar8 - fVar9) * (fVar13 * local_38 - fVar12 * local_34) +
              (fVar10 - fVar2) * (local_34 * fVar11 - fVar13 * local_3c) +
              (fVar12 * local_3c - local_38 * fVar11) * (fVar4 - fVar5) < (float)_DAT_0064a668)
          break;
          uVar16 = uVar16 + 1;
          pfVar15 = pfVar15 + 3;
          local_3c = fVar11;
          local_38 = fVar12;
          local_34 = fVar13;
        } while ((int)uVar16 < (int)uVar14);
      }
      if (uVar16 == uVar14) {
        *param_4 = *pfVar1;
        param_4[1] = *(float *)(param_2 + 0x24);
        param_4[2] = *(float *)(param_2 + 0x28);
        *param_3 = fVar6;
        param_3[1] = fVar7;
        param_3[2] = fVar3;
        return 1;
      }
    }
  }
  return 0;
}

