
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00504db0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  undefined4 *puVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  float *pfVar13;
  undefined1 uVar14;
  float *pfVar15;
  float fVar16;
  int *piVar17;
  int local_164;
  float *local_160;
  float *local_15c;
  float *local_158;
  float local_154;
  float local_150;
  float *local_148;
  int local_144;
  float *local_140;
  int local_13c;
  int local_134;
  float *local_130;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined1 local_dc [4];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c4;
  float local_c0;
  float local_bc;
  int local_b8 [8];
  int aiStack_98 [8];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  float local_60 [2];
  undefined4 local_58 [22];
  
  FUN_005aba00(&local_118,param_2);
  param_1[0x31] = DAT_007015b0;
  param_1[0x32] = DAT_007015b4;
  param_1[0x33] = DAT_007015b8;
  param_1[0x885] = DAT_007015b0;
  param_1[0x886] = DAT_007015b4;
  iVar11 = 8;
  param_1[0x887] = DAT_007015b8;
  param_1[0x9ac] = 0.0;
  local_134 = 0;
  puVar8 = local_58;
  do {
    puVar8[-2] = 0;
    puVar8[-1] = 0;
    *puVar8 = 0;
    puVar8 = puVar8 + 3;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  local_164 = 0;
  if (0 < (int)param_1[0x375]) {
    pfVar13 = param_1 + 0x730;
    pfVar10 = param_1 + 0x9a4;
    pfVar15 = local_60;
    do {
      pfVar13[-0x36e] = DAT_007015b0;
      pfVar13[-0x36d] = DAT_007015b4;
      pfVar13[-0x36c] = DAT_007015b8;
      pfVar10[-0x5ea] = 0.0;
      *pfVar10 = 0.01;
      pfVar10[-8] = 0.5;
      fVar12 = param_2[1];
      fVar16 = pfVar13[-1];
      fVar1 = pfVar13[1];
      fVar2 = param_2[7];
      *pfVar15 = pfVar13[1] * param_2[6] + *pfVar13 * param_2[3] + pfVar13[-1] * *param_2 +
                 param_2[9];
      fVar3 = param_2[8];
      fVar4 = pfVar13[1];
      fVar5 = param_2[5];
      fVar6 = *pfVar13;
      pfVar15[1] = *pfVar13 * param_2[4] + fVar1 * fVar2 + fVar12 * fVar16 + param_2[10];
      pfVar15[2] = pfVar13[-1] * param_2[2] + fVar5 * fVar6 + fVar3 * fVar4 + param_2[0xb];
      local_164 = local_164 + 1;
      pfVar13 = pfVar13 + 3;
      pfVar10 = pfVar10 + 1;
      pfVar15 = pfVar15 + 3;
    } while (local_164 < (int)param_1[0x375]);
  }
  fVar12 = param_1[0x375];
  iVar11 = 0;
  local_130 = (float *)0xc2c80000;
  local_154 = 100.0;
  local_150 = 100.0;
  if (0 < (int)fVar12) {
    pfVar13 = param_1 + 0x730;
    piVar17 = local_b8;
    for (; pfVar10 = (float *)_DAT_0064c970, fVar12 != 0.0; fVar12 = (float)((int)fVar12 + -1)) {
      *piVar17 = 0;
      piVar17 = piVar17 + 1;
    }
    do {
      if (*pfVar13 <= local_150) {
        if (local_154 < *pfVar13) {
          local_150 = *pfVar13;
          local_13c = iVar11;
        }
        else {
          local_150 = local_154;
          local_13c = (int)local_140;
          local_154 = *pfVar13;
          local_140 = (float *)iVar11;
        }
      }
      pfVar15 = local_130;
      if ((float)pfVar10 <= *pfVar13) {
        if (*pfVar13 < (float)local_130) {
          pfVar10 = (float *)*pfVar13;
          local_144 = iVar11;
        }
        else {
          local_144 = (int)local_148;
          local_148 = (float *)iVar11;
          pfVar15 = (float *)*pfVar13;
          pfVar10 = local_130;
        }
      }
      local_130 = pfVar15;
      iVar11 = iVar11 + 1;
      pfVar13 = pfVar13 + 3;
    } while (iVar11 < (int)param_1[0x375]);
  }
  if (param_1[0x372] < _DAT_0064b254) {
    local_b8[(int)local_140] = 1;
    local_b8[local_13c] = 1;
  }
  else {
    local_b8[(int)local_148] = 1;
    local_b8[local_144] = 1;
  }
  iVar11 = 0;
  if (0 < (int)param_1[0x375]) {
    pfVar13 = local_60;
    do {
      if (local_b8[iVar11] != 0) {
        iVar9 = FUN_005036b0(0,pfVar13,0,iVar11);
        aiStack_98[iVar11] = iVar9;
      }
      iVar11 = iVar11 + 1;
      pfVar13 = pfVar13 + 3;
    } while (iVar11 < (int)param_1[0x375]);
  }
  fVar12 = param_1[0x375];
  local_164 = 0;
  local_c4 = DAT_00701594 * param_2[3] + DAT_00701590 * *param_2 + DAT_00701598 * param_2[6];
  local_c0 = DAT_00701594 * param_2[4] + DAT_00701598 * param_2[7] + DAT_00701590 * param_2[1];
  local_bc = DAT_00701590 * param_2[2] + DAT_00701594 * param_2[5] + DAT_00701598 * param_2[8];
  if (0 < (int)fVar12) {
    local_148 = local_60;
    local_140 = param_1 + 0xd44;
    local_130 = param_1 + 0x731;
    pfVar13 = param_1;
    do {
      local_160 = pfVar13 + 0x3e;
      if (local_b8[local_164] == 0) {
        iVar11 = 0;
        local_154 = 1000.0;
        local_15c = (float *)0xffffffff;
        if (0 < (int)fVar12) {
          local_158 = param_1 + 0x44;
          piVar17 = local_b8;
          pfVar10 = param_1 + 0x731;
          do {
            if (((*piVar17 != 0) && (*(short *)local_158 != 0)) &&
               (fVar16 = (*pfVar10 - *local_130) * (*pfVar10 - *local_130) +
                         (pfVar10[-1] - local_130[-1]) * (pfVar10[-1] - local_130[-1]) +
                         (pfVar10[-2] - local_130[-2]) * (pfVar10[-2] - local_130[-2]),
               fVar16 < local_154)) {
              local_15c = (float *)iVar11;
              local_154 = fVar16;
            }
            iVar11 = iVar11 + 1;
            pfVar10 = pfVar10 + 3;
            piVar17 = piVar17 + 1;
            local_158 = local_158 + 0x3e;
          } while (iVar11 < (int)fVar12);
          if (-1 < (int)local_15c) {
            pfVar10 = param_1 + (int)local_15c * 0x34 + 0xd44;
            pfVar15 = local_140;
            for (iVar11 = 0x34; iVar11 != 0; iVar11 = iVar11 + -1) {
              *pfVar15 = *pfVar10;
              pfVar10 = pfVar10 + 1;
              pfVar15 = pfVar15 + 1;
            }
            pfVar10 = param_1 + ((int)local_15c + 1) * 0x3e;
            pfVar15 = local_160;
            for (iVar11 = 0x3e; iVar11 != 0; iVar11 = iVar11 + -1) {
              *pfVar15 = *pfVar10;
              pfVar10 = pfVar10 + 1;
              pfVar15 = pfVar15 + 1;
            }
            pfVar10 = (float *)FUN_004e5d20(local_dc,param_1 + ((int)local_15c + 1) * 0x3e,
                                            param_1 + (int)local_15c * 0x3e + 0x41,local_148,
                                            &local_c4);
            *local_160 = *pfVar10;
            pfVar13[0x3f] = pfVar10[1];
            pfVar13[0x40] = pfVar10[2];
            aiStack_98[local_164] = aiStack_98[(int)local_15c];
          }
        }
      }
      local_130 = local_130 + 3;
      local_148 = local_148 + 3;
      fVar12 = param_1[0x375];
      local_164 = local_164 + 1;
      local_140 = local_140 + 0x34;
      pfVar13 = local_160;
    } while (local_164 < (int)fVar12);
  }
  local_164 = 0;
  if (0 < (int)param_1[0x375]) {
    local_158 = local_60;
    local_15c = param_1 + 0x669;
    pfVar10 = param_1 + 0x386;
    pfVar13 = param_1 + 0x1a;
    pfVar15 = param_1;
    do {
      local_160 = pfVar15 + 0x3e;
      if ((local_b8[local_164] == 0) && (aiStack_98[local_164] != 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if ((local_b8[local_164] == 0) || (aiStack_98[local_164] != 1)) {
        if (!bVar7) {
          if (aiStack_98[local_164] == 1) goto LAB_0050534b;
          goto LAB_00505436;
        }
      }
      else {
LAB_0050534b:
        pfVar13[-1] = *local_160;
        *pfVar13 = pfVar15[0x3f];
        pfVar13[1] = pfVar15[0x40];
        pfVar13[0x5f7] =
             local_10c * *pfVar13 + local_100 * pfVar13[1] + local_118 * pfVar13[-1] + local_f4;
        pfVar13[0x5f8] =
             local_114 * pfVar13[-1] + local_108 * *pfVar13 + local_fc * pfVar13[1] + local_f0;
        pfVar13[0x5f9] =
             local_110 * pfVar13[-1] + local_104 * *pfVar13 + local_f8 * pfVar13[1] + local_ec;
        fVar12 = (pfVar13[0x717] - pfVar10[0x357]) - pfVar13[0x5f9];
        *pfVar10 = fVar12;
        fVar16 = (float)_DAT_0064a668;
        pfVar10[-0x10] = fVar12;
        if (((fVar12 < fVar16) || (pfVar10[0x461] < fVar12)) && (!bVar7)) {
LAB_00505436:
          iVar11 = FUN_005036b0(0,local_158,0,local_164);
          aiStack_98[local_164] = iVar11;
          if (iVar11 != 0) {
            pfVar13[-1] = *local_160;
            *pfVar13 = pfVar15[0x3f];
            pfVar13[1] = pfVar15[0x40];
            pfVar13[0x5f7] =
                 local_10c * *pfVar13 + local_100 * pfVar13[1] + local_118 * pfVar13[-1] + local_f4;
            pfVar13[0x5f8] =
                 local_114 * pfVar13[-1] + local_108 * *pfVar13 + local_fc * pfVar13[1] + local_f0;
            pfVar13[0x5f9] =
                 local_110 * pfVar13[-1] + local_104 * *pfVar13 + local_f8 * pfVar13[1] + local_ec;
            fVar12 = (pfVar13[0x717] - pfVar10[0x357]) - pfVar13[0x5f9];
            *pfVar10 = fVar12;
            pfVar10[-0x10] = fVar12;
          }
        }
      }
      if (aiStack_98[local_164] == 0) {
        fVar2 = DAT_00701590 * _DAT_0064c7a8;
        fVar4 = DAT_00701594 * _DAT_0064c7a8;
        fVar3 = DAT_00701598 * _DAT_0064c7a8;
        local_d0 = fVar3 * param_2[6] + fVar4 * param_2[3] + fVar2 * *param_2;
        local_cc = fVar4 * param_2[4] + fVar3 * param_2[7] + fVar2 * param_2[1];
        fVar12 = param_2[8];
        fVar16 = param_2[5];
        fVar1 = param_2[2];
        local_e8 = *local_158 - local_d0;
        local_e4 = local_158[1] - local_cc;
        pfVar13[-1] = local_e8;
        local_e0 = local_158[2] - (fVar2 * fVar1 + fVar4 * fVar16 + fVar3 * fVar12);
        *pfVar13 = local_e4;
        pfVar13[1] = local_e0;
        local_d8 = DAT_00701594 * _DAT_0064c7a8;
        local_d4 = DAT_00701598 * _DAT_0064c7a8;
        pfVar13[0x5f7] = pfVar13[0x715] - DAT_00701590 * _DAT_0064c7a8;
        pfVar13[0x5f8] = pfVar13[0x716] - local_d8;
        pfVar13[0x5f9] = pfVar13[0x717] - local_d4;
        *pfVar10 = 1000.0;
        pfVar10[-0x10] = pfVar10[0x461];
        pfVar10[-0x3e] = 0.0;
        *(undefined2 *)local_15c = 1;
      }
      else {
        FUN_005aae00(local_6c,pfVar15 + 0x41);
        param_1[0x9ac] = pfVar10[0x616] + param_1[0x9ac];
        FUN_005aae00(local_78,pfVar13 + -1);
        local_134 = local_134 + 1;
        if (pfVar10[-0x10] <= pfVar10[0x461]) {
          if (pfVar10[-0x10] < _DAT_0064b254) {
            pfVar10[-0x10] = 0.0;
          }
          pfVar10[-0x3e] =
               (param_1[0x990] / (float)(int)param_1[0x375]) * ABS(pfVar15[0x43]) *
               (float)_DAT_0064c6a8;
          *(undefined2 *)local_15c = 0;
        }
        else {
          pfVar10[-0x10] = pfVar10[0x461];
          *(undefined2 *)local_15c = 1;
        }
      }
      local_15c = (float *)((int)local_15c + 2);
      local_158 = local_158 + 3;
      local_164 = local_164 + 1;
      pfVar10 = pfVar10 + 1;
      pfVar13 = pfVar13 + 3;
      pfVar15 = local_160;
    } while (local_164 < (int)param_1[0x375]);
  }
  pfVar13 = param_1 + 0x389;
  if (param_1[0x389] <= param_1[0x388]) {
    pfVar13 = param_1 + 0x388;
  }
  pfVar10 = param_1 + 0x386;
  if (param_1[0x386] < param_1[0x387]) {
    pfVar10 = param_1 + 0x387;
  }
  if (*pfVar13 <= *pfVar10) {
    pfVar13 = pfVar10;
  }
  param_1[0x38e] = *pfVar13;
  if (local_134 == 0) {
    param_1[0x31] = DAT_00701590;
    param_1[0x32] = DAT_00701594;
    param_1[0x33] = DAT_00701598;
    param_1[0x885] = DAT_007015b0;
    param_1[0x886] = DAT_007015b4;
    param_1[0x887] = DAT_007015b8;
  }
  else {
    FUN_005aab70();
    fVar12 = (float)_DAT_0064a660;
    param_1[0x9ac] = (fVar12 / (float)local_134) * param_1[0x9ac];
    FUN_005aad10(local_78,fVar12 / (float)local_134);
  }
  fVar12 = (float)FUN_00505fd0(1);
  param_1[0x230] = fVar12;
  fVar12 = (float)FUN_00505fd0(3);
  param_1[0x232] = fVar12;
  if (((param_1[0x22f] == 0.0) || (param_1[0x230] == 0.0)) ||
     ((param_1[0x231] == 0.0 || (fVar12 == 0.0)))) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = 1.4013e-45;
  }
  fVar16 = param_1[0x375];
  param_1[0x22e] = fVar12;
  if (((fVar16 == 4.2039e-45) && (DAT_006cd29c <= (int)param_1[0x233])) &&
     ((int)param_1[0x233] < DAT_006cd2a0)) {
    if ((*(short *)(param_1 + 0x669) == 0) || (*(short *)((int)param_1 + 0x19a6) == 0)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
    }
    *(undefined1 *)((int)param_1 + 0x19b7) = uVar14;
    *(undefined1 *)((int)param_1 + 0x19b5) = *(undefined1 *)(param_1 + 0x66a);
    if ((*(short *)(param_1 + 0x669) == 0) || (*(short *)(param_1 + 0x66a) == 0)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
    }
    *(undefined1 *)((int)param_1 + 0x19b6) = uVar14;
    if ((*(short *)((int)param_1 + 0x19a6) != 0) && (*(short *)(param_1 + 0x66a) != 0)) {
      uVar14 = 1;
      goto LAB_005059db;
    }
  }
  else {
    if ((*(short *)(param_1 + 0x66a) == 0) || (*(short *)((int)param_1 + 0x19aa) == 0)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
    }
    *(undefined1 *)((int)param_1 + 0x19b7) = uVar14;
    if ((*(short *)(param_1 + 0x669) == 0) || (*(short *)((int)param_1 + 0x19a6) == 0)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
    }
    *(undefined1 *)((int)param_1 + 0x19b5) = uVar14;
    if ((*(short *)(param_1 + 0x669) == 0) || (*(short *)(param_1 + 0x66a) == 0)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
    }
    *(undefined1 *)((int)param_1 + 0x19b6) = uVar14;
    if ((*(short *)((int)param_1 + 0x19a6) != 0) && (*(short *)((int)param_1 + 0x19aa) != 0)) {
      uVar14 = 1;
      goto LAB_005059db;
    }
  }
  uVar14 = 0;
LAB_005059db:
  pfVar13 = param_1 + 0x669;
  *(undefined1 *)(param_1 + 0x66e) = uVar14;
  *(undefined1 *)(param_1 + 0x66d) = 1;
  *(undefined1 *)((int)param_1 + 0x19ba) = 0;
  if (0 < (int)fVar16) {
    do {
      if ((*(char *)(param_1 + 0x66d) == '\0') || (*(short *)pfVar13 == 0)) {
        uVar14 = 0;
      }
      else {
        uVar14 = 1;
      }
      *(undefined1 *)(param_1 + 0x66d) = uVar14;
      if ((*(char *)((int)param_1 + 0x19ba) == '\0') && (*(short *)pfVar13 == 0)) {
        uVar14 = 0;
      }
      else {
        uVar14 = 1;
      }
      pfVar13 = (float *)((int)pfVar13 + 2);
      fVar16 = (float)((int)fVar16 + -1);
      *(undefined1 *)((int)param_1 + 0x19ba) = uVar14;
    } while (fVar16 != 0.0);
  }
  if ((((*(char *)((int)param_1 + 0x19b5) == '\0') && (*(char *)((int)param_1 + 0x19b6) == '\0')) &&
      (*(char *)((int)param_1 + 0x19b7) == '\0')) && (*(char *)(param_1 + 0x66e) == '\0')) {
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x19b9) = uVar14;
  FUN_00505a90(0);
  return local_134;
}

