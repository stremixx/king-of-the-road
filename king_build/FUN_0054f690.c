
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0054f690(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  undefined4 *puVar12;
  float fVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  float10 fVar19;
  float10 fVar20;
  float10 extraout_ST0;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float local_37c;
  float local_374;
  int local_370;
  undefined4 *local_368;
  float *local_364;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  undefined1 *local_34c;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300 [4];
  float local_2f0;
  float local_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
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
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  undefined1 local_258 [48];
  undefined1 local_228 [48];
  undefined1 local_1f8 [48];
  undefined1 auStack_1c8 [12];
  undefined1 auStack_1bc [48];
  undefined1 auStack_18c [48];
  undefined1 auStack_15c [48];
  undefined1 local_12c [48];
  undefined1 local_fc [48];
  undefined1 local_cc [48];
  undefined1 auStack_9c [48];
  undefined1 auStack_6c [48];
  undefined1 auStack_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646a08;
  pvStack_c = ExceptionList;
  if ((*(int *)(param_1 + 0x390) == 0) && (*(int *)(param_1 + 0x38c) == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0x390) = uVar8;
  *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_1 + 0x38c);
  if ((*(int *)(param_1 + 0x38c) != 0) && (*(int *)(param_1 + 0x5464) != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0x5464) + 0xda0) = 1;
  }
  FUN_00554af0();
  if ((*(int *)(param_1 + 0x2a38) != 0) && (DAT_006ee160 == 0)) {
    local_310 = *(float *)(param_1 + 0x2a3c);
    local_30c = *(float *)(param_1 + 0x2a40);
    local_308 = *(float *)(param_1 + 0x2a44);
    fVar13 = local_310 * *(float *)(param_1 + 0x264) +
             local_30c * *(float *)(param_1 + 0x270) + local_308 * *(float *)(param_1 + 0x27c) +
             *(float *)(param_1 + 0x288);
    local_32c = local_30c * *(float *)(param_1 + 0x274) +
                local_308 * *(float *)(param_1 + 0x280) + local_310 * *(float *)(param_1 + 0x268) +
                *(float *)(param_1 + 0x28c);
    fVar5 = local_30c * *(float *)(param_1 + 0x278) +
            local_308 * *(float *)(param_1 + 0x284) + local_310 * *(float *)(param_1 + 0x26c) +
            *(float *)(param_1 + 0x290);
    local_314 = fVar13 * *(float *)(param_1 + 0x1c4) - fVar5 * *(float *)(param_1 + 0x1bc);
    local_354 = (local_32c * *(float *)(param_1 + 0x1bc) - fVar13 * *(float *)(param_1 + 0x1c0)) +
                *(float *)(param_1 + 0x1b8);
    local_358 = local_314 + *(float *)(param_1 + 0x1b4);
    local_35c = (fVar5 * *(float *)(param_1 + 0x1c0) - local_32c * *(float *)(param_1 + 0x1c4)) +
                *(float *)(param_1 + 0x1b0);
    local_340 = local_35c;
    local_33c = local_358;
    local_338 = local_354;
    FUN_005aaad0(&local_328,&local_35c);
    if ((*(int *)(param_1 + 0x38c) != 0) &&
       (((*(int *)(param_1 + 0x414) == 0 &&
         (ABS(local_328 * *(float *)(param_1 + 0x3e0) +
              *(float *)(param_1 + 0x3e4) * local_324 + *(float *)(param_1 + 1000) * local_320) <
          (float)_DAT_0064c308)) && (ABS(*(float *)(param_1 + 1000)) < (float)_DAT_0064a6d0)))) {
      FUN_0054e6a0(0,&local_310,&local_35c);
    }
  }
  fVar19 = (float10)FUN_004e1fd9();
  fVar13 = (float)fVar19;
  fVar5 = (*(float *)(param_1 + 0x1b8) - *(float *)(param_1 + 0x1dc)) / fVar13;
  fVar1 = (*(float *)(param_1 + 0x1b4) - *(float *)(param_1 + 0x1d8)) / fVar13;
  fVar2 = (*(float *)(param_1 + 0x1b0) - *(float *)(param_1 + 0x1d4)) / fVar13;
  local_314 = fVar2 * *(float *)(param_1 + 0x264) +
              fVar5 * *(float *)(param_1 + 0x27c) + fVar1 * *(float *)(param_1 + 0x270);
  local_32c = fVar5 * *(float *)(param_1 + 0x280) +
              fVar1 * *(float *)(param_1 + 0x274) + fVar2 * *(float *)(param_1 + 0x268);
  local_35c = *(float *)(param_1 + 0x264) * *(float *)(param_1 + 0x1e0) +
              *(float *)(param_1 + 0x270) * *(float *)(param_1 + 0x1e4) +
              *(float *)(param_1 + 0x27c) * *(float *)(param_1 + 0x1e8);
  local_358 = *(float *)(param_1 + 0x268) * *(float *)(param_1 + 0x1e0) +
              *(float *)(param_1 + 0x274) * *(float *)(param_1 + 0x1e4) +
              *(float *)(param_1 + 0x280) * *(float *)(param_1 + 0x1e8);
  local_354 = *(float *)(param_1 + 0x26c) * *(float *)(param_1 + 0x1e0) +
              *(float *)(param_1 + 0x278) * *(float *)(param_1 + 0x1e4) +
              *(float *)(param_1 + 0x284) * *(float *)(param_1 + 0x1e8);
  FUN_004e29c2(local_300,&local_35c,param_1 + 0x1a4);
  fVar5 = *(float *)(param_1 + 0x1c0) - local_300[1];
  fVar1 = *(float *)(param_1 + 0x1bc) - local_300[0];
  fVar19 = (float10)FUN_0061d200();
  local_37c = local_32c * _DAT_00678614 - (fVar1 / fVar13) * _DAT_006ee200;
  fVar23 = (float10)(fVar5 / fVar13) * (float10)_DAT_006ee204 -
           (float10)local_314 * (float10)_DAT_00678618;
  if (DAT_0067860c < local_37c) {
    local_37c = DAT_0067860c;
  }
  if (local_37c < -DAT_0067860c) {
    local_37c = -DAT_0067860c;
  }
  if ((float10)_DAT_00678610 < fVar23) {
    fVar23 = (float10)_DAT_00678610;
  }
  if (fVar23 < (float10)-_DAT_00678610) {
    fVar23 = (float10)-_DAT_00678610;
  }
  fVar20 = (float10)_DAT_0064b240;
  *(undefined4 *)(param_1 + 0x2a38) = 0;
  *(float *)(param_1 + 0x4f54) =
       (float)(fVar19 * (float10)*(float *)(param_1 + 0x4f54) +
              (fVar20 - fVar19) * (float10)local_37c);
  *(float *)(param_1 + 0x4f58) =
       (float)(fVar19 * (float10)*(float *)(param_1 + 0x4f58) + (fVar20 - fVar19) * fVar23);
  *(undefined4 *)(param_1 + 0x2a3c) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0x2a40) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0x2a44) = DAT_007015b8;
  *(undefined1 *)(param_1 + 0x27b8) = *(undefined1 *)(param_1 + 0xf98);
  if (*(int *)(param_1 + 0x51b8) == 1) {
    uVar9 = *(uint *)(param_1 + 0x27b4) & 0xffffffef | 4;
  }
  else {
    if (*(int *)(param_1 + 0x51b8) == 2) {
      *(uint *)(param_1 + 0x27b4) = *(uint *)(param_1 + 0x27b4) & 0xfffffffb | 0x10;
      goto LAB_0054fba5;
    }
    uVar9 = *(uint *)(param_1 + 0x27b4) & 0xffffffeb;
  }
  *(uint *)(param_1 + 0x27b4) = uVar9;
