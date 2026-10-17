
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00599720(undefined4 *param_1,undefined4 *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float10 fVar11;
  float *pfVar12;
  float local_1e0;
  float local_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  int local_1b4;
  double dStack_1b0;
  undefined4 local_1a4 [9];
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined4 local_168 [9];
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined4 auStack_138 [12];
  undefined1 auStack_108 [260];
  
  FUN_005eebf0();
  puVar3 = local_1a4 + 2;
  iVar6 = 4;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar3 = local_168 + 2;
  puVar7 = &DAT_00701550;
  puVar9 = local_1a4;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  iVar6 = 4;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar3 = &DAT_00701550;
  puVar7 = local_168;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar7 = puVar7 + 1;
  }
  if ((DAT_006f5878 == 2) && (*(int *)(DAT_006f588c + 0x148) != 3)) {
    puVar3 = (undefined4 *)(DAT_006f588c + 0x10c);
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
    param_1[0x28] = 1;
    return *(undefined4 *)(DAT_006f588c + 0x13c);
  }
  if (param_1[0x28] != 0) {
    param_1[0x28] = 0;
    param_3 = 0.0;
  }
  fVar10 = (float10)*(double *)(*(int *)(DAT_006cdbcc + 0x54c) + 0xb90);
  if ((float10)_DAT_0064c0e0 < fVar10) {
    fVar10 = (float10)_DAT_0064c0e0;
  }
  fVar11 = (float10)param_3;
  if (fVar11 < (float10)_DAT_0064a738) {
    fVar11 = (float10)_DAT_0064a738;
  }
  local_1e0 = 2.10195e-44;
  local_1dc = 1.12104e-44;
  local_1b4 = 0;
  fVar11 = (float10)log2(fVar11);
  fVar11 = (float10)1.4426950408889634 *
           (float10)0.6931471805599453 * fVar11 * fVar10 * (float10)_DAT_0064a770;
  fVar10 = ROUND(fVar11);
  fVar11 = (float10)f2xm1(fVar11 - fVar10);
  fVar10 = (float10)fscale((float10)1 + fVar11,fVar10);
  dVar1 = (double)fVar10;
  iVar6 = (**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 4))();
  if ((iVar6 == 1) &&
     (local_1b4 = *(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5578),
     *(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5224) != 0)) {
    local_1e0 = 3.50325e-44;
    local_1dc = 2.52234e-44;
  }
  iVar6 = FUN_0052f7d0(0x18);
  if (((iVar6 != 0) && (*(int *)(DAT_006d0fd8 + 0x578) != 0)) &&
     (dVar2 = *(double *)(DAT_00695c00 + 0xb90) * _DAT_0064a908,
     (double)(int)local_1dc + dVar2 < *(double *)(param_1 + 0x1a))) {
    *(double *)(param_1 + 0x1a) = *(double *)(param_1 + 0x1a) - dVar2;
  }
  iVar6 = FUN_0052f7d0(0x19);
  if (((iVar6 != 0) && (*(int *)(DAT_006d0fd8 + 0x578) != 0)) &&
     (*(double *)(param_1 + 0x1a) < (double)(int)local_1e0)) {
    *(double *)(param_1 + 0x1a) =
         *(double *)(DAT_00695c00 + 0xb90) * _DAT_0064a908 + *(double *)(param_1 + 0x1a);
  }
  iVar6 = FUN_0052f7d0(0x1a);
  if (iVar6 != 0) {
    *(double *)(param_1 + 0x1c) =
         *(double *)(param_1 + 0x1c) - *(double *)(DAT_00695c00 + 0xb90) * _DAT_0064fae0;
  }
  iVar6 = FUN_0052f7d0(0x1b);
  if (iVar6 != 0) {
    *(double *)(param_1 + 0x1c) =
         *(double *)(DAT_00695c00 + 0xb90) * _DAT_0064fae0 + *(double *)(param_1 + 0x1c);
  }
  if (_DAT_0064c8f0 < *(double *)(param_1 + 0x1c)) {
    do {
      dVar2 = *(double *)(param_1 + 0x1c) - _DAT_0064c8f8;
      *(double *)(param_1 + 0x1c) = dVar2;
    } while (_DAT_0064c8f0 < dVar2);
  }
  if (*(double *)(param_1 + 0x1c) < _DAT_0064c900) {
    do {
      dVar2 = *(double *)(param_1 + 0x1c) + _DAT_0064c8f8;
      *(double *)(param_1 + 0x1c) = dVar2;
    } while (dVar2 < _DAT_0064c900);
  }
  FUN_005a36c0(local_168);
  puVar3 = (undefined4 *)FUN_005985f0(auStack_138,local_168);
  fVar10 = (float10)dVar1;
  fStack_1cc = (float)(fVar10 * (float10)(float)param_1[9]);
  puVar7 = local_1a4;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar7 = puVar7 + 1;
  }
  fStack_1c8 = (float)(fVar10 * (float10)(float)param_1[10]);
  fVar11 = (float10)_DAT_0064a660 - (float10)dVar1;
  dStack_1b0 = (double)fVar11;
  fStack_1c0 = (float)((float10)fStack_180 * fVar11);
  fStack_1bc = (float)((float10)fStack_17c * fVar11);
  fStack_1d8 = fStack_1c0 + fStack_1cc;
  fStack_1d4 = fStack_1c8 + fStack_1bc;
  fStack_180 = fStack_1d8;
  fStack_17c = fStack_1d4;
  fStack_1d0 = (float)(fVar10 * (float10)(float)param_1[0xb] + fVar11 * (float10)fStack_178);
  fStack_178 = fStack_1d0;
  puVar3 = local_1a4;
  puVar7 = param_1;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar7 = puVar7 + 1;
  }
  pfVar4 = (float *)FUN_00594500();
  fStack_1d8 = fStack_144 + *pfVar4;
  fStack_1d4 = fStack_140 + pfVar4[1];
  fStack_1d0 = fStack_13c + pfVar4[2];
  fStack_174 = fStack_1d8;
  fStack_170 = fStack_1d4;
  fStack_16c = fStack_1d0;
  uVar5 = FUN_005eec70();
  param_1[0x18] = uVar5;
  if (local_1b4 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = local_1b4 + 0x10;
  }
  if (*(int *)(DAT_006d0fd8 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(DAT_006d0fd8 + 0x268) + 0x10;
  }
  pfVar4 = &fStack_180;
  pfVar12 = &fStack_174;
  uVar5 = FUN_0057d570(auStack_138);
  uVar5 = FUN_00598900(iVar8,param_1[0x18],uVar5,pfVar12,pfVar4,iVar6);
  param_1[0x18] = uVar5;
  iVar6 = FUN_0057d570(auStack_108);
  fStack_1d8 = fStack_180 - *(float *)(iVar6 + 0x24);
  fStack_1d4 = fStack_17c - *(float *)(iVar6 + 0x28);
  fStack_1d0 = fStack_178 - *(float *)(iVar6 + 0x2c);
  local_1e0 = 0.0;
  local_1dc = 0.0;
  fStack_1cc = fStack_1d8;
  fStack_1c8 = fStack_1d4;
  fStack_1c4 = fStack_1d0;
  iVar6 = FUN_005aad90(&fStack_1d8,&DAT_007015b0);
  if (iVar6 == 0) {
    fStack_1cc = -fStack_1d8;
    fStack_1c8 = -fStack_1d4;
    fStack_1c4 = -fStack_1d0;
    fStack_1c0 = fStack_1cc;
    fStack_1bc = fStack_1c8;
    fStack_1b8 = fStack_1c4;
    FUN_005aaad0(&fStack_1cc,&fStack_1c0,&local_1e0,&local_1dc);
    FUN_005aabf0();
    fVar10 = (float10)local_1e0 - (float10)_DAT_0064c9f0;
    if ((float10)_DAT_0064c8f0 < (float10)*(double *)(param_1 + 0x1e) - fVar10) {
      fVar10 = fVar10 + (float10)_DAT_0064c8f8;
    }
    if ((float10)*(double *)(param_1 + 0x1e) - fVar10 < (float10)_DAT_0064c900) {
      fVar10 = fVar10 - (float10)_DAT_0064c8f8;
    }
    fVar10 = (float10)dVar1 * (float10)*(double *)(param_1 + 0x1e) + fVar10 * (float10)dStack_1b0;
    local_1e0 = (float)fVar10;
    if (fVar10 < (float10)_DAT_0064b254) {
      local_1e0 = local_1e0 + (float)_DAT_0064c8f8;
    }
    if ((float)_DAT_0064c8f8 < local_1e0) {
      local_1e0 = local_1e0 - (float)_DAT_0064c8f8;
    }
    local_1dc = (float)((float10)dVar1 * (float10)*(double *)(param_1 + 0x20) +
                       ((float10)local_1dc - (float10)_DAT_0064c9f0) * (float10)dStack_1b0);
    *(double *)(param_1 + 0x1e) = (double)local_1e0;
    *(double *)(param_1 + 0x20) = (double)local_1dc;
  }
  FUN_005da010(auStack_138,(double)fStack_180,(double)fStack_17c,(double)fStack_178,
               (double)local_1e0,(double)local_1dc,0,0);
  puVar3 = auStack_138;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return param_1[0x18];
}

