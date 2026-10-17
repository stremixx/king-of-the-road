
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0055ae00(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float **ppfVar9;
  float *pfVar10;
  undefined4 *puVar11;
  float10 fVar12;
  float *apfStack_480 [4];
  float *pfStack_470;
  float *pfStack_46c;
  undefined1 *puStack_468;
  float *pfStack_464;
  undefined4 uStack_460;
  float *pfStack_45c;
  float *pfStack_458;
  float local_454;
  float *local_450;
  float *local_44c;
  float *local_448;
  double *local_444;
  double *local_440;
  double *local_43c;
  float local_42c;
  float *local_428;
  float local_424;
  float local_420;
  float local_41c;
  undefined8 local_418;
  float local_410;
  float local_404;
  float local_400;
  float local_3fc;
  float local_3f8;
  float *local_3f4;
  float local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  float local_3d4;
  float local_3d0;
  float local_3cc;
  int local_3c8;
  float local_3c4;
  float local_3c0;
  float local_3bc;
  float local_3b8;
  float local_3b4;
  float local_3b0;
  int local_3ac;
  float local_3a8;
  float local_3a4;
  float local_3a0;
  float local_39c;
  float local_398;
  float local_394;
  float local_390 [4];
  float local_380;
  float local_37c;
  float local_378;
  float local_374;
  float local_370;
  float local_36c;
  float local_368;
  float local_364;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  float local_31c;
  float local_318;
  float local_314;
  double local_310;
  double local_308;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  undefined4 local_280;
  undefined4 local_27c;
  float local_278;
  float local_274;
  float local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  undefined4 local_250;
  undefined4 local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
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
  undefined1 local_1e8 [12];
  float local_1dc [2];
  undefined1 local_1d4 [8];
  undefined1 local_1cc [8];
  float local_1c4 [3];
  undefined1 local_1b8 [12];
  undefined1 local_1ac [12];
  undefined1 local_1a0 [12];
  undefined1 local_194 [12];
  undefined4 local_188 [9];
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158 [9];
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128 [12];
  undefined4 local_f8 [12];
  undefined4 local_c8 [12];
  undefined4 local_98 [12];
  float local_68 [12];
  float local_38 [13];
  
  local_3c8 = *(int *)(param_1 + 0x5578);
  local_440 = (double *)&local_2fc;
  local_43c = (double *)param_2;
  local_444 = (double *)0x55ae33;
  local_3ac = param_1;
  FUN_005aba00();
  local_444 = (double *)&local_2fc;
  local_44c = (float *)local_158;
  local_448 = param_3;
  local_450 = (float *)0x55ae4c;
  FUN_005ab130();
  local_134 = DAT_007015b0;
  local_130 = DAT_007015b4;
  local_43c = &local_350;
  local_12c = DAT_007015b8;
  local_440 = &local_308;
  local_444 = &local_360;
  local_448 = (float *)local_1cc;
  local_44c = (float *)local_1d4;
  local_450 = local_1dc;
  puVar4 = local_158;
  ppfVar9 = apfStack_480;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppfVar9 = (float *)*puVar4;
    puVar4 = puVar4 + 1;
    ppfVar9 = ppfVar9 + 1;
  }
  FUN_005de000();
  local_440 = (double *)(float)local_360;
  local_43c = (double *)s_UnTangleSemiTrailer_1_00679470;
  local_444 = (double *)0x55aed5;
  fVar12 = (float10)FUN_004e3a69();
  local_360 = (double)fVar12;
  local_440 = (double *)(float)local_308;
  local_43c = (double *)s_UnTangleSemiTrailer_2_00679458;
  local_444 = (double *)0x55aef4;
  fVar12 = (float10)FUN_004e3a69();
  local_308 = (double)fVar12;
  local_440 = (double *)(float)local_350;
  local_43c = (double *)s_UnTangleSemiTrailer_3_00679440;
  local_444 = (double *)0x55af13;
  fVar12 = (float10)FUN_004e3a69();
  local_350 = (double)fVar12;
  if ((DAT_006ee208 & 1) == 0) {
    fVar12 = (float10)fsin((float10)_DAT_006793ec);
    DAT_006ee208 = DAT_006ee208 | 1;
    _DAT_006ee20c = (float)ABS(fVar12);
  }
  if ((DAT_006ee208 & 2) == 0) {
    fVar12 = (float10)fcos((float10)_DAT_006793ec);
    DAT_006ee208 = DAT_006ee208 | 2;
    _DAT_006ee210 = (float)ABS(fVar12);
  }
  local_418 = ABS(local_360);
  if (((local_418 <= _DAT_0064a800) && (ABS(local_308) <= _DAT_0064ea38)) &&
     (ABS(local_350) <= _DAT_0064ea38)) {
    if (((float)local_418 < _DAT_006793ec) && (ABS(local_350) < (double)_DAT_006793f0)) {
      return 0;
    }
    local_440 = (double *)&local_2c0;
    local_43c = (double *)param_3;
    local_444 = (double *)0x55afea;
    FUN_005aba00();
    local_444 = (double *)&local_2c0;
    local_44c = (float *)local_188;
    local_448 = param_2;
    local_450 = (float *)0x55b003;
    FUN_005ab130();
    local_164 = DAT_007015b0;
    local_160 = DAT_007015b4;
    local_43c = &local_348;
    local_15c = DAT_007015b8;
    local_440 = &local_310;
    local_444 = &local_358;
    local_448 = (float *)local_1cc;
    local_44c = (float *)local_1d4;
    local_450 = local_1dc;
    puVar4 = local_188;
    ppfVar9 = apfStack_480;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppfVar9 = (float *)*puVar4;
      puVar4 = puVar4 + 1;
      ppfVar9 = ppfVar9 + 1;
    }
    FUN_005de000();
    local_440 = (double *)(float)local_358;
    local_43c = (double *)s_UnTangleSemiTrailer_4_00679428;
    local_444 = (double *)0x55b08c;
    fVar12 = (float10)FUN_004e3a69();
    local_358 = (double)fVar12;
    local_440 = (double *)(float)local_310;
    local_43c = (double *)s_UnTangleSemiTrailer_5_00679410;
    local_444 = (double *)0x55b0ab;
    fVar12 = (float10)FUN_004e3a69();
    local_310 = (double)fVar12;
    local_440 = (double *)(float)local_348;
    local_43c = (double *)(s__UnTangleSemiTrailer_6_006793f7 + 1);
    local_444 = (double *)0x55b0ca;
    fVar12 = (float10)FUN_004e3a69();
    local_348 = (double)fVar12;
    dVar3 = ABS(local_358);
    if (((dVar3 <= _DAT_0064a800) && (ABS(local_310) <= _DAT_0064ea38)) &&
       (ABS(local_348) <= _DAT_0064ea38)) {
      if ((dVar3 < (double)_DAT_006793ec) && (ABS(local_348) < (double)_DAT_006793f0)) {
        return 0;
      }
      iVar5 = *(int *)(param_1 + 0x28b4);
      pfVar8 = (float *)(param_1 + 0x2c4);
      pfVar10 = local_390;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar10 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar10 = pfVar10 + 1;
      }
      iVar6 = *(int *)(local_3c8 + 0x28b4);
      local_3a8 = local_390[0] * (float)(&DAT_00696f98)[iVar5 * 0x25c] +
                  local_390[3] * (float)(&DAT_00696f9c)[iVar5 * 0x25c] +
                  local_378 * (float)(&DAT_00696fa0)[iVar5 * 0x25c] + local_36c;
      local_3a4 = local_380 * (float)(&DAT_00696f9c)[iVar5 * 0x25c] +
                  local_374 * (float)(&DAT_00696fa0)[iVar5 * 0x25c] +
                  local_390[1] * (float)(&DAT_00696f98)[iVar5 * 0x25c] + local_368;
      local_3a0 = local_37c * (float)(&DAT_00696f9c)[iVar5 * 0x25c] +
                  local_370 * (float)(&DAT_00696fa0)[iVar5 * 0x25c] +
                  local_390[2] * (float)(&DAT_00696f98)[iVar5 * 0x25c] + local_364;
      pfVar8 = (float *)(local_3c8 + 0x2c4);
      pfVar10 = local_390;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar10 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar10 = pfVar10 + 1;
      }
      fVar1 = *(float *)(&DAT_00696fc8 + iVar5 * 0x970);
      local_3c4 = fVar1 * DAT_00701580;
      local_3c0 = fVar1 * DAT_00701584;
      local_3d4 = local_3c4 + (float)(&DAT_00696fa4)[iVar6 * 0x25c];
      local_418 = (double)CONCAT44(local_418._4_4_,iVar6 * 0x970);
      local_3d0 = local_3c0 + (float)(&DAT_00696fa8)[iVar6 * 0x25c];
      fVar1 = fVar1 * DAT_00701588 + (float)(&DAT_00696fac)[iVar6 * 0x25c];
      local_420 = *(float *)(local_3ac + 0xcd4);
      local_404 = local_3d0 * local_390[3] + fVar1 * local_378 + local_390[0] * local_3d4 +
                  local_36c;
      local_3ec = *(float *)(*(int *)(local_3ac + 0x5578) + 0xcd4);
      puVar4 = &DAT_00701550;
      puVar11 = local_c8;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar11 = puVar11 + 1;
      }
      local_400 = local_3d0 * local_380 + fVar1 * local_374 + local_390[1] * local_3d4 + local_368;
      puVar4 = &DAT_00701550;
      puVar11 = local_f8;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar11 = puVar11 + 1;
      }
      local_3fc = local_3d0 * local_37c + fVar1 * local_370 + local_390[2] * local_3d4 + local_364;
      local_3e8 = local_3ec + local_420;
      puVar4 = &DAT_00701550;
      puVar11 = local_98;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar11 = puVar11 + 1;
      }
      local_41c = (float)_DAT_0064a660 / local_3e8;
      puVar4 = &DAT_00701550;
      puVar11 = local_128;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar11 = puVar11 + 1;
      }
      local_3e4 = (local_420 * (float)local_360 - local_3ec * (float)local_358) * local_41c;
      if (((double)_DAT_006793ec < dVar3) && (_DAT_006793ec < ABS(local_3e4))) {
        fVar1 = _DAT_006793ec;
        if (local_3e4 <= _DAT_0064b254) {
          fVar1 = -_DAT_006793ec;
        }
        local_3e4 = local_3e4 - fVar1;
        local_3c0 = (DAT_00701590 * param_2[1] +
                    DAT_00701594 * param_2[4] + DAT_00701598 * param_2[7]) * local_420;
        local_3bc = (DAT_00701590 * param_2[2] +
                    DAT_00701594 * param_2[5] + DAT_00701598 * param_2[8]) * local_420;
        local_3b4 = (DAT_00701590 * param_3[1] +
                    DAT_00701594 * param_3[4] + DAT_00701598 * param_3[7]) * local_3ec + local_3c0;
        local_3b0 = (DAT_00701590 * param_3[2] +
                    DAT_00701594 * param_3[5] + DAT_00701598 * param_3[8]) * local_3ec + local_3bc;
        local_42c = ((DAT_00701590 * *param_2 +
                     DAT_00701594 * param_2[3] + DAT_00701598 * param_2[6]) * local_420 +
                    (DAT_00701590 * *param_3 + DAT_00701594 * param_3[3] + DAT_00701598 * param_3[6]
                    ) * local_3ec) * local_41c;
        local_428 = (float *)(local_3b4 * local_41c);
        local_424 = local_3b0 * local_41c;
        local_43c = (double *)0x55b59d;
        local_3f8 = local_42c;
        local_3f4 = local_428;
        local_3f0 = local_424;
        FUN_005aab70();
        local_3e0 = *(float *)(local_3ac + 0xce8);
        local_3dc = *(float *)(local_3ac + 0xcec);
        local_3f8 = *(float *)(local_3c8 + 0xce8);
        local_3d8 = *(float *)(local_3ac + 0xcf0);
        local_31c = local_3f8 + local_3e0;
        local_3f4 = *(float **)(local_3c8 + 0xcec);
        local_318 = (float)local_3f4 + local_3dc;
        local_3f0 = *(float *)(local_3c8 + 0xcf0);
        local_314 = local_3f0 + local_3d8;
        local_3d4 = local_2f0 * (float)local_428 + local_2e4 * local_424 + local_2fc * local_42c;
        local_3d0 = local_2ec * (float)local_428 + local_2e0 * local_424 + local_2f8 * local_42c;
        local_3cc = local_2e8 * (float)local_428 + local_2dc * local_424 + local_2f4 * local_42c;
        local_43c = (double *)
                    (local_2ac * (float)local_428 + local_2a0 * local_424 + local_2b8 * local_42c);
        local_440 = (double *)
                    (local_2b0 * (float)local_428 + local_2a4 * local_424 + local_2bc * local_42c);
        local_444 = (double *)
                    (local_2b4 * (float)local_428 + local_2a8 * local_424 + local_2c0 * local_42c);
        local_448 = (float *)0x55b722;
        FUN_0041ce10();
        local_3e4 = local_3e4 * local_41c;
        local_43c = (double *)(local_3e4 * local_3ec * (float)_DAT_0064c368);
        local_448 = (float *)local_3d4;
        local_444 = (double *)local_3d0;
        local_440 = (double *)local_3cc;
        local_454 = local_3a8;
        local_450 = (float *)local_3a4;
        pfStack_458 = local_390;
        local_44c = (float *)local_3a0;
        pfStack_45c = (float *)0x55b788;
        puVar4 = (undefined4 *)FUN_005ab380();
        local_43c = (double *)(-(local_3e4 * local_420) * (float)_DAT_0064c368);
        puVar11 = local_c8;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar11 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar11 = puVar11 + 1;
        }
        local_448 = (float *)local_328;
        local_444 = (double *)local_324;
        local_440 = (double *)local_320;
        local_454 = local_404;
        local_450 = (float *)local_400;
        pfStack_458 = local_390;
        local_44c = (float *)local_3fc;
        pfStack_45c = (float *)0x55b7f7;
        puVar4 = (undefined4 *)FUN_005ab380();
        fVar1 = (float)(&DAT_00696d18)[iVar5 * 0x25c];
        fVar2 = *(float *)((int)&DAT_00696d18 + (int)(float)local_418);
        puVar11 = local_f8;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar11 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar11 = puVar11 + 1;
        }
        local_43c = (double *)&local_340;
        fVar1 = (_DAT_006ee20c + _DAT_0064b240) * (fVar1 + fVar2) * (float)_DAT_0064a6d0;
        fVar2 = (_DAT_006ee210 + _DAT_0064b240) *
                ((float)(&DAT_00696d1c)[iVar5 * 0x25c] +
                *(float *)((int)&DAT_00696d1c + (int)(float)local_418)) * (float)_DAT_0064a6d0;
        local_314 = (fVar1 * fVar1 + fVar2 * fVar2) * local_3e8 * _DAT_0064cae4 * _DAT_006793f4;
        local_440 = (double *)0x55b88d;
        FUN_004f7850();
        local_43c = (double *)&local_334;
        local_440 = (double *)0x55b8a4;
        FUN_004f7850();
        local_43c = (double *)(local_32c * local_3ec);
        local_440 = (double *)(local_330 * local_3ec);
        local_444 = (double *)(local_334 * local_3ec);
        local_448 = (float *)0x55b8dd;
        FUN_0041ce10();
        local_43c = (double *)(local_338 * local_420);
        local_404 = local_3a8;
        local_400 = local_3a4;
        local_3fc = local_3a0;
        local_440 = (double *)(local_33c * local_420);
        local_444 = (double *)(local_340 * local_420);
        local_448 = (float *)0x55b934;
        FUN_0041ce10();
        local_43c = (double *)(local_3f0 + local_3fc);
        local_440 = (double *)((float)local_3f4 + local_400);
        local_444 = (double *)(local_3f8 + local_404);
        local_448 = (float *)0x55b961;
        FUN_0041ce10();
        local_43c = (double *)(local_3fc * local_41c);
        local_440 = (double *)(local_400 * local_41c);
        local_444 = (double *)(local_404 * local_41c);
        local_448 = (float *)0x55b98e;
        FUN_0041ce10();
        local_43c = (double *)(local_338 - local_410);
        local_39c = (float)local_418;
        local_398 = local_418._4_4_;
        local_394 = local_410;
        local_440 = (double *)(local_33c - local_418._4_4_);
        local_444 = (double *)(local_340 - (float)local_418);
        local_448 = (float *)0x55b9e5;
        FUN_0041ce10();
        local_43c = (double *)(local_32c - local_394);
        local_440 = (double *)(local_330 - local_398);
        local_444 = (double *)(local_334 - local_39c);
        local_448 = (float *)0x55ba24;
        FUN_0041ce10();
        fVar1 = local_418._4_4_ * (float)local_428 +
                local_410 * local_424 + (float)local_418 * local_42c;
        local_43c = (double *)(local_424 * fVar1);
        local_440 = (double *)((float)local_428 * fVar1);
        local_444 = (double *)(local_42c * fVar1);
        local_448 = (float *)0x55ba69;
        FUN_0041ce10();
        local_43c = (double *)(local_410 - local_3d8);
        local_200 = local_3e0;
        local_1fc = local_3dc;
        local_1f8 = local_3d8;
        local_440 = (double *)(local_418._4_4_ - local_3dc);
        local_444 = (double *)((float)local_418 - local_3e0);
        local_448 = (float *)0x55bab7;
        FUN_0041ce10();
        local_20c = local_404;
        local_208 = local_400;
        local_204 = local_3fc;
        fVar1 = (float)local_3f4 * (float)local_428 + local_3f0 * local_424 + local_3f8 * local_42c;
        local_43c = (double *)(local_424 * fVar1);
        local_440 = (double *)((float)local_428 * fVar1);
        local_444 = (double *)(local_42c * fVar1);
        local_448 = (float *)0x55bb1d;
        FUN_0041ce10();
        local_43c = (double *)(local_3f0 - local_3d8);
        local_218 = local_3e0;
        local_214 = local_3dc;
        local_210 = local_3d8;
        local_440 = (double *)((float)local_3f4 - local_3dc);
        local_444 = (double *)(local_3f8 - local_3e0);
        local_448 = (float *)0x55bb6b;
        FUN_0041ce10();
        local_260 = local_404;
        local_43c = (double *)&local_290;
        local_25c = local_400;
        local_258 = local_3fc;
        local_440 = (double *)0x55bb9f;
        FUN_004f78b0();
        local_43c = (double *)&local_1f4;
        local_440 = (double *)0x55bbb2;
        FUN_004f78b0();
        local_43c = (double *)(local_1ec + local_288);
        local_440 = (double *)(local_1f0 + local_28c);
        local_444 = (double *)(local_1f4 + local_290);
        local_448 = (float *)0x55bbf1;
        FUN_0041ce10();
        local_43c = (double *)&local_230;
        local_440 = (double *)0x55bc04;
        FUN_004f7880();
        local_43c = (double *)&local_278;
        local_440 = (double *)0x55bc17;
        FUN_004f7880();
        local_43c = (double *)
                    ((float)local_418 * local_2f4 +
                    local_418._4_4_ * local_2e8 + local_410 * local_2dc);
        local_440 = (double *)
                    ((float)local_418 * local_2f8 +
                    local_418._4_4_ * local_2ec + local_410 * local_2e0);
        local_444 = (double *)
                    (local_418._4_4_ * local_2f0 +
                    local_410 * local_2e4 + (float)local_418 * local_2fc);
        local_448 = (float *)0x55bc9b;
        FUN_0041ce10();
        local_43c = (double *)&local_31c;
        local_440 = (double *)&local_404;
        local_444 = (double *)&local_3b8;
        local_448 = (float *)0x55bcb5;
        FUN_004e29c2();
        local_43c = (double *)
                    ((float)local_418 * local_2b8 +
                    local_418._4_4_ * local_2ac + local_410 * local_2a0);
        local_440 = (double *)
                    ((float)local_418 * local_2bc +
                    local_418._4_4_ * local_2b0 + local_410 * local_2a4);
        local_444 = (double *)
                    (local_418._4_4_ * local_2b4 +
                    local_410 * local_2a8 + (float)local_418 * local_2c0);
        local_448 = (float *)0x55bd3b;
        FUN_0041ce10();
        local_43c = (double *)&local_31c;
        local_440 = (double *)&local_404;
        local_444 = (double *)&local_3c4;
        local_448 = (float *)0x55bd52;
        FUN_004e29c2();
        local_43c = (double *)(local_228 - local_3b0);
        local_440 = (double *)(local_22c - local_3b4);
        local_444 = (double *)(local_230 - local_3b8);
        local_448 = (float *)0x55bd93;
        FUN_0041ce10();
        local_43c = (double *)(local_270 - local_3bc);
        local_440 = (double *)(local_274 - local_3c0);
        local_444 = (double *)(local_278 - local_3c4);
        local_448 = (float *)0x55bdc9;
        FUN_0041ce10();
        local_2c4 = local_3fc;
        local_2cc = local_404;
        local_2c8 = local_400;
        fVar1 = local_3f0 * local_3cc + local_3d0 * (float)local_3f4 + local_3f8 * local_3d4;
        local_43c = (double *)(local_3cc * fVar1);
        local_440 = (double *)(local_3d0 * fVar1);
        local_444 = (double *)(fVar1 * local_3d4);
        local_448 = (float *)0x55be2b;
        FUN_0041ce10();
        local_43c = (double *)(local_3f0 - local_3d8);
        local_240 = local_3d8;
        local_248 = local_3e0;
        local_244 = local_3dc;
        local_440 = (double *)((float)local_3f4 - local_3dc);
        local_444 = (double *)(local_3f8 - local_3e0);
        local_448 = (float *)0x55be79;
        FUN_0041ce10();
        local_23c = local_404;
        local_238 = local_400;
        local_43c = (double *)&local_328;
        local_440 = (double *)&local_2cc;
        local_234 = local_3fc;
        local_444 = (double *)0x55beaf;
        fVar12 = (float10)FUN_004e1080();
        local_43c = (double *)(float)fVar12;
        local_440 = (double *)&local_328;
        local_444 = (double *)local_1e8;
        local_448 = (float *)0x55becb;
        FUN_004bdd80();
        local_448 = (float *)local_1e8;
        local_44c = &local_2cc;
        local_450 = (float *)local_1b8;
        local_454 = 7.874501e-39;
        FUN_004bde20();
        local_454 = (float)DAT_006ee22c;
        pfStack_458 = &local_20c;
        pfStack_45c = &local_404;
        uStack_460 = 0x55bf00;
        uStack_460 = FUN_004bdd80();
        pfStack_464 = &local_200;
        puStack_468 = local_1a0;
        pfStack_46c = (float *)0x55bf16;
        FUN_004bde20();
        pfStack_470 = &local_260;
        pfStack_46c = (float *)DAT_006ee22c;
        apfStack_480[3] = &local_404;
        apfStack_480[2] = (float *)0x55bf2f;
        apfStack_480[2] = (float *)FUN_004bdd80();
        apfStack_480[1] = &local_218;
        apfStack_480[0] = local_1c4;
        FUN_004bde20();
        local_440 = (double *)&local_248;
        local_444 = (double *)&local_404;
        local_43c = (double *)DAT_006ee22c;
        local_448 = (float *)0x55bf61;
        local_448 = (float *)FUN_004bdd80();
        local_44c = &local_23c;
        local_450 = (float *)local_1ac;
        local_454 = 7.874702e-39;
        FUN_004bde20();
        pfStack_458 = (float *)local_1e8;
        local_454 = (float)DAT_006ee22c;
        pfStack_45c = &local_404;
        uStack_460 = 0x55bf8f;
        uStack_460 = FUN_004bdd80();
        pfStack_464 = (float *)local_1b8;
        puStack_468 = local_194;
        pfStack_46c = (float *)0x55bfa5;
        FUN_004bde20();
        pfStack_46c = &local_39c;
        pfStack_470 = (float *)local_1a0;
        apfStack_480[3] = (float *)&local_224;
        apfStack_480[2] = (float *)0x55bfc2;
        FUN_004bddd0();
        apfStack_480[2] = &local_39c;
        apfStack_480[1] = local_1c4;
        apfStack_480[0] = &local_284;
        FUN_004bddd0();
        local_43c = (double *)&local_3b8;
        local_440 = (double *)local_1ac;
        local_444 = (double *)&local_26c;
        local_448 = (float *)0x55bfff;
        FUN_004bddd0();
        local_448 = &local_3c4;
        local_44c = (float *)local_194;
        local_450 = &local_254;
        local_454 = 7.874933e-39;
        FUN_004bddd0();
        local_444 = (double *)local_224;
        local_440 = (double *)local_220;
        local_43c = (double *)local_21c;
        local_448 = (float *)0x55c049;
        FUN_004f7690();
        local_444 = (double *)local_284;
        local_440 = (double *)local_280;
        local_43c = (double *)local_27c;
        local_448 = (float *)0x55c076;
        FUN_004f7690();
        local_444 = (double *)local_26c;
        local_440 = (double *)local_268;
        local_43c = (double *)local_264;
        local_448 = (float *)0x55c0a3;
        FUN_004f7780();
        local_444 = (double *)local_254;
        local_440 = (double *)local_250;
        local_43c = (double *)local_24c;
        local_448 = (float *)0x55c0d0;
        FUN_004f7780();
      }
      if (DAT_006ee230 != 0) {
        local_43c = (double *)&local_42c;
        local_420 = (float)(((float10)local_350 - (float10)local_348) * (float10)_DAT_0064a6d0);
        local_440 = (double *)0x55c107;
        FUN_004f7880();
        local_3e8 = _DAT_006793f0 * (float)_DAT_0064a6d0;
        fVar1 = ABS(local_420);
        local_418 = (double)fVar1;
        if (fVar1 <= _DAT_006793f0) {
          if (local_3e8 < fVar1) {
            local_440 = (double *)local_390;
            local_43c = (double *)((-local_420 * (fVar1 - local_3e8)) / (_DAT_006793f0 - local_3e8))
            ;
            local_444 = (double *)0x55c1ff;
            local_41c = (float)local_43c;
            puVar4 = (undefined4 *)FUN_005ab6d0();
            puVar11 = local_128;
            for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar11 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar11 = puVar11 + 1;
            }
          }
        }
        else {
          local_43c = (double *)(-local_420 * (float)_DAT_0064a6d0);
          local_440 = (double *)local_390;
          local_444 = (double *)0x55c15a;
          local_41c = (float)local_43c;
          puVar4 = (undefined4 *)FUN_005ab6d0();
          puVar11 = local_128;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar11 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar11 = puVar11 + 1;
          }
          if ((float)local_428 * local_41c < _DAT_0064b254) {
            local_440 = (double *)((float)local_428 * (float)_DAT_0064a710);
            local_444 = (double *)local_42c;
            local_43c = (double *)local_424;
            local_448 = (float *)0x55c1bc;
            local_428 = (float *)local_440;
            FUN_004f7780();
          }
        }
        if (_DAT_0064b254 < (float)local_428 * local_420) {
          fVar12 = (float10)_DAT_0064a660 -
                   ((float10)local_418 * (float10)_DAT_0064a658) / (float10)_DAT_006793f0;
          local_3e8 = (float)fVar12;
          if (fVar12 < (float10)_DAT_0064b254) {
            local_3e8 = 0.0;
          }
          local_43c = (double *)0x55c25b;
          fVar12 = (float10)FUN_004e1fd9();
          local_444 = (double *)local_42c;
          local_440 = (double *)
                      (float)(fVar12 * (float10)local_3e8 * (float10)(float)local_428 *
                             (float10)_DAT_0064a778);
          local_43c = (double *)local_424;
          local_448 = (float *)0x55c295;
          local_428 = (float *)local_440;
          FUN_004f7780();
        }
      }
      local_440 = (double *)local_c8;
      local_43c = (double *)param_2;
      local_444 = (double *)local_98;
      local_448 = local_390;
      local_44c = (float *)0x55c2b6;
      local_440 = (double *)FUN_005ab130();
      local_444 = (double *)local_68;
      local_448 = (float *)0x55c2c7;
      FUN_005ab130();
      local_440 = (double *)local_f8;
      local_444 = (double *)local_128;
      local_43c = (double *)param_3;
      local_448 = local_390;
      local_44c = (float *)0x55c2eb;
      local_440 = (double *)FUN_005ab130();
      local_444 = (double *)local_38;
      local_448 = (float *)0x55c2fc;
      FUN_005ab130();
      pfVar8 = local_68;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *param_2 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        param_2 = param_2 + 1;
      }
      pfVar8 = local_38;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *param_3 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        param_3 = param_3 + 1;
      }
      return 0;
    }
  }
  return 1;
}

