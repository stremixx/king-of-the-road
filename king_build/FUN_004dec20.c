
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004dec20(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  undefined4 *puVar15;
  float10 fVar16;
  float10 fVar17;
  float local_1ac;
  float local_1a8;
  float local_1a0;
  float local_19c;
  float local_18c [4];
  float local_17c;
  float local_178;
  float local_170;
  float local_16c;
  float local_164;
  float local_160;
  undefined4 local_15c [10];
  float local_134;
  float local_130;
  float local_128;
  undefined4 local_120 [12];
  undefined1 local_f0 [48];
  undefined1 local_c0 [48];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  if (DAT_006cdbc8 == 0) {
    return;
  }
  if (DAT_006d0fd8 == 0) {
    return;
  }
  if (*(int *)(DAT_006d0fd8 + 0x268) == 0) {
    return;
  }
  if (*(int *)(DAT_006d0fd8 + 0x578) != 0) {
    return;
  }
  iVar11 = *(int *)(param_1 + 0x220);
  if (iVar11 != 0) {
    *(byte *)(iVar11 + 0x28) = *(byte *)(iVar11 + 0x28) & 0xfe;
  }
  puVar10 = (undefined4 *)(*(int *)(param_1 + 0x1270) * 0x30 + 0x230 + param_1);
  puVar15 = local_120;
  for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  if (*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) != 0) {
    uVar9 = FUN_005ab7d0(local_18c,
                         *(float *)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) + 0x29e0) *
                         (float)_DAT_0064c678,local_120);
    puVar10 = (undefined4 *)FUN_005ab130(local_f0,uVar9);
    puVar15 = local_120;
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar15 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar15 = puVar15 + 1;
    }
  }
  if (*(int *)(DAT_006d0fd8 + 0x574) < 0) {
    fVar16 = (float10)FUN_004e2035();
    *(float *)(param_1 + 0x13fc) = (float)fVar16;
    fVar16 = (float10)FUN_004e2035();
    *(float *)(param_1 + 0x13f8) = (float)(fVar16 - (float10)*(float *)(param_1 + 0x13f0));
  }
  else if (*(int *)(DAT_006d0fd8 + 0x574) < 1) {
    fVar16 = (float10)FUN_004e2035();
    *(float *)(param_1 + 0x13f0) = (float)fVar16;
  }
  else {
    fVar16 = (float10)FUN_004e2035();
    *(float *)(param_1 + 0x1400) = (float)fVar16;
    fVar16 = (float10)FUN_004e2035();
    *(float *)(param_1 + 0x13f4) = (float)(fVar16 - (float10)*(float *)(param_1 + 0x13f0));
  }
  FUN_004de8f0(local_15c,1);
  iVar11 = *(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460);
  if (iVar11 != 0) {
    fVar7 = *(float *)(iVar11 + 0x33b0);
    fVar8 = *(float *)(iVar11 + 0x33b4);
    pfVar13 = (float *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x2c4);
    pfVar14 = local_18c;
    for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
      *pfVar14 = *pfVar13;
      pfVar13 = pfVar13 + 1;
      pfVar14 = pfVar14 + 1;
    }
    fVar1 = *(float *)(DAT_006d0fd8 + 0x22c);
    fVar2 = *(float *)(DAT_006d0fd8 + 0x234);
    fVar3 = *(float *)(DAT_006d0fd8 + 0x230);
    fVar4 = *(float *)(DAT_006d0fd8 + 0x22c);
    fVar5 = *(float *)(DAT_006d0fd8 + 0x234);
    fVar6 = *(float *)(DAT_006d0fd8 + 0x230);
    fVar16 = (float10)FUN_005aabc0(iVar11 + 0x2a74);
    local_128 = (float)((float10)(local_17c * fVar3 + local_170 * fVar2 + local_18c[1] * fVar1 +
                                 local_164) * fVar16);
    fVar16 = (fVar16 * (float10)(local_178 * fVar6 + local_16c * fVar5 + local_18c[2] * fVar4 +
                                local_160) + (float10)fVar8 + (float10)_DAT_0064c6a8) *
             (float10)_DAT_0064c6a0;
    fVar16 = fVar16 * ABS(fVar16);
    local_1ac = (float)fVar16;
    if (fVar16 <= (float10)_DAT_0064b250) {
      if (local_1ac < _DAT_0064c69c) {
        local_1ac = -0.2;
      }
    }
    else {
      local_1ac = 0.2;
    }
    FUN_004ea55e(local_1ac,s_CabChan_seetAmmortisator_3_00671eec);
    fVar16 = (float10)FUN_004ea828();
    local_130 = (float)((float10)local_130 + fVar16);
    local_1ac = (local_128 + fVar7) * _DAT_0064c698 * (float)_DAT_0064a888;
    local_1ac = local_1ac * ABS(local_1ac);
    if (_DAT_0064c69c <= local_1ac) {
      if (_DAT_0064b250 < local_1ac) {
        local_1ac = 0.2;
      }
    }
    else {
      local_1ac = -0.2;
    }
    FUN_004ea55e(local_1ac,s_CabChan_seetAmmortisator_3_00671eec);
    fVar16 = (float10)FUN_004ea828();
    if (fVar16 <= (float10)_DAT_0064b250) {
      if (fVar16 < (float10)_DAT_0064c69c) {
        fVar16 = (float10)_DAT_0064c69c;
      }
    }
    else {
      fVar16 = (float10)_DAT_0064b250;
    }
    local_134 = (float)((float10)local_134 + fVar16);
  }
  if ((*(uint *)(DAT_006d0fd8 + 0x57c) & 0x100) == 0) goto LAB_004df222;
  fVar16 = (float10)fcos((float10)_DAT_00695c70);
  iVar11 = *(int *)(DAT_006d0fd8 + 0x268);
  fVar7 = *(float *)(iVar11 + 0xd20);
  if (fVar7 <= _DAT_0064b254) {
    if ((float)_DAT_0064a698 <= fVar7) {
      fVar7 = -fVar7;
    }
    else {
      fVar7 = -0.8;
    }
  }
  else if (fVar7 <= (float)_DAT_0064a888) {
    fVar7 = 0.8;
  }
  fVar17 = (float10)FUN_0061e4b0();
  fVar8 = *(float *)(iVar11 + 0xd2c);
  local_19c = (float)(fVar17 * (float10)(float)ABS(fVar16) * (float10)fVar7 * (float10)_DAT_0064a888
                     );
  if (fVar8 <= _DAT_0064b254) {
    if (fVar8 < (float)_DAT_0064a6a8) goto LAB_004df032;
    fVar8 = -fVar8;
  }
  else if (fVar8 <= (float)_DAT_0064a6d0) {
LAB_004df032:
    fVar8 = 0.5;
  }
  fVar17 = (float10)FUN_0061e4b0();
  local_1ac = (float)-(fVar17 * (float10)(float)ABS(fVar16) * (float10)fVar8);
  if (local_19c <= _DAT_0064c694) {
    if (local_19c < _DAT_0064c690) {
      local_19c = -0.2617994;
    }
  }
  else {
    local_19c = 0.2617994;
  }
  if (local_1ac <= (float)_DAT_0064c688) {
    if (local_1ac < _DAT_0064c660) {
      local_1ac = -0.1308997;
    }
  }
  else {
    local_1ac = 0.08;
  }
  FUN_004ea55e(local_19c,s_CabChan_tilt_2_00671edc);
  fVar16 = (float10)FUN_004ea828();
  fVar7 = (float)fVar16;
  local_1a8 = (float)(fVar16 * (float10)_DAT_0064b3f8);
  local_1a0 = (fVar7 * fVar7 + local_1ac * local_1ac) * _DAT_0064c684;
  if (local_1a8 <= _DAT_0064b2f4) {
    if (local_1a8 < _DAT_0064c680) {
      local_1a8 = -0.1;
    }
  }
  else {
    local_1a8 = 0.1;
  }
  if (local_1a0 <= _DAT_0064b2f4) {
    if (local_1a0 < _DAT_0064c680) {
      local_1a0 = -0.1;
    }
  }
  else {
    local_1a0 = 0.1;
  }
  uVar9 = FUN_005ab330(local_f0,local_1a8,local_1ac * _DAT_0064c684,local_1a0);
  uVar9 = FUN_005ab6d0(local_18c,fVar7,local_15c,uVar9);
  uVar9 = FUN_005ab5d0(local_c0,local_1ac,uVar9);
  uVar9 = FUN_005ab130(local_60,uVar9);
  uVar9 = FUN_005ab130(local_90,uVar9);
  puVar10 = (undefined4 *)FUN_005ab130(local_30,uVar9);
  puVar15 = local_15c;
  for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
LAB_004df222:
  FUN_004e4172(*(undefined4 *)(DAT_00695c0c + 0x50),0,local_15c);
  FUN_004e4172(*(undefined4 *)(param_1 + 0x22c),0,local_120);
  return;
}

