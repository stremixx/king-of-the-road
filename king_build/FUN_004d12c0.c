
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d12c0(uint param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  char *pcVar12;
  char cVar13;
  float *pfVar14;
  int *piVar15;
  float **ppfVar16;
  float10 fVar17;
  float *apfStack_268 [8];
  float local_234;
  undefined8 local_230;
  float local_228;
  float local_220;
  float local_21c;
  float local_218;
  int local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  double local_1f8;
  int local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  undefined4 local_1d0;
  undefined1 local_1cc [36];
  float local_1a8;
  float local_1a4;
  float local_1a0;
  int local_19c;
  undefined1 local_198 [48];
  undefined1 local_168 [48];
  undefined4 local_138 [64];
  int local_38;
  
  apfStack_268[7] = (float *)&local_1d0;
  iVar2 = *(int *)(param_1 + 0x5450);
  apfStack_268[6] = (float *)(param_1 - 0x10);
  local_1d0 = 0;
  apfStack_268[5] = (float *)0x4d12fa;
  local_19c = (int)apfStack_268[6];
  iVar5 = FUN_004cf640();
  if (iVar5 == 0) {
    return;
  }
  local_214 = *(int *)(DAT_006d0fd8 + 0x268);
  local_1ec = *(int *)(local_214 + 0x5460);
  piVar15 = (int *)(local_214 + 0x51d0);
  if (((*(int *)(param_1 + 0x5568) == 5) || (*(int *)(param_1 + 0x5568) == 6)) &&
     (piVar15 != (int *)0x0)) {
    *(undefined4 *)(local_1ec + 0x4078) = 0;
  }
  else {
    *(undefined4 *)(local_1ec + 0x4078) = 1;
  }
  apfStack_268[7] = (float *)local_1cc;
  apfStack_268[6] = (float *)0x4d135c;
  FUN_0057d570();
  apfStack_268[7] = (float *)local_168;
  apfStack_268[6] = (float *)0x4d136b;
  iVar5 = FUN_0057d570();
  apfStack_268[7] = (float *)local_1cc;
  apfStack_268[6] = (float *)local_198;
  pfVar14 = (float *)(iVar5 + 0x24);
  apfStack_268[5] = (float *)0x4d1382;
  pfVar6 = (float *)FUN_005aba00();
  local_200 = pfVar6[1] * *pfVar14 +
              pfVar6[4] * *(float *)(iVar5 + 0x28) + pfVar6[7] * *(float *)(iVar5 + 0x2c) +
              pfVar6[10];
  local_234 = pfVar6[2] * *pfVar14 +
              pfVar6[5] * *(float *)(iVar5 + 0x28) + pfVar6[8] * *(float *)(iVar5 + 0x2c) +
              pfVar6[0xb];
  local_204 = *pfVar14 * *pfVar6 +
              pfVar6[3] * *(float *)(iVar5 + 0x28) + pfVar6[6] * *(float *)(iVar5 + 0x2c) +
              pfVar6[9];
  apfStack_268[5] = &local_204;
  apfStack_268[4] = (float *)0x4d13e7;
  local_1fc = local_234;
  fVar17 = (float10)FUN_005aabc0();
  local_1f8 = (double)fVar17;
  *(uint *)(iVar2 + 0x4068) = *(uint *)(iVar2 + 0x4068) & 0xfffffffd;
  apfStack_268[7] = (float *)0x4d1408;
  fVar17 = (float10)FUN_005567a0();
  if (fVar17 <= (float10)_DAT_0064c0e0) {
    *(undefined4 *)(param_1 + 0x5594) = 0;
    *(undefined4 *)(iVar2 + 0x4074) = 0;
    uVar7 = *(uint *)(iVar2 + 0x4068) | 1;
    goto LAB_004d237b;
  }
  iVar5 = local_214;
  if (*(int *)(param_1 + 0x5568) == 5) {
    apfStack_268[7] = *(float **)(param_1 + 0x508c);
    apfStack_268[6] = (float *)0x4d1436;
    uVar7 = FUN_0043f700();
    iVar5 = local_214;
    if ((uVar7 & 0x80000) != 0) {
      apfStack_268[7] = *(float **)(param_1 + 0x508c);
      apfStack_268[6] = (float *)0x4d1454;
      fVar17 = (float10)FUN_0042c860();
      iVar5 = local_214;
      local_230 = (double)fVar17;
      if (local_1f8 < _DAT_0064a690) {
        *(float *)(local_214 + 0x51d8) = (float)((float10)local_1f8 * (float10)_DAT_0064a590);
      }
      puVar10 = local_138;
      apfStack_268[6] = (float *)0x13;
      do {
        puVar10[2] = 0;
        *puVar10 = 0;
        puVar10[3] = 0x3ff00000;
        puVar10 = puVar10 + 4;
        apfStack_268[6] = (float *)((int)apfStack_268[6] + -1);
      } while (apfStack_268[6] != (float *)0x0);
      apfStack_268[7] = (float *)local_138;
      apfStack_268[5] = (float *)(apfStack_268 + 6);
      apfStack_268[4] = (float *)0x4d14b6;
      FUN_00568670();
      apfStack_268[5] = (float *)0x4d14be;
      FUN_004769d0();
      if (((local_38 == 0) && (local_1f8 < _DAT_0064a928)) &&
         ((iVar11 = *(int *)(iVar5 + 0x5460),
          local_230 * _DAT_0064c0d8 < (double)*(float *)(iVar11 + 0x332c) && (*piVar15 < 0x1e)))) {
        local_234 = 1.4013e-45;
        if ((double)*(float *)(iVar11 + 0x332c) <=
            ((local_230 - _DAT_0064a6c0) + _DAT_0064ab80) * _DAT_0064c0d8) {
          if (((local_230 - _DAT_0064a6c0) + _DAT_0064a6e0) * _DAT_0064c0d8 <
              (double)*(float *)(iVar11 + 0x332c)) {
            local_234 = 2.8026e-45;
          }
        }
        else {
          local_234 = 4.2039e-45;
        }
        apfStack_268[7] = (float *)0x4d1574;
        _DAT_006f23e8 = __ftol();
        apfStack_268[7] = (float *)0x4d1590;
        _DAT_006f23ec = __ftol();
        iVar11 = *piVar15;
        if ((iVar11 == 0) || (0x13 < iVar11)) {
          *piVar15 = 1;
        }
        else if (10 < iVar11) {
          *piVar15 = iVar11 + -10;
        }
        apfStack_268[7] = &local_234;
        local_230 = (double)(int)local_234 * _DAT_0064a858;
        apfStack_268[6] = (float *)0x4d15ca;
        piVar8 = (int *)FUN_00568670();
        iVar11 = *piVar8;
        *(float *)(iVar11 + 0xf0) = (float)local_230;
        *(float *)(iVar11 + 0xf4) = local_230._4_4_;
      }
    }
  }
  if ((((*(int *)(param_1 + 0x5568) != 5) || (*piVar15 < 1)) || (0x13 < *piVar15)) ||
     (_DAT_0064a690 <= local_1f8)) {
    if (((*(int *)(param_1 + 0x5568) == 6) && (local_1f8 < _DAT_0064a690)) &&
       ((0x13 < *piVar15 && (*piVar15 < 0x1e)))) {
      apfStack_268[7] = (float *)local_198;
      apfStack_268[6] = (float *)0x4d1c26;
      iVar5 = FUN_0057d570();
      apfStack_268[5] = *(float **)(iVar5 + 0x24);
      apfStack_268[6] = *(float **)(iVar5 + 0x28);
      apfStack_268[7] = *(float **)(iVar5 + 0x2c);
      apfStack_268[4] = (float *)0x4d1c43;
      iVar5 = FUN_004cfd30();
      if (iVar5 == 0) {
        apfStack_268[7] = &local_234;
        apfStack_268[6] = (float *)0x4d1c5a;
        piVar8 = (int *)FUN_00568670();
        cVar13 = _DAT_0064a690 < *(double *)(*piVar8 + 0xe0);
        apfStack_268[7] = &local_234;
        apfStack_268[6] = (float *)0x4d1c84;
        piVar8 = (int *)FUN_00568670();
        iVar5 = local_1ec;
        if ((_DAT_0064a668 < *(double *)(*piVar8 + 0xe0)) || (*(char *)(*piVar8 + 0xc9) != '\0')) {
          cVar13 = '\x02';
LAB_004d1e4d:
          if (*piVar15 % 10 == 1) {
            apfStack_268[7] = (float *)0x4;
            apfStack_268[6] = (float *)0x4d1e63;
            FUN_0056a430();
            apfStack_268[7] = (float *)0x4d1e6b;
            fVar17 = (float10)thunk_FUN_00603580();
            *(double *)(local_1ec + 0x4098) = (double)fVar17;
            *piVar15 = *piVar15 + 1;
          }
          iVar5 = local_1ec;
          if (*piVar15 % 10 == 2) {
            local_230 = *(double *)(local_1ec + 0x4098) + _DAT_0064c0c0;
            apfStack_268[7] = (float *)0x4d1ea1;
            fVar17 = (float10)thunk_FUN_00603580();
            if (((float10)local_230 < fVar17) &&
               (_DAT_0064b240 < *(float *)(*(int *)(local_214 + 0x5460) + 0x332c))) {
              apfStack_268[7] = (float *)0x4d1ece;
              fVar17 = (float10)thunk_FUN_00603580();
              *(double *)(iVar5 + 0x4098) = (double)fVar17;
              *piVar15 = *piVar15 + 1;
            }
          }
          if ((*piVar15 % 10 == 3) &&
             (_DAT_0064b240 < *(float *)(*(int *)(local_214 + 0x5460) + 0x332c))) {
            local_230 = *(double *)(iVar5 + 0x4098) + _DAT_0064a718;
            apfStack_268[7] = (float *)0x4d1f1f;
            fVar17 = (float10)thunk_FUN_00603580();
            if ((float10)local_230 < fVar17) {
              apfStack_268[7] = (float *)local_198;
              apfStack_268[6] = (float *)0x4d1f3d;
              iVar11 = FUN_0057d570();
              local_220 = local_1a8 - *(float *)(iVar11 + 0x24);
              local_21c = local_1a4 - *(float *)(iVar11 + 0x28);
              local_218 = local_1a0 - *(float *)(iVar11 + 0x2c);
              apfStack_268[7] = &local_210;
              apfStack_268[6] = &local_1dc;
              apfStack_268[5] = (float *)0x4d1f91;
              local_210 = local_220;
              local_20c = local_21c;
              local_208 = local_218;
              FUN_005aaad0();
              apfStack_268[7] = (float *)local_198;
              apfStack_268[6] = (float *)0x4d1fa3;
              iVar11 = FUN_0057d570();
              local_230 = *(double *)(iVar11 + 0x24);
              local_228 = *(float *)(iVar11 + 0x2c);
              apfStack_268[7] = (float *)0x4d1fbf;
              iVar11 = _rand();
              local_234 = (float)(iVar11 % 100 + -0x32);
              apfStack_268[6] = (float *)local_198;
              apfStack_268[7] = (float *)((float)(int)local_234 * (float)_DAT_0064c0a8);
              apfStack_268[5] = (float *)0x4d1fe9;
              apfStack_268[7] = (float *)FUN_005ab7d0();
              apfStack_268[6] = (float *)0x4d1ff6;
              FUN_005ab0a0();
              apfStack_268[7] = (float *)0x4d1ffb;
              fVar17 = (float10)thunk_FUN_00603580();
              *(double *)(iVar5 + 0x4098) = (double)fVar17;
              local_20c = local_1d8 * _DAT_0064c0b8;
              local_208 = local_1d4 * _DAT_0064c0b8;
              local_220 = (float)local_230 + local_1dc * _DAT_0064c0b8;
              local_21c = local_20c + local_230._4_4_;
              local_218 = local_208 + local_228;
              apfStack_268[7] = (float *)0x3dcccccd;
              apfStack_268[6] = (float *)(-(uint)(param_1 != 0x10) & param_1);
              apfStack_268[5] = &local_1e8;
              apfStack_268[4] = (float *)&local_230;
              apfStack_268[3] = (float *)0x4d2083;
              local_1e8 = local_220;
              local_1e4 = local_21c;
              local_1e0 = local_218;
              apfStack_268[3] = (float *)FUN_0057d5d0();
              apfStack_268[2] = (float *)0x4d2089;
              FUN_00566b50();
            }
          }
          if (((local_1f8 < _DAT_0064ab80) && (*(float *)(iVar2 + 0x332c) < _DAT_0064b240)) &&
             (*(float *)(*(int *)(local_214 + 0x5460) + 0x332c) < _DAT_0064b240)) {
            apfStack_268[7] = (float *)0x3;
            apfStack_268[6] = (float *)0x4d20d8;
            FUN_0056a430();
            *piVar15 = 0;
          }
        }
        else if ((bool)cVar13) {
          local_230 = *(double *)(local_1ec + 0x4098) + _DAT_0064a718;
          apfStack_268[7] = (float *)0x4d1cd2;
          fVar17 = (float10)thunk_FUN_00603580();
          if ((float10)local_230 < fVar17) {
            apfStack_268[7] = (float *)local_198;
            apfStack_268[6] = (float *)0x4d1cf0;
            iVar11 = FUN_0057d570();
            local_220 = local_1a8 - *(float *)(iVar11 + 0x24);
            local_21c = local_1a4 - *(float *)(iVar11 + 0x28);
            local_218 = local_1a0 - *(float *)(iVar11 + 0x2c);
            apfStack_268[7] = &local_210;
            apfStack_268[6] = &local_1dc;
            apfStack_268[5] = (float *)0x4d1d44;
            local_210 = local_220;
            local_20c = local_21c;
            local_208 = local_218;
            FUN_005aaad0();
            apfStack_268[7] = (float *)local_198;
            apfStack_268[6] = (float *)0x4d1d56;
            iVar11 = FUN_0057d570();
            local_230 = *(double *)(iVar11 + 0x24);
            local_228 = *(float *)(iVar11 + 0x2c);
            apfStack_268[7] = (float *)0x4d1d72;
            iVar11 = _rand();
            local_234 = (float)(iVar11 % 100 + -0x32);
            apfStack_268[6] = (float *)local_198;
            apfStack_268[7] = (float *)((float)(int)local_234 * (float)_DAT_0064c0a8);
            apfStack_268[5] = (float *)0x4d1d9c;
            apfStack_268[7] = (float *)FUN_005ab7d0();
            apfStack_268[6] = (float *)0x4d1da9;
            FUN_005ab0a0();
            apfStack_268[7] = (float *)0x4d1dae;
            fVar17 = (float10)thunk_FUN_00603580();
            *(double *)(iVar5 + 0x4098) = (double)fVar17;
            local_20c = local_1d8 * _DAT_0064c0b8;
            local_208 = local_1d4 * _DAT_0064c0b8;
            local_220 = (float)local_230 + local_1dc * _DAT_0064c0b8;
            local_21c = local_20c + local_230._4_4_;
            local_218 = local_208 + local_228;
            apfStack_268[7] = (float *)0x3dcccccd;
            apfStack_268[6] = (float *)(-(uint)(param_1 != 0x10) & param_1);
            apfStack_268[5] = &local_1e8;
            apfStack_268[4] = (float *)&local_230;
            apfStack_268[3] = (float *)0x4d1e36;
            local_1e8 = local_220;
            local_1e4 = local_21c;
            local_1e0 = local_218;
            apfStack_268[3] = (float *)FUN_0057d5d0();
            apfStack_268[2] = (float *)0x4d1e3c;
            FUN_00566b50();
          }
        }
        else if (cVar13 == '\x02') goto LAB_004d1e4d;
        apfStack_268[7] = *(float **)(param_1 + 0x508c);
        apfStack_268[6] = (float *)0x4d20f7;
        uVar7 = FUN_0043f700();
        if ((uVar7 & 0x80000) != 0) {
          apfStack_268[7] = (float *)local_198;
          apfStack_268[6] = (float *)0x4d2114;
          apfStack_268[7] = (float *)FUN_0057d570();
          apfStack_268[6] = (float *)local_168;
          apfStack_268[5] = (float *)0x4d2122;
          pfVar6 = (float *)FUN_005aba00();
          local_20c = local_1a8 * pfVar6[1] + local_1a4 * pfVar6[4] + local_1a0 * pfVar6[7] +
                      pfVar6[10];
          local_208 = local_1a8 * pfVar6[2] + local_1a4 * pfVar6[5] + local_1a0 * pfVar6[8] +
                      pfVar6[0xb];
          local_210 = local_1a8 * *pfVar6 + local_1a4 * pfVar6[3] + local_1a0 * pfVar6[6] +
                      pfVar6[9];
          if (_DAT_0064b254 < local_20c) {
            apfStack_268[7] = &local_210;
            apfStack_268[6] = (float *)0x4d21b8;
            fVar17 = (float10)FUN_005aabc0();
            if (fVar17 < (float10)_DAT_0064b654) {
              apfStack_268[7] = *(float **)(param_1 + 0x508c);
              apfStack_268[6] = (float *)0x4d21d4;
              FUN_0042c650();
            }
          }
        }
        if (cVar13 == '\0') goto LAB_004d2351;
        apfStack_268[7] = (float *)local_1cc;
        apfStack_268[6] = (float *)local_198;
        apfStack_268[5] = (float *)0x4d21f1;
        pfVar6 = (float *)FUN_005aba00();
        apfStack_268[5] = (float *)0x4d21fe;
        apfStack_268[6] = (float *)(param_1 + 0x508c);
        FUN_0041d3f0();
        apfStack_268[6] = (float *)local_168;
        apfStack_268[5] = (float *)0x4d220b;
        puVar10 = (undefined4 *)FUN_00437600();
        ppfVar16 = apfStack_268;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *ppfVar16 = (float *)*puVar10;
          puVar10 = puVar10 + 1;
          ppfVar16 = ppfVar16 + 1;
        }
        pfVar14 = (float *)FUN_00439400(&local_210);
        fVar1 = *pfVar14 * *pfVar6 + pfVar6[3] * pfVar14[1] + pfVar6[6] * pfVar14[2];
        fVar3 = pfVar6[4] * pfVar14[1] + pfVar6[1] * *pfVar14 + pfVar6[7] * pfVar14[2];
        fVar4 = pfVar6[5] * pfVar14[1] + pfVar6[2] * *pfVar14 + pfVar6[8] * pfVar14[2];
        if (local_200 <= _DAT_0064b254) {
          if (fVar3 * local_200 + local_204 * fVar1 + fVar4 * local_1fc <= (float)_DAT_0064a668) {
LAB_004d230d:
            *(undefined4 *)(iVar2 + 0x4074) = 0;
          }
          else {
            *(undefined4 *)(iVar2 + 0x4074) = 1;
          }
        }
        else {
          fVar1 = fVar3 * local_200 + local_204 * fVar1 + fVar4 * local_1fc;
          if (local_1f8 <= _DAT_0064c0b0) {
            if ((float)_DAT_0064a668 < fVar1) goto LAB_004d230d;
            *(undefined4 *)(iVar2 + 0x4074) = 1;
          }
          else if (fVar1 <= (float)_DAT_0064a668) {
            *(undefined4 *)(iVar2 + 0x4074) = 0;
          }
          else {
            *(undefined4 *)(iVar2 + 0x4074) = 1;
          }
        }
        if (local_1f8 < _DAT_0064ab80) {
          fVar1 = *(float *)(*(int *)(local_214 + 0x5460) + 0x332c);
          goto LAB_004d1b93;
        }
        goto LAB_004d2351;
      }
    }
    *(undefined4 *)(iVar2 + 0x4074) = 0;
    *(undefined4 *)(param_1 + 0x5594) = 0;
  }
  else {
    *(double *)(param_1 + 0x5598) =
         *(double *)(*(int *)(param_1 + 0x24) + 0xb90) + *(double *)(param_1 + 0x5598);
    *(undefined4 *)(param_1 + 0x5594) = 1;
    if (*piVar15 % 10 == 1) {
      apfStack_268[7] = (float *)0x0;
      apfStack_268[6] = (float *)0x4d1657;
      FUN_0056a430();
      apfStack_268[7] = (float *)0x4d165f;
      fVar17 = (float10)thunk_FUN_00603580();
      *(double *)(local_1ec + 0x4098) = (double)fVar17;
      *piVar15 = *piVar15 + 1;
    }
    iVar11 = local_1ec;
    if (*piVar15 % 10 == 2) {
      local_230 = *(double *)(local_1ec + 0x4098) + _DAT_0064c0c8;
      apfStack_268[7] = (float *)0x4d1695;
      fVar17 = (float10)thunk_FUN_00603580();
      if (((float10)local_230 < fVar17) &&
         (_DAT_0064b240 < *(float *)(*(int *)(iVar5 + 0x5460) + 0x332c))) {
        apfStack_268[7] = (float *)0x4d16be;
        fVar17 = (float10)thunk_FUN_00603580();
        *(double *)(iVar11 + 0x4098) = (double)fVar17;
        if (*piVar15 < 10) {
          apfStack_268[7] = (float *)0x1;
          apfStack_268[6] = (float *)0x4d16d0;
          FUN_0056a430();
          *piVar15 = *piVar15 + 1;
        }
        else {
          apfStack_268[7] = (float *)0x0;
          apfStack_268[6] = (float *)0x4d16e1;
          FUN_0056a430();
        }
      }
    }
    if (*piVar15 % 10 == 3) {
      local_230 = *(double *)(iVar11 + 0x4098) + _DAT_0064c0c0;
      apfStack_268[7] = (float *)0x4d1708;
      fVar17 = (float10)thunk_FUN_00603580();
      if (((float10)local_230 < fVar17) &&
         (_DAT_0064b240 < *(float *)(*(int *)(iVar5 + 0x5460) + 0x332c))) {
        *piVar15 = *piVar15 + 1;
        apfStack_268[7] = (float *)0x4d1733;
        fVar17 = (float10)thunk_FUN_00603580();
        *(double *)(iVar11 + 0x4098) = (double)fVar17;
      }
    }
    if ((*piVar15 % 10 == 4) && (_DAT_0064b240 < *(float *)(*(int *)(iVar5 + 0x5460) + 0x332c))) {
      local_230 = *(double *)(iVar11 + 0x4098) + _DAT_0064a718;
      apfStack_268[7] = (float *)0x4d177e;
      fVar17 = (float10)thunk_FUN_00603580();
      if ((float10)local_230 < fVar17) {
        apfStack_268[7] = (float *)local_198;
        apfStack_268[6] = (float *)0x4d179c;
        iVar9 = FUN_0057d570();
        local_220 = local_1a8 - *(float *)(iVar9 + 0x24);
        local_21c = local_1a4 - *(float *)(iVar9 + 0x28);
        local_218 = local_1a0 - *(float *)(iVar9 + 0x2c);
        apfStack_268[7] = &local_1e8;
        apfStack_268[6] = &local_1dc;
        apfStack_268[5] = (float *)0x4d17f0;
        local_1e8 = local_220;
        local_1e4 = local_21c;
        local_1e0 = local_218;
        FUN_005aaad0();
        apfStack_268[7] = (float *)local_198;
        apfStack_268[6] = (float *)0x4d1802;
        iVar9 = FUN_0057d570();
        local_230 = *(double *)(iVar9 + 0x24);
        local_228 = *(float *)(iVar9 + 0x2c);
        apfStack_268[7] = (float *)0x4d181e;
        iVar9 = _rand();
        local_234 = (float)(iVar9 % 100 + -0x32);
        apfStack_268[6] = (float *)local_198;
        apfStack_268[7] = (float *)((float)(int)local_234 * (float)_DAT_0064a648);
        apfStack_268[5] = (float *)0x4d1848;
        apfStack_268[7] = (float *)FUN_005ab7d0();
        apfStack_268[6] = (float *)0x4d1855;
        FUN_005ab0a0();
        apfStack_268[7] = (float *)0x4d185a;
        fVar17 = (float10)thunk_FUN_00603580();
        *(double *)(iVar11 + 0x4098) = (double)fVar17;
        local_1e4 = local_1d8 * _DAT_0064c0b8;
        local_1e0 = local_1d4 * _DAT_0064c0b8;
        local_220 = (float)local_230 + local_1dc * _DAT_0064c0b8;
        local_21c = local_1e4 + local_230._4_4_;
        local_218 = local_1e0 + local_228;
        apfStack_268[7] = (float *)0x3dcccccd;
        apfStack_268[6] = (float *)(-(uint)(param_1 != 0x10) & param_1);
        apfStack_268[5] = &local_210;
        apfStack_268[4] = (float *)&local_230;
        apfStack_268[3] = (float *)0x4d18e2;
        local_210 = local_220;
        local_20c = local_21c;
        local_208 = local_218;
        apfStack_268[3] = (float *)FUN_0057d5d0();
        apfStack_268[2] = (float *)0x4d18e8;
        FUN_00566b50();
      }
    }
    if (((local_1f8 < _DAT_0064ab80) && (*(float *)(iVar2 + 0x332c) < _DAT_0064b240)) &&
       (*(float *)(*(int *)(iVar5 + 0x5460) + 0x332c) < _DAT_0064b240)) {
      apfStack_268[7] = (float *)0x2;
      apfStack_268[6] = (float *)0x4d1933;
      FUN_0056a430();
      *piVar15 = 0;
    }
    apfStack_268[7] = *(float **)(param_1 + 0x508c);
    apfStack_268[6] = (float *)0x4d1952;
    uVar7 = FUN_0043f700();
    if ((uVar7 & 0x80000) != 0) {
      apfStack_268[7] = (float *)local_198;
      apfStack_268[6] = (float *)0x4d196f;
      apfStack_268[7] = (float *)FUN_0057d570();
      apfStack_268[6] = (float *)local_168;
      apfStack_268[5] = (float *)0x4d197d;
      pfVar6 = (float *)FUN_005aba00();
      local_20c = local_1a0 * pfVar6[7] + local_1a8 * pfVar6[1] + local_1a4 * pfVar6[4] + pfVar6[10]
      ;
      local_208 = local_1a0 * pfVar6[8] + local_1a8 * pfVar6[2] + local_1a4 * pfVar6[5] +
                  pfVar6[0xb];
      local_210 = local_1a8 * *pfVar6 + local_1a0 * pfVar6[6] + local_1a4 * pfVar6[3] + pfVar6[9];
      if (_DAT_0064b254 < local_20c) {
        apfStack_268[7] = &local_210;
        apfStack_268[6] = (float *)0x4d1a13;
        fVar17 = (float10)FUN_005aabc0();
        if (fVar17 < (float10)_DAT_0064b654) {
          apfStack_268[7] = *(float **)(param_1 + 0x508c);
          apfStack_268[6] = (float *)0x4d1a2f;
          FUN_0042c650();
        }
      }
    }
    apfStack_268[7] = (float *)local_1cc;
    apfStack_268[6] = (float *)local_198;
    apfStack_268[5] = (float *)0x4d1a44;
    pfVar6 = (float *)FUN_005aba00();
    apfStack_268[5] = (float *)0x4d1a51;
    apfStack_268[6] = (float *)(param_1 + 0x508c);
    FUN_0041d3f0();
    apfStack_268[6] = (float *)local_168;
    apfStack_268[5] = (float *)0x4d1a5e;
    puVar10 = (undefined4 *)FUN_00437600();
    ppfVar16 = apfStack_268;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppfVar16 = (float *)*puVar10;
      puVar10 = puVar10 + 1;
      ppfVar16 = ppfVar16 + 1;
    }
    pfVar14 = (float *)FUN_00439400(&local_210);
    fVar1 = *pfVar14 * *pfVar6 + pfVar6[3] * pfVar14[1] + pfVar6[6] * pfVar14[2];
    fVar3 = pfVar6[4] * pfVar14[1] + pfVar6[1] * *pfVar14 + pfVar6[7] * pfVar14[2];
    fVar4 = pfVar6[5] * pfVar14[1] + pfVar6[2] * *pfVar14 + pfVar6[8] * pfVar14[2];
    if (local_200 <= _DAT_0064b254) {
      if (fVar3 * local_200 + local_204 * fVar1 + fVar4 * local_1fc <= (float)_DAT_0064a668) {
LAB_004d1b60:
        *(undefined4 *)(iVar2 + 0x4074) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x4074) = 1;
      }
    }
    else {
      fVar1 = fVar3 * local_200 + local_204 * fVar1 + fVar4 * local_1fc;
      if (local_1f8 <= _DAT_0064c0b0) {
        if ((float)_DAT_0064a668 < fVar1) goto LAB_004d1b60;
        *(undefined4 *)(iVar2 + 0x4074) = 1;
      }
      else if (fVar1 <= (float)_DAT_0064a668) {
        *(undefined4 *)(iVar2 + 0x4074) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x4074) = 1;
      }
    }
    if (local_1f8 < _DAT_0064ab80) {
      fVar1 = *(float *)(*(int *)(local_214 + 0x5460) + 0x332c);
LAB_004d1b93:
      if ((fVar1 < _DAT_0064b240) || ((_DAT_0064b254 < local_200 && (_DAT_0064a6e0 < local_1f8)))) {
        uVar7 = *(uint *)(iVar2 + 0x4068);
        *(uint *)(iVar2 + 0x4068) = uVar7 | 2;
        uVar7 = uVar7 & 0xfffffffe | 2;
        goto LAB_004d237b;
      }
    }
  }
LAB_004d2351:
  uVar7 = *(uint *)(iVar2 + 0x4068) & 0xfffffffe;
LAB_004d237b:
  *(uint *)(iVar2 + 0x4068) = uVar7;
  if ((DAT_007206c8 != 0) &&
     (pcVar12 = s__Vehicle__run_car_00671a30, cVar13 = s__Vehicle__run_car_00671a30[0],
     DAT_0071d774 != 0)) {
    for (; (cVar13 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar13 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar13;
      cVar13 = *pcVar12;
    }
  }
  apfStack_268[7] = (float *)0x4d23d7;
  FUN_00556180();
  if ((DAT_007206c8 != 0) &&
     (pcVar12 = s__Vehicle__run_end_006719e0, cVar13 = s__Vehicle__run_end_006719e0[0],
     DAT_0071d774 != 0)) {
    for (; (cVar13 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar13 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar13;
      cVar13 = *pcVar12;
    }
  }
  apfStack_268[7] = (float *)&local_1d0;
  apfStack_268[6] = (float *)local_19c;
  apfStack_268[5] = (float *)0x4d2438;
  FUN_004cfe90();
  return;
}