LAB_0054fba5:
  if (*(int *)(param_1 + 0x51b4) == 0) {
    uVar9 = *(uint *)(param_1 + 0x27b4) & 0xfffffff7;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x27b4) | 8;
  }
  *(uint *)(param_1 + 0x27b4) = uVar9;
  if (*(int *)(param_1 + 0x517c) == 0) {
    uVar9 = *(uint *)(param_1 + 0x27b4) & 0xffffffbf;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x27b4) | 0x40;
  }
  *(uint *)(param_1 + 0x27b4) = uVar9;
  if (*(int *)(param_1 + 0x5178) == 0) {
    uVar9 = *(uint *)(param_1 + 0x27b4) & 0xffffffdf;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x27b4) | 0x20;
  }
  *(uint *)(param_1 + 0x27b4) = uVar9;
  if (*(int *)(param_1 + 0x4c4) == 0) {
    uVar9 = *(uint *)(param_1 + 0x27b4) & 0xfffffffe;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x27b4) | 1;
  }
  *(uint *)(param_1 + 0x27b4) = uVar9;
  if (*(int *)(param_1 + 0x51a0) == 0) {
    uVar9 = *(uint *)(param_1 + 0x27b4) & 0xfffffbff;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x27b4) | 0x400;
  }
  *(uint *)(param_1 + 0x27b4) = uVar9;
  if (*(int *)(param_1 + 0x51c0) == 0) {
    uVar9 = *(uint *)(param_1 + 0x27b4) & 0xfffbffff;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x27b4) | 0x40000;
  }
  *(uint *)(param_1 + 0x27b4) = uVar9;
  if ((*(byte *)(param_1 + 0x51a4) & 1) != 0) {
    FUN_0054c2a0();
  }
  FUN_0054c7c0();
  iVar10 = __ftol();
  if ((iVar10 < 0x17) && (4 < iVar10)) {
    *(undefined4 *)(param_1 + 0x51b4) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x51b4) = 1;
  }
  FUN_005804b0();
  if ((DAT_006785ec & 8) != 0) {
    FUN_00553d80();
  }
  puVar12 = (undefined4 *)(param_1 + 0x27f0);
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  iVar10 = *(int *)(param_1 + 0x5460);
  if (((iVar10 != 0) && (*(int *)(param_1 + 0x2aac) == 1)) &&
     ((*(int *)(iVar10 + 0x3344) == 0 &&
      (fVar13 = ABS(*(float *)(iVar10 + 0x332c)), (float)_DAT_0064a660 < fVar13)))) {
    local_374 = 1.0;
    if (fVar13 < (float)_DAT_0064a908) {
      local_374 = ABS(fVar13 - ABS(*(float *)(iVar10 + 0x3330)) * (float)_DAT_0064a798) *
                  (float)_DAT_0064e780;
    }
    fVar13 = SQRT(local_374) * (float)_DAT_0064ba68;
    if (*(float *)(param_1 + 0x19c) < _DAT_0064ca64) {
      fVar13 = fVar13 * SQRT(*(float *)(param_1 + 0x19c) * (float)_DAT_0064a920);
    }
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x28bc)) {
      iVar14 = 0;
      iVar16 = 0x3444;
      do {
        iVar3 = *(int *)(param_1 + 0x5460);
        if ((((((*(short *)(iVar3 + 0x2b68 + iVar14) != 0) && (*(int *)(iVar3 + iVar16) == 0)) &&
              (iVar4 = *(int *)(iVar3 + 0x2bd4 + iVar14), iVar4 != 0)) &&
             (*(int *)(iVar3 + 0x2bdc + iVar14) != 0)) &&
            (((iVar3 = *(int *)(iVar4 + 4), iVar3 == 6 || (iVar3 == 10)) || (iVar3 == 0xb)))) &&
           ((float)_DAT_0064a5a8 < fVar13)) {
          *(float *)(iVar16 + -0xc54 + param_1) = fVar13;
        }
        iVar10 = iVar10 + 1;
        iVar16 = iVar16 + 4;
        iVar14 = iVar14 + 0xf8;
      } while (iVar10 < *(int *)(param_1 + 0x28bc));
    }
  }
  FUN_00551080();
  if (((*(int *)(param_1 + 0x51bc) == 0) ||
      (*(int *)(&DAT_006d1478 + *(int *)(param_1 + 0x28b4) * 0x5d0) == 0)) ||
     ((DAT_006ee1b4 == 0 ||
      ((DAT_006ee1b8 == 0 || (fVar19 = (float10)FUN_005567a0(), fVar19 <= (float10)_DAT_0064ba68))))
     )) {
    *(undefined4 *)(param_1 + 0x5028) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x5028) = 1;
    FUN_004e2035();
    iVar10 = __ftol();
    local_32c = (float)(((extraout_ST0 - (float10)iVar10) + (extraout_ST0 - (float10)iVar10)) *
                       (float10)_DAT_0064a818);
    fVar19 = (float10)fcos((float10)_DAT_0064e778);
    *(float *)(param_1 + 0x5020) = local_32c;
    *(float *)(param_1 + 0x5024) = local_32c;
    local_31c = (float)fVar19;
    fVar19 = (float10)fcos((float10)_DAT_0064e770);
    local_300[3] = _DAT_0064b240 / (_DAT_0064b240 - local_31c);
    local_314 = local_32c - _DAT_0064e768;
    fVar13 = local_32c + _DAT_0064e768;
    fVar23 = (float10)fcos((float10)local_314);
    fVar20 = (float10)fcos((float10)local_32c);
    fVar21 = (float10)fcos((float10)fVar13);
    if ((float)_DAT_0064a818 < local_32c) {
      *(float *)(param_1 + 0x5024) = local_32c - (float)_DAT_0064a810;
    }
    local_318 = (float)(fVar23 * fVar23);
    local_330 = (float)fVar20 * (float)fVar20;
    local_348 = (float)fVar21 * (float)fVar21;
    FUN_005ab130(&local_2d0,param_1 + 0x2c4,param_1 + 0x204);
    FUN_005aba00(&local_2a0,&local_2d0);
    iVar10 = *(int *)(param_1 + 0x28b4) * 0x5d0;
    pfVar11 = (float *)(&DAT_006d1490 + iVar10);
    local_354 = *(float *)(DAT_006d0fd8 + 0x5bc) -
                (local_2c8 * *pfVar11 +
                 local_2bc * *(float *)(&DAT_006d1494 + iVar10) +
                 local_2b0 * *(float *)(&DAT_006d1498 + iVar10) + local_2a4);
    local_358 = *(float *)(DAT_006d0fd8 + 0x5b8) -
                (local_2cc * *pfVar11 +
                 local_2c0 * *(float *)(&DAT_006d1494 + iVar10) +
                 local_2b4 * *(float *)(&DAT_006d1498 + iVar10) + local_2a8);
    local_35c = *(float *)(DAT_006d0fd8 + 0x5b4) -
                (local_2c4 * *(float *)(&DAT_006d1494 + iVar10) +
                 local_2b8 * *(float *)(&DAT_006d1498 + iVar10) + local_2d0 * *pfVar11 + local_2ac);
    local_340 = local_35c;
    local_33c = local_358;
    local_338 = local_354;
    FUN_005aaad0(&local_2dc,&local_35c);
    local_2f0 = local_2a0 * local_2dc + local_294 * local_2d8 + local_288 * local_2d4;
    fVar5 = local_2dc * local_29c + local_290 * local_2d8 + local_284 * local_2d4;
    local_2ec = local_2dc * local_298 + local_28c * local_2d8 + local_280 * local_2d4;
    fVar23 = (float10)fpatan((float10)local_2f0,(float10)fVar5);
    fVar23 = -fVar23;
    fVar20 = ABS(fVar23);
    if ((fVar20 < (float10)_DAT_0064e778) || ((float10)_DAT_0064e770 < fVar20)) {
      fVar21 = (float10)fsin(fVar23);
      if ((float10)_DAT_0064e778 <= fVar20) {
        fVar23 = (float10)fcos(fVar23);
        fVar23 = (float10)(float)fVar19 - fVar23;
      }
      else {
        fVar23 = (float10)fcos(fVar23);
        fVar23 = fVar23 - (float10)local_31c;
      }
      fVar23 = fVar23 * (float10)local_300[3];
      local_350 = (float)(fVar23 * (float10)local_318);
      fVar1 = (float)(fVar23 * (float10)local_330);
      fVar2 = (float)(fVar23 * (float10)local_348);
      dVar6 = _DAT_0064e388;
      if (_DAT_0064b254 < fVar5) {
        dVar6 = _DAT_0064a830;
      }
      fVar23 = (float10)dVar6;
      local_304 = (float)(fVar23 * (float10)DAT_00701588);
      iVar10 = *(int *)(param_1 + 0x28b4) * 0x5d0;
      local_34c = (undefined1 *)(float)(fVar23 * (float10)DAT_00701584);
      fVar23 = fVar23 * (float10)DAT_00701580;
      fVar7 = ((float)ABS(fVar21) + _DAT_0064b240) * _DAT_0064b32c;
      fVar20 = (float10)fsin((float10)local_314);
      fVar20 = fVar20 * (float10)_DAT_0064c658;
      local_338 = (*(float *)(&DAT_006d148c + iVar10) - (float)(fVar20 * (float10)DAT_007015a8)) +
                  local_304 + local_2ec * fVar7;
      local_33c = (*(float *)(&DAT_006d1488 + iVar10) - (float)(fVar20 * (float10)DAT_007015a4)) +
                  (float)local_34c + fVar5 * fVar7;
      local_340 = (float)(((float10)*(float *)(&DAT_006d1484 + iVar10) -
                          fVar20 * (float10)DAT_007015a0) + fVar23) + local_2f0 * fVar7;
      fVar20 = (float10)fsin((float10)local_32c);
      fVar20 = fVar20 * (float10)_DAT_0064c658;
      local_320 = (*(float *)(&DAT_006d1498 + iVar10) - (float)(fVar20 * (float10)DAT_007015a8)) +
                  local_304 + fVar7 * local_2ec;
      local_324 = (*(float *)(&DAT_006d1494 + iVar10) - (float)(fVar20 * (float10)DAT_007015a4)) +
                  (float)local_34c + fVar7 * fVar5;
      local_328 = (float)(((float10)*(float *)(&DAT_006d1490 + iVar10) -
                          fVar20 * (float10)DAT_007015a0) + fVar23) + fVar7 * local_2f0;
      local_334 = fVar7 * local_2ec;
      local_344 = fVar7 * fVar5;
      fVar20 = (float10)fsin((float10)fVar13);
      fVar20 = fVar20 * (float10)_DAT_0064c658;
      local_354 = (*(float *)(&DAT_006d14a4 + iVar10) - (float)(fVar20 * (float10)DAT_007015a8)) +
                  local_304 + local_334;
      local_358 = (*(float *)(&DAT_006d14a0 + iVar10) - (float)(fVar20 * (float10)DAT_007015a4)) +
                  (float)local_34c + local_344;
      local_35c = (float)(((float10)*(float *)(&DAT_006d149c + iVar10) -
                          fVar20 * (float10)DAT_007015a0) + fVar23) + fVar7 * local_2f0;
      local_308 = local_350 * _DAT_00696410;
      local_30c = local_350 * _DAT_0069640c;
      local_310 = local_350 * _DAT_00696408;
      uVar8 = FUN_005ab330(local_228,local_340,local_33c,local_338,&local_2d0);
      uVar8 = FUN_005ab580(local_1f8,local_310,local_30c,local_308,uVar8);
      uVar8 = FUN_005ab130(local_258,uVar8);
      FUN_005ab130(local_12c,uVar8);
      local_338 = fVar1 * _DAT_00696410;
      local_33c = fVar1 * _DAT_0069640c;
      local_340 = fVar1 * _DAT_00696408;
      uVar8 = FUN_005ab330(local_258,local_328,local_324,local_320,&local_2d0);
      uVar8 = FUN_005ab580(local_1f8,local_340,local_33c,local_338,uVar8);
      uVar8 = FUN_005ab130(local_228,uVar8);
      FUN_005ab130(local_fc,uVar8);
      local_320 = fVar2 * _DAT_00696410;
      local_324 = fVar2 * _DAT_0069640c;
      local_328 = fVar2 * _DAT_00696408;
      uVar8 = FUN_005ab330(local_258,local_35c,local_358,local_354,&local_2d0);
      uVar8 = FUN_005ab580(local_1f8,local_328,local_324,local_320,uVar8);
      uVar8 = FUN_005ab130(local_228,uVar8);
      FUN_005ab130(local_cc,uVar8);
      local_364 = local_300;
      local_34c = local_12c;
      local_304 = 4.2039e-45;
      do {
        local_368 = (undefined4 *)FUN_00631d33(0x58);
        iVar10 = DAT_006ee1b4;
        local_4 = 0;
        if (local_368 == (undefined4 *)0x0) {
          local_368 = (undefined4 *)0x0;
        }
        else {
          FUN_005eed00(s_winkerGlow_0067234c,0x11);
          local_368[0xc] = 0;
          local_368[0xd] = 0;
          local_368[0xe] = 0;
          local_368[0xf] = 0;
          *local_368 = &PTR_FUN_0064b7cc;
          local_368[0x10] = iVar10;
          local_368[0x11] = 0;
          local_368[0x12] = 0;
          local_368[0x13] = 0;
          local_368[0x14] = 0;
          local_368[0x15] = 0xffffffff;
          local_368[9] = *(undefined4 *)(iVar10 + 0x24);
        }
        local_4 = 0xffffffff;
        *local_364 = (float)local_368;
        puVar12 = (undefined4 *)FUN_00631d33(0x70);
        local_4 = 1;
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          FUN_005f1020(&DAT_0068c120,6,1);
          local_350 = 5.60519e-45;
          do {
            FUN_004042a0();
            local_350 = (float)((int)local_350 + -1);
          } while (local_350 != 0.0);
          puVar17 = &DAT_00701550;
          puVar18 = puVar12 + 0x10;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar18 = *puVar17;
            puVar17 = puVar17 + 1;
            puVar18 = puVar18 + 1;
          }
          *puVar12 = &PTR_FUN_0064c7c0;
          puVar12[0xe] = 0;
          puVar12[0xf] = 0;
          local_350 = 0.0;
        }
        puVar15 = local_34c;
        local_4 = 0xffffffff;
        local_368[0x11] = puVar12;
        FUN_005f1800(local_34c,0);
        (**(code **)(*DAT_0069518c + 0x14))(0,local_368);
        local_34c = puVar15 + 0x30;
        local_364 = local_364 + 1;
        local_304 = (float)((int)local_304 + -1);
      } while (local_304 != 0.0);
      local_304 = 0.0;
    }
    iVar10 = *(int *)(param_1 + 0x28b4) * 0x5d0;
    pfVar11 = (float *)(&DAT_006d14b4 + iVar10);
    local_354 = *(float *)(DAT_006d0fd8 + 0x5bc) -
                (local_2c8 * *pfVar11 +
                 local_2bc * *(float *)(&DAT_006d14b8 + iVar10) +
                 local_2b0 * *(float *)(&DAT_006d14bc + iVar10) + local_2a4);
    local_358 = *(float *)(DAT_006d0fd8 + 0x5b8) -
                (local_2cc * *pfVar11 +
                 local_2c0 * *(float *)(&DAT_006d14b8 + iVar10) +
                 local_2b4 * *(float *)(&DAT_006d14bc + iVar10) + local_2a8);
    local_35c = *(float *)(DAT_006d0fd8 + 0x5b4) -
                (local_2d0 * *pfVar11 +
                 local_2c4 * *(float *)(&DAT_006d14b8 + iVar10) +
                 local_2b8 * *(float *)(&DAT_006d14bc + iVar10) + local_2ac);
    local_328 = local_35c;
    local_324 = local_358;
    local_320 = local_354;
    FUN_005aaad0(&fStack_2e8,&local_328);
    fVar21 = (float10)fStack_2e4 * (float10)local_294 +
             (float10)fStack_2e0 * (float10)local_288 + (float10)fStack_2e8 * (float10)local_2a0;
    fVar5 = fStack_2e8 * local_29c + fStack_2e4 * local_290 + fStack_2e0 * local_284;
    fVar1 = fStack_2e8 * local_298 + fStack_2e4 * local_28c + fStack_2e0 * local_280;
    fVar23 = (float10)fpatan(fVar21,(float10)fVar5);
    fVar23 = -fVar23;
    fVar20 = ABS(fVar23);
    if ((fVar20 < (float10)_DAT_0064e778) || ((float10)_DAT_0064e770 < fVar20)) {
      fVar22 = (float10)fsin(fVar23);
      if ((float10)_DAT_0064e778 <= fVar20) {
        fVar23 = (float10)fcos(fVar23);
        fVar23 = (float10)(float)fVar19 - fVar23;
      }
      else {
        fVar23 = (float10)fcos(fVar23);
        fVar23 = fVar23 - (float10)local_31c;
      }
      fVar23 = fVar23 * (float10)local_300[3];
      local_350 = (float)(fVar23 * (float10)local_318);
      local_34c = (undefined1 *)(float)(fVar23 * (float10)local_330);
      fVar19 = (float10)local_348;
      dVar6 = _DAT_0064e388;
      if (_DAT_0064b254 < fVar5) {
        dVar6 = _DAT_0064a830;
      }
      fVar2 = (float)dVar6;
      local_318 = fVar2 * DAT_00701588;
      local_31c = fVar2 * DAT_00701584;
      iVar10 = *(int *)(param_1 + 0x28b4) * 0x5d0;
      fVar2 = fVar2 * DAT_00701580;
      fVar20 = (float10)(float)ABS(fVar22) * (float10)_DAT_0064b32c;
      fVar22 = (float10)fsin((float10)local_314);
      fVar22 = fVar22 * (float10)_DAT_0064c658;
      local_320 = (float)(fVar22 * (float10)DAT_007015a8) + *(float *)(&DAT_006d14b0 + iVar10) +
                  local_318 + (float)((float10)fVar1 * fVar20);
      local_324 = (float)(fVar22 * (float10)DAT_007015a4) + *(float *)(&DAT_006d14ac + iVar10) +
                  local_31c + (float)((float10)fVar5 * fVar20);
      local_328 = (float)(fVar22 * (float10)DAT_007015a0 +
                          (float10)*(float *)(&DAT_006d14a8 + iVar10) + (float10)fVar2) +
                  (float)(fVar21 * fVar20);
      local_334 = (float)(fVar20 * (float10)fVar1);
      local_344 = (float)(fVar20 * (float10)fVar5);
      fVar22 = (float10)fsin((float10)local_32c);
      fVar22 = fVar22 * (float10)_DAT_0064c658;
      local_338 = local_334 +
                  local_318 +
                  (float)(fVar22 * (float10)DAT_007015a8) + *(float *)(&DAT_006d14bc + iVar10);
      local_33c = local_31c +
                  (float)(fVar22 * (float10)DAT_007015a4) + *(float *)(&DAT_006d14b8 + iVar10) +
                  local_344;
      local_340 = (float)((float10)fVar2 +
                         fVar22 * (float10)DAT_007015a0 +
                         (float10)*(float *)(&DAT_006d14b4 + iVar10)) + (float)(fVar20 * fVar21);
      FUN_0041ce10((float)(fVar20 * fVar21),(float)(fVar20 * (float10)fVar5),
                   (float)(fVar20 * (float10)fVar1));
      fVar20 = (float10)fsin((float10)fVar13);
      local_354 = local_308;
      local_35c = local_310;
      local_358 = local_30c;
      fVar20 = fVar20 * (float10)_DAT_0064c658;
      FUN_0041ce10((float)((float10)DAT_007015a0 * fVar20),(float)((float10)DAT_007015a4 * fVar20),
                   (float)((float10)DAT_007015a8 * fVar20));
      iVar10 = *(int *)(param_1 + 0x28b4) * 0x5d0;
      FUN_0041ce10(fStack_264 + *(float *)(&DAT_006d14c0 + iVar10),
                   fStack_260 + *(float *)(&DAT_006d14c4 + iVar10),
                   fStack_25c + *(float *)(&DAT_006d14c8 + iVar10));
      FUN_0041ce10(fVar2 + fStack_270,local_31c + fStack_26c,local_318 + fStack_268);
      FUN_0041ce10(local_300[0] + local_35c,local_300[1] + local_358,local_300[2] + local_354);
      FUN_0041ce10(local_350 * _DAT_00696408,local_350 * _DAT_0069640c,local_350 * _DAT_00696410);
      fVar1 = local_300[2];
      fVar5 = local_300[1];
      fVar13 = local_300[0];
      uVar8 = FUN_005ab330(local_258,local_328,local_324,local_320,&local_2d0);
      uVar8 = FUN_005ab580(local_1f8,fVar13,fVar5,fVar1,uVar8);
      uVar8 = FUN_005ab130(local_228,uVar8);
      FUN_005ab130(auStack_1bc,uVar8);
      FUN_0041ce10((float)local_34c * _DAT_00696408,(float)local_34c * _DAT_0069640c,
                   (float)local_34c * _DAT_00696410);
      uVar8 = FUN_005ab330(local_258,local_340,local_33c,local_338,&local_2d0);
      uVar8 = FUN_005ab580(local_1f8,local_300[0],local_300[1],local_300[2],uVar8);
      uVar8 = FUN_005ab130(local_228,uVar8);
      FUN_005ab130(auStack_18c,uVar8);
      uVar8 = FUN_005ab330(auStack_9c,local_35c,local_358,local_354,&local_2d0);
      puVar12 = (undefined4 *)FUN_004bdd80(auStack_1c8,&DAT_00696408,(float)(fVar23 * fVar19),uVar8)
      ;
      uVar8 = FUN_005ab580(auStack_6c,*puVar12,puVar12[1],puVar12[2]);
      uVar8 = FUN_005ab130(auStack_3c,uVar8);
      FUN_005ab130(auStack_15c,uVar8);
      puVar15 = auStack_1bc;
      pfVar11 = local_300;
      local_370 = 3;
      do {
        iVar10 = FUN_00631d33(0x58);
        local_4 = 2;
        if (iVar10 == 0) {
          fVar13 = 0.0;
        }
        else {
          fVar13 = (float)FUN_00551030(s_winkerGlow_0067234c,DAT_006ee1b8);
        }
        local_4 = 0xffffffff;
        *pfVar11 = fVar13;
        iVar10 = FUN_00631d33(0x70);
        local_4 = 3;
        if (iVar10 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_00550fe0();
        }
        local_4 = 0xffffffff;
        *(undefined4 *)((int)fVar13 + 0x44) = uVar8;
        FUN_005f1800(puVar15,0);
        (**(code **)(*DAT_0069518c + 0x14))(0,fVar13);
        pfVar11 = pfVar11 + 1;
        puVar15 = puVar15 + 0x30;
        local_370 = local_370 + -1;
      } while (local_370 != 0);
    }
  }
  FUN_0054e750();
  if (*(float *)(param_1 + 0x5090) + *(float *)(param_1 + 0x508c) <
      (float)*(double *)(DAT_006ee15c + 0xb98)) {
    *(undefined4 *)(param_1 + 0x5080) = 1;
  }
  FUN_005415b0();
  *(undefined4 *)(param_1 + 0xdf4) = 0;
  ExceptionList = pvStack_c;
  return;
}

