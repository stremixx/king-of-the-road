
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00561640(float *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float10 fVar7;
  float afStack_288 [5];
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 *puStack_260;
  undefined4 local_25c;
  double *local_258;
  double *local_254;
  double *local_250;
  float *local_24c;
  float *local_248;
  float *local_244;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  undefined8 local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  undefined8 local_1c8;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
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
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined1 local_158 [8];
  float local_150;
  undefined1 local_14c [12];
  double local_140;
  double local_138;
  double local_130;
  float local_128 [9];
  float local_104;
  float local_100;
  float local_fc;
  undefined1 local_f8 [48];
  undefined1 local_c8 [48];
  undefined1 local_98 [48];
  undefined1 local_68 [48];
  undefined1 local_38 [52];
  
  local_244 = (float *)0x561656;
  fVar7 = (float10)FUN_004e1fd9();
  fVar4 = (float)fVar7;
  local_244 = (float *)0x56165f;
  FUN_004e2035();
  local_198 = 0.0;
  local_194 = 0.0;
  local_190 = 0.0;
  local_224 = 0.0;
  local_22c = DAT_00701584 * param_1[3] + DAT_00701588 * param_1[6] + DAT_00701580 * *param_1;
  local_228 = DAT_00701584 * param_1[4] + DAT_00701588 * param_1[7] + DAT_00701580 * param_1[1];
  local_220 = DAT_00701594 * param_1[3] + DAT_00701598 * param_1[6] + DAT_00701590 * *param_1;
  local_21c = DAT_00701594 * param_1[4] + DAT_00701598 * param_1[7] + DAT_00701590 * param_1[1];
  local_218 = DAT_00701590 * param_1[2] + DAT_00701594 * param_1[5] + DAT_00701598 * param_1[8];
  local_244 = (float *)0x561740;
  FUN_005aab70();
  local_1fc = local_228 * DAT_00701598 - DAT_00701594 * local_224;
  local_1f8 = DAT_00701590 * local_224 - local_22c * DAT_00701598;
  local_1f4 = local_22c * DAT_00701594 - local_228 * DAT_00701590;
  local_244 = (float *)&local_1e0;
  local_248 = (float *)&local_1c8;
  local_250 = &local_130;
  local_24c = (float *)&local_160;
  local_254 = &local_138;
  local_258 = &local_140;
  param_1[0x20] = _DAT_006f1b9c * param_1[0x35e];
  pfVar3 = param_1;
  pfVar6 = afStack_288;
  local_198 = local_1fc;
  local_194 = local_1f8;
  local_190 = local_1f4;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar6 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar6 = pfVar6 + 1;
  }
  FUN_005de000();
  local_24c = (float *)(_DAT_0067a1c4 + (float)local_1c8);
  local_244 = &local_1f0;
  local_248 = &local_22c;
  local_1c8 = (double)(float)local_24c;
  local_18c = (float)local_140;
  local_188 = (float)local_138;
  local_184 = (float)local_130;
  fVar1 = _DAT_0067a1d4 * param_1[0x35f];
  local_254 = (double *)0x561869;
  local_250 = (double *)fVar4;
  fVar7 = (float10)FUN_005614d0();
  local_1c8 = (double)fVar7;
  local_1d8 = _DAT_0067a1cc * param_1[0x35d] * fVar4 + param_1[0x1e];
  param_1[0x1e] = local_1d8;
  if (local_1d8 <= DAT_0067a1d0) {
    if (local_1d8 < -DAT_0067a1d0) {
      param_1[0x1e] = -DAT_0067a1d0;
    }
  }
  else {
    param_1[0x1e] = DAT_0067a1d0;
  }
  if (param_1[0x368] != 0.0) {
    if ((double)_DAT_0067a1dc * _DAT_0064a830 <= ABS(local_1c8)) {
      fVar2 = param_1[0x19] * local_22c + param_1[0x1a] * local_228 + param_1[0x1b] * local_224;
      if (_DAT_0064b254 < param_1[0x20] != _DAT_0064b254 < fVar2) {
        if (ABS(fVar2) <= (float)_DAT_0064a650) {
          local_1f0 = local_1f0 * (float)_DAT_0064c328;
        }
        else {
          local_1f0 = 0.0;
        }
      }
    }
    else {
      param_1[0x368] = 0.0;
    }
  }
  local_1f8 = local_228 * local_1f0;
  local_1f4 = local_1f0 * local_224;
  local_1e8 = local_21c * fVar1;
  local_1e4 = local_218 * fVar1;
  local_220 = local_220 * fVar1 + local_22c * local_1f0;
  local_21c = local_1f8 + local_1e8;
  local_244 = &local_1d4;
  local_218 = local_1f4 + local_1e4;
  local_248 = (float *)0x5619ec;
  local_1d4 = local_220;
  local_1d0 = local_21c;
  local_1cc = local_218;
  fVar7 = (float10)FUN_005aabc0();
  if ((float10)_DAT_0064b440 < fVar7) {
    local_1e8 = (float)((float10)local_1d0 / fVar7);
    local_1e4 = (float)((float10)local_1cc / fVar7);
    local_220 = (float)(((float10)local_1d4 / fVar7) * (float10)_DAT_0064b440);
    local_21c = local_1e8 * _DAT_0064b440;
    local_218 = local_1e4 * _DAT_0064b440;
    local_1d4 = local_220;
    local_1d0 = local_21c;
    local_1cc = local_218;
  }
  local_244 = (float *)(local_1cc * fVar4 + param_1[0x1b]);
  local_248 = (float *)(local_1d0 * fVar4 + param_1[0x1a]);
  local_24c = (float *)(local_1d4 * fVar4 + param_1[0x19]);
  local_250 = (double *)0x561a90;
  FUN_0041ce10();
  local_214 = local_1ec;
  local_244 = &local_214;
  local_210 = local_1e8;
  local_20c = local_1e4;
  local_248 = (float *)0x561ab2;
  fVar7 = (float10)FUN_005aabc0();
  if ((float10)_DAT_0064b2e8 < fVar7) {
    local_244 = (float *)(float)((float10)local_20c / fVar7);
    local_248 = (float *)(float)((float10)local_210 / fVar7);
    local_24c = (float *)(float)((float10)local_214 / fVar7);
    local_250 = (double *)0x561aeb;
    FUN_0041ce10();
    local_244 = (float *)(local_1e4 * _DAT_0064b2e8);
    local_248 = (float *)(local_1e8 * _DAT_0064b2e8);
    local_24c = (float *)(local_1ec * _DAT_0064b2e8);
    local_250 = (double *)0x561b1e;
    FUN_0041ce10();
    local_214 = local_220;
    local_210 = local_21c;
    local_20c = local_218;
  }
  local_244 = (float *)(local_1cc * fVar4);
  local_248 = (float *)(local_1d0 * fVar4);
  local_24c = (float *)(local_1d4 * fVar4);
  local_250 = (double *)0x561b67;
  FUN_0041ce10();
  local_244 = (float *)(local_1e4 * fVar4);
  local_248 = (float *)(local_1e8 * fVar4);
  local_24c = (float *)(local_1ec * fVar4);
  local_250 = (double *)0x561b94;
  FUN_0041ce10();
  local_244 = (float *)(local_1f4 * _DAT_0064b248);
  local_248 = (float *)(local_1f8 * _DAT_0064b248);
  local_24c = (float *)(local_1fc * _DAT_0064b248);
  local_250 = (double *)0x561bca;
  FUN_0041ce10();
  local_244 = (float *)(fVar4 * param_1[0x1b]);
  local_218 = local_1b4;
  local_220 = local_1bc;
  local_21c = local_1b8;
  local_248 = (float *)(fVar4 * param_1[0x1a]);
  local_24c = (float *)(fVar4 * param_1[0x19]);
  local_250 = (double *)0x561c15;
  FUN_0041ce10();
  local_244 = (float *)(local_200 + local_218);
  local_248 = (float *)(local_204 + local_21c);
  local_24c = (float *)(local_208 + local_220);
  local_250 = (double *)0x561c42;
  FUN_0041ce10();
  local_244 = (float *)(local_218 + local_184);
  local_248 = (float *)(local_21c + local_188);
  local_24c = (float *)(local_220 + local_18c);
  local_250 = (double *)0x561c78;
  FUN_0041ce10();
  local_244 = (float *)(local_210 * DAT_00701590 - local_214 * DAT_00701594);
  local_178 = local_200;
  local_180 = local_208;
  local_17c = local_204;
  local_248 = (float *)(local_214 * DAT_00701598 - local_20c * DAT_00701590);
  local_24c = (float *)(local_20c * DAT_00701594 - local_210 * DAT_00701598);
  local_250 = (double *)0x561cf0;
  FUN_0041ce10();
  local_244 = (float *)(local_1fc * DAT_00701594 - local_1f8 * DAT_00701590);
  local_248 = (float *)(local_1f4 * DAT_00701590 - local_1fc * DAT_00701598);
  local_24c = (float *)(local_1f8 * DAT_00701598 - local_1f4 * DAT_00701594);
  local_250 = (double *)0x561d47;
  FUN_0041ce10();
  local_1bc = local_208;
  local_1b8 = local_204;
  local_244 = &local_1bc;
  local_248 = &local_1b0;
  local_1b4 = local_200;
  local_24c = (float *)0x561d7d;
  FUN_005aaad0();
  local_244 = (float *)(local_1b0 * local_228 - local_1ac * local_22c);
  local_248 = (float *)(local_1a8 * local_22c - local_1b0 * local_224);
  local_24c = (float *)(local_1ac * local_224 - local_1a8 * local_228);
  local_250 = (double *)0x561ddf;
  FUN_0041ce10();
  fVar1 = local_20c * local_224 + local_210 * local_228 + local_214 * local_22c;
  local_244 = (float *)(fVar1 * local_224);
  local_248 = (float *)(local_228 * fVar1);
  local_24c = (float *)(fVar1 * local_22c);
  local_250 = (double *)0x561e20;
  FUN_0041ce10();
  local_19c = local_200;
  local_1a4 = local_208;
  local_1a0 = local_204;
  if (local_1ac * local_228 + local_1a8 * local_224 + local_1b0 * local_22c <= (float)_DAT_0064a668)
  {
    local_244 = (float *)0x561e86;
    fVar7 = (float10)FUN_0061e4b0();
    fVar7 = -fVar7;
  }
  else {
    local_244 = (float *)0x561e7f;
    fVar7 = (float10)FUN_0061e4b0();
  }
  local_1d8 = (float)fVar7;
  local_244 = &local_1a4;
  local_248 = (float *)0x561e99;
  fVar7 = (float10)FUN_005aabc0();
  fVar1 = (float)fVar7;
  if (fVar7 <= (float10)_DAT_0064a770) {
    fVar2 = fVar1 * (float)_DAT_0064a5a8;
  }
  else {
    fVar2 = (float)_DAT_0064a660;
  }
  local_244 = (float *)(fVar2 * local_1d8);
  local_248 = (float *)local_98;
  local_24c = (float *)0x561ed4;
  FUN_005ab7d0();
  local_24c = (float *)local_98;
  local_250 = (double *)&local_214;
  local_254 = (double *)&local_208;
  local_258 = (double *)0x561eeb;
  pfVar3 = (float *)FUN_004cb300();
  local_214 = *pfVar3;
  local_248 = &local_22c;
  local_210 = pfVar3[1];
  local_20c = pfVar3[2];
  local_24c = &local_208;
  local_244 = (float *)(local_20c * local_224 + local_210 * local_228 + local_214 * local_22c);
  local_250 = (double *)0x561f30;
  pfVar3 = (float *)FUN_004bdd80();
  local_1a4 = *pfVar3;
  local_1a0 = pfVar3[1];
  local_19c = pfVar3[2];
  if (fVar1 <= (float)_DAT_0064c0b0) {
    local_1d8 = fVar1 * (float)_DAT_0064ecb8;
  }
  else {
    local_1d8 = (float)_DAT_0064a660;
  }
  local_244 = &local_198;
  local_248 = &local_214;
  local_24c = (float *)0x561f89;
  fVar7 = (float10)FUN_004e1080();
  local_244 = (float *)(float)fVar7;
  local_248 = &local_198;
  local_24c = (float *)local_14c;
  local_250 = (double *)0x561fa5;
  FUN_004bdd80();
  local_244 = (float *)local_20c;
  local_248 = (float *)0x0;
  local_24c = (float *)0x0;
  local_250 = (double *)0x561fbd;
  FUN_0041ce10();
  local_244 = (float *)param_1[0x323];
  local_248 = &local_208;
  local_24c = (float *)0x561fd5;
  FUN_005aad10();
  local_244 = (float *)param_1[0x324];
  local_248 = &local_208;
  local_24c = (float *)0x561fed;
  FUN_005aad10();
  local_150 = local_150 * param_1[0x325];
  local_244 = (float *)local_158;
  local_248 = &local_1a4;
  local_24c = (float *)local_14c;
  local_250 = (double *)&local_208;
  local_254 = (double *)0x562023;
  local_248 = (float *)FUN_004bddd0();
  local_24c = &local_1bc;
  local_250 = (double *)0x562034;
  pfVar3 = (float *)FUN_004bddd0();
  local_24c = (float *)(param_1[0x326] * param_1[0x1c]);
  local_214 = *pfVar3;
  local_210 = pfVar3[1];
  local_20c = pfVar3[2];
  param_1[0x19] = local_214;
  param_1[0x1c] = (float)local_24c;
  local_248 = (float *)(param_1[0x326] * param_1[0x1d]);
  param_1[0x1a] = local_210;
  param_1[0x1b] = local_20c;
  param_1[0x1d] = (float)local_248;
  if (param_1[0x35a] == 0.0) {
    param_1[0x1e] = param_1[0x326] * param_1[0x1e];
  }
  fVar1 = -_DAT_0067a1e0;
  if ((float)local_1e0 < fVar1) {
    local_1e0 = (double)fVar1;
  }
  if (_DAT_0067a1e0 < (float)local_1e0) {
    local_1e0 = (double)_DAT_0067a1e0;
  }
  fVar2 = (float)local_1e0 - local_1d8 * param_1[0x35d] * (float)_DAT_0064e3c8;
  if ((((fVar2 < _DAT_0067a1e0) && (fVar1 < fVar2)) ||
      ((_DAT_0067a1e0 < fVar2 && (fVar2 < (float)local_1e0)))) ||
     ((fVar2 < fVar1 && ((float)local_1e0 < fVar2)))) {
    local_1e0 = (double)fVar2;
  }
  local_244 = (float *)0x0;
  local_1e0 = (double)(param_1[0x326] * param_1[0x326] * (float)local_1e0);
  param_1[0x328] = (float)local_1c8;
  local_1c8 = (double)((float)local_1c8 - _DAT_0067a1c4);
  local_250 = (double *)0x562181;
  local_174 = (float)local_248;
  local_170 = (float)local_24c;
  FUN_0041ce10();
  local_248 = (float *)&local_16c;
  local_24c = &local_208;
  local_250 = (double *)0x562194;
  local_244 = (float *)fVar4;
  local_250 = (double *)FUN_004bdd80();
  local_254 = (double *)0x56219a;
  fVar7 = (float10)FUN_005aabc0();
  local_244 = (float *)(float)fVar7;
  local_250 = (double *)local_16c;
  local_24c = (float *)local_168;
  local_248 = (float *)local_164;
  local_25c = DAT_007015b0;
  local_258 = (double *)DAT_007015b4;
  puStack_260 = local_f8;
  local_254 = (double *)DAT_007015b8;
  uStack_264 = 0x5621ef;
  FUN_005ab380();
  uStack_264 = local_1e0._4_4_;
  uStack_268 = (undefined4)local_1e0;
  uStack_26c = local_1c8._4_4_;
  uStack_270 = (undefined4)local_1c8;
  uStack_274 = local_15c;
  afStack_288[4] = (float)local_160;
  afStack_288[3] = 0.0;
  afStack_288[2] = 0.0;
  afStack_288[1] = 0.0;
  afStack_288[0] = 0.0;
  FUN_005da010(local_128,0,0);
  local_244 = (float *)(fVar4 * param_1[0x1e]);
  local_248 = (float *)local_68;
  local_24c = (float *)0x562253;
  local_244 = (float *)FUN_005ab7d0();
  local_248 = local_128;
  local_24c = (float *)local_f8;
  local_250 = (double *)local_38;
  local_254 = (double *)0x562274;
  local_248 = (float *)FUN_005ab130();
  local_24c = (float *)local_c8;
  local_250 = (double *)0x562285;
  pfVar3 = (float *)FUN_005ab130();
  pfVar6 = local_128;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar6 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar6 = pfVar6 + 1;
  }
  local_104 = local_180;
  local_100 = local_17c;
  local_250 = (double *)&local_180;
  local_fc = local_178;
  local_258 = (double *)param_1[0x18];
  local_254 = (double *)&local_18c;
  local_25c = 0x5622d8;
  fVar4 = (float)FUN_004e5437();
  if (fVar4 == 0.0) {
    fVar4 = param_1[0x18];
  }
  param_1[0x18] = fVar4;
  local_248 = (float *)local_c8;
  pfVar3 = local_128;
  pfVar6 = param_1;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar6 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar6 = pfVar6 + 1;
  }
  local_24c = (float *)0x562303;
  local_244 = param_1;
  pfVar3 = (float *)FUN_005aba00();
  pfVar6 = param_1 + 0xc;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar6 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar6 = pfVar6 + 1;
  }
  param_1[0x375] = 0.0;
  return;
}

