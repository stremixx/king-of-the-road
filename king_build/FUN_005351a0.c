
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005351a0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  undefined4 *puVar14;
  float10 fVar15;
  float local_140;
  float local_138;
  float local_120;
  float local_11c;
  float local_114;
  float local_110;
  float local_10c;
  undefined1 local_108 [4];
  float local_104;
  float local_100;
  undefined1 local_fc [12];
  undefined1 local_f0 [48];
  undefined1 local_c0 [48];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  if ((*(int *)(param_1 + 0x268) != 0) &&
     (iVar11 = *(int *)(*(int *)(param_1 + 0x268) + 0x5460), iVar11 != 0)) {
    local_140 = *(float *)(iVar11 + 0x33b0) * _DAT_0064e3a8;
    fVar6 = *(float *)(iVar11 + 0x33ac) * _DAT_0064e3a8;
    FUN_004e1fd9();
    fVar15 = (float10)FUN_0061d200();
    fVar1 = (float)fVar15;
    fVar15 = (float10)FUN_0061d200();
    fVar2 = (float)fVar15;
    iVar5 = *(int *)(*(int *)(param_1 + 0x268) + 0x5460);
    if ((*(int *)(iVar5 + 0x276c) != 0) || (*(int *)(iVar5 + 0x3f4c) == 1)) {
      local_140 = local_140 * (float)_DAT_0064c0e0;
      fVar6 = fVar6 * (float)_DAT_0064c0e0;
    }
    fVar7 = local_140;
    if (((float)_DAT_0064e3a0 < ABS(local_140)) && (local_140 = 0.04363323, fVar7 <= _DAT_0064b254))
    {
      local_140 = -0.04363323;
    }
    fVar7 = fVar6;
    if (((float)_DAT_0064e398 < ABS(fVar6)) && (fVar7 = _DAT_0064e390, _DAT_0064b254 < fVar6)) {
      fVar7 = _DAT_0064e394;
    }
    fVar6 = _DAT_0064b240 - fVar1;
    pfVar13 = (float *)(iVar11 + 0x3b90);
    pfVar12 = (float *)(iVar11 + 0x33c8);
    fVar3 = fVar6 * local_140;
    local_140 = 5.60519e-45;
    *(float *)(DAT_00695c10 + 0x13dc) = fVar1 * *(float *)(DAT_00695c10 + 0x13dc) + fVar3;
    local_138 = 0.0;
    *(float *)(DAT_00695c10 + 0x13e0) = fVar6 * fVar7 + fVar1 * *(float *)(DAT_00695c10 + 0x13e0);
    fVar7 = DAT_007015b8;
    fVar6 = DAT_007015b4;
    fVar1 = DAT_007015b0;
    local_120 = DAT_007015b0;
    local_11c = DAT_007015b4;
    do {
      local_138 = local_138 + *pfVar13;
      local_114 = DAT_00701594 * pfVar12[1] - DAT_00701598 * *pfVar12;
      local_110 = DAT_00701598 * pfVar12[-1] - DAT_00701590 * pfVar12[1];
      local_10c = DAT_00701590 * *pfVar12 - DAT_00701594 * pfVar12[-1];
      fVar3 = *pfVar12;
      fVar4 = pfVar12[-1];
      fVar8 = (float)_DAT_0064a798;
      fVar15 = (float10)FUN_0061e4b0();
      FUN_005aad10(local_108,
                   (float)((fVar15 + fVar15) *
                          (float10)(fVar8 / SQRT(fVar3 * fVar3 + fVar4 * fVar4))));
      FUN_005aae00(local_fc,&local_114);
      pfVar13 = pfVar13 + 1;
      pfVar12 = pfVar12 + 3;
      local_140 = (float)((int)local_140 + -1);
    } while (local_140 != 0.0);
    fVar3 = local_138 * (float)_DAT_0064c0e0;
    if ((float)_DAT_0064c0e0 < local_138 * (float)_DAT_0064c0e0) {
      fVar3 = _DAT_0064b328;
    }
    if (fVar3 < (float)_DAT_0064cd68) {
      fVar3 = _DAT_0064ca68;
    }
    fVar4 = _DAT_0064b240 - fVar2;
    *(float *)(param_1 + 0x650) = fVar2 * *(float *)(param_1 + 0x650) + fVar4 * fVar3;
    if (*(float *)(iVar11 + 0x3330) < _DAT_0064c2e8) {
      FUN_005aad10(local_fc,ABS(*(float *)(iVar11 + 0x3330) * _DAT_0064b8f4));
    }
    if ((float)_DAT_0064a830 < fVar1) {
      local_120 = 0.2;
    }
    if (local_120 < (float)_DAT_0064e388) {
      local_120 = -0.2;
    }
    if ((float)_DAT_0064e380 < fVar6) {
      local_11c = 0.087;
    }
    if (local_11c < (float)_DAT_0064e378) {
      local_11c = -0.087;
    }
    local_114 = fVar4 * local_120;
    pfVar13 = (float *)(param_1 + 0x654);
    local_110 = fVar4 * local_11c;
    local_104 = fVar2 * *(float *)(param_1 + 0x658);
    local_100 = fVar2 * *(float *)(param_1 + 0x65c);
    *pfVar13 = fVar2 * *pfVar13 + local_114;
    *(float *)(param_1 + 0x658) = local_110 + local_104;
    *(float *)(param_1 + 0x65c) = fVar4 * fVar7 + local_100;
    fVar1 = -*(float *)(DAT_00695c10 + 0x13dc) - *pfVar13;
    fVar2 = *(float *)(DAT_00695c10 + 0x13e0) - *(float *)(param_1 + 0x658);
    uVar9 = FUN_005ab330(local_60,fVar2 * _DAT_0064b3f8,fVar1 * _DAT_0064c684,
                         *(float *)(param_1 + 0x650) -
                         (fVar1 * fVar1 + fVar2 * fVar2) * _DAT_0064b3f8);
    uVar9 = FUN_005ab6d0(local_f0,fVar2 * (float)_DAT_0064a5a8,uVar9);
    uVar9 = FUN_005ab5d0(local_c0,fVar1,uVar9);
    uVar9 = FUN_005ab130(local_90,uVar9);
    puVar10 = (undefined4 *)FUN_005ab130(local_30,uVar9);
    puVar14 = (undefined4 *)(param_1 + 0x5f0);
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar14 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar14 = puVar14 + 1;
    }
    return;
  }
  puVar10 = &DAT_00701550;
  puVar14 = (undefined4 *)(param_1 + 0x5f0);
  for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar14 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar14 = puVar14 + 1;
  }
  return;
}

