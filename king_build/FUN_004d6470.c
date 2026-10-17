
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d6470(uint param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char *pcVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *puVar17;
  float **ppfVar18;
  float10 fVar19;
  undefined4 auStack_284 [8];
  float *apfStack_264 [10];
  int iStack_23c;
  undefined4 *puStack_238;
  undefined4 *puStack_234;
  undefined8 local_230;
  undefined8 local_228;
  int local_1fc;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  undefined8 local_1c0;
  float local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a4;
  undefined4 local_1a0 [8];
  double local_180;
  float local_174;
  float local_170;
  float local_16c;
  double local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  double local_158;
  uint local_150 [2];
  float local_148 [4];
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  undefined4 local_118 [12];
  undefined1 local_e8 [48];
  undefined1 local_b8 [48];
  undefined4 local_88 [33];
  
  if ((DAT_007206c8 != 0) &&
     (pcVar9 = s__SecondCar__run_00671acc, cVar5 = s__SecondCar__run_00671acc[0], DAT_0071d774 != 0)
     ) {
    for (; (cVar5 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar5 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar5;
      cVar5 = *pcVar9;
    }
  }
  local_1a0[0] = 0xffffffff;
  local_1a0[1] = 0xffffffff;
  local_1a0[7] = 0xffffffff;
  local_1a0[2] = 0;
  local_1a0[3] = 0;
  local_1a0[4] = 0;
  local_1a0[5] = 0;
  local_1a0[6] = 0;
  if ((*(int *)(DAT_006cdbcc + 0x524) == 0) || (*(int *)(DAT_006cdbf8 + 0x180) != 2)) {
    local_228 = (double)CONCAT44(*(undefined4 *)(*(int *)(param_1 + 0x40c0) + 0x509c),local_148);
    local_230._4_4_ = (char *)0x4d6552;
    puVar10 = (undefined4 *)FUN_00437600();
    puVar17 = local_1a0;
    for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
      *puVar17 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar17 = puVar17 + 1;
    }
  }
  if ((*(int *)(DAT_006d0fd8 + 0x268) == *(int *)(param_1 + 0x40c0)) && (DAT_00695288 == 0)) {
    local_228 = (double)CONCAT44(0x4d658f,(float)local_228);
    thunk_FUN_00603580();
    local_228 = (double)CONCAT44(0x4d6594,(float)local_228);
    _DAT_00695220 = __ftol();
    local_228 = (double)CONCAT44(0x4d659e,(float)local_228);
    thunk_FUN_00603580();
    local_228 = (double)CONCAT44(0x4d65a3,(float)local_228);
    _DAT_00695224 = __ftol();
    if ((*(int *)(DAT_006cdbcc + 0x524) == 0) || (*(int *)(DAT_006cdbf8 + 0x180) != 2)) {
      puStack_234 = *(undefined4 **)(param_1 + 0x4074);
      local_230._4_4_ = (char *)&local_1e0;
      local_228 = (double)CONCAT44(&local_1a4,&local_1b0);
      puStack_238 = (undefined4 *)(*(int *)(param_1 + 0x40c0) + 0x509c);
      iStack_23c = 0x4d6605;
      local_230._0_4_ = puStack_234;
      FUN_0041d3f0();
      puStack_238 = local_118;
      iStack_23c = 0x4d6614;
      puVar10 = (undefined4 *)FUN_004d7420();
      ppfVar18 = apfStack_264;
      for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
        *ppfVar18 = (float *)*puVar10;
        puVar10 = puVar10 + 1;
        ppfVar18 = ppfVar18 + 1;
      }
      puVar10 = local_1a0;
      puVar17 = auStack_284;
      for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar17 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar17 = puVar17 + 1;
      }
      fVar19 = (float10)FUN_004cd7a0();
      _DAT_006952a8 =
           (double)(ABS(fVar19) -
                   ((float10)(double)CONCAT44(uStack_1dc,local_1e0) +
                   (float10)(double)CONCAT44(uStack_1ac,local_1b0)));
    }
    else {
      _DAT_006952a8 = 10.0;
    }
    if ((DAT_007206c8 != 0) &&
       (pcVar9 = s__Car_V__run_00671abc, cVar5 = s__Car_V__run_00671abc[0], DAT_0071d774 != 0)) {
      for (; (cVar5 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
        cVar5 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        *(char *)(DAT_0071d778 + DAT_0071d774) = cVar5;
        cVar5 = *pcVar9;
      }
    }
    local_228 = (double)CONCAT44(0x4d66ac,(float)local_228);
    FUN_004fe760();
    if (DAT_007206c8 == 0) {
      return;
    }
    pcVar9 = s__Car_V__run_end_00671aa8;
    if (DAT_0071d774 == 0) {
      return;
    }
    if (s__Car_V__run_end_00671aa8[0] == '\0') {
      return;
    }
    do {
      if (DAT_0071d770 <= DAT_0071d778) {
        return;
      }
      cVar5 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar5;
      DAT_0071d778 = DAT_0071d778 + 1;
    } while (*pcVar9 != '\0');
    return;
  }
  local_228 = (double)CONCAT44(0x4d6718,(float)local_228);
  thunk_FUN_00603580();
  local_228 = (double)CONCAT44(0x4d671d,(float)local_228);
  _DAT_00695220 = __ftol();
  local_228 = (double)CONCAT44(*(undefined4 *)(*(int *)(param_1 + 0x40c0) + 0x509c),0x4d6738);
  uVar11 = FUN_0043f700();
  if ((uVar11 & 4) != 0) {
    *(undefined4 *)(param_1 + 10000) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x270c) = 0;
    *(undefined4 *)(param_1 + 0x271c) = 0;
    local_228 = (double)CONCAT44(0x4d675e,(float)local_228);
    thunk_FUN_00603580();
    local_228 = (double)CONCAT44(0x4d6763,(float)local_228);
    _DAT_00695224 = __ftol();
    if ((DAT_007206c8 != 0) &&
       (pcVar9 = s__Car_V__run_1__00671a98, cVar5 = s__Car_V__run_1__00671a98[0], DAT_0071d774 != 0)
       ) {
      for (; (cVar5 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
        cVar5 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        *(char *)(DAT_0071d778 + DAT_0071d774) = cVar5;
        cVar5 = *pcVar9;
      }
    }
    local_228 = (double)CONCAT44(0x4d67be,(float)local_228);
    FUN_004fe760();
    if (DAT_007206c8 == 0) {
      return;
    }
    pcVar9 = s__Car_V__run_end_00671aa8;
    if (DAT_0071d774 == 0) {
      return;
    }
    if (s__Car_V__run_end_00671aa8[0] == '\0') {
      return;
    }
    do {
      if (DAT_0071d770 <= DAT_0071d778) {
        return;
      }
      cVar5 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar5;
      DAT_0071d778 = DAT_0071d778 + 1;
    } while (*pcVar9 != '\0');
    return;
  }
  iVar15 = *(int *)(param_1 + 0x40c0);
  if (*(int *)(iVar15 + 0x168) != *(int *)(*(int *)(iVar15 + 0x509c) + 0x54)) {
    local_228 = (double)CONCAT44(*(undefined4 *)(*(int *)(iVar15 + 0x509c) + 0x54),
                                 *(undefined4 *)(iVar15 + 0x168));
    local_230._0_4_ = local_88;
    local_230._4_4_ = s_vr_index_not_eqvivalent__d__d_00671a78;
    puStack_234 = (undefined4 *)0x4d6859;
    FUN_0061c369();
    puStack_238 = local_88;
    puStack_234 = (undefined4 *)0x0;
    iStack_23c = 0x4d6867;
    FUN_005d2520();
  }
  local_1d8 = 30.0;
  puVar10 = local_118 + 2;
  iVar15 = 4;
  do {
    puVar10[-2] = 0;
    puVar10[-1] = 0;
    *puVar10 = 0;
    puVar10 = puVar10 + 3;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  local_228 = (double)CONCAT44(0x4d689b,(float)local_228);
  fVar19 = (float10)thunk_FUN_004f27e0();
  local_180 = (double)fVar19;
  local_228 = (double)CONCAT44(0x4d68a9,(float)local_228);
  fVar19 = (float10)thunk_FUN_004feee0();
  iVar15 = *(int *)(param_1 + 0x40c0);
  local_158 = (double)fVar19;
  fVar6 = *(float *)(iVar15 + 0x5230);
  fVar7 = *(float *)(iVar15 + 0x5234);
  local_1b8 = *(float *)(iVar15 + 0x5238);
  dVar4 = _DAT_0064a6d0;
  if (*(int *)(param_1 + 0x4074) != 0) {
    dVar4 = _DAT_0064a6a8;
  }
  fVar8 = (float)(&DAT_00696d1c)[*(int *)(iVar15 + 0x28b4) * 0x25c] * (float)dVar4;
  local_168 = (double)fVar8;
  pfVar13 = (float *)(param_1 + 0x10);
  pfVar14 = local_148;
  for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
    *pfVar14 = *pfVar13;
    pfVar13 = pfVar13 + 1;
    pfVar14 = pfVar14 + 1;
  }
  local_228._4_4_ = local_148;
  local_230._0_4_ = (undefined4 *)(fVar6 + fVar8 * DAT_00701580);
  local_230._4_4_ = (char *)(fVar8 * DAT_00701584 + fVar7);
  local_1c0 = (double)CONCAT44(local_230._4_4_,(undefined4 *)local_230);
  local_1b8 = fVar8 * DAT_00701588 + local_1b8;
  puStack_234 = (undefined4 *)local_e8;
  puStack_238 = (undefined4 *)0x4d6987;
  local_228._0_4_ = local_1b8;
  uVar12 = FUN_005ab330();
  local_230._4_4_ = local_b8;
  local_228 = (double)CONCAT44(local_228._4_4_,uVar12);
  local_230._0_4_ = (undefined4 *)0x4d6998;
  puVar10 = (undefined4 *)FUN_005ab130();
  local_228 = (double)ZEXT48(&local_168);
  iVar15 = *(int *)(param_1 + 0x40c0);
  puVar17 = local_118;
  for (iVar16 = 0xc; iVar16 != 0; iVar16 = iVar16 + -1) {
    *puVar17 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar17 = puVar17 + 1;
  }
  puVar10 = local_1a0;
  ppfVar18 = apfStack_264 + 7;
  for (apfStack_264[6] = (float *)0x8; apfStack_264[6] != (float *)0x0;
      apfStack_264[6] = (float *)((int)apfStack_264[6] + -1)) {
    *ppfVar18 = (float *)*puVar10;
    puVar10 = puVar10 + 1;
    ppfVar18 = ppfVar18 + 1;
  }
  apfStack_264[5] = (float *)(iVar15 + 0x509c);
  apfStack_264[4] = (float *)0x4d69dd;
  FUN_0041d3f0();
  apfStack_264[5] = local_148;
  apfStack_264[4] = (float *)0x4d69ea;
  puVar10 = (undefined4 *)FUN_0043bff0();
  puVar17 = local_1a0;
  for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar17 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar17 = puVar17 + 1;
  }
  puStack_234 = *(undefined4 **)(param_1 + 0x4074);
  local_230._4_4_ = (char *)&local_1e0;
  local_228 = (double)CONCAT44(&local_1a4,&local_1b0);
  puStack_238 = (undefined4 *)(*(int *)(param_1 + 0x40c0) + 0x509c);
  iStack_23c = 0x4d6a28;
  local_230._0_4_ = puStack_234;
  FUN_0041d3f0();
  puVar10 = local_118;
  ppfVar18 = apfStack_264;
  for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
    *ppfVar18 = (float *)*puVar10;
    puVar10 = puVar10 + 1;
    ppfVar18 = ppfVar18 + 1;
  }
  puVar10 = local_1a0;
  puVar17 = auStack_284;
  for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar17 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar17 = puVar17 + 1;
  }
  fVar19 = (float10)FUN_004cd7a0();
  *(double *)(param_1 + 0x40b8) = (double)fVar19;
  local_228 = (double)CONCAT44(local_150,*(undefined4 *)(param_1 + 0x4074));
  apfStack_264[6] = &local_174;
  puVar10 = local_1a0;
  ppfVar18 = apfStack_264 + 7;
  for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
    *ppfVar18 = (float *)*puVar10;
    puVar10 = puVar10 + 1;
    ppfVar18 = ppfVar18 + 1;
  }
  apfStack_264[5] = (float *)0x4d6a8b;
  pfVar13 = (float *)FUN_004cda50();
  fVar6 = *pfVar13;
  fVar7 = pfVar13[1];
  fVar8 = pfVar13[2];
  local_230._4_4_ = (char *)0x4d6ab3;
  iStack_23c = FUN_004d4580();
  local_228 = (double)CONCAT44((float)*(double *)(param_1 + 0x40b8),local_1a4);
  local_230._4_4_ = (char *)uStack_1ac;
  local_230._0_4_ = (undefined4 *)local_1b0;
  iStack_23c = iStack_23c << 1;
  puStack_234 = (undefined4 *)uStack_1dc;
  puStack_238 = (undefined4 *)local_1e0;
  apfStack_264[9] = (float *)0x4d6ae3;
  fVar19 = (float10)FUN_004d62a0();
  if ((((float10)_DAT_0064a668 < fVar19) && ((double)fVar19 < _DAT_0064c0b0)) &&
     (*(int *)(param_1 + 0x4078) != 0)) {
    local_1d8 = (double)fVar19;
  }
  local_228 = (double)CONCAT44(0x4d6b30,(float)local_228);
  uVar12 = __ftol();
  local_228 = (double)CONCAT44(uVar12,extraout_ECX);
  local_230._4_4_ = (char *)(*(int *)(param_1 + 0x40c0) + 0x509c);
  local_230._0_4_ = (undefined4 *)0x4d6b46;
  FUN_0041d3f0();
  local_230._4_4_ = (char *)0x4d6b4b;
  FUN_00438d70();
  local_230._4_4_ = (char *)(*(int *)(param_1 + 0x40c0) + 0x509c);
  local_228 = (double)CONCAT44(*(undefined4 *)(param_1 + 0x4074),extraout_ECX_00);
  local_230._0_4_ = (undefined4 *)0x4d6b6a;
  FUN_0041d3f0();
  local_230._4_4_ = (char *)0x402e0000;
  local_230._0_4_ = (undefined4 *)0x0;
  puVar10 = local_1a0;
  ppfVar18 = apfStack_264 + 5;
  for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
    *ppfVar18 = (float *)*puVar10;
    puVar10 = puVar10 + 1;
    ppfVar18 = ppfVar18 + 1;
  }
  apfStack_264[4] = (float *)0x4d6b89;
  fVar19 = (float10)FUN_004cdb20();
  iVar15 = *(int *)(param_1 + 0x405c);
  uStack_15c = *(undefined4 *)(param_1 + 0x40bc);
  local_1c0 = (double)fVar19;
  local_160 = *(undefined4 *)(param_1 + 0x40b8);
  dVar4 = *(double *)(param_1 + 0x40a8);
  pfVar13 = (float *)(param_1 + 0x10);
  pfVar14 = local_148;
  for (iVar16 = 0xc; iVar16 != 0; iVar16 = iVar16 + -1) {
    *pfVar14 = *pfVar13;
    pfVar13 = pfVar13 + 1;
    pfVar14 = pfVar14 + 1;
  }
  *(double *)(param_1 + 0x40b8) =
       (double)(iVar15 + 1) * dVar4 * _DAT_0064a6d0 + *(double *)(param_1 + 0x40b8);
  pfVar13 = (float *)(param_1 + 0x4050);
  local_138 = local_138 * DAT_00701584;
  local_12c = local_12c * DAT_00701588;
  local_148[1] = local_148[1] * DAT_00701580;
  local_134 = local_134 * DAT_00701584;
  local_128 = local_128 * DAT_00701588;
  local_148[2] = local_148[2] * DAT_00701580;
  *pfVar13 = local_148[0] * DAT_00701580 + local_130 * DAT_00701588 + local_148[3] * DAT_00701584;
  *(float *)(param_1 + 0x4054) = local_148[1] + local_12c + local_138;
  apfStack_264[3] = &local_174;
  *(float *)(param_1 + 0x4058) = local_148[2] + local_128 + local_134;
  *(undefined4 *)(param_1 + 0x4058) = 0;
  apfStack_264[2] = (float *)0x4d6ca2;
  apfStack_264[4] = pfVar13;
  pfVar14 = (float *)FUN_005aaad0();
  *pfVar13 = *pfVar14;
  *(float *)(param_1 + 0x4054) = pfVar14[1];
  *(float *)(param_1 + 0x4058) = pfVar14[2];
  fVar1 = *(float *)(param_1 + 0x4058);
  fVar2 = *(float *)(param_1 + 0x4054);
  fVar3 = *pfVar13;
  local_174 = fVar7 * *(float *)(param_1 + 0x4058) - fVar8 * *(float *)(param_1 + 0x4054);
  apfStack_264[2] = &local_174;
  local_170 = fVar8 * *pfVar13 - fVar6 * *(float *)(param_1 + 0x4058);
  apfStack_264[1] = &local_1cc;
  local_16c = fVar6 * *(float *)(param_1 + 0x4054) - fVar7 * *pfVar13;
  apfStack_264[0] = (float *)0x4d6d40;
  FUN_005aaad0();
  if (local_1cc * DAT_00701590 + local_1c8 * DAT_00701594 + local_1c4 * DAT_00701598 <
      (float)_DAT_0064a668) {
    local_1cc = -local_1cc;
    local_1c8 = -local_1c8;
    local_1c4 = -local_1c4;
  }
  if ((double)(fVar6 * fVar3 + fVar2 * fVar7 + fVar1 * fVar8) <= _DAT_0064a668) {
    if (*(int *)(param_1 + 0x406c) == 1) {
      *(undefined4 *)(param_1 + 0x4048) = *(undefined4 *)(param_1 + 0x40b8);
      *(undefined4 *)(param_1 + 0x404c) = *(undefined4 *)(param_1 + 0x40bc);
      *(undefined4 *)(param_1 + 0x406c) = 3;
    }
  }
  else if (*(int *)(param_1 + 0x406c) == 3) {
    *(undefined2 *)(param_1 + 0x2746) = 100;
    *(undefined4 *)(param_1 + 0x406c) = 1;
  }
  local_228 = (double)CONCAT44(0x4d6e9f,(float)local_228);
  fVar19 = (float10)FUN_0061e4b0();
  dVar4 = (double)fVar19;
  if (((_DAT_0064b3fc <= *(float *)(param_1 + 0x332c)) || (*(int *)(param_1 + 0x406c) == 2)) ||
     (((*(byte *)(param_1 + 0x4070) & 8) != 0 || (_DAT_0064a668 <= *(double *)(param_1 + 0x40b0)))))
  {
LAB_004d6f76:
    *(undefined4 *)(param_1 + 0x402c) = 0;
  }
  else {
    local_228 = (double)CONCAT44(1,param_1);
    local_230._4_4_ = (char *)0x4d6ef8;
    uVar11 = FUN_004d37e0();
    if ((uVar11 & 8) != 0) goto LAB_004d6f76;
    if (*(int *)(param_1 + 0x402c) == 0) {
      *(undefined4 *)(param_1 + 0x4038) = 0;
      *(undefined4 *)(param_1 + 0x402c) = 1;
      *(undefined4 *)(param_1 + 0x403c) = 0;
    }
    else if (*(double *)(param_1 + 0x4038) <= _DAT_0064a6c0) {
      *(double *)(param_1 + 0x4038) =
           *(double *)(*(int *)(*(int *)(param_1 + 0x40c0) + 0x34) + 0xb90) +
           *(double *)(param_1 + 0x4038);
    }
    else {
      *(undefined4 *)(param_1 + 0x4038) = 0;
      *(undefined4 *)(param_1 + 0x402c) = 0;
      *(undefined4 *)(param_1 + 0x403c) = 0x40080000;
      *(undefined2 *)(param_1 + 0x2746) = 0x14;
      *(undefined4 *)(param_1 + 0x406c) = 2;
    }
  }
  local_228 = (double)CONCAT44(*(undefined4 *)(*(int *)(param_1 + 0x40c0) + 0x509c),0x4d6f94);
  uVar11 = FUN_0043f700();
  if ((uVar11 & 0x8000000) == 0) {
    uVar11 = *(uint *)(param_1 + 0x4068) & 0xfffffffb;
LAB_004d6fc5:
    *(uint *)(param_1 + 0x4068) = uVar11;
  }
  else if (ABS(*(double *)(param_1 + 0x40b8)) < _DAT_0064a6d0) {
    uVar11 = *(uint *)(param_1 + 0x4068) | 4;
    goto LAB_004d6fc5;
  }
  if (*(int *)(param_1 + 0x4068) == 0) {
    if (*(int *)(param_1 + 0x406c) == 0) {
      *(undefined4 *)(param_1 + 0x406c) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x406c) = 0;
  }
  local_230 = (double)CONCAT44(local_230._4_4_,(undefined4 *)local_230);
  switch(*(undefined4 *)(param_1 + 0x406c)) {
  case 0:
    local_228 = 0.0;
    local_230._4_4_ = (char *)0x4d7008;
    FUN_004d7440();
    goto LAB_004d7111;
  case 1:
    if (((*(uint *)(param_1 + 0x4070) & 2) != 0) && ((*(uint *)(param_1 + 0x4070) & 8) != 0)) {
      local_228 = (double)CONCAT44(*(undefined4 *)(*(int *)(param_1 + 0x40c0) + 0x509c),0x4d722a);
      uVar11 = FUN_0043f700();
      if ((uVar11 & 0x4000) == 0) {
        *(undefined4 *)(param_1 + 0x40b0) = 0;
        *(undefined4 *)(param_1 + 0x40b4) = 0x40220000;
      }
    }
    if (*(double *)(param_1 + 0x40a8) * _DAT_0064a6d0 + (double)CONCAT44(uStack_1dc,local_1e0) <
        ABS((double)CONCAT44(uStack_15c,local_160))) {
      local_228 = (double)(ulonglong)param_1;
      local_230._4_4_ = (char *)0x4d726b;
      uVar11 = FUN_004d37e0();
      if (uVar11 != 0) {
        if ((uVar11 & 8) == 0) {
          *(undefined4 *)(param_1 + 10000) = 0;
          if ((uVar11 & 1) == 0) {
            local_228._4_4_ = (float *)0x3fd33333;
          }
          else {
            local_228._4_4_ = (float *)0xbfd33333;
          }
          local_228 = (double)CONCAT44(local_228._4_4_,0x33333333);
          local_230._4_4_ = (char *)0x4d72b6;
          FUN_004d7440();
          if (_DAT_0064b310 < *(float *)(param_1 + 0x332c)) {
            *(undefined4 *)(param_1 + 0x270c) = 0x3e99999a;
            break;
          }
        }
        else {
          local_228 = 0.0;
          local_230._4_4_ = (char *)0x4d727f;
          FUN_004d7440();
          *(undefined4 *)(param_1 + 10000) = 0x3f800000;
        }
        *(undefined4 *)(param_1 + 0x270c) = 0;
        break;
      }
    }
    if ((*(byte *)(param_1 + 0x4070) & 8) == 0) {
      local_230._4_4_ = *(char **)(param_1 + 0x40bc);
      local_230._0_4_ = *(undefined4 **)(param_1 + 0x40b8);
      puStack_234 = (undefined4 *)local_1c0._4_4_;
      puStack_238 = (undefined4 *)(undefined4)local_1c0;
      local_228 = dVar4;
    }
    else {
      local_228 = 0.0;
      local_230._4_4_ = (char *)0x0;
      local_230._0_4_ = (undefined4 *)0x0;
      puStack_234 = (undefined4 *)0x0;
      puStack_238 = (undefined4 *)0x0;
    }
    iStack_23c = 0x4d7310;
    FUN_004d5eb0();
    local_228 = (double)(ulonglong)local_150[0];
    puStack_234 = (undefined4 *)local_1d8._4_4_;
    puStack_238 = (undefined4 *)(undefined4)local_1d8;
    puVar10 = local_1a0;
    ppfVar18 = apfStack_264 + 3;
    local_230 = dVar4;
    for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
      *ppfVar18 = (float *)*puVar10;
      puVar10 = puVar10 + 1;
      ppfVar18 = ppfVar18 + 1;
    }
    apfStack_264[2] = (float *)0x4d7346;
    FUN_004d6020();
    break;
  case 2:
    local_228 = 0.0;
    local_230._4_4_ = (char *)0x4d7143;
    FUN_004d7440();
    dVar4 = _DAT_0064a660;
    if (*(double *)(param_1 + 0x4038) < _DAT_0064a660) {
      dVar4 = *(double *)(param_1 + 0x4038);
    }
    if (dVar4 * _DAT_0064a688 < (double)*(float *)(param_1 + 0x332c)) {
      *(undefined4 *)(param_1 + 0x270c) = 0;
      *(float *)(param_1 + 10000) = (float)local_180;
    }
    if ((double)*(float *)(param_1 + 0x332c) < dVar4 * _DAT_0064a7b0) {
      *(undefined4 *)(param_1 + 10000) = 0;
      *(float *)(param_1 + 0x270c) = (float)local_158;
    }
    dVar4 = *(double *)(param_1 + 0x4038) -
            *(double *)(*(int *)(*(int *)(param_1 + 0x40c0) + 0x34) + 0xb90);
    *(double *)(param_1 + 0x4038) = dVar4;
    if (_DAT_0064a668 <= dVar4) {
      local_228 = (double)CONCAT44(1,param_1);
      local_230._4_4_ = (char *)0x4d71e7;
      uVar11 = FUN_004d37e0();
      if ((uVar11 & 8) == 0) break;
    }
    *(undefined2 *)(param_1 + 0x2746) = 100;
    *(undefined4 *)(param_1 + 0x406c) = 1;
    break;
  case 3:
    local_1d8 = (double)CONCAT44(uStack_1ac,local_1b0) * _DAT_0064a6d0 +
                (double)CONCAT44(uStack_1dc,local_1e0);
    if (*(int *)(param_1 + 0x3bd8) < 1) {
      local_1fc = -1;
      if (*(double *)(param_1 + 0x4048) <= _DAT_0064a668) {
        local_1fc = 1;
      }
    }
    else {
      local_1fc = 1;
      if (*(double *)(param_1 + 0x4048) <= _DAT_0064a668) {
        local_1fc = -1;
      }
    }
    local_228 = (double)local_1fc;
    local_230._4_4_ = (char *)0x4d706e;
    FUN_004d7440();
    if (-local_1d8 <= *(double *)(param_1 + 0x40b8)) {
      if (local_1d8 < *(double *)(param_1 + 0x40b8)) {
        if (_DAT_0064a668 <= dVar4) goto LAB_004d70ca;
        *(undefined2 *)(param_1 + 0x2746) = 100;
      }
    }
    else if (dVar4 <= _DAT_0064a668) {
LAB_004d70ca:
      *(undefined2 *)(param_1 + 0x2746) = 0x14;
    }
    else {
      *(undefined2 *)(param_1 + 0x2746) = 100;
    }
    if (*(float *)(param_1 + 0x332c) < _DAT_0064b310) {
      *(undefined4 *)(param_1 + 10000) = 0;
      *(float *)(param_1 + 0x270c) = (float)local_158;
      local_230 = (double)CONCAT44(local_230._4_4_,(undefined4 *)local_230);
      break;
    }
    if (*(float *)(param_1 + 0x332c) <= _DAT_0064c340) {
      *(undefined4 *)(param_1 + 10000) = 0;
      *(undefined4 *)(param_1 + 0x270c) = 0;
      break;
    }
LAB_004d7111:
    *(undefined4 *)(param_1 + 0x270c) = 0;
    *(float *)(param_1 + 10000) = (float)local_180;
  }
  local_228 = (double)CONCAT44(0x4d734b,(float)local_228);
  thunk_FUN_00603580();
  local_228 = (double)CONCAT44(0x4d7350,(float)local_228);
  _DAT_00695224 = __ftol();
  if ((DAT_007206c8 != 0) &&
     (pcVar9 = s__Car_V__run_2__00671a68, cVar5 = s__Car_V__run_2__00671a68[0], DAT_0071d774 != 0))
  {
    for (; (cVar5 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar5 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar5;
      cVar5 = *pcVar9;
    }
  }
  local_228 = (double)CONCAT44(0x4d73ab,(float)local_228);
  FUN_004fe760();
  if ((DAT_007206c8 != 0) &&
     (pcVar9 = s__Car_V__run_end_00671aa8, cVar5 = s__Car_V__run_end_00671aa8[0], DAT_0071d774 != 0)
     ) {
    for (; (cVar5 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar5 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar5;
      cVar5 = *pcVar9;
    }
  }
  return;
}

