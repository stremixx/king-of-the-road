
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00562d10(float *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  float *pfVar7;
  uint uVar8;
  double *pdVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  char *pcVar16;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  undefined8 local_20c;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  double local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  undefined8 local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  uint local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_40;
  undefined1 local_3c [48];
  undefined1 local_c [12];
  
  fVar14 = (float10)FUN_004e1fd9();
  local_234 = (float)fVar14;
  local_1d8 = (double)(fVar14 * (float10)_DAT_0064a770);
  fVar14 = (float10)FUN_0061d200();
  param_1[0x323] = (float)fVar14;
  fVar14 = (float10)FUN_0061d200();
  param_1[0x324] = (float)fVar14;
  param_1[0x325] = param_1[0x323];
  fVar14 = (float10)FUN_0061d200();
  param_1[0x326] = (float)fVar14;
  param_1[0x327] = param_1[0x323];
  fVar6 = DAT_00701580 * *param_1 + DAT_00701584 * param_1[3] + DAT_00701588 * param_1[6];
  fVar1 = DAT_00701580 * param_1[1] + DAT_00701584 * param_1[4] + DAT_00701588 * param_1[7];
  fVar2 = DAT_00701580 * param_1[2] + DAT_00701584 * param_1[5] + DAT_00701588 * param_1[8];
  local_244 = fVar2 * DAT_00701594 - fVar1 * DAT_00701598;
  local_240 = fVar6 * DAT_00701598 - fVar2 * DAT_00701590;
  fVar6 = fVar1 * DAT_00701590 - fVar6 * DAT_00701594;
  local_260 = local_240 * DAT_00701598 - fVar6 * DAT_00701594;
  local_25c = fVar6 * DAT_00701590 - local_244 * DAT_00701598;
  local_258 = local_244 * DAT_00701594 - local_240 * DAT_00701590;
  local_190 = local_260;
  local_18c = local_25c;
  local_188 = local_258;
  FUN_005aaad0(&local_230,&local_260);
  local_150 = param_1[0xd] * param_1[0x19] +
              param_1[0x1a] * param_1[0x10] + param_1[0x13] * param_1[0x1b];
  dVar3 = _DAT_0064ba38;
  if (_DAT_0064b254 < local_150) {
    dVar3 = _DAT_0064a660;
  }
  local_218 = (float)dVar3;
  local_21c = 1.0;
  local_250 = 0.0;
  fVar6 = local_234 / ((float)_DAT_0064a660 - param_1[0x325]);
  local_24c = 0.0;
  local_248 = 0.0;
  local_13c = 0.0;
  local_138 = 0.0;
  local_134 = 0.0;
  iVar11 = 0;
  pfVar10 = param_1 + 9;
  local_1bc = (fVar6 + fVar6) * local_150;
  local_258 = -DAT_00701598;
  local_200 = (float)(int)param_1[0x361] * (float)_DAT_0064a5a8;
  local_1b8 = -DAT_00701590 * local_200;
  local_1b4 = -DAT_00701594 * local_200;
  local_1b0 = local_258 * local_200;
  local_190 = -local_1b8;
  local_18c = -local_1b4;
  local_188 = -local_1b0;
  local_1b8 = local_1b8 + local_1b8;
  local_1b4 = local_1b4 + local_1b4;
  local_1b0 = local_1b0 + local_1b0;
  do {
    fVar6 = local_21c - _DAT_0064b240;
    local_260 = local_190 * fVar6;
    local_25c = fVar6 * local_18c;
    local_244 = local_260 + *pfVar10;
    local_240 = local_25c + param_1[10];
    local_23c = fVar6 * local_188 + param_1[0xb];
    local_100 = local_1b4 * local_21c;
    local_fc = local_1b0 * local_21c;
    local_118 = local_22c * local_1bc;
    local_114 = local_228 * local_1bc;
    local_10c = local_100 + local_118;
    local_108 = local_fc + local_114;
    local_184 = local_230 * local_1bc + local_1b8 * local_21c + *pfVar10;
    local_180 = local_10c + param_1[10];
    local_17c = local_108 + param_1[0xb];
    local_178 = local_244;
    local_174 = local_240;
    local_170 = local_23c;
    local_148 = local_184;
    local_144 = local_180;
    local_140 = local_17c;
    uVar5 = FUN_004e6af1(param_1[0x18],param_1[0x366],0x3f800000,&local_178,&local_148,&local_250,
                         &local_13c);
    if ((uVar5 & 1) != 0) {
      param_1[0x319] = local_250;
      param_1[0x31a] = local_24c;
      param_1[0x31b] = local_248;
      break;
    }
    local_21c = local_21c * _DAT_0064b3f8;
    iVar11 = iVar11 + 1;
  } while (iVar11 < 4);
  if (iVar11 == 4) {
    fVar6 = (float)(int)param_1[0x361];
    local_260 = fVar6 * DAT_00701590;
    local_25c = fVar6 * DAT_00701594;
    local_190 = local_260 * _DAT_0064b2f4;
    local_18c = local_25c * _DAT_0064b2f4;
    local_23c = fVar6 * DAT_00701598 * _DAT_0064b2f4;
    local_244 = *pfVar10 - local_190;
    local_240 = param_1[10] - local_18c;
    param_1[0x319] = local_244;
    local_23c = param_1[0xb] - local_23c;
    param_1[0x31a] = local_240;
    param_1[0x31b] = local_23c;
  }
  if ((param_1[0x35a] == 0.0) && (param_1[0x362] != 0.0)) {
    fVar14 = (float10)fpatan((float10)param_1[0xc] * (float10)param_1[0x363] +
                             (float10)param_1[0xf] * (float10)param_1[0x364] +
                             (float10)param_1[0x12] * (float10)param_1[0x365] +
                             (float10)param_1[0x15],
                             (float10)param_1[0x10] * (float10)param_1[0x364] +
                             (float10)param_1[0xd] * (float10)param_1[0x363] +
                             (float10)param_1[0x13] * (float10)param_1[0x365] +
                             (float10)param_1[0x16]);
    param_1[0x35a] = 0.0;
    fVar14 = -fVar14;
    local_200 = ((float)_DAT_0064a660 / ((float)_DAT_0064a660 - param_1[0x326])) *
                ABS(local_234 * param_1[0x1e]) + (float)_DAT_0064a590;
    if (((float10)_DAT_0064b254 < fVar14 * (float10)param_1[0x1e]) &&
       (fVar15 = ABS(fVar14), fVar15 < (float10)local_200)) {
      if ((float10)local_200 * (float10)_DAT_0064b2f0 <= fVar15) {
        fVar14 = fVar14 * (fVar15 / (float10)local_200 - (float10)_DAT_0064ed08) *
                 (float10)_DAT_0064ed00;
      }
      else {
        if (param_1[0x329] != 1.4013e-44) {
          fVar14 = (float10)_DAT_0064b254;
          goto LAB_00563374;
        }
        fVar14 = fVar14 * (float10)_DAT_0064b958;
      }
      if (fVar14 <= (float10)_DAT_0064a668) {
        fVar6 = (float)__ftol();
        param_1[0x35a] = fVar6;
        fVar14 = extraout_ST0_00;
      }
      else {
        fVar6 = (float)__ftol();
        param_1[0x35a] = fVar6;
        fVar14 = extraout_ST0;
      }
    }
LAB_00563374:
    fVar6 = param_1[0x329];
    param_1[0x35d] = (float)fVar14;
    if (((fVar6 == 4.2039e-45) || (fVar6 == 1.54143e-44)) ||
       ((fVar6 == 1.4013e-44 &&
        (local_1f8 = (float)(uint)(local_150 < _DAT_0064b3fc),
        ABS((double)(int)local_1f8) != _DAT_0064a668)))) {
      local_1c0 = (float)_rand();
      local_1d8 = (double)((float)_DAT_0064a6d0 - (float)(int)local_1c0 * _DAT_0064b244);
      fVar14 = (float10)FUN_004e1fd9();
      fVar14 = (fVar14 + fVar14) * (float10)local_1d8 + (float10)param_1[0x341];
      param_1[0x341] = (float)fVar14;
      if ((float10)_DAT_0064a660 < fVar14) {
        param_1[0x341] = 0.0;
      }
      if (param_1[0x341] < (float)_DAT_0064ba38) {
        param_1[0x341] = 0.0;
      }
      fVar14 = (float10)FUN_004e1fd9();
      fVar14 = fVar14 * (float10)param_1[0x341] + (float10)param_1[0x340];
      local_1c0 = (float)fVar14;
      param_1[0x340] = (float)fVar14;
      fVar14 = (float10)FUN_004e3a69(local_1c0,s__Helicopter__collision_protectio_0067a518);
      param_1[0x340] = (float)fVar14;
      fVar14 = (float10)fsin(fVar14);
      param_1[0x35d] = (float)(fVar14 * (float10)_DAT_0067a1e4 + (float10)param_1[0x35d]);
    }
  }
  fVar14 = (float10)FUN_00562330(&local_230);
  local_1d0 = 100000.0;
  local_1ac = (float)(fVar14 + (float10)_DAT_0064b310);
  local_224 = (float)((fVar14 + (float10)_DAT_0064b310) * (float10)_DAT_0064a658);
  dVar3 = _DAT_0064ba38;
  if (_DAT_0064b254 <= local_150) {
    dVar3 = _DAT_0064a660;
  }
  fVar6 = (float)dVar3 * local_224;
  local_16c = 0.0;
  local_168 = 0.0;
  local_164 = 0.0;
  local_1f4 = 0.0;
  local_1f0 = 0.0;
  local_1ec = 0.0;
  local_110 = 0.0;
  local_10c = 0.0;
  local_20c = (double)CONCAT44(local_22c * fVar6,local_230 * fVar6);
  local_204 = local_228 * fVar6;
  local_108 = 0.0;
  local_190 = 0.0;
  local_18c = 0.0;
  local_188 = 0.0;
  local_244 = local_230 * fVar6 + *pfVar10;
  local_240 = local_22c * fVar6 + param_1[10];
  local_23c = local_204 + param_1[0xb];
  local_78 = local_244;
  local_74 = local_240;
  local_70 = local_23c;
  uVar5 = FUN_004e6df6(param_1[0x18],param_1[0x366],0x3fc00000,pfVar10,&local_78,&local_110,
                       &local_190);
  uVar5 = uVar5 & 1;
  local_f8 = (uint)(uVar5 != 0);
  if (uVar5 != 0) {
    local_260 = *pfVar10 - local_110;
    local_25c = param_1[10] - local_10c;
    local_258 = param_1[0xb] - local_108;
    local_250 = *pfVar10;
    local_24c = param_1[10];
    local_248 = param_1[0xb];
    local_244 = local_250;
    local_240 = local_24c;
    local_23c = local_248;
    fVar14 = (float10)FUN_005aabc0(&local_260);
    local_1c0 = (float)fVar14;
    FUN_005aabc0(&local_250);
    local_16c = local_110;
    local_168 = local_10c;
    local_164 = local_108;
    local_1f4 = local_190;
    local_1f0 = local_18c;
    local_1ec = local_188;
    local_1d0 = local_1c0;
  }
  local_1f8 = 0.0;
  local_1c0 = 0.0;
  local_158 = (local_224 - local_1ac) * (float)_DAT_0064a6d0 + local_1ac;
  local_1fc = (local_224 - local_1ac) * (float)_DAT_0064a798 + local_1ac;
  local_120 = local_158 - local_1ac;
  local_d0 = (local_1d0 - local_158) / local_120;
  local_210 = local_1fc - local_1ac;
  fVar6 = (local_1d0 - local_1fc) / local_210;
  if ((float)_DAT_0064ba38 <= local_d0) {
    local_21c = local_d0;
    if ((float)_DAT_0064a668 < local_d0) {
      local_21c = (float)_DAT_0064a668;
    }
  }
  else {
    local_21c = (float)_DAT_0064ba38;
  }
  if ((float)_DAT_0064ba38 <= fVar6) {
    local_254 = fVar6;
    if ((float)_DAT_0064a668 < fVar6) {
      local_254 = (float)_DAT_0064a668;
    }
  }
  else {
    local_254 = (float)_DAT_0064ba38;
  }
  local_1d8._0_4_ = fVar6;
  if (uVar5 != 0) {
    fVar6 = local_1f0 * local_228 - local_22c * local_1ec;
    fVar2 = local_230 * local_1ec - local_228 * local_1f4;
    fVar1 = local_22c * local_1f4 - local_230 * local_1f0;
    local_260 = fVar2 * local_1ec - fVar1 * local_1f0;
    local_25c = fVar1 * local_1f4 - local_1ec * fVar6;
    local_258 = local_1f0 * fVar6 - fVar2 * local_1f4;
    local_244 = local_260;
    local_240 = local_25c;
    local_23c = local_258;
    FUN_005aaad0(&local_244,&local_260);
    if ((_DAT_0064b254 < local_1ec) && (local_150 != (float)_DAT_0064a668)) {
      fVar6 = local_23c / SQRT(local_244 * local_244 + local_240 * local_240);
      if (fVar6 < (float)_DAT_0064a6d0) {
        param_1[0x35c] = 1.4013e-45;
        param_1[0x35f] = 1.0;
        local_1c0 = 1.4013e-45;
      }
      if ((param_1[0x1b] / ABS(local_150) < fVar6) && (local_21c < (float)_DAT_0064a668)) {
        fVar6 = (float)__ftol();
        param_1[0x35b] = fVar6;
        local_1f8 = 1.4013e-45;
        param_1[0x35e] = local_21c * local_218;
      }
    }
  }
  if (param_1[0x329] == 1.4013e-45) goto LAB_005654f7;
  pfVar7 = (float *)FUN_005ab7d0(local_3c,0x3f490fdb);
  local_25c = (float)local_20c * pfVar7[1] + local_20c._4_4_ * pfVar7[4] + local_204 * pfVar7[7];
  local_258 = (float)local_20c * pfVar7[2] + local_20c._4_4_ * pfVar7[5] + local_204 * pfVar7[8];
  local_250 = (float)local_20c * *pfVar7 + local_20c._4_4_ * pfVar7[3] + local_204 * pfVar7[6] +
              *pfVar10;
  local_24c = local_25c + param_1[10];
  local_248 = local_258 + param_1[0xb];
  local_a8 = local_250;
  local_a4 = local_24c;
  local_a0 = local_248;
  pfVar7 = (float *)FUN_005ab7d0(local_3c,0xbf490fdb);
  local_25c = (float)local_20c * pfVar7[1] + local_20c._4_4_ * pfVar7[4] + local_204 * pfVar7[7];
  local_258 = (float)local_20c * pfVar7[2] + local_20c._4_4_ * pfVar7[5] + local_204 * pfVar7[8];
  local_12c = 0.0;
  local_128 = 0.0;
  local_250 = (float)local_20c * *pfVar7 + local_20c._4_4_ * pfVar7[3] + local_204 * pfVar7[6] +
              *pfVar10;
  local_124 = 0.0;
  local_178 = 0.0;
  local_174 = 0.0;
  local_170 = 0.0;
  local_24c = local_25c + param_1[10];
  local_248 = local_258 + param_1[0xb];
  local_144 = DAT_007015b4;
  local_138 = DAT_007015b4;
  local_140 = DAT_007015b8;
  local_134 = DAT_007015b8;
  local_148 = DAT_007015b0;
  local_13c = DAT_007015b0;
  local_cc = local_250;
  local_c8 = local_24c;
  local_c4 = local_248;
  uVar5 = FUN_004e6df6(param_1[0x18],param_1[0x366],0,pfVar10,&local_a8,&local_148,&local_12c);
  local_200 = (float)(uVar5 & 1);
  uVar8 = FUN_004e6df6(param_1[0x18],param_1[0x366],0,pfVar10,&local_cc,&local_13c,&local_178);
  local_b4 = local_148 - *pfVar10;
  fVar6 = (float)(uVar8 & 1);
  local_b0 = local_144 - param_1[10];
  local_ac = local_140 - param_1[0xb];
  local_250 = local_13c - *pfVar10;
  local_24c = local_138 - param_1[10];
  local_248 = local_134 - param_1[0xb];
  local_1bc = fVar6;
  local_6c = local_250;
  local_68 = local_24c;
  local_64 = local_248;
  if ((float)(uVar5 & 1) == 0.0) {
    fVar14 = (float10)_DAT_0064ecf8;
  }
  else {
    fVar14 = (float10)FUN_005aabc0(&local_b4);
  }
  local_f4 = (float)fVar14;
  if (fVar6 == 0.0) {
    fVar14 = (float10)_DAT_0064ecf8;
  }
  else {
    fVar14 = (float10)FUN_005aabc0(&local_6c);
  }
  local_194 = local_164;
  iVar12 = 0;
  local_ec = (float)fVar14;
  local_1c4 = local_1ec;
  local_19c = local_16c;
  local_198 = local_168;
  iVar11 = 0;
  local_220 = 0.0;
  local_244 = 0.0;
  local_240 = 0.0;
  local_23c = 0.0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_11c = 0.0;
  local_118 = 0.0;
  local_114 = 0.0;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  local_104 = 0.0;
  local_100 = 0.0;
  local_fc = 0.0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_1cc = local_1f4;
  local_1c8 = local_1f0;
  local_130 = 100000.0;
  local_160 = 100000.0;
  local_15c = 100000.0;
  local_214 = 100000.0;
  if (local_200 != 0.0) {
    fVar6 = (param_1[0xb] - local_140) * local_124 +
            local_128 * (param_1[10] - local_144) + local_12c * (*pfVar10 - local_148);
    local_238 = ABS(local_150) * (float)_DAT_0064a830 + (float)_DAT_0064ecf0;
    if (local_238 < fVar6) {
      fVar6 = local_238;
    }
    local_1b8 = fVar6 * local_12c * _DAT_0064ca28;
    local_1b4 = local_128 * fVar6 * _DAT_0064ca28;
    local_260 = local_1b8 + local_148;
    local_25c = local_1b4 + local_144;
    local_258 = fVar6 * local_124 * _DAT_0064ca28 + local_140;
    local_250 = local_260;
    local_24c = local_25c;
    local_248 = local_258;
    iVar11 = FUN_00562ba0(&local_260,&local_12c,pfVar10,&local_230,local_150,&DAT_00701590,
                          param_1[0x1e],&local_11c,&local_160,&local_9c);
    if (iVar11 != 0) {
      local_d4 = local_114 - param_1[0xb];
      fVar6 = (local_118 - param_1[10]) * (local_230 * DAT_00701598 - local_228 * DAT_00701590) +
              local_d4 * (local_22c * DAT_00701590 - local_230 * DAT_00701594) +
              (local_228 * DAT_00701594 - local_22c * DAT_00701598) * (local_11c - *pfVar10);
      local_20c = (double)CONCAT44(local_20c._4_4_,fVar6);
      if (fVar6 < _DAT_0064b340) {
        iVar11 = 0;
        local_160 = 100000.0;
      }
    }
  }
  if (local_f8 != 0) {
    fVar6 = (param_1[10] - local_168) * local_1f0 +
            (param_1[0xb] - local_164) * local_1ec + local_1f4 * (*pfVar10 - local_16c);
    local_238 = ABS(local_150) * (float)_DAT_0064a830 + (float)_DAT_0064ecf0;
    if (local_238 < fVar6) {
      fVar6 = local_238;
    }
    local_1b8 = fVar6 * local_1f4 * _DAT_0064ca28;
    local_1b4 = local_1f0 * fVar6 * _DAT_0064ca28;
    local_260 = local_1b8 + local_16c;
    local_25c = local_1b4 + local_168;
    local_258 = fVar6 * local_1ec * _DAT_0064ca28 + local_164;
    local_250 = local_260;
    local_24c = local_25c;
    local_248 = local_258;
    local_220 = (float)FUN_00562ba0(&local_260,&local_1f4,pfVar10,&local_230,local_150,&DAT_00701590
                                    ,param_1[0x1e],&local_244,&local_130,&local_54);
  }
  if (local_1bc != 0.0) {
    fVar6 = (param_1[0xb] - local_134) * local_170 +
            local_174 * (param_1[10] - local_138) + local_178 * (*pfVar10 - local_13c);
    local_238 = ABS(local_150) * (float)_DAT_0064a830 + (float)_DAT_0064ecf0;
    if (local_238 < fVar6) {
      fVar6 = local_238;
    }
    local_1b8 = fVar6 * local_178 * _DAT_0064ca28;
    local_1b4 = local_174 * fVar6 * _DAT_0064ca28;
    local_260 = local_1b8 + local_13c;
    local_25c = local_1b4 + local_138;
    local_258 = fVar6 * local_170 * _DAT_0064ca28 + local_134;
    local_250 = local_260;
    local_24c = local_25c;
    local_248 = local_258;
    iVar12 = FUN_00562ba0(&local_260,&local_178,pfVar10,&local_230,local_150,&DAT_00701590,
                          param_1[0x1e],&local_104,&local_15c,&local_84);
    if (iVar12 != 0) {
      local_d4 = local_fc - param_1[0xb];
      local_20c = (double)((ulonglong)local_20c & 0xffffffff00000000);
      if ((local_100 - param_1[10]) * (local_228 * DAT_00701590 - local_230 * DAT_00701598) +
          local_d4 * (local_230 * DAT_00701594 - local_22c * DAT_00701590) +
          (local_22c * DAT_00701598 - local_228 * DAT_00701594) * (local_104 - *pfVar10) <
          _DAT_0064b340) {
        iVar12 = 0;
        local_15c = 100000.0;
      }
    }
  }
  if (((iVar11 == 0) && (iVar12 == 0)) && (local_220 == 0.0)) {
LAB_0056450f:
    iVar11 = 0;
  }
  else {
    local_20c = (double)CONCAT44(local_20c._4_4_,1);
    if (((iVar11 == 0) || (local_15c < local_160)) || (local_130 < local_160)) {
      if ((iVar12 == 0) || (local_130 < local_15c)) {
        if (local_220 != 0.0) {
          local_214 = local_130;
          local_19c = local_244;
          local_194 = local_23c;
          local_198 = local_240;
          local_1c4 = local_1ec;
          local_1cc = local_1f4;
          local_1c8 = local_1f0;
          if (local_f8 == 0) {
            pcVar16 = s__Helicopter__collision_protectio_0067a460;
            goto LAB_00564468;
          }
        }
      }
      else {
        local_19c = local_104;
        local_214 = local_15c;
        local_1cc = local_178;
        local_198 = local_100;
        local_194 = local_fc;
        local_1c8 = local_174;
        local_1c4 = local_170;
        if (local_1bc == 0.0) {
          pcVar16 = s__Helicopter__collision_protectio_0067a48c;
          goto LAB_00564468;
        }
      }
    }
    else {
      local_198 = local_118;
      local_214 = local_160;
      local_1c8 = local_128;
      local_19c = local_11c;
      local_194 = local_114;
      local_1cc = local_12c;
      local_1c4 = local_124;
      if (local_200 == 0.0) {
        pcVar16 = s__Helicopter__collision_protectio_0067a4d0;
LAB_00564468:
        FUN_004e1e9c(pcVar16);
      }
    }
    if (local_224 <= local_214) goto LAB_0056450f;
    local_21c = (local_214 - local_158) / local_120;
    if ((float)_DAT_0064ba38 <= local_21c) {
      if ((float)_DAT_0064a668 < local_21c) {
        local_21c = (float)_DAT_0064a668;
      }
    }
    else {
      local_21c = (float)_DAT_0064ba38;
    }
    local_254 = (local_214 - local_1fc) / local_210;
    iVar11 = (int)(float)local_20c;
    if ((float)_DAT_0064ba38 <= local_254) {
      if ((float)_DAT_0064a668 < local_254) {
        local_254 = (float)_DAT_0064a668;
      }
    }
    else {
      local_254 = (float)_DAT_0064ba38;
    }
  }
  lVar4 = 0x3ff00000;
  fVar6 = local_230 * local_1c8 - local_22c * local_1cc;
  local_20c = (double)CONCAT44(local_20c._4_4_,fVar6);
  if ((float)_DAT_0064a668 <= fVar6) {
    lVar4 = 0xbff00000;
  }
  local_1a8 = (double)(lVar4 << 0x20);
  if ((((iVar11 == 0) || ((float)_DAT_0064ece8 <= ABS(local_1c4))) ||
      ((float)_DAT_0064a668 <= local_254)) ||
     (fVar14 = (float10)FUN_0061d420(), ABS(fVar14 * (float10)local_1a8) <= (float10)_DAT_0064c678))
  {
    if (param_1[0x367] == 0.0) {
      if (param_1[0x322] == 0.0) goto LAB_005654f7;
    }
    else if (((local_1bc == 0.0) || (local_200 == 0.0)) ||
            (param_1[0x10] * param_1[0x36a] +
             param_1[0x13] * param_1[0x36b] + param_1[0xd] * param_1[0x369] + param_1[0x16] <
             ABS(param_1[0x369] * param_1[0xc] +
                 param_1[0xf] * param_1[0x36a] + param_1[0x12] * param_1[0x36b] + param_1[0x15]) *
             (float)_DAT_0064a710)) {
      param_1[0x367] = 0.0;
    }
    fVar1 = _DAT_0064b254;
    fVar6 = param_1[0x367];
    if (fVar6 == 0.0) {
      local_1d8._0_4_ = param_1[0x322];
      if (local_1d8._0_4_ != 0.0) {
        local_1f8 = local_230 * param_1[799] + param_1[0x321] * local_228 + param_1[800] * local_22c
        ;
        if (_DAT_0064ecd4 <= local_1f8) {
          param_1[0x322] = 0.0;
          goto LAB_005654f7;
        }
        if ((double)(int)local_1d8._0_4_ <= _DAT_0064a668) {
          if (param_1[0x1e] <= _DAT_0064c680) {
            if (_DAT_0064ca68 <= param_1[0x1e]) goto joined_r0x0056547e;
            fVar1 = (_DAT_0064ca68 - param_1[0x1e]) / DAT_0067a1d0 + (float)_DAT_0064a5a8;
          }
          else {
            fVar1 = (_DAT_0064c680 - param_1[0x1e]) / DAT_0067a1d0 - (float)_DAT_0064a5a8;
          }
        }
        else if (_DAT_0064b2f4 <= param_1[0x1e]) {
          if (param_1[0x1e] <= _DAT_0064b328) {
joined_r0x0056547e:
            if (_DAT_0064ecd0 < local_1f8) {
              param_1[0x322] = 0.0;
            }
          }
          else {
            fVar1 = (_DAT_0064b328 - param_1[0x1e]) / DAT_0067a1d0 - (float)_DAT_0064a5a8;
          }
        }
        else {
          fVar1 = (_DAT_0064b2f4 - param_1[0x1e]) / DAT_0067a1d0 + (float)_DAT_0064a5a8;
        }
        if (((0 < (int)param_1[0x322]) && (param_1[0x35d] < fVar1)) ||
           (((int)param_1[0x322] < 0 && (fVar1 < param_1[0x35d])))) {
          param_1[0x35d] = fVar1;
          if (fVar1 <= (float)_DAT_0064a668) {
            fVar6 = (float)__ftol();
            param_1[0x35a] = fVar6;
          }
          else {
            fVar6 = (float)__ftol();
            param_1[0x35a] = fVar6;
          }
        }
        goto LAB_005654f7;
      }
    }
    else {
      param_1[0x35a] = fVar6;
      param_1[0x35d] = (float)(int)fVar6;
    }
    param_1[0x322] = 0.0;
    goto LAB_005654f7;
  }
  local_40 = (float)local_20c;
  local_238 = -(param_1[0x1e] / DAT_0067a1d0) + _DAT_006f1b98;
  fVar6 = param_1[0x1e] / DAT_0067a1d0 + _DAT_006f1b98;
  local_1dc = _DAT_006f1b98 * _DAT_006f1b98;
  local_224 = _DAT_006f1b98 + _DAT_006f1b98;
  local_20c = (double)CONCAT44(local_20c._4_4_,
                               -(((fVar6 * fVar6 - local_1dc) * DAT_0067a1d0) / local_224));
  FUN_005ab7d0(local_3c,((local_238 * local_238 - local_1dc) * DAT_0067a1d0) / local_224);
  FUN_005ab7d0(local_3c,(float)local_20c);
  local_c0 = 0;
  local_bc = 0;
  local_1e8 = param_1[0x19];
  local_b8 = 0;
  local_60 = 0;
  local_1e4 = param_1[0x1a];
  local_5c = 0;
  local_58 = 0;
  local_1e0 = param_1[0x1b];
  local_1b8 = *pfVar10;
  local_1b4 = param_1[10];
  local_1b0 = param_1[0xb];
  iVar11 = __ftol();
  local_254 = param_1[0x1e];
  local_220 = 0.0;
  local_224 = 0.0;
  local_f0 = 0.0;
  local_214 = 0.0;
  fVar6 = (_DAT_0067a1cc * param_1[0x326] * local_234) / ((float)_DAT_0064a660 - param_1[0x326]);
  local_1a8 = (double)fVar6;
  local_20c = (double)DAT_0067a1d0;
  pdVar9 = (double *)&local_1a8;
  if (DAT_0067a1d0 <= fVar6) {
    pdVar9 = (double *)&local_20c;
  }
  iVar12 = 0;
  local_1dc = (float)((float10)*pdVar9 * (float10)_DAT_0064b948);
  if (local_254 < local_1dc) {
    do {
      local_220 = local_220 + local_234;
      local_254 = _DAT_0067a1cc * local_234 + local_254;
      local_238 = local_254 * local_234;
      local_224 = local_238 + local_224;
      pfVar7 = (float *)FUN_005ab7d0(local_3c,local_238);
      fVar6 = local_1e8 * *pfVar7 + local_1e4 * pfVar7[3] + local_1e0 * pfVar7[6];
      fVar1 = local_1e8 * pfVar7[1] + local_1e4 * pfVar7[4] + local_1e0 * pfVar7[7];
      local_1a8 = (double)CONCAT44(fVar1,fVar6);
      local_1e0 = local_1e8 * pfVar7[2] + local_1e4 * pfVar7[5] + local_1e0 * pfVar7[8];
      local_260 = fVar6 * local_234;
      local_25c = fVar1 * local_234;
      local_258 = local_1e0 * local_234;
      local_1e8 = fVar6;
      local_1e4 = fVar1;
      local_1a0 = local_1e0;
      local_184 = local_260;
      local_180 = local_25c;
      local_17c = local_258;
      FUN_005aae00(&local_e8,&local_260);
      if ((local_1b4 - local_198) * local_1c8 +
          local_1cc * (local_1b8 - local_19c) + (local_1b0 - local_194) * local_1c4 <
          (float)_DAT_0064a668) {
        iVar12 = 1;
        goto LAB_00564a56;
      }
      if (iVar11 < iVar12) {
        FUN_004e1e9c(s_Copter__check_time_to_turn_on_LE_0067a434);
      }
      iVar12 = iVar12 + 1;
    } while (local_254 < local_1dc);
  }
  pfVar7 = (float *)FUN_005ab7d0(local_3c,local_224);
  local_25c = local_230 * pfVar7[1] + local_228 * pfVar7[7] + local_22c * pfVar7[4] + pfVar7[10];
  local_258 = local_230 * pfVar7[2] + local_228 * pfVar7[8] + local_22c * pfVar7[5] + pfVar7[0xb];
  local_1a8 = (double)CONCAT44(local_1a8._4_4_,local_258);
  local_260 = local_230 * *pfVar7 + local_228 * pfVar7[6] + local_22c * pfVar7[3] + pfVar7[9];
  iVar12 = FUN_00562ba0(&local_19c,&local_1cc,&local_1b8,&local_260,local_150,&DAT_00701590,
                        local_254,&local_c0,&local_f0,&local_60);
  if (iVar12 != 0) {
LAB_00564a56:
    local_214 = local_150 * local_220 + local_f0;
  }
  local_1e8 = param_1[0x19];
  local_1e4 = param_1[0x1a];
  local_250 = *pfVar10;
  local_254 = param_1[0x1e];
  local_1a8 = (double)CONCAT44(local_1a8._4_4_,-local_1dc);
  local_1e0 = param_1[0x1b];
  local_24c = param_1[10];
  local_248 = param_1[0xb];
  iVar13 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_d4 = 0.0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_238 = 0.0;
  local_224 = 0.0;
  local_20c = (double)((ulonglong)local_20c & 0xffffffff00000000);
  local_220 = 0.0;
  if (-local_1dc < local_254) {
    do {
      local_238 = local_238 + local_234;
      local_254 = local_254 - _DAT_0067a1cc * local_234;
      local_1dc = local_254 * local_234;
      local_224 = local_1dc + local_224;
      pfVar10 = (float *)FUN_005ab7d0(local_3c,local_1dc);
      local_184 = local_1e8 * *pfVar10 + local_1e4 * pfVar10[3] + local_1e0 * pfVar10[6];
      local_180 = local_1e8 * pfVar10[1] + local_1e4 * pfVar10[4] + local_1e0 * pfVar10[7];
      local_1e0 = local_1e8 * pfVar10[2] + local_1e4 * pfVar10[5] + local_1e0 * pfVar10[8];
      local_260 = local_184 * local_234;
      local_25c = local_180 * local_234;
      local_258 = local_1e0 * local_234;
      local_1e8 = local_184;
      local_1e4 = local_180;
      local_17c = local_1e0;
      local_e8 = local_260;
      local_e4 = local_25c;
      local_e0 = local_258;
      FUN_005aae00(local_c,&local_e8);
      if ((local_24c - local_198) * local_1c8 +
          local_1cc * (local_250 - local_19c) + (local_248 - local_194) * local_1c4 <
          (float)_DAT_0064a668) {
        iVar11 = 1;
        goto LAB_00564de8;
      }
      if (iVar11 < iVar13) {
        FUN_004e1e9c(s_Copter__check_time_to_turn_on_RI_0067a408);
      }
      iVar13 = iVar13 + 1;
    } while ((float)local_1a8 < local_254);
  }
  pfVar10 = (float *)FUN_005ab7d0(local_3c,local_224);
  local_e4 = local_230 * pfVar10[1] + local_228 * pfVar10[7] + local_22c * pfVar10[4] + pfVar10[10];
  local_e0 = local_230 * pfVar10[2] + local_228 * pfVar10[8] + local_22c * pfVar10[5] + pfVar10[0xb]
  ;
  local_1a8 = (double)CONCAT44(local_1a8._4_4_,local_e0);
  local_e8 = local_230 * *pfVar10 + local_228 * pfVar10[6] + local_22c * pfVar10[3] + pfVar10[9];
  iVar11 = FUN_00562ba0(&local_19c,&local_1cc,&local_250,&local_e8,local_150,&DAT_00701590,local_254
                        ,&local_dc,&local_20c,&local_90);
  if (iVar11 == 0) {
LAB_00564dff:
    if (iVar12 == 0) {
LAB_00564eef:
      fVar14 = (float10)_DAT_0064b254;
      if ((iVar11 == 0) || (iVar12 == 0)) {
        if ((local_f8 != 0) && (local_1d0 < local_1fc)) {
          fVar14 = (float10)local_d0;
          if ((float)_DAT_0064ba38 <= local_1d8._0_4_) {
            fVar6 = local_1d8._0_4_;
            if ((float)_DAT_0064a668 < local_1d8._0_4_) {
              fVar6 = (float)_DAT_0064a668;
            }
          }
          else {
            fVar6 = (float)_DAT_0064ba38;
          }
          if (local_40 <= _DAT_0064b254) {
            param_1[0x35a] = -NAN;
            goto LAB_00565086;
          }
          param_1[0x35a] = 1.4013e-45;
          if (param_1[0x35d] < -fVar6) {
            param_1[0x35d] = -fVar6;
          }
        }
      }
      else if (local_214 <= local_220) {
        param_1[0x35a] = -NAN;
        fVar14 = ((float10)local_220 - (float10)local_158) / (float10)local_120;
        fVar6 = (local_220 - local_1fc) / local_210;
        if ((float)_DAT_0064ba38 <= fVar6) {
          if ((float)_DAT_0064a668 < fVar6) {
            fVar6 = (float)_DAT_0064a668;
          }
        }
        else {
          fVar6 = (float)_DAT_0064ba38;
        }
LAB_00565086:
        if (fVar6 < param_1[0x35d]) {
          param_1[0x35d] = fVar6;
        }
      }
      else {
        param_1[0x35a] = 1.4013e-45;
        fVar14 = ((float10)local_214 - (float10)local_158) / (float10)local_120;
        fVar6 = (local_214 - local_1fc) / local_210;
        if ((float)_DAT_0064ba38 <= fVar6) {
          if ((float)_DAT_0064a668 < fVar6) {
            fVar6 = (float)_DAT_0064a668;
          }
        }
        else {
          fVar6 = (float)_DAT_0064ba38;
        }
        if (param_1[0x35d] < -fVar6) {
          param_1[0x35d] = -fVar6;
        }
      }
      if ((float10)_DAT_0064ba38 <= fVar14) {
        if ((float10)_DAT_0064a668 < fVar14) {
          fVar14 = (float10)_DAT_0064a668;
        }
      }
      else {
        fVar14 = (float10)_DAT_0064ba38;
      }
      local_21c = (float)fVar14;
      if (fVar14 < (float10)_DAT_0064a668) {
        fVar6 = (float)__ftol();
        param_1[0x35b] = fVar6;
        local_1f8 = 1.4013e-45;
        param_1[0x35e] = local_21c * local_218;
      }
    }
    else if (local_220 < local_1fc) {
      param_1[0x35a] = -NAN;
      fVar6 = (local_220 - local_1fc) / local_210;
      if ((float)_DAT_0064ba38 <= fVar6) {
        if ((float)_DAT_0064a668 < fVar6) {
          fVar6 = (float)_DAT_0064a668;
        }
      }
      else {
        fVar6 = (float)_DAT_0064ba38;
      }
      if (fVar6 < param_1[0x35d]) {
        param_1[0x35d] = fVar6;
      }
    }
  }
  else {
LAB_00564de8:
    local_220 = local_238 * local_150 + (float)local_20c;
    if (iVar11 == 0) goto LAB_00564dff;
    if (iVar12 != 0) goto LAB_00564eef;
    if (local_214 < local_1fc) {
      param_1[0x35a] = 1.4013e-45;
      fVar6 = (local_214 - local_1fc) / local_210;
      if ((float)_DAT_0064ba38 <= fVar6) {
        if ((float)_DAT_0064a668 < fVar6) {
          fVar6 = (float)_DAT_0064a668;
        }
      }
      else {
        fVar6 = (float)_DAT_0064ba38;
      }
      if (param_1[0x35d] < -fVar6) {
        param_1[0x35d] = -fVar6;
      }
    }
  }
  if (((((local_200 != 0.0) && (local_1bc != 0.0)) && (local_f4 < local_1d0)) &&
      (((local_ec < local_1d0 && (ABS(local_124) < (float)_DAT_0064ece8)) &&
       (ABS(local_170) < (float)_DAT_0064ece8)))) &&
     (((fVar14 = (float10)fsin((float10)_DAT_0064ece0),
       (float10)local_1d0 < fVar14 * (float10)local_f4 * (float10)_DAT_0064ecd8 &&
       ((float10)local_1d0 < fVar14 * (float10)local_ec * (float10)_DAT_0064ecd8)) ||
      (local_1d0 < local_1ac)))) {
    param_1[0x367] = param_1[0x35a];
    param_1[0x369] = local_16c;
    param_1[0x36a] = local_168;
    param_1[0x36b] = local_164;
  }
  param_1[0x31c] = local_19c;
  param_1[0x322] = param_1[0x35a];
  param_1[0x31d] = local_198;
  param_1[0x31e] = local_194;
  param_1[799] = local_1cc;
  param_1[800] = local_1c8;
  param_1[0x321] = local_1c4;
  if (((param_1[0x35a] == 0.0) && (local_1f8 == 0.0)) && (local_1c0 == 0.0)) {
    param_1[0x35e] = local_21c * local_218;
    fVar6 = (float)__ftol();
    param_1[0x35b] = fVar6;
  }
LAB_005654f7:
  if (param_1[0x35c] == 0.0) {
    fVar6 = param_1[0x361];
    local_1d8 = (double)CONCAT44(local_1d8._4_4_,fVar6);
    if (0 < (int)fVar6) {
      local_210 = param_1[0xb] - ((float)(int)fVar6 * (float)_DAT_0064a5a8 + param_1[0x31b]);
      local_218 = ((float)_DAT_0064a660 / ((float)_DAT_0064a660 - param_1[0x325])) *
                  ABS(local_234 * param_1[0x1b]) + (float)_DAT_0064a5a8;
      if (local_210 <= local_218) {
        if (-local_218 <= local_210) {
          fVar6 = -(local_210 / local_218);
        }
        else {
          fVar6 = (float)_DAT_0064a660;
        }
      }
      else {
        fVar6 = (float)_DAT_0064ba38;
      }
      param_1[0x35f] = fVar6;
      if ((local_210 * param_1[0x1b] < _DAT_0064b254) && (fVar6 = ABS(local_210), fVar6 < local_218)
         ) {
        if (fVar6 < local_218 * _DAT_0064b32c) {
          param_1[0x35f] = 0.0;
        }
        else {
          param_1[0x35f] =
               -local_210 * (fVar6 / local_218 - (float)_DAT_0064ecc8) * (float)_DAT_0064ecc0;
        }
      }
      if ((param_1[0x329] == 4.2039e-45) || (param_1[0x329] == 1.54143e-44)) {
        iVar11 = _rand();
        local_1d8 = (double)((float)_DAT_0064a6d0 - (float)iVar11 * _DAT_0064b244);
        fVar14 = (float10)FUN_004e1fd9();
        fVar14 = (fVar14 + fVar14) * (float10)local_1d8 + (float10)param_1[0x343];
        param_1[0x343] = (float)fVar14;
        if ((float10)_DAT_0064a660 < fVar14) {
          param_1[0x343] = 0.0;
        }
        if (param_1[0x343] < (float)_DAT_0064ba38) {
          param_1[0x343] = 0.0;
        }
        fVar14 = (float10)FUN_004e1fd9();
        fVar14 = fVar14 * (float10)param_1[0x343] + (float10)param_1[0x342];
        fVar6 = (float)fVar14;
        local_1d8 = (double)CONCAT44(local_1d8._4_4_,fVar6);
        param_1[0x342] = (float)fVar14;
        fVar14 = (float10)FUN_004e3a69(fVar6,s__Helicopter__collision_protectio_0067a518);
        param_1[0x342] = (float)fVar14;
        fVar14 = (float10)fsin(fVar14);
        param_1[0x35f] = (float)(fVar14 * (float10)_DAT_0067a1e4 + (float10)param_1[0x35f]);
      }
    }
  }
  return;
}

