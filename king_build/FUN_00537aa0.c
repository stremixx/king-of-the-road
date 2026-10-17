
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00537aa0(int param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  undefined4 uVar14;
  float *pfVar15;
  int *piVar16;
  float *pfVar17;
  uint uVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  float10 fVar24;
  float10 fVar25;
  undefined1 *puVar26;
  undefined8 uVar27;
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  int *local_31c;
  ulonglong local_318;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  int local_2e0;
  int local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  int local_2c0;
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
  undefined1 local_28c [100];
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
  float local_1e8 [3];
  int local_1dc;
  float local_1d8;
  undefined4 local_1cc;
  undefined4 *local_1c8;
  undefined4 *local_1c4;
  float *local_1c0;
  int local_1bc;
  float *local_1b8;
  uint local_1b4;
  undefined4 local_1a0;
  undefined4 local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  undefined1 local_168 [96];
  undefined4 local_108 [32];
  undefined4 local_88 [33];
  
  if (*(int *)(param_1 + 0x268) == 0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x268) + 0x5400) == 0) {
    uVar14 = *(undefined4 *)(param_1 + 0x1b8);
LAB_00537c3d:
    FUN_005e10c0(uVar14);
  }
  else {
    FUN_005e10c0(*(undefined4 *)(param_1 + 0x1b8),1);
    if (*(float *)(*(int *)(param_1 + 0x268) + 0x51d8) <= _DAT_0064b254) {
      uVar14 = *(undefined4 *)(param_1 + 0x1bc);
      goto LAB_00537c3d;
    }
    iVar13 = __ftol();
    iVar13 = 1 - iVar13;
    if (iVar13 < 4) {
      if (iVar13 < 1) {
        iVar13 = 1;
      }
    }
    else {
      iVar13 = 3;
    }
    iVar19 = *(int *)(DAT_00695c00 + 0xbb0);
    if (*(int *)(param_1 + 0x1c0) + *(int *)(param_1 + 0x1c4) <= iVar19) {
      *(int *)(param_1 + 0x1c0) = iVar19;
      FUN_004e1fd9();
      uVar14 = __ftol();
      *(undefined4 *)(param_1 + 0x1c4) = uVar14;
    }
    local_320 = 1.0;
    if (*(int *)(param_1 + 0x578) != 0) {
      local_320 = 0.5;
    }
    uVar18 = *(uint *)(param_1 + 0x1c4);
    if ((((uVar18 & 1) != 0) || ((int)uVar18 / 2 + *(int *)(param_1 + 0x1c0) <= iVar19)) &&
       (((uVar18 & 1) == 0 || ((int)uVar18 / 2 + *(int *)(param_1 + 0x1c0) < iVar19)))) {
      uVar14 = *(undefined4 *)(param_1 + 0x1bc);
      goto LAB_00537c3d;
    }
    FUN_0052f0a0(DAT_006d0ca4,local_320);
    FUN_005e10c0(*(undefined4 *)(param_1 + 0x1bc),iVar13);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x268) + 0x51d8) = 0;
  iVar13 = *(int *)(param_1 + 0x268);
  fVar7 = DAT_00701580 - DAT_00701590;
  fVar8 = DAT_00701584 - DAT_00701594;
  fVar6 = DAT_00701588 - DAT_00701598;
  fVar1 = *(float *)(iVar13 + 0xd30);
  fVar2 = *(float *)(iVar13 + 0xd24);
  pfVar15 = (float *)(iVar13 + 0x51e0);
  pfVar17 = local_1e8;
  for (iVar19 = 0x14; iVar19 != 0; iVar19 = iVar19 + -1) {
    *pfVar17 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    pfVar17 = pfVar17 + 1;
  }
  local_304 = fVar7 * *(float *)(iVar13 + 0xd18) + fVar8 * fVar2 + fVar6 * fVar1 +
              *(float *)(iVar13 + 0xd3c);
  local_300 = fVar7 * *(float *)(iVar13 + 0xd1c) +
              fVar8 * *(float *)(iVar13 + 0xd28) + fVar6 * *(float *)(iVar13 + 0xd34) +
              *(float *)(iVar13 + 0xd40);
  fVar1 = fVar7 * *(float *)(iVar13 + 0xd20) +
          fVar8 * *(float *)(iVar13 + 0xd2c) + fVar6 * *(float *)(iVar13 + 0xd38) +
          *(float *)(iVar13 + 0xd44);
  local_2b0 = local_304 * *(float *)(param_1 + 0x5c0) +
              local_300 * *(float *)(param_1 + 0x5cc) + fVar1 * *(float *)(param_1 + 0x5d8) +
              *(float *)(param_1 + 0x5e4);
  local_2ac = local_300 * *(float *)(param_1 + 0x5d0) +
              fVar1 * *(float *)(param_1 + 0x5dc) + local_304 * *(float *)(param_1 + 0x5c4) +
              *(float *)(param_1 + 0x5e8);
  local_2a8 = local_300 * *(float *)(param_1 + 0x5d4) +
              fVar1 * *(float *)(param_1 + 0x5e0) + local_304 * *(float *)(param_1 + 0x5c8) +
              *(float *)(param_1 + 0x5ec);
  local_224 = *(float *)(param_1 + 0x5dc) * *(float *)(iVar13 + 0xd44) +
              *(float *)(param_1 + 0x5c4) * *(float *)(iVar13 + 0xd3c) +
              *(float *)(param_1 + 0x5d0) * *(float *)(iVar13 + 0xd40) + *(float *)(param_1 + 0x5e8)
  ;
  local_220 = *(float *)(param_1 + 0x5e0) * *(float *)(iVar13 + 0xd44) +
              *(float *)(param_1 + 0x5c8) * *(float *)(iVar13 + 0xd3c) +
              *(float *)(param_1 + 0x5d4) * *(float *)(iVar13 + 0xd40) + *(float *)(param_1 + 0x5ec)
  ;
  local_228 = *(float *)(iVar13 + 0xd3c) * *(float *)(param_1 + 0x5c0) +
              *(float *)(param_1 + 0x5d8) * *(float *)(iVar13 + 0xd44) +
              *(float *)(param_1 + 0x5cc) * *(float *)(iVar13 + 0xd40) + *(float *)(param_1 + 0x5e4)
  ;
  fVar1 = (float)*(double *)(*(int *)(param_1 + 0x20) + 0xb90);
  fVar2 = _DAT_0064b240 / fVar1;
  if (local_1c0 == (float *)0x0) {
    DAT_006d1040 = 0;
  }
  else if (DAT_006d1040 == 0) {
    if (*(int *)(iVar13 + 0x5220) == 0) {
      if (*(int *)(param_1 + 0x578) == 0) {
        uVar14 = 0x3f000000;
        goto LAB_00537edf;
      }
      FUN_0052efd0(DAT_006d0c70,0x40a00000,0x3f000000,&local_2b0);
      DAT_006d1040 = 1;
    }
    else if (*(int *)(param_1 + 0x578) == 0) {
      uVar14 = 0x3e99999a;
LAB_00537edf:
      FUN_0052ee80(DAT_006d0c70,uVar14);
      DAT_006d1040 = 1;
    }
    else {
      FUN_0052efd0(DAT_006d0c70,0x40a00000,0x3e99999a,&local_2b0);
      DAT_006d1040 = 1;
    }
  }
  if (local_1b8 != (float *)0x0) {
    if (*(int *)(param_1 + 0x578) == 0) {
      FUN_0052ee80(DAT_006d0cac,0x3f800000);
    }
    else {
      FUN_0052efd0(DAT_006d0cac,0x40a00000,0x3f800000,&local_2b0);
    }
  }
  if (local_1bc != 0) {
    if (*(int *)(param_1 + 0x578) == 0) {
      FUN_0052ee80(DAT_006d0cb0,0x40000000);
    }
    else {
      FUN_0052efd0(DAT_006d0cb0,0x40a00000,0x40000000,&local_2b0);
    }
  }
  iVar19 = 0;
  iVar22 = 0;
  iVar13 = 0;
  local_31c = (int *)0x0;
  iVar21 = 0xdc4;
  do {
    if ((((iVar19 == 0) && (iVar4 = *(int *)(iVar21 + *(int *)(param_1 + 0x268)), iVar4 != 0)) &&
        (*(int *)(iVar4 + 0x188) == 2)) &&
       ((*(int *)(iVar4 + 0xdf0) == 2 && (*(int *)(iVar4 + 0x253c) == 5)))) {
      iVar19 = iVar4 + -0x10;
    }
    iVar4 = *(int *)(iVar21 + *(int *)(param_1 + 0x268));
    if (iVar22 == 0) {
      if (((iVar4 != 0) && (*(int *)(iVar4 + 0x188) == 2)) && (*(int *)(iVar4 + 0xdf0) == 2)) {
        if (((*(int *)(iVar4 + 0x253c) != 3) && (*(int *)(iVar4 + 0x253c) != 4)) &&
           (iVar19 != iVar4 + -0x10)) {
          iVar22 = iVar4 + -0x10;
        }
      }
    }
    else if (((iVar4 != 0) && (*(int *)(iVar4 + 0x188) == 2)) &&
            ((*(int *)(iVar4 + 0xdf0) == 2 &&
             (((*(int *)(iVar4 + 0x253c) != 3 && (*(int *)(iVar4 + 0x253c) != 4)) &&
              (iVar19 != iVar4 + -0x10)))))) {
      iVar13 = *(int *)(*(int *)(param_1 + 0x268) + 0xdc4 + (int)local_31c * 4);
      if (iVar13 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = iVar13 + -0x10;
      }
      break;
    }
    iVar21 = iVar21 + 4;
    local_31c = (int *)((int)local_31c + 1);
  } while (iVar21 < 0xddc);
  if (iVar19 != 0) {
    local_2ec = *(float *)(iVar19 + 0xd3c) * *(float *)(param_1 + 0x5c0) +
                *(float *)(param_1 + 0x5d8) * *(float *)(iVar19 + 0xd44) +
                *(float *)(param_1 + 0x5cc) * *(float *)(iVar19 + 0xd40) +
                *(float *)(param_1 + 0x5e4);
    local_2e8 = *(float *)(param_1 + 0x5dc) * *(float *)(iVar19 + 0xd44) +
                *(float *)(param_1 + 0x5d0) * *(float *)(iVar19 + 0xd40) +
                *(float *)(param_1 + 0x5c4) * *(float *)(iVar19 + 0xd3c) +
                *(float *)(param_1 + 0x5e8);
    local_2e4 = *(float *)(param_1 + 0x5e0) * *(float *)(iVar19 + 0xd44) +
                *(float *)(param_1 + 0x5d4) * *(float *)(iVar19 + 0xd40) +
                *(float *)(param_1 + 0x5c8) * *(float *)(iVar19 + 0xd3c) +
                *(float *)(param_1 + 0x5ec);
    FUN_0052f0f0(DAT_006d0c88,0x40a00000,0x40000000,&local_2ec);
  }
  if (iVar22 != 0) {
    iVar19 = *(int *)(iVar22 + 0x254c);
    local_2f8 = *(float *)(param_1 + 0x5c0) * *(float *)(iVar22 + 0xd3c) +
                *(float *)(param_1 + 0x5d8) * *(float *)(iVar22 + 0xd44) +
                *(float *)(param_1 + 0x5cc) * *(float *)(iVar22 + 0xd40) +
                *(float *)(param_1 + 0x5e4);
    local_2f4 = *(float *)(param_1 + 0x5dc) * *(float *)(iVar22 + 0xd44) +
                *(float *)(param_1 + 0x5c4) * *(float *)(iVar22 + 0xd3c) +
                *(float *)(param_1 + 0x5d0) * *(float *)(iVar22 + 0xd40) +
                *(float *)(param_1 + 0x5e8);
    local_2f0 = *(float *)(param_1 + 0x5e0) * *(float *)(iVar22 + 0xd44) +
                *(float *)(param_1 + 0x5c8) * *(float *)(iVar22 + 0xd3c) +
                *(float *)(param_1 + 0x5d4) * *(float *)(iVar22 + 0xd40) +
                *(float *)(param_1 + 0x5ec);
    if (((iVar19 == 0) || (iVar19 == 1)) || (fVar7 = _DAT_0064b254, iVar19 == 2)) {
      fVar7 = ((float)_DAT_0064e360 /
              (local_2f0 * local_2f0 + local_2f4 * local_2f4 + local_2f8 * local_2f8)) *
              *(float *)(iVar22 + 0xcd4) * (float)_DAT_0064a8d8;
    }
    if ((iVar13 != 0) && ((*(int *)(iVar13 + 0x254c) == 0 || (*(int *)(iVar13 + 0x254c) == 1)))) {
      fVar8 = *(float *)(param_1 + 0x5c0) * *(float *)(iVar13 + 0xd3c) +
              *(float *)(param_1 + 0x5d8) * *(float *)(iVar13 + 0xd44) +
              *(float *)(param_1 + 0x5cc) * *(float *)(iVar13 + 0xd40) + *(float *)(param_1 + 0x5e4)
      ;
      fVar6 = *(float *)(param_1 + 0x5dc) * *(float *)(iVar13 + 0xd44) +
              *(float *)(param_1 + 0x5d0) * *(float *)(iVar13 + 0xd40) +
              *(float *)(param_1 + 0x5c4) * *(float *)(iVar13 + 0xd3c) + *(float *)(param_1 + 0x5e8)
      ;
      fVar10 = *(float *)(param_1 + 0x5e0) * *(float *)(iVar13 + 0xd44) +
               *(float *)(param_1 + 0x5d4) * *(float *)(iVar13 + 0xd40) +
               *(float *)(param_1 + 0x5c8) * *(float *)(iVar13 + 0xd3c) +
               *(float *)(param_1 + 0x5ec);
      fVar9 = ((float)_DAT_0064e360 / (fVar10 * fVar10 + fVar6 * fVar6 + fVar8 * fVar8)) *
              *(float *)(iVar13 + 0xcd4) * (float)_DAT_0064a8d8;
      local_300 = local_2f4 * fVar7;
      local_2fc = local_2f0 * fVar7;
      local_2ec = local_2f8 * fVar7 + fVar8 * fVar9;
      local_2e8 = fVar6 * fVar9 + local_300;
      local_2e4 = fVar10 * fVar9 + local_2fc;
      fVar7 = fVar7 + fVar9;
      local_2f8 = local_2ec / fVar7;
      local_2f4 = local_2e8 / fVar7;
      local_2f0 = local_2e4 / fVar7;
      local_2d8 = local_2f8;
      local_2d4 = local_2f4;
      local_2d0 = local_2f0;
    }
    if ((float)_DAT_0064a648 < fVar7) {
      FUN_0052f0f0(DAT_006d0c7c,0x40a00000,0x3f800000,&local_2f8);
    }
  }
  if ((*(int *)(*(int *)(param_1 + 0x268) + 0x5214) == 1) && (1 < *(int *)(param_1 + 0x10))) {
    if (*(float *)(*(int *)(param_1 + 0x268) + 0x51fc) == _DAT_0064b254) {
      if ((DAT_006d0ca8 != 0) &&
         (_DAT_006d0d14 + _DAT_0064b2ec < (float)*(double *)(DAT_00695c00 + 0xb98))) {
        if (*(int *)(param_1 + 0x578) == 0) {
          FUN_0052ee80(DAT_006d0ca8,0x3f800000);
          _DAT_006d0d14 = (float)*(double *)(DAT_00695c00 + 0xb98);
        }
        else {
          FUN_0052efd0(DAT_006d0ca8,0x40c00000,0x3f800000,&local_2b0);
          _DAT_006d0d14 = (float)*(double *)(DAT_00695c00 + 0xb98);
        }
      }
    }
    else if (_DAT_006d0d14 + _DAT_0064b2ec < (float)*(double *)(DAT_00695c00 + 0xb98)) {
      if (*(int *)(param_1 + 0x578) == 0) {
        FUN_0052ee80(DAT_006d0c54,0x3f800000);
      }
      else {
        FUN_0052efd0(DAT_006d0c54,0x40c00000,0x3f800000,&local_2b0);
      }
      _DAT_006d0d14 = (float)*(double *)(DAT_00695c00 + 0xb98);
    }
    DAT_006d0d10 = '\0';
  }
  iVar13 = *(int *)(*(int *)(param_1 + 0x268) + 0x5214);
  if ((iVar13 == 2) || (iVar13 == 3)) {
    local_328 = 1.0;
    if (iVar13 == 3) {
      iVar13 = (int)DAT_006d0d10;
      DAT_006d0d10 = DAT_006d0d10 + '\x01';
      local_31c = (int *)0x3ecccccd;
      local_328 = ((float)iVar13 * fVar1) / _DAT_00673384;
      if (local_328 < (float)_DAT_0064a6d0) {
        local_31c = (int *)(local_328 * _DAT_0064b24c);
      }
      if (*(int *)(param_1 + 0x578) == 0) {
        FUN_0052eed0(DAT_006d0c58,local_31c);
      }
      else {
        FUN_0052ef50(DAT_006d0c58,0x40c00000,local_31c,&local_2b0);
      }
    }
    if ((*(int *)(*(int *)(param_1 + 0x268) + 0x5214) == 2) || (local_328 < (float)_DAT_0064a6d0)) {
      local_21c = (local_1e8[2] / local_1d8) * (float)_DAT_0064a888 + (float)_DAT_0064a830;
      if (*(int *)(param_1 + 0x578) == 0) {
        FUN_0052ef20();
      }
      else if (*(float *)(*(int *)(param_1 + 0x268) + 0xcd4) <= _DAT_0064e3e8) {
        FUN_0052efa0();
      }
      else {
        FUN_0052efa0();
      }
      if (*(int *)(param_1 + 0x578) == 0) {
        FUN_0052ef20();
      }
      else if (*(float *)(*(int *)(param_1 + 0x268) + 0xcd4) <= _DAT_0064e3e8) {
        FUN_0052efa0();
      }
      else {
        FUN_0052efa0();
      }
    }
  }
  if (*(float *)(*(int *)(param_1 + 0x268) + 0x522c) != _DAT_0064b254) {
    FUN_0052f080(DAT_006d0c30,local_19c,local_1a0,&local_228);
  }
  iVar13 = *(int *)(*(int *)(param_1 + 0x268) + 0x5460);
  if (iVar13 == 0) {
    return;
  }
  bVar23 = DAT_00695bd4 != 0 || *(short *)(iVar13 + 0x2706) == 1;
  if ((*(int *)(iVar13 + 0x3444) == 0) || (*(int *)(iVar13 + 0x3448) == 0)) {
    if (*(int *)(param_1 + 0x70) == 0) {
      FUN_00577900();
      *(undefined4 *)(param_1 + 0x70) = 1;
    }
  }
  else if (*(int *)(param_1 + 0x70) == 1) {
    if (DAT_00695c54 != (undefined4 *)0x0) {
      FUN_00576a00();
    }
    if (DAT_00695bd4 != 0) {
      FUN_004e9b0e();
    }
    if (DAT_00695c58 != (undefined4 *)0x0) {
      FUN_00576a00();
    }
    if (DAT_00695bd4 != 0) {
      FUN_0061c369(local_28c,s_dief_Resist_0_00678110);
      FUN_004e9b0e();
    }
    if (DAT_00695c5c != (undefined4 *)0x0) {
      FUN_00576a00();
    }
    if (DAT_00695bd4 != 0) {
      FUN_0061c369(local_28c,s_dief_Driftage_0_006780fc);
      FUN_004e9b0e();
    }
    if (DAT_00695c60 != (undefined4 *)0x0) {
      FUN_00576a00();
    }
    if (DAT_00695bd4 != 0) {
      FUN_0061c369(local_28c,s_dief_SteerDamage_0_006780e8);
      FUN_004e9b0e();
    }
    if (DAT_00695c50 != 0) {
      FUN_00576a00();
    }
    if (DAT_00695bd4 != 0) {
      FUN_0061c369(local_28c,s_dief_offRoad_0_0_0_006780d4);
      FUN_004e9b0e();
    }
    if (DAT_00695c64 != (undefined4 *)0x0) {
      FUN_00576a00();
    }
    if (DAT_00695bd4 != 0) {
      FUN_0061c369(local_28c,s_dief_Bounce_0_0_006780c0);
      FUN_004e9b0e();
    }
    FUN_00577900();
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if ((DAT_00695c04 != 0) && (*(int *)(param_1 + 0x70) != 0)) {
    pfVar15 = (float *)(iVar13 + 0x3bb0);
    iVar19 = 2;
    fVar1 = _DAT_0064b254;
    do {
      fVar1 = fVar1 + *pfVar15;
      pfVar15 = pfVar15 + 1;
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
    fVar1 = fVar1 * (float)_DAT_0064a6d0;
    if (bVar23) {
      if (DAT_00695c54 != (undefined4 *)0x0) {
        local_324 = *(float *)(iVar13 + 0x3330) * fVar1 * (float)_DAT_0064a5a8;
        if (fVar1 < local_324) {
          local_324 = fVar1;
        }
        if (_DAT_0064b240 < local_324) {
          local_324 = 1.0;
        }
        iVar19 = *(int *)(iVar13 + 0x3cc8);
        local_328 = 0.0;
        if (0 < iVar19) {
          local_328 = 0.2;
        }
        if (iVar19 < 0) {
          local_328 = -0.2;
        }
        if (iVar19 == *(int *)(iVar13 + 0x3ccc)) {
          local_328 = 0.5;
        }
        if (iVar19 == -*(int *)(iVar13 + 0x3ccc)) {
          local_328 = -0.5;
        }
        if (local_324 <= (float)_DAT_0064e3e0) {
          FUN_00576a00();
          if (DAT_00695bd4 != 0) {
            FUN_004e9b0e();
          }
        }
        else {
          FUN_00576e70(local_324,local_328);
          if (DAT_00695bd4 != 0) {
            FUN_0061c369(local_28c,s_dief_Center__f__f_006780ac,(double)local_324,(double)local_328)
            ;
            FUN_004e9b0e();
          }
        }
      }
      if (DAT_00695c58 != (undefined4 *)0x0) {
        local_328 = (_DAT_0064b440 - *(float *)(iVar13 + 0x3330)) * fVar1 * (float)_DAT_0064a5a8;
        if (fVar1 < local_328) {
          local_328 = fVar1;
        }
        if ((float)_DAT_0064a660 < local_328) {
          local_328 = 1.0;
        }
        if (local_328 <= (float)_DAT_0064c328) {
          FUN_00576a00();
          if (DAT_00695bd4 != 0) {
            FUN_0061c369(local_28c,s_dief_Resist_0_00678110);
            FUN_004e9b0e();
          }
        }
        else {
          FUN_005770e0();
          if (DAT_00695bd4 != 0) {
            FUN_0061c369(local_28c,s_dief_Resist__f_0067809c,(double)local_328);
            FUN_004e9b0e();
          }
        }
      }
      if (DAT_00695c5c != (undefined4 *)0x0) {
        FUN_0057d570();
        FUN_005ab7d0();
        FUN_005ab130();
        FUN_0057d570();
        local_304 = DAT_00701580 * local_198 + local_180 * DAT_00701588 + local_18c * DAT_00701584;
        local_300 = DAT_00701580 * local_194 + local_17c * DAT_00701588 + local_188 * DAT_00701584;
        local_2fc = DAT_00701580 * local_190 + local_178 * DAT_00701588 + local_184 * DAT_00701584;
        local_2a4 = local_304;
        local_2a0 = local_300;
        local_29c = local_2fc;
        if (*(short *)(iVar13 + 0x2b68) != 0) {
          fVar7 = local_2fc * *(float *)(iVar13 + 0x2b60) - local_300 * *(float *)(iVar13 + 0x2b64);
          fVar8 = local_304 * *(float *)(iVar13 + 0x2b64) - local_2fc * *(float *)(iVar13 + 0x2b5c);
          fVar6 = local_300 * *(float *)(iVar13 + 0x2b5c) - local_304 * *(float *)(iVar13 + 0x2b60);
          local_2a4 = fVar8 * *(float *)(iVar13 + 0x2b64) - fVar6 * *(float *)(iVar13 + 0x2b60);
          local_2a0 = fVar6 * *(float *)(iVar13 + 0x2b5c) - fVar7 * *(float *)(iVar13 + 0x2b64);
          local_29c = fVar7 * *(float *)(iVar13 + 0x2b60) - fVar8 * *(float *)(iVar13 + 0x2b5c);
        }
        if (*(short *)(iVar13 + 0x2c60) != 0) {
          fVar7 = local_2fc * *(float *)(iVar13 + 0x2c58) - local_300 * *(float *)(iVar13 + 0x2c5c);
          fVar8 = local_304 * *(float *)(iVar13 + 0x2c5c) - local_2fc * *(float *)(iVar13 + 0x2c54);
          fVar6 = local_300 * *(float *)(iVar13 + 0x2c54) - local_304 * *(float *)(iVar13 + 0x2c58);
          local_304 = fVar8 * *(float *)(iVar13 + 0x2c5c) - fVar6 * *(float *)(iVar13 + 0x2c58);
          local_300 = fVar6 * *(float *)(iVar13 + 0x2c54) - fVar7 * *(float *)(iVar13 + 0x2c5c);
          local_2fc = fVar7 * *(float *)(iVar13 + 0x2c58) - fVar8 * *(float *)(iVar13 + 0x2c54);
        }
        FUN_005aab70();
        FUN_005aab70();
        local_2f8 = 0.0;
        local_2f4 = 0.0;
        local_2f0 = 0.0;
        local_2bc = 0.0;
        local_2b8 = 0.0;
        local_2b4 = 0.0;
        FUN_0057d570();
        uVar14 = FUN_0057d670();
        puVar26 = local_168;
        uVar27 = CONCAT44(uVar14,&local_218);
        FUN_005ab130();
        FUN_004e2844(local_168,&local_2f8,&local_2f4,&local_2f0,&local_2b4,&local_2bc,&local_2b8,
                     puVar26,uVar27);
        iVar19 = FUN_0057d650();
        local_2c8 = local_1f0 - *(float *)(iVar19 + 0x28);
        local_2c4 = local_1ec - *(float *)(iVar19 + 0x2c);
        local_2f8 = (local_1f4 - *(float *)(iVar19 + 0x24)) * fVar2;
        local_2f4 = local_2c8 * fVar2;
        local_2f0 = local_2c4 * fVar2;
        local_2bc = -local_2bc;
        FUN_005aad10(&local_2cc,fVar2);
        local_2d8 = 0.0;
        local_2d4 = 0.0;
        local_2d0 = 0.0;
        local_2ec = 0.0;
        local_2e8 = 0.0;
        local_2e4 = 0.0;
        if ((*(short *)(iVar13 + 0x2b68) == 0) || (*(int *)(iVar13 + 0x3444) != 0)) {
          local_320 = 0.0;
        }
        else {
          fVar2 = local_2b4 * *(float *)(iVar13 + 0x2ae4) - local_2b8 * *(float *)(iVar13 + 0x2ae8);
          fVar7 = local_2bc * *(float *)(iVar13 + 0x2ae8) - local_2b4 * *(float *)(iVar13 + 0x2ae0);
          fVar6 = local_2b8 * *(float *)(iVar13 + 0x2ae0) - local_2bc * *(float *)(iVar13 + 0x2ae4);
          local_2c8 = fVar7 * local_208 + fVar6 * local_1fc + local_214 * fVar2;
          fVar8 = local_218 * fVar2 + fVar7 * local_20c + fVar6 * local_200 + local_2f8;
          fVar2 = fVar7 * local_204 + fVar6 * local_1f8 + local_210 * fVar2 + local_2f0;
          local_2cc = fVar2 * *(float *)(iVar13 + 0x2b60) -
                      (local_2f4 + local_2c8) * *(float *)(iVar13 + 0x2b64);
          fVar2 = fVar8 * *(float *)(iVar13 + 0x2b64) - fVar2 * *(float *)(iVar13 + 0x2b5c);
          fVar7 = (local_2f4 + local_2c8) * *(float *)(iVar13 + 0x2b5c) -
                  fVar8 * *(float *)(iVar13 + 0x2b60);
          local_2d8 = fVar2 * *(float *)(iVar13 + 0x2b64) - fVar7 * *(float *)(iVar13 + 0x2b60);
          local_2d4 = fVar7 * *(float *)(iVar13 + 0x2b5c) - local_2cc * *(float *)(iVar13 + 0x2b64);
          local_2d0 = local_2cc * *(float *)(iVar13 + 0x2b60) - fVar2 * *(float *)(iVar13 + 0x2b5c);
          fVar24 = (float10)FUN_005aabc0();
          fVar25 = (float10)fsin((float10)*(float *)(iVar13 + 0x338c));
          local_320 = (float)((((float10)*(float *)(iVar13 + 0x3348) +
                               (float10)*(float *)(iVar13 + 0x3348)) /
                              (float10)*(float *)(&DAT_00696ab4 + *(int *)(iVar13 + 0x8cc) * 0x970))
                             * fVar25 * fVar24);
        }
        if ((*(short *)(iVar13 + 0x2c60) == 0) || (*(int *)(iVar13 + 0x3444) != 0)) {
          fVar24 = (float10)_DAT_0064b254;
        }
        else {
          fVar2 = local_2b4 * *(float *)(iVar13 + 0x2af0) - local_2b8 * *(float *)(iVar13 + 0x2af4);
          fVar7 = local_2bc * *(float *)(iVar13 + 0x2af4) - local_2b4 * *(float *)(iVar13 + 0x2aec);
          fVar6 = local_2b8 * *(float *)(iVar13 + 0x2aec) - local_2bc * *(float *)(iVar13 + 0x2af0);
          local_2c8 = fVar7 * local_208 + fVar6 * local_1fc + local_214 * fVar2;
          fVar8 = fVar7 * local_20c + fVar6 * local_200 + fVar2 * local_218 + local_2f8;
          fVar2 = fVar7 * local_204 + fVar6 * local_1f8 + local_210 * fVar2 + local_2f0;
          local_2cc = fVar2 * *(float *)(iVar13 + 0x2c58) -
                      (local_2c8 + local_2f4) * *(float *)(iVar13 + 0x2c5c);
          fVar2 = fVar8 * *(float *)(iVar13 + 0x2c5c) - fVar2 * *(float *)(iVar13 + 0x2c54);
          fVar7 = (local_2c8 + local_2f4) * *(float *)(iVar13 + 0x2c54) -
                  fVar8 * *(float *)(iVar13 + 0x2c58);
          local_2ec = fVar2 * *(float *)(iVar13 + 0x2c5c) - fVar7 * *(float *)(iVar13 + 0x2c58);
          local_2e8 = fVar7 * *(float *)(iVar13 + 0x2c54) - local_2cc * *(float *)(iVar13 + 0x2c5c);
          local_2e4 = local_2cc * *(float *)(iVar13 + 0x2c58) - fVar2 * *(float *)(iVar13 + 0x2c54);
          fVar25 = (float10)FUN_005aabc0();
          fVar24 = (float10)fsin((float10)*(float *)(iVar13 + 0x3390));
          fVar24 = fVar24 * fVar25;
          local_320 = ((*(float *)(iVar13 + 0x334c) + *(float *)(iVar13 + 0x334c)) /
                      *(float *)(&DAT_00696ab8 + *(int *)(iVar13 + 0x8cc) * 0x970)) * local_320;
        }
        fVar24 = fVar24 + (float10)local_320;
        uVar18 = *(uint *)(*(int *)(param_1 + 0x268) + 0xd98);
        if ((uVar18 == 0) || ((uVar18 & 0x20) != 0)) {
          fVar24 = fVar24 * (float10)_DAT_0064c658;
        }
        else {
          fVar24 = fVar24 / (ABS(fVar24) + (float10)_DAT_0064a828);
        }
        local_324 = (float)(fVar24 * (float10)fVar1);
        if ((float10)fVar1 < fVar24 * (float10)fVar1) {
          local_324 = fVar1;
        }
        if ((float)_DAT_0064a660 < local_324) {
          local_324 = 1.0;
        }
        if (local_324 < -fVar1) {
          local_324 = -fVar1;
        }
        if (local_324 < (float)_DAT_0064ba38) {
          local_324 = -1.0;
        }
        local_320 = 0.0;
        if (*(int *)(iVar13 + 0x3c08) != 0) {
          local_320 = (float)*(int *)(iVar13 + 0x3c08);
        }
        FUN_004ea55e(local_320,s__Viewer__make_sounds__filterStee_00678074);
        fVar24 = (float10)FUN_004ea828();
        if (fVar24 <= (float10)_DAT_0064b240) {
          if (fVar24 < (float10)_DAT_0064b928) {
            fVar24 = (float10)_DAT_0064b928;
          }
        }
        else {
          fVar24 = (float10)_DAT_0064b240;
        }
        local_320 = 0.0;
        iVar22 = 0;
        piVar20 = (int *)(iVar13 + 0x3444);
        piVar16 = (int *)(iVar13 + 0x2bd4);
        iVar19 = 2;
        do {
          if (((((short)piVar16[-0x1b] != 0) && (piVar5 = (int *)*piVar16, piVar5 != (int *)0x0)) &&
              (*piVar5 == 1)) && ((piVar5[1] == 1 && (*piVar20 == 0)))) {
            iVar22 = iVar22 + 1;
          }
          piVar20 = piVar20 + 1;
          piVar16 = piVar16 + 0x3e;
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
        if (iVar22 != 0) {
          pfVar15 = (float *)(param_1 + 0x78);
          iVar19 = 4;
          dVar3 = *(double *)(*(int *)(param_1 + 0x20) + 0xb90);
          pfVar17 = pfVar15;
          do {
            iVar19 = iVar19 + -1;
            *pfVar17 = (float)dVar3 * *(float *)(iVar13 + 0x332c) + *pfVar17;
            pfVar17 = pfVar17 + 1;
          } while (iVar19 != 0);
          iVar19 = 2;
          fVar1 = SQRT(SQRT(*(float *)(iVar13 + 0x332c) + _DAT_0064b240));
          *(float *)(param_1 + 0x98) = fVar1 * _DAT_0064c2e8;
          *(float *)(param_1 + 0xa8) = fVar1;
          *(float *)(param_1 + 0x9c) = fVar1 * _DAT_0064b310;
          *(float *)(param_1 + 0xac) = fVar1 * _DAT_0064c4d8;
          *(float *)(param_1 + 0xa0) = fVar1 * (float)_DAT_0064a6e0;
          fVar2 = (float)_DAT_0064a770;
          *(float *)(param_1 + 0xb0) = fVar1 * fVar2;
          *(float *)(param_1 + 0xa4) = fVar1 * (float)_DAT_0064a928;
          *(float *)(param_1 + 0xb4) = fVar1 * fVar2;
          do {
            if (pfVar15[4] < *pfVar15) {
              *pfVar15 = 0.0;
              iVar22 = _rand();
              fVar1 = _DAT_0064b440;
              if ((float)_DAT_0064a590 < *(float *)(iVar13 + 0x332c)) {
                fVar1 = (((float)iVar22 * _DAT_0064b244 + (float)_DAT_0064a660) *
                        (float)_DAT_0064a6d0) / (*(float *)(iVar13 + 0x332c) * (float)_DAT_0064a5a8)
                ;
              }
              pfVar15[4] = fVar1 * pfVar15[8] + pfVar15[0xc];
              iVar22 = _rand();
              fVar1 = (float)iVar22 * _DAT_0064b244 - (float)_DAT_0064a6d0;
              if (fVar1 <= _DAT_0064b254) {
                fVar1 = fVar1 - (float)_DAT_0064a660;
              }
              else {
                fVar1 = fVar1 + (float)_DAT_0064a660;
              }
              local_320 = fVar1 * pfVar15[0x10] + local_320;
            }
            pfVar15 = pfVar15 + 1;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
        }
        local_324 = local_320 + (float)(fVar24 + (float10)local_324);
        if ((float)_DAT_0064a660 < local_324) {
          local_324 = 1.0;
        }
        if (local_324 < (float)_DAT_0064ba38) {
          local_324 = -1.0;
        }
        if (ABS(local_324) <= (float)_DAT_0064a948) {
          FUN_00576a00();
          if (DAT_00695bd4 != 0) {
            FUN_0061c369(local_28c,s_dief_Driftage_0_006780fc);
            FUN_004e9b0e();
          }
        }
        else {
          FUN_005772f0();
          if (DAT_00695bd4 != 0) {
            FUN_0061c369(local_28c,s_dief_Driftage__f_00678060,(double)local_324);
            FUN_004e9b0e();
          }
        }
      }
      if (DAT_00695c60 != (undefined4 *)0x0) {
        local_328 = 0.0;
        if ((*(int *)(iVar13 + 0x3cc8) != 0) &&
           (local_328 = ((float)*(int *)(iVar13 + 0x3cc8) / (float)(*(int *)(iVar13 + 0x3ccc) + -1))
                        * *(float *)(iVar13 + 0x3330) * (float)_DAT_0064a5a8,
           (float)_DAT_0064a6d0 < local_328)) {
          local_328 = 0.5;
        }
        if (local_328 <= (float)_DAT_0064c328) {
          FUN_00576a00();
          if (DAT_00695bd4 != 0) {
            FUN_0061c369(local_28c,s_dief_SteerDamage_0_006780e8);
            FUN_004e9b0e();
          }
        }
        else {
          FUN_005772f0();
          if (DAT_00695bd4 != 0) {
            FUN_0061c369(local_28c,s_dief_SteerDamage__f_00678048,(double)local_328);
            FUN_004e9b0e();
          }
        }
      }
    }
  }
  bVar11 = false;
  if ((*(int *)(iVar13 + 0x3344) == 0) && (*(int *)(iVar13 + 0x3464) == 0)) {
    piVar20 = (int *)(iVar13 + 0x2bd4);
    iVar22 = 0;
    iVar19 = 4;
    piVar16 = piVar20;
    local_320 = _DAT_0064b254;
    do {
      if (((((short)piVar16[-0x1b] != 0) && (piVar5 = (int *)*piVar16, piVar5 != (int *)0x0)) &&
          (*piVar5 == 1)) && ((piVar5[1] == 6 || (piVar5[1] == 2)))) {
        local_320 = local_320 + (float)_DAT_0064a728;
        iVar22 = iVar22 + 1;
      }
      piVar16 = piVar16 + 0x3e;
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
    if (((iVar22 == 0) || (*(float *)(iVar13 + 0x332c) <= _DAT_0064b240)) ||
       ((*(int *)(iVar13 + 0x3444) != 0 || (*(int *)(iVar13 + 0x3448) != 0)))) goto LAB_00539b58;
    local_320 = local_320 * SQRT((*(float *)(iVar13 + 0x332c) - _DAT_0064b240) * _DAT_0064c480);
    if (_DAT_0064b240 < local_320) {
      local_320 = 1.0;
    }
    FUN_0052f0f0(DAT_006d0c80,0x40a00000,local_320,&local_228);
    if (bVar23) {
      if (((DAT_00695c04 != 0) && (*(int *)(param_1 + 0x70) != 0)) && (DAT_00695c50 != 0)) {
        fVar1 = (ABS(*(float *)(iVar13 + 0x332c)) * (float)_DAT_0064a908) /
                (ABS(*(float *)(iVar13 + 0x332c)) + (float)_DAT_0064a908);
        if (*(int *)(iVar13 + 0x3444) == 0) {
          local_31c = (int *)(uint)(*(int *)(iVar13 + 0x3448) != 0);
        }
        else {
          local_31c = (int *)0xffffffff;
        }
        piVar16 = local_31c;
        local_31c = (int *)0x3e4ccccd;
        fVar2 = _DAT_00677708;
        if ((float)_DAT_0064a6d0 / fVar1 <
            (float)*(double *)(*(int *)(param_1 + 0x20) + 0xb98) - *(float *)(param_1 + 0x30)) {
          *(float *)(param_1 + 0x30) = (float)*(double *)(*(int *)(param_1 + 0x20) + 0xb98);
          do {
            iVar19 = _rand();
            fVar2 = ((float)iVar19 * _DAT_0064b244 * (float)_DAT_0064a658 + (float)_DAT_0064a6d0) *
                    fVar1;
          } while (ABS(fVar2 - _DAT_00677708) < _DAT_00677708 * (float)_DAT_0064ba68);
        }
        _DAT_00677708 = fVar2;
        iVar19 = 2;
        fVar1 = _DAT_00677708;
        do {
          if ((((short)piVar20[-0x1b] != 0) && (piVar5 = (int *)*piVar20, piVar5 != (int *)0x0)) &&
             (*piVar5 == 1)) {
            if (piVar5[1] == 6) {
              local_31c = (int *)(local_320 * (float)_DAT_0064ba68);
              fVar1 = fVar1 * (float)_DAT_0064c368;
            }
            else if (piVar5[1] == 2) {
              local_31c = (int *)(local_320 * (float)_DAT_0064a6d0);
            }
          }
          piVar20 = piVar20 + 0x3e;
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
        FUN_00576c00();
        if (DAT_00695bd4 != 0) {
          FUN_0061c369(local_28c,s_dief_offRoad__f__f__f_00678030,(double)(float)local_31c,
                       (double)(int)piVar16,(double)fVar1);
          FUN_004e9b0e(local_28c);
        }
        bVar11 = true;
      }
      goto LAB_00539b58;
    }
  }
  else {
LAB_00539b58:
    if (((bVar23) && (!bVar11)) &&
       ((DAT_00695c50 != 0 &&
        (((DAT_00695c04 != 0 && (*(int *)(param_1 + 0x70) != 0)) &&
         (FUN_00576a00(), DAT_00695bd4 != 0)))))) {
      FUN_0061c369(local_28c,s_dief_offRoad_0_0_0_006780d4);
      FUN_004e9b0e();
    }
  }
  iVar19 = FUN_0052f7d0();
  if ((iVar19 != 0) && (*(int *)(iVar13 + 0x3344) == 0)) {
    iVar19 = FUN_005432e0();
    if (*(int *)(param_1 + 0x578) == 0) {
      if (iVar19 != 0) {
        FUN_005fcaa0();
      }
    }
    else if (iVar19 != 0) {
      FUN_004e49d0(iVar19,0x41700000,0x3f800000,&local_228);
    }
  }
  iVar19 = 0x5468;
  bVar11 = false;
  bVar12 = false;
  do {
    iVar22 = *(int *)(param_1 + 0x268);
    if ((*(int *)(iVar19 + iVar22) != 0) &&
       (fVar24 = (float10)FUN_004e2035(),
       fVar24 - (float10)*(float *)(iVar19 + 0xdc + iVar22) < (float10)_DAT_0064a6d0)) {
      *(undefined4 *)(iVar19 + iVar22) = 0;
    }
    if ((*(int *)(iVar19 + *(int *)(param_1 + 0x268)) != 0) || (bVar11)) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    iVar19 = iVar19 + 4;
  } while (iVar19 < 0x5494);
  if ((((DAT_00695c04 != 0) && (*(int *)(param_1 + 0x70) != 0)) && (bVar23)) &&
     ((DAT_00695c64 != (undefined4 *)0x0 && (bVar11)))) {
    local_2d8 = DAT_007015b0;
    local_2d4 = DAT_007015b4;
    local_2d0 = DAT_007015b8;
    local_32c = 0.0;
    iVar19 = 0;
    iVar22 = 0x5518;
    do {
      iVar21 = *(int *)(param_1 + 0x268);
      if (*(int *)(iVar21 + -0xb0 + iVar22) != 0) {
        local_32c = *(float *)(iVar21 + iVar22);
        local_2c8 = *(float *)(iVar21 + 0xd64) * *(float *)(iVar21 + 0x549c + iVar19) +
                    *(float *)(iVar21 + 0xd58) * *(float *)(iVar21 + 0x5498 + iVar19) +
                    *(float *)(iVar21 + 0xd4c) * *(float *)(iVar21 + 0x5494 + iVar19) +
                    *(float *)(iVar21 + 0xd70);
        local_2c4 = *(float *)(iVar21 + 0xd68) * *(float *)(iVar21 + 0x549c + iVar19) +
                    *(float *)(iVar21 + 0xd5c) * *(float *)(iVar21 + 0x5498 + iVar19) +
                    *(float *)(iVar21 + 0xd50) * *(float *)(iVar21 + 0x5494 + iVar19) +
                    *(float *)(iVar21 + 0xd74);
        local_304 = local_32c *
                    (*(float *)(iVar21 + 0x5494 + iVar19) * *(float *)(iVar21 + 0xd48) +
                     *(float *)(iVar21 + 0xd60) * *(float *)(iVar21 + 0x549c + iVar19) +
                     *(float *)(iVar21 + 0xd54) * *(float *)(iVar21 + 0x5498 + iVar19) +
                    *(float *)(iVar21 + 0xd6c));
        local_300 = local_2c8 * local_32c;
        local_2fc = local_2c4 * local_32c;
        local_2ec = local_304;
        local_2e8 = local_300;
        local_2e4 = local_2fc;
        FUN_005aae00(&local_2f8,&local_304);
      }
      iVar22 = iVar22 + 4;
      iVar19 = iVar19 + 0xc;
    } while (iVar22 < 0x5544);
    if ((float)_DAT_0064a5a8 < local_32c) {
      if (_DAT_0064b240 < local_32c) {
        local_32c = 1.0;
      }
      if (_DAT_0064b254 < local_2d8) {
        local_32c = -local_32c;
      }
      fVar1 = ABS(local_32c * (float)_DAT_0064a830) + (float)_DAT_0064a5a8;
      FUN_00577520(local_32c,fVar1);
      bVar12 = true;
      if (DAT_00695bd4 != 0) {
        FUN_0061c369(local_28c,s_dief_Bounce__f__f_0067801c,(double)local_32c,(double)fVar1);
        FUN_004e9b0e();
      }
    }
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    if (DAT_00695bd4 == 0) goto LAB_0053a3c4;
    if (!bVar12) {
      FUN_0061c369(local_28c,s_dief_Bounce_0_0_006780c0);
      FUN_004e9b0e();
    }
  }
  if (DAT_00695bd4 != 0) {
    if (DAT_00695c54 != (undefined4 *)0x0) {
      FUN_00576a50();
      FUN_0061c369(local_28c,s_ffstatus_Center__d_00678004,0,*DAT_00695c54);
      FUN_004e9b0e();
    }
    if (DAT_00695c58 != (undefined4 *)0x0) {
      FUN_00576a50();
      FUN_0061c369(local_28c,s_ffstatus_Resist__d_00677fec,0,*DAT_00695c58);
      FUN_004e9b0e();
    }
    if (DAT_00695c5c != (undefined4 *)0x0) {
      FUN_00576a50();
      FUN_0061c369(local_28c,s_ffstatus_Driftage__d_00677fd4,0,*DAT_00695c5c);
      FUN_004e9b0e();
    }
    if (DAT_00695c60 != (undefined4 *)0x0) {
      FUN_00576a50();
      FUN_0061c369(local_28c,s_ffstatus_SteerDamage__d_00677fb8,0,*DAT_00695c60);
      FUN_004e9b0e();
    }
    if (DAT_00695c64 != (undefined4 *)0x0) {
      FUN_00576a50();
      FUN_0061c369(local_28c,s_ffstatus_Bounce__d__d_00677fa0,0,*DAT_00695c64);
      FUN_004e9b0e();
      pfVar15 = local_1e8;
      for (iVar19 = 0xe; iVar19 != 0; iVar19 = iVar19 + -1) {
        *pfVar15 = 0.0;
        pfVar15 = pfVar15 + 1;
      }
      local_2e8 = 0.0;
      local_1c8 = local_108;
      local_2e4 = 0.0;
      local_1c0 = &local_2ec;
      local_2e0 = 0;
      local_2dc = 0;
      local_1c4 = local_88;
      local_1b8 = &local_2cc;
      local_1e8[0] = 7.84727e-44;
      local_2ec = 2.8026e-44;
      local_1cc = 0x20;
      local_1e8[1] = 2.52234e-44;
      local_1bc = 0x10;
      FUN_00576a20(local_1e8,999);
      FUN_0061c369(local_28c,s_ffpB_flag__d_0x_X_00677f8c,local_1e8[1],local_1e8[1]);
      FUN_004e9b0e();
      FUN_0061c369(local_28c,s_ffpB_Duration__f_00677f78,(double)(int)local_1e8[2] * _DAT_0064a6c8);
      FUN_004e9b0e();
      FUN_0061c369(local_28c,s_ffpB_SPeriod__f_00677f64,(double)local_1dc * _DAT_0064a6c8);
      FUN_004e9b0e();
      FUN_0061c369(local_28c,s_ffpB_Gain__f_00677f54,(double)(int)local_1d8 * _DAT_0064a920);
      FUN_004e9b0e();
      if (local_1c0 == (float *)0x0) {
        FUN_0061c369(local_28c,s_ffpB_envelope__d__d__d__d_00677f1c,0xffffffff,0xffffffff,0xffffffff
                     ,0xffffffff);
      }
      else {
        FUN_0061c369(local_28c,s_ffpB_envelope__f__f__f__f_00677f38,
                     (double)(int)local_2e8 * _DAT_0064a920,(double)(int)local_2e4 * _DAT_0064a6c8,
                     (double)local_2e0 * _DAT_0064a920,(double)local_2dc * _DAT_0064a6c8);
      }
      FUN_004e9b0e();
      local_318 = (ulonglong)local_1b4;
      FUN_0061c369(local_28c,s_ffpB_StartDelay__f_00677f08,(double)local_318 * _DAT_0064a6c8);
      FUN_004e9b0e();
      puVar26 = local_28c;
      uVar27 = CONCAT44(local_1cc,s_ffpB_NumAxes__d_00677ef4);
      FUN_0061c369();
      FUN_004e9b0e(local_28c,puVar26,uVar27);
      puVar26 = local_28c;
      uVar27 = CONCAT44(*local_1c8,s_ffpB_rgdwAxes__d_00677ee0);
      FUN_0061c369();
      FUN_004e9b0e(local_28c,puVar26,uVar27);
      puVar26 = local_28c;
      uVar27 = CONCAT44(*local_1c4,s_ffpB_rglDirection__d_00677ec8);
      FUN_0061c369();
      FUN_004e9b0e(local_28c,puVar26,uVar27);
      if ((local_1bc == 0x10) && (local_1b8 != (float *)0x0)) {
        FUN_0061c369(local_28c,s_ffpB_TSpecPar__f__f__f__f_00677eac,
                     (double)(int)local_2cc * _DAT_0064a920,(double)local_2c0 * _DAT_0064a6c8,
                     (double)(int)local_2c4 * _DAT_0064e3d8,(double)(int)local_2c8 * _DAT_0064a920);
      }
      else {
        FUN_0061c369(local_28c,s_ffpB_TSpecPar_0_0_0_0_0_00677e94);
      }
      FUN_004e9b0e();
    }
  }
LAB_0053a3c4:
  iVar19 = *(int *)(param_1 + 0x268);
  local_294 = *(float *)(param_1 + 0x5d0) * *(float *)(iVar19 + 0xd40) +
              *(float *)(param_1 + 0x5dc) * *(float *)(iVar19 + 0xd44) +
              *(float *)(param_1 + 0x5c4) * *(float *)(iVar19 + 0xd3c) + *(float *)(param_1 + 0x5e8)
  ;
  local_290 = *(float *)(param_1 + 0x5d4) * *(float *)(iVar19 + 0xd40) +
              *(float *)(param_1 + 0x5e0) * *(float *)(iVar19 + 0xd44) +
              *(float *)(param_1 + 0x5c8) * *(float *)(iVar19 + 0xd3c) + *(float *)(param_1 + 0x5ec)
  ;
  local_298 = *(float *)(param_1 + 0x5c0) * *(float *)(iVar19 + 0xd3c) +
              *(float *)(param_1 + 0x5cc) * *(float *)(iVar19 + 0xd40) +
              *(float *)(param_1 + 0x5d8) * *(float *)(iVar19 + 0xd44) + *(float *)(param_1 + 0x5e4)
  ;
  if ((((iVar19 != 0) && (iVar19 = *(int *)(iVar19 + 0x5460), iVar19 != 0)) &&
      (*(int *)(iVar19 + 0x3c98) != 0)) && ((float)_DAT_0064a6d0 < ABS(*(float *)(iVar19 + 0x332c)))
     ) {
    iVar22 = 0;
    local_320 = 0.0;
    if (0 < *(int *)(iVar19 + 0x3340)) {
      local_31c = (int *)(iVar19 + 0x3444);
      do {
        if (1 < iVar22) break;
        if (*local_31c != 0) {
          local_320 = (float)((int)local_320 +
                             (uint)(*(int *)(iVar19 + 0x3c94) != 0 ||
                                   1 << ((byte)iVar22 & 0x1f) != 0));
        }
        iVar22 = iVar22 + 1;
        local_31c = local_31c + 1;
      } while (iVar22 < *(int *)(iVar19 + 0x3340));
    }
    if (local_320 != 0.0) {
      FUN_0052efa0();
    }
  }
  iVar19 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x268) + 0x5468 + iVar19 * 4) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x268) + 0x5468 + iVar19 * 4) = 0;
      iVar22 = *(int *)(param_1 + 0x268);
      pfVar15 = (float *)(iVar22 + 0x5494 + iVar19 * 0xc);
      local_2ec = *(float *)(param_1 + 0x5c0) * *pfVar15 +
                  *(float *)(param_1 + 0x5cc) * *(float *)(iVar22 + 0x5498 + iVar19 * 0xc) +
                  *(float *)(param_1 + 0x5d8) * *(float *)(iVar22 + 0x549c + iVar19 * 0xc) +
                  *(float *)(param_1 + 0x5e4);
      local_2e8 = *(float *)(param_1 + 0x5d0) * pfVar15[1] +
                  *(float *)(param_1 + 0x5dc) * pfVar15[2] + *(float *)(param_1 + 0x5c4) * *pfVar15
                  + *(float *)(param_1 + 0x5e8);
      local_2e4 = *(float *)(param_1 + 0x5d4) * pfVar15[1] +
                  *(float *)(param_1 + 0x5e0) * pfVar15[2] + *(float *)(param_1 + 0x5c8) * *pfVar15
                  + *(float *)(param_1 + 0x5ec);
      iVar22 = iVar19;
      local_298 = local_2ec;
      local_294 = local_2e8;
      local_290 = local_2e4;
      if (iVar19 == 0) {
        uVar18 = _rand();
        uVar18 = uVar18 & 0x80000001;
        bVar23 = uVar18 == 0;
        if ((int)uVar18 < 0) {
          bVar23 = (uVar18 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar23) {
          iVar22 = 2;
        }
        else {
          uVar18 = _rand();
          uVar18 = uVar18 & 0x80000001;
          bVar23 = uVar18 == 0;
          if ((int)uVar18 < 0) {
            bVar23 = (uVar18 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (bVar23) {
            iVar22 = 1;
          }
        }
      }
      FUN_0052f140((&DAT_006d0cb4)[iVar22],(&DAT_006d0ce4)[iVar19],
                   *(undefined4 *)(*(int *)(param_1 + 0x268) + 0x5518 + iVar19 * 4),&local_298);
    }
    iVar19 = iVar19 + 1;
  } while (iVar19 < 0xb);
  if (_DAT_0064e3d0 < *(float *)(*(int *)(param_1 + 0x268) + 0xcd4)) {
    if (((float)_DAT_0064a5a8 < *(float *)(iVar13 + 0x3bd0)) || (*(int *)(iVar13 + 0x3c50) != 0)) {
      iVar19 = 1;
    }
    else {
      iVar19 = 0;
    }
    if (*(int *)(param_1 + 0x74) != iVar19) {
      if (iVar19 == 0) {
        if (*(int *)(param_1 + 0x578) != 0) {
          FUN_0052efd0(DAT_006d0c9c,0x40a00000,0x3f800000,&local_2b0);
          *(undefined4 *)(param_1 + 0x74) = 0;
          return;
        }
        FUN_0052ee80(DAT_006d0c9c,0x3f800000);
        *(undefined4 *)(param_1 + 0x74) = 0;
        return;
      }
      if (*(int *)(param_1 + 0x578) != 0) {
        FUN_0052efd0(DAT_006d0ca0,0x40a00000,0x3f800000,&local_2b0);
        *(int *)(param_1 + 0x74) = iVar19;
        return;
      }
      FUN_0052ee80(DAT_006d0ca0,0x3f800000);
      *(int *)(param_1 + 0x74) = iVar19;
      return;
    }
    if ((iVar19 == 0) && (*(float *)(iVar13 + 0x3328) < (float)_DAT_0064a5a8)) {
      if (_DAT_00677700 + _DAT_006d1038 < (float)*(double *)(*(int *)(param_1 + 0x20) + 0xb98)) {
        if (*(int *)(param_1 + 0x578) == 0) {
          FUN_0052ee80(DAT_006d0ca0,0x3f800000);
        }
        else {
          FUN_0052efd0(DAT_006d0ca0,0x40a00000,0x3f800000,&local_2b0);
        }
      }
      _DAT_006d1038 = (float)*(double *)(*(int *)(param_1 + 0x20) + 0xb98);
    }
    *(int *)(param_1 + 0x74) = iVar19;
  }
  return;
}

