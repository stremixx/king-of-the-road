
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00549a90(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  float *pfVar12;
  int *piVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined1 *puVar19;
  int iVar20;
  undefined4 *puVar21;
  int *piVar22;
  float10 fVar23;
  float fVar24;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float *pfStack_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float fStack_21c;
  float fStack_218;
  float local_214 [4];
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8 [5];
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int local_1a8 [12];
  int local_178 [12];
  undefined4 local_148 [9];
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_10c [48];
  undefined1 local_dc [60];
  undefined1 auStack_a0 [156];
  
  param_1[0x9e9] = param_1[0x9e9] & 0xfffffffd;
  fVar23 = (float10)FUN_004e1fd9();
  *(undefined4 *)((int)param_1 + 0x2812) = 0;
  uVar18 = param_1[299];
  local_258 = (float)fVar23;
  pfVar8 = (float *)(param_1 + 0x89);
  pfVar12 = local_214;
  for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
    *pfVar12 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar12 = pfVar12 + 1;
  }
  param_1[299] = uVar18 | 8;
  iVar14 = param_1[0xaa7];
  if (iVar14 == 0) {
    local_264 = local_258 * (float)param_1[0xc5];
    local_260 = local_258 * (float)param_1[0xc6];
    local_25c = local_258 * (float)param_1[199];
    local_24c = local_264;
    local_248 = local_260;
    local_244 = local_25c;
    FUN_005aae00();
    FUN_0058c660(0);
    local_24c = local_258 * (float)param_1[0x68];
    local_248 = local_258 * (float)param_1[0x69];
    local_244 = local_258 * (float)param_1[0x6a];
    uVar7 = FUN_005ab330(local_1e8 + 1,local_24c,local_248,local_244);
    fVar23 = (float10)FUN_005aabc0(param_1 + 0x6b,param_1 + 0x89,uVar7);
    uVar7 = FUN_005ab380(local_178,DAT_007015b0,DAT_007015b4,DAT_007015b8,param_1[0x6b],
                         param_1[0x6c],param_1[0x6d],(float)(fVar23 * (float10)local_258));
    uVar7 = FUN_005ab130(local_1a8,uVar7);
    pfVar8 = (float *)FUN_005ab130(local_10c,uVar7);
    pfVar12 = local_214;
    for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
      *pfVar12 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar12 = pfVar12 + 1;
    }
    param_1[0x1459] = 0;
    fVar23 = (float10)FUN_005aabc0(param_1 + 0x68);
    param_1[0x1475] = (int)(float)fVar23;
    param_1[0xa01] = (int)(float)fVar23;
    goto LAB_0054af33;
  }
  if (iVar14 == 5) {
    if (param_1[0x1515] != 0) {
      FUN_00567ec0();
      param_1[0x144e] = *(int *)(param_1[0x1515] + 0x60);
      pfVar8 = (float *)param_1[0x1515];
      pfVar12 = (float *)(param_1 + 0x1424);
      for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
        *pfVar12 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar12 = pfVar12 + 1;
      }
      FUN_004e20b1(param_1 + 0x142d,s_in_main_1_006791c8,0x466a6000);
      pfVar8 = (float *)(param_1 + 0x1424);
      pfVar12 = local_214;
      for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
        *pfVar12 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar12 = pfVar12 + 1;
      }
      iVar14 = param_1[0x1515];
      param_1[0x1430] = *(int *)(iVar14 + 100);
      param_1[0x1431] = *(int *)(iVar14 + 0x68);
      param_1[0x1432] = *(int *)(iVar14 + 0x6c);
      iVar14 = param_1[0x1515];
      param_1[0x1436] = *(int *)(iVar14 + 0x70);
      param_1[0x1437] = *(int *)(iVar14 + 0x74);
      param_1[0x1438] = *(int *)(iVar14 + 0x78);
      param_1[0x68] = param_1[0x1430];
      param_1[0x69] = param_1[0x1431];
      param_1[0x6a] = param_1[0x1432];
      param_1[0x6b] = param_1[0x1436];
      param_1[0x6c] = param_1[0x1437];
      param_1[0x6d] = param_1[0x1438];
      pfVar8 = (float *)FUN_004e2984(&local_220,param_1 + 0x6b,param_1 + 0x65);
      local_24c = local_214[0] * *pfVar8 + local_214[3] * pfVar8[1] + local_1fc * pfVar8[2];
      local_248 = local_204 * pfVar8[1] + local_1f8 * pfVar8[2] + local_214[1] * *pfVar8;
      fVar24 = pfVar8[2];
      fVar15 = *pfVar8;
      fVar1 = pfVar8[1];
      param_1[0x6e] = (int)local_24c;
      local_244 = local_200 * fVar1 + local_214[2] * fVar15 + local_1f4 * fVar24;
      param_1[0x6f] = (int)local_248;
      param_1[0x70] = (int)local_244;
    }
    goto LAB_0054af33;
  }
  if ((iVar14 != 1) && (iVar14 != 4)) {
    if (iVar14 == 2) {
      local_254 = (float)param_1[0xa2a];
      fVar24 = _DAT_0064b254;
      if (0 < (int)local_254) {
        pfVar8 = (float *)(param_1 + 0xa52);
        fVar15 = local_254;
        do {
          fVar1 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          fVar15 = (float)((int)fVar15 + -1);
          fVar24 = fVar1 * _DAT_0064b248 + fVar24;
        } while (fVar15 != 0.0);
      }
      iVar14 = 0;
      if (0 < (int)local_254) {
        pfVar8 = (float *)(param_1 + 0x143d);
        do {
          iVar14 = iVar14 + 1;
          *pfVar8 = fVar24 / (float)(int)local_254;
          local_254 = (float)param_1[0xa2a];
          pfVar8 = pfVar8 + 1;
        } while (iVar14 < (int)local_254);
      }
      FUN_004e20b1(param_1 + 0x142d,s_in_main_4_006791bc,0x466a6000);
      fVar1 = -(float)param_1[0x1488];
      fVar3 = -(float)param_1[0x1489];
      fVar2 = -(float)param_1[0x148a];
      fVar24 = (float)param_1[0x142a];
      fVar15 = (float)param_1[0x1427];
      pfVar8 = (float *)(param_1 + 0x1424);
      pfVar12 = local_214;
      for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
        *pfVar12 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar12 = pfVar12 + 1;
      }
      local_24c = fVar1 * (float)param_1[0x1424] + fVar3 * fVar15 + fVar2 * fVar24 +
                  (float)param_1[0x142d];
      local_248 = fVar1 * (float)param_1[0x1425] +
                  fVar3 * (float)param_1[0x1428] + fVar2 * (float)param_1[0x142b] +
                  (float)param_1[0x142e];
      local_244 = fVar1 * (float)param_1[0x1426] +
                  fVar3 * (float)param_1[0x1429] + fVar2 * (float)param_1[0x142c] +
                  (float)param_1[0x142f];
      local_1f0 = local_24c;
      local_1ec = local_248;
      local_1e8[0] = local_244;
      FUN_004e20b1(param_1 + 0x1430,s__Vehicle__make_new_Pos__1_006791a0,0x43160000);
      param_1[0x68] = param_1[0x1430];
      param_1[0x69] = param_1[0x1431];
      param_1[0x6a] = param_1[0x1432];
      param_1[0x6b] = param_1[0x1436];
      param_1[0x6c] = param_1[0x1437];
      param_1[0x6d] = param_1[0x1438];
      pfVar8 = (float *)FUN_004e2984(&local_220,param_1 + 0x6b,param_1 + 0x65);
      local_24c = local_214[0] * *pfVar8 + local_214[3] * pfVar8[1] + local_1fc * pfVar8[2];
      local_248 = local_204 * pfVar8[1] + local_1f8 * pfVar8[2] + local_214[1] * *pfVar8;
      fVar24 = *pfVar8;
      fVar15 = pfVar8[1];
      fVar1 = pfVar8[2];
      param_1[0x6e] = (int)local_24c;
      local_244 = local_1f4 * fVar1 + local_200 * fVar15 + local_214[2] * fVar24;
      param_1[0x6f] = (int)local_248;
      param_1[0x70] = (int)local_244;
      FUN_0058c660(1);
      param_1[0x1459] = 0;
      fVar23 = (float10)FUN_005aabc0(param_1 + 0x68);
      param_1[0x1475] = (int)(float)fVar23;
      param_1[0xa01] = (int)(float)fVar23;
    }
    else if (iVar14 == 3) {
      FUN_004e20b1(param_1 + 0x142d,s_in_main_5_00679194,0x466a6000);
      pfVar8 = (float *)(param_1 + 0x1424);
      pfVar12 = local_214;
      for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
        *pfVar12 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar12 = pfVar12 + 1;
      }
      FUN_0058c660(1);
      param_1[0x1459] = 0;
      fVar23 = (float10)FUN_005aabc0(param_1 + 0x68);
      param_1[0x1475] = (int)(float)fVar23;
      param_1[0xa01] = (int)(float)fVar23;
    }
    goto LAB_0054af33;
  }
  if (param_1[0x1514] == 0) {
    FUN_005803c0();
    FUN_0058c660(1);
    return;
  }
  param_1[0x1487] = 0;
  param_1[0xa27] = 0;
  param_1[0x1486] = 0;
  param_1[0xa26] = 0;
  if ((*(int *)(param_1[0x1514] + 0x3344) == 0) || (iVar14 = FUN_004ef8d0(), iVar14 != 0)) {
    param_1[299] = param_1[299] & 0xfffffff7;
    *(int *)(param_1[0x1514] + 0x2750) = param_1[0x14ef];
    *(int *)(param_1[0x1514] + 0x2754) = param_1[0x14ef];
    *(int *)(param_1[0x1514] + 0x274c) = param_1[0x14ef];
    uVar18 = FUN_0043f700(param_1[0x1423]);
    if ((uVar18 & 0x2000000) == 0) {
      *(undefined4 *)(param_1[0x1514] + 0x2784) = 0;
    }
    else {
      *(undefined4 *)(param_1[0x1514] + 0x2784) = 1;
    }
    if (param_1[0x146e] != 0) {
      iVar14 = param_1[0x1514];
      if (*(short *)(iVar14 + 0x2740) == 0) {
        if ((*(int *)(iVar14 + 0x3c58) != 0) && (*(int *)(iVar14 + 0x2638) == 1)) {
          local_230 = *(float *)(iVar14 + 0x3c5c) / local_258;
          local_22c = *(float *)(iVar14 + 0x3c60) / local_258;
          local_228 = *(float *)(iVar14 + 0x3c64) / local_258;
          local_260 = (float)param_1[0x96] * *(float *)(iVar14 + 0x3c68) +
                      (float)param_1[0x99] * *(float *)(iVar14 + 0x3c6c) +
                      (float)param_1[0x9c] * *(float *)(iVar14 + 0x3c70) + (float)param_1[0x9f];
          local_25c = (float)param_1[0x97] * *(float *)(iVar14 + 0x3c68) +
                      (float)param_1[0x9a] * *(float *)(iVar14 + 0x3c6c) +
                      (float)param_1[0x9d] * *(float *)(iVar14 + 0x3c70) + (float)param_1[0xa0];
          local_264 = (float)param_1[0x95] * *(float *)(iVar14 + 0x3c68) +
                      (float)param_1[0x98] * *(float *)(iVar14 + 0x3c6c) +
                      (float)param_1[0x9b] * *(float *)(iVar14 + 0x3c70) + (float)param_1[0x9e];
          local_250 = local_25c;
          FUN_004eb360(&local_264,&local_230,&DAT_007015b0);
        }
        FUN_005485d0();
      }
      (*(code *)**(undefined4 **)param_1[0x1514])();
    }
    FUN_00547960();
    param_1[0x68] = param_1[0x1430];
    param_1[0x69] = param_1[0x1431];
    param_1[0x6a] = param_1[0x1432];
    param_1[0x6b] = param_1[0x1436];
    param_1[0x6c] = param_1[0x1437];
    param_1[0x6d] = param_1[0x1438];
    param_1[0xc5] = param_1[0x1439];
    param_1[0xc6] = param_1[0x143a];
    param_1[199] = param_1[0x143b];
    FUN_004e20b1(param_1 + 0x142d,s_in_main_3_0067917c,0x466a6000);
    pfVar8 = (float *)(param_1 + 0x1424);
    pfVar12 = local_214;
    for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
      *pfVar12 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar12 = pfVar12 + 1;
    }
    pfVar8 = (float *)FUN_004e2984(&local_220,param_1 + 0x6b,param_1 + 0x65);
    fVar24 = pfVar8[2];
    fVar15 = pfVar8[1];
    fVar1 = *pfVar8;
    fVar2 = pfVar8[1];
    fVar3 = pfVar8[2];
    fVar4 = *pfVar8;
    param_1[0x6e] = (int)(local_214[0] * *pfVar8 + local_214[3] * pfVar8[1] + local_1fc * pfVar8[2])
    ;
    param_1[0x6f] = (int)(local_214[1] * fVar1 + local_204 * fVar15 + local_1f8 * fVar24);
    param_1[0x70] = (int)(local_214[2] * fVar4 + local_1f4 * fVar3 + local_200 * fVar2);
    local_264 = (float)param_1[0x142d] - (float)param_1[0x86];
    local_260 = (float)param_1[0x142e] - (float)param_1[0x87];
    local_25c = (float)param_1[0x142f] - (float)param_1[0x88];
    local_230 = local_264;
    local_22c = local_260;
    local_228 = local_25c;
    fVar23 = (float10)FUN_005aabc0(&local_230);
    if (fVar23 < (float10)_DAT_0064a5a8) {
      pfVar8 = (float *)(param_1 + 0x1424);
      pfVar12 = local_214;
      for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
        *pfVar12 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar12 = pfVar12 + 1;
      }
    }
    if ((float)param_1[0x1432] < _DAT_0064b928) {
      param_1[0x68] = param_1[0x1430];
      param_1[0x69] = param_1[0x1431];
      param_1[0x6a] = param_1[0x1432];
    }
    iVar14 = 0;
    if (0 < param_1[0xa2b]) {
      iVar16 = 0;
      do {
        iVar17 = param_1[0x1514] + iVar16;
        if (*(short *)(iVar17 + 0x2b68) != 0) {
          param_1[0x126] = *(int *)(iVar17 + 0x2b5c);
          param_1[0x127] = *(int *)(iVar17 + 0x2b60);
          param_1[0x128] = *(int *)(iVar17 + 0x2b64);
          piVar9 = (int *)(iVar16 + 0x2b50 + param_1[0x1514]);
          param_1[0x123] = *piVar9;
          param_1[0x124] = piVar9[1];
          param_1[0x125] = piVar9[2];
        }
        iVar14 = iVar14 + 1;
        iVar16 = iVar16 + 0xf8;
      } while (iVar14 < param_1[0xa2b]);
    }
    local_224 = 1.4013e-45;
    if (((param_1[0xe0] != 0) ||
        (fVar23 = (float10)FUN_004e2035(),
        fVar23 - (float10)(float)param_1[0xe2] < (float10)_DAT_0064b240)) ||
       (local_1f4 < (float)_DAT_0064c308)) {
LAB_0054aa84:
      local_224 = 0.0;
    }
    else {
      iVar14 = param_1[0x36d];
      if (iVar14 != 0) {
        local_23c = (float)param_1[0x68] - *(float *)(iVar14 + 0xce4);
        local_238 = (float)param_1[0x69] - *(float *)(iVar14 + 0xce8);
        local_234 = (float)param_1[0x6a] - *(float *)(iVar14 + 0xcec);
        local_264 = (float)param_1[0x86] - *(float *)(iVar14 + 0xd2c);
        local_260 = (float)param_1[0x87] - *(float *)(iVar14 + 0xd30);
        local_25c = (float)param_1[0x88] - *(float *)(iVar14 + 0xd34);
        fVar24 = *(float *)(iVar14 + 0xcc8) + (float)param_1[10];
        if (local_264 * local_23c + local_238 * local_260 + local_234 * local_25c <
            (float)_DAT_0064a668) {
          fVar24 = SQRT(local_234 * local_234 + local_238 * local_238 + local_23c * local_23c) *
                   local_258 + fVar24;
        }
        if ((float)param_1[0x373] < fVar24 * fVar24 * (float)_DAT_0064a658) goto LAB_0054aa84;
      }
    }
    iVar14 = *(int *)(param_1[0x1514] + 0x3330);
    param_1[0x1475] = iVar14;
    param_1[0xa01] = iVar14;
    iVar14 = *(int *)(param_1[0x1514] + 0x3c3c);
    param_1[0x1476] = iVar14;
    param_1[0xa02] = iVar14;
    param_1[0x1477] = *(int *)(param_1[0x1514] + 0x3c40);
    param_1[0x1478] = *(int *)(param_1[0x1514] + 0x3c44);
    dVar5 = *(double *)(param_1[0x1514] + 0x3338);
    param_1[0x1479] = (int)(float)dVar5;
    param_1[0xa00] = (int)(float)dVar5;
    iVar14 = *(int *)(param_1[0x1514] + 0x3bd8);
    param_1[0x147d] = iVar14;
    *(char *)(param_1 + 0xa04) = (char)iVar14;
    iVar14 = *(int *)(param_1[0x1514] + 0x3c38);
    param_1[0x147a] = iVar14;
    param_1[0xa03] = iVar14;
    fVar23 = (float10)FUN_004eaf10();
    param_1[0x147b] = (int)(float)fVar23;
    param_1[0xa1f] = (int)(float)fVar23;
    fVar23 = (float10)FUN_00554c10();
    param_1[0x147c] = (int)(float)fVar23;
    param_1[0xa28] = (int)(float)fVar23;
    iVar14 = *(int *)(param_1[0x1514] + 0x3c84);
    param_1[0x1480] = iVar14;
    param_1[0xa21] = iVar14;
    iVar14 = *(int *)(param_1[0x1514] + 0x3c88);
    param_1[0x147f] = iVar14;
    param_1[0xa20] = iVar14;
    iVar14 = *(int *)(param_1[0x1514] + 0x3c80);
    param_1[0x1481] = iVar14;
    param_1[0xa22] = iVar14;
    iVar14 = *(int *)(param_1[0x1514] + 0x1c14);
    param_1[0x1484] = iVar14;
    param_1[0xa23] = iVar14;
    iVar14 = *(int *)(param_1[0x1514] + 0x3c90);
    param_1[0x1482] = iVar14;
    param_1[0xa24] = iVar14;
    iVar14 = *(int *)(param_1[0x1514] + 0x3c50);
    param_1[0x1483] = iVar14;
    param_1[0xa25] = iVar14;
    iVar14 = *(int *)(param_1[0x1514] + 0x3c34);
    param_1[0x147e] = iVar14;
    if (iVar14 != 0) {
      param_1[0x9e9] = param_1[0x9e9] | 2;
    }
    piVar9 = local_1a8;
    local_1a8[0] = 0;
    for (iVar14 = 7; piVar9 = piVar9 + 1, iVar14 != 0; iVar14 = iVar14 + -1) {
      *piVar9 = 0;
    }
    piVar9 = local_178;
    local_178[0] = 0;
    iVar16 = 0;
    for (iVar14 = 7; piVar9 = piVar9 + 1, iVar14 != 0; iVar14 = iVar14 + -1) {
      *piVar9 = 0;
    }
    pfStack_240 = (float *)0x0;
    local_254 = 0.0;
    local_250 = (float)(&DAT_00697028)[*(int *)(param_1[0x1514] + 0x8cc) * 0x25c];
    if (0 < (int)local_250) {
      piVar9 = (int *)(param_1[0x1514] + 0x2bd4);
      piVar13 = (int *)(param_1[0x1514] + 0x3444);
      do {
        iVar14 = *piVar13;
        if (((iVar14 == 0) && (piVar13[10] != 0)) &&
           (((short)piVar9[-0x1b] != 0 && (((int *)*piVar9 != (int *)0x0 && (*(int *)*piVar9 == 1)))
            ))) {
          iVar17 = 1;
        }
        else {
          iVar17 = 0;
        }
        local_1a8[iVar16] = iVar17;
        if ((((iVar14 == 0) && (piVar13[0x12] != 0)) && ((short)piVar9[-0x1b] != 0)) &&
           (((int *)*piVar9 != (int *)0x0 && (*(int *)*piVar9 == 1)))) {
          iVar14 = 1;
        }
        else {
          iVar14 = 0;
        }
        local_178[iVar16] = iVar14;
        if ((pfStack_240 != (float *)0x0) || (pfStack_240 = (float *)0x0, iVar17 != 0)) {
          pfStack_240 = (float *)0x1;
        }
        if ((local_254 != 0.0) || (local_254 = 0.0, iVar14 != 0)) {
          local_254 = 1.4013e-45;
        }
        iVar16 = iVar16 + 1;
        piVar9 = piVar9 + 0x3e;
        piVar13 = piVar13 + 1;
      } while (iVar16 < (int)local_250);
      if (((pfStack_240 != (float *)0x0) &&
          ((float)_DAT_0064a6d0 < *(float *)(param_1[0x1514] + 0x332c))) || (local_254 != 0.0)) {
        iVar14 = 0;
        pfVar8 = (float *)(param_1[0x1514] + 0x338c);
        local_254 = _DAT_0064b254;
        do {
          fVar24 = ABS(*pfVar8);
          local_1e8[iVar14 + 1] = fVar24;
          if (fVar24 <= _DAT_0064e74c) {
            local_1e8[iVar14 + 1] = fVar24 * _DAT_0064e748;
          }
          else {
            local_1e8[iVar14 + 1] = 1.0;
          }
          piVar9 = local_1a8 + iVar14;
          iVar14 = iVar14 + 1;
          pfVar8 = pfVar8 + 1;
          local_254 = local_254 + (float)*piVar9 * local_1e8[iVar14] * (float)_DAT_0064c0e0;
        } while (iVar14 < (int)local_250);
        fVar23 = (float10)FUN_00549a40(*(undefined4 *)(param_1[0x1514] + 0x3330));
        iVar17 = 0;
        iVar20 = 0;
        iVar16 = 0;
        iVar14 = (&DAT_00697028)[*(int *)(param_1[0x1514] + 0x8cc) * 0x25c];
        local_254 = (float)(((float10)local_178[3] + (float10)local_178[2] + (float10)local_178[1] +
                            (float10)local_178[0]) * (float10)_DAT_0064a828 +
                            ((float10)local_1a8[2] * (float10)_DAT_0064c0e0 +
                            (float10)local_1a8[3] * (float10)_DAT_0064a830 +
                            (float10)local_1a8[1] * (float10)local_1a8[0] * (float10)_DAT_0064e3c8)
                            * (float10)_DAT_0064a778 + fVar23 * (float10)local_254 +
                           (float10)local_254);
        if (0 < iVar14) {
          piVar9 = (int *)(param_1[0x1514] + 0x2bd4);
          do {
            if (local_1a8[iVar16] != 0) {
              iVar10 = *(int *)(*piVar9 + 4);
              if ((iVar10 == 1) || (iVar10 == 5)) {
                iVar10 = 1;
              }
              else if ((iVar10 == 2) || (iVar10 == 6)) {
                iVar10 = -1;
              }
              else {
                iVar10 = 0;
              }
              local_1a8[iVar16] = iVar10;
            }
            piVar9 = piVar9 + 0x3e;
            iVar17 = iVar17 + local_178[iVar16];
            iVar20 = iVar20 + local_1a8[iVar16];
            iVar16 = iVar16 + 1;
          } while (iVar16 < iVar14);
          fVar24 = _DAT_0064b240;
          if (iVar20 == 0) {
            if (iVar17 == 0) goto LAB_0054af25;
          }
          else if (iVar20 < 0) {
            fVar24 = _DAT_0064b2f8;
          }
          fVar15 = local_254 * (float)_DAT_0064c0e0;
          if (_DAT_0064b240 < local_254 * (float)_DAT_0064c0e0) {
            fVar15 = _DAT_0064b240;
          }
          param_1[0x1487] = (int)fVar15;
          param_1[0xa27] = (int)fVar15;
          param_1[0x1486] = (int)fVar24;
          param_1[0xa26] = (int)fVar24;
        }
      }
    }
  }
  else if (param_1[0xaa7] == 1) {
    FUN_0058b8e0(0);
    if ((param_1[0xe0] != 0) &&
       (local_228 = DAT_00701580 * (float)param_1[0x7f] +
                    DAT_00701584 * (float)param_1[0x82] + DAT_00701588 * (float)param_1[0x85],
       (float)_DAT_0064ae88 <
       ABS((DAT_00701580 * (float)param_1[0x7d] +
           DAT_00701584 * (float)param_1[0x80] + DAT_00701588 * (float)param_1[0x83]) *
           (float)param_1[0xf4] +
           (float)param_1[0xf6] * local_228 +
           (DAT_00701580 * (float)param_1[0x7e] +
           DAT_00701584 * (float)param_1[0x81] + DAT_00701588 * (float)param_1[0x84]) *
           (float)param_1[0xf5]))) {
      fVar24 = ABS(local_228) - (float)_DAT_0064ae88;
      local_264 = fVar24 * DAT_007015a0;
      local_260 = fVar24 * DAT_007015a4;
      local_23c = local_264 + local_264;
      local_238 = local_260 + local_260;
      local_234 = fVar24 * DAT_007015a8 + fVar24 * DAT_007015a8;
      local_24c = local_23c;
      local_248 = local_238;
      local_244 = local_234;
      if (_DAT_0064b254 < local_228) {
        local_264 = -local_23c;
        local_260 = -local_238;
        local_25c = -local_234;
        local_24c = local_264;
        local_248 = local_260;
        local_244 = local_25c;
      }
      local_230 = (float)param_1[0x6e] * (float)param_1[0x95] +
                  (float)param_1[0x98] * (float)param_1[0x6f] +
                  (float)param_1[0x9b] * (float)param_1[0x70];
      local_22c = (float)param_1[0x96] * (float)param_1[0x6e] +
                  (float)param_1[0x99] * (float)param_1[0x6f] +
                  (float)param_1[0x9c] * (float)param_1[0x70];
      local_228 = (float)param_1[0x97] * (float)param_1[0x6e] +
                  (float)param_1[0x9a] * (float)param_1[0x6f] +
                  (float)param_1[0x9d] * (float)param_1[0x70];
      piVar9 = (int *)FUN_004e29c2(&local_220,&local_230,param_1 + 0x65);
      param_1[0x6b] = *piVar9;
      param_1[0x6c] = piVar9[1];
      param_1[0x6d] = piVar9[2];
      FUN_005aae00();
      pfVar8 = (float *)FUN_004e2984(&local_220,param_1 + 0x6b,param_1 + 0x65);
      fVar24 = pfVar8[2];
      fVar15 = *pfVar8;
      fVar1 = pfVar8[1];
      fVar2 = pfVar8[2];
      fVar3 = *pfVar8;
      fVar4 = pfVar8[1];
      param_1[0x6e] =
           (int)(*pfVar8 * (float)param_1[0x7d] +
                (float)param_1[0x80] * pfVar8[1] + (float)param_1[0x83] * pfVar8[2]);
      param_1[0x6f] =
           (int)((float)param_1[0x81] * fVar1 +
                (float)param_1[0x7e] * fVar15 + (float)param_1[0x84] * fVar24);
      param_1[0x70] =
           (int)((float)param_1[0x82] * fVar4 +
                (float)param_1[0x7f] * fVar3 + (float)param_1[0x85] * fVar2);
    }
    local_264 = local_258 * (float)param_1[0x68];
    local_260 = local_258 * (float)param_1[0x69];
    local_25c = local_258 * (float)param_1[0x6a];
    uVar7 = FUN_005ab330(local_10c,local_264,local_260,local_25c);
    fVar23 = (float10)FUN_005aabc0(param_1 + 0x6b,param_1 + 0x89,uVar7);
    uVar7 = FUN_005ab380(local_1e8 + 1,DAT_007015b0,DAT_007015b4,DAT_007015b8,param_1[0x6b],
                         param_1[0x6c],param_1[0x6d],(float)(fVar23 * (float10)local_258));
    uVar7 = FUN_005ab130(local_178,uVar7);
    pfVar8 = (float *)FUN_005ab130(local_1a8,uVar7);
    pfVar12 = local_214;
    for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
      *pfVar12 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar12 = pfVar12 + 1;
    }
    FUN_005aba00(local_dc,local_214);
    param_1[0x1459] = 0;
    FUN_004f1650(param_1 + 0x68);
    FUN_004f16a0(param_1 + 0x6e);
    fVar23 = (float10)FUN_005aabc0(param_1 + 0x68);
    param_1[0x1475] = (int)(float)fVar23;
    param_1[0xa01] = (int)(float)fVar23;
    iVar14 = *(int *)(param_1[0x1514] + 0x3c3c);
    local_224 = 0.0;
    param_1[0x1476] = iVar14;
    param_1[0xa02] = iVar14;
    param_1[0x1477] = *(int *)(param_1[0x1514] + 0x3c40);
    param_1[0x147e] = 0;
  }
  else {
    FUN_004e20b1(param_1 + 0x142d,s_in_main_2_00679188,0x466a6000);
    pfVar8 = (float *)(param_1 + 0x1424);
    pfVar12 = local_214;
    for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
      *pfVar12 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar12 = pfVar12 + 1;
    }
    uVar7 = FUN_004f7850(&local_220);
    fVar23 = (float10)FUN_005aabc0(uVar7);
    param_1[0x1475] = (int)(float)fVar23;
    param_1[0xa01] = (int)(float)fVar23;
    local_224 = 0.0;
    iVar14 = *(int *)(param_1[0x1514] + 0x3c3c);
    param_1[0x1476] = iVar14;
    param_1[0xa02] = iVar14;
    param_1[0x1477] = *(int *)(param_1[0x1514] + 0x3c40);
    param_1[0x147e] = 0;
  }
LAB_0054af25:
  FUN_0058c660(local_224);
LAB_0054af33:
  iVar17 = 0;
  iVar14 = param_1[0x1459];
  puVar11 = &DAT_00701550;
  puVar21 = local_148;
  for (iVar16 = 0xc; iVar16 != 0; iVar16 = iVar16 + -1) {
    *puVar21 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar21 = puVar21 + 1;
  }
  if ((iVar14 == 0) || (param_1[0x1514] == 0)) {
    if (param_1[0xe0] == 0) {
      local_264 = local_1f0 - (float)param_1[0x92];
      local_260 = local_1ec - (float)param_1[0x93];
      local_25c = local_1e8[0] - (float)param_1[0x94];
      param_1[0x313] = (int)local_264;
      param_1[0x314] = (int)local_260;
      param_1[0x315] = (int)local_25c;
      if (((param_1[0xaa7] != 2) && (param_1[0xaa7] != 5)) && (iVar14 = FUN_004e2140(), iVar14 != 0)
         ) {
        FUN_00548900(param_1 + -4);
      }
    }
    else {
      if ((param_1[0xaa7] != 5) && (param_1[0xaa7] != 1)) {
        param_1[0x68] = param_1[0x1430];
        param_1[0x69] = param_1[0x1431];
        param_1[0x6a] = param_1[0x1432];
      }
      FUN_004e20b1(param_1 + 0x68,s__Vehicle__make_new_Pos__3_00679144,0x42c80000);
      local_264 = local_258 * (float)param_1[0x68];
      local_260 = local_258 * (float)param_1[0x69];
      local_25c = local_258 * (float)param_1[0x6a];
      param_1[0x313] = (int)local_264;
      param_1[0x314] = (int)local_260;
      param_1[0x315] = (int)local_25c;
    }
  }
  else {
    param_1[0xc9] = *(int *)(param_1[0x1514] + 0x1a10);
    piVar9 = (int *)(param_1[0x1514] + 0x8d0);
    piVar13 = param_1 + 0x89;
    for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
      *piVar13 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar13 = piVar13 + 1;
    }
    piVar9 = (int *)(param_1[0x1514] + 0x930);
    piVar13 = param_1 + 0xa1;
    for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
      *piVar13 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar13 = piVar13 + 1;
    }
    FUN_004e20b1(param_1 + 0x1430,s__Vehicle__make_new_Pos__2_00679160,0x43160000);
    param_1[0x68] = param_1[0x1430];
    param_1[0x69] = param_1[0x1431];
    param_1[0x6a] = param_1[0x1432];
    local_264 = local_258 * (float)param_1[0x68];
    local_260 = local_258 * (float)param_1[0x69];
    local_25c = local_258 * (float)param_1[0x6a];
    param_1[0x313] = (int)local_264;
    param_1[0x314] = (int)local_260;
    param_1[0x315] = (int)local_25c;
    if (0 < param_1[0xa2b]) {
      iVar14 = 0;
      iVar16 = 0x3be8;
      do {
        iVar20 = param_1[0x1514];
        if (*(int *)(iVar20 + iVar16) != 0) {
          local_238 = (float)param_1[0x1428] * *(float *)(iVar20 + 0x33c8 + iVar14) +
                      (float)param_1[0x142b] * *(float *)(iVar20 + 0x33cc + iVar14) +
                      (float)param_1[0x1425] * *(float *)(iVar20 + 0x33c4 + iVar14) +
                      (float)param_1[0x142e];
          local_250 = (float)param_1[0x1429] * *(float *)(iVar20 + 0x33c8 + iVar14) +
                      (float)param_1[0x142c] * *(float *)(iVar20 + 0x33cc + iVar14) +
                      (float)param_1[0x1426] * *(float *)(iVar20 + 0x33c4 + iVar14) +
                      (float)param_1[0x142f];
          local_23c = (float)param_1[0x1424] * *(float *)(iVar20 + 0x33c4 + iVar14) +
                      (float)param_1[0x1427] * *(float *)(iVar20 + 0x33c8 + iVar14) +
                      (float)param_1[0x142a] * *(float *)(iVar20 + 0x33cc + iVar14) +
                      (float)param_1[0x142d];
          local_22c = DAT_00701594 * (float)param_1[0x1428] +
                      DAT_00701598 * (float)param_1[0x142b] + DAT_00701590 * (float)param_1[0x1425];
          local_228 = DAT_00701594 * (float)param_1[0x1429] +
                      DAT_00701598 * (float)param_1[0x142c] + DAT_00701590 * (float)param_1[0x1426];
          local_254 = (float)*(int *)(iVar20 + iVar16);
          local_264 = (DAT_00701590 * (float)param_1[0x1424] +
                      DAT_00701594 * (float)param_1[0x1427] + DAT_00701598 * (float)param_1[0x142a])
                      * local_254;
          local_260 = local_254 * local_22c;
          local_25c = local_254 * local_228;
          local_24c = local_264;
          local_248 = local_260;
          local_244 = local_25c;
          local_234 = local_250;
          (**(code **)(*param_1 + 0xa4))();
        }
        iVar17 = iVar17 + 1;
        iVar16 = iVar16 + 4;
        iVar14 = iVar14 + 0xc;
      } while (iVar17 < param_1[0xa2b]);
    }
  }
  puVar11 = (undefined4 *)FUN_005ab130(local_dc,local_214,param_1 + 0xa1);
  puVar21 = local_148;
  for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
    *puVar21 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar21 = puVar21 + 1;
  }
  pfVar8 = (float *)(param_1 + 0x317);
  uStack_124 = DAT_007015b0;
  pfVar12 = (float *)(param_1 + 0x316);
  uStack_120 = DAT_007015b4;
  uStack_11c = DAT_007015b8;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  FUN_004e2844(local_148,&uStack_1b4,&uStack_1b0,&uStack_1ac,param_1 + 0x318,pfVar12,pfVar8);
  *pfVar12 = -*pfVar12;
  if (ABS(*pfVar8) < (float)_DAT_0064a590) {
    *pfVar8 = (ABS(*pfVar8) + (float)_DAT_0064a648) * *pfVar8 * (float)_DAT_0064a690;
  }
  param_1[0x339] = param_1[0x68];
  param_1[0x33a] = param_1[0x69];
  param_1[0x33b] = param_1[0x6a];
  param_1[0x33c] = param_1[0x6b];
  param_1[0x33d] = param_1[0x6c];
  param_1[0x33e] = param_1[0x6d];
  param_1[0x33f] = param_1[0x6e];
  param_1[0x340] = param_1[0x6f];
  param_1[0x341] = param_1[0x70];
  if (((param_1[0x1514] != 0) && (param_1[0xaa7] == 1)) &&
     ((*(int *)(param_1[0x1514] + 0x3344) == 0 &&
      ((((*(byte *)(param_1 + 0x1465) & 4) != 0 && (DAT_006cd2e8 != 0)) &&
       (local_250 = 0.0, 0 < param_1[0xa2b])))))) {
    local_258 = 0.0;
    piVar9 = param_1 + 0xa96;
    do {
      if ((piVar9[0x9c6] == 0) || (param_1[0xaa7] != 1)) {
LAB_0054b751:
        *piVar9 = -1;
      }
      else {
        iVar14 = param_1[0x1514];
        piVar13 = *(int **)(iVar14 + 0x2bd4 + (int)local_258);
        if (((piVar13 == (int *)0x0) || (*piVar13 != 1)) || ((piVar13[1] != 2 && (piVar13[1] != 6)))
           ) goto LAB_0054b751;
        pfVar8 = local_1e8;
        pfVar12 = (float *)(param_1 + 0x7d);
        for (iVar16 = 0xc; pfVar8 = (float *)((int)pfVar8 + 4), iVar16 != 0; iVar16 = iVar16 + -1) {
          *pfVar8 = *pfVar12;
          pfVar12 = pfVar12 + 1;
        }
        puVar11 = (undefined4 *)(iVar14 + 0x2b50 + (int)local_258);
        uStack_1c0 = *puVar11;
        uStack_1bc = puVar11[1];
        uStack_1b8 = puVar11[2];
        if ((int)local_258 < 0x1f0) {
          uVar7 = FUN_005ab7d0(local_dc,*(undefined4 *)(iVar14 + 0x3368),local_1e8 + 1);
          pfVar12 = (float *)FUN_005ab130(local_10c,uVar7);
          pfVar8 = local_1e8;
          for (iVar14 = 0xc; pfVar8 = (float *)((int)pfVar8 + 4), iVar14 != 0; iVar14 = iVar14 + -1)
          {
            *pfVar8 = *pfVar12;
            pfVar12 = pfVar12 + 1;
          }
        }
        if ((*(int *)(*(int *)((int)local_258 + 0x2bd4 + param_1[0x1514]) + 4) != *piVar9) &&
           (*piVar9 != -1)) {
          *piVar9 = -1;
        }
        if (*piVar9 == -1) {
          fVar23 = (float10)FUN_004e2035();
          piVar9[-8] = (int)(float)fVar23;
          *piVar9 = *(int *)(*(int *)((int)local_258 + 0x2bd4 + param_1[0x1514]) + 4);
        }
        fVar23 = (float10)FUN_004e2035();
        if (fVar23 - (float10)(float)piVar9[-8] <= (float10)_DAT_0064b24c) {
          fVar23 = SQRT((fVar23 - (float10)(float)piVar9[-8]) * (float10)_DAT_0064e744);
        }
        else {
          fVar23 = (float10)_DAT_0064b240;
        }
        local_254 = (float)(fVar23 + fVar23 + (float10)_DAT_0064a830);
        if (piVar9[0x9c6] != -1) {
          uVar7 = FUN_005ab7d0(local_178,0x40490fdb,local_1e8 + 1);
          pfVar12 = (float *)FUN_005ab130(local_1a8,uVar7);
          pfVar8 = local_1e8;
          for (iVar14 = 0xc; pfVar8 = (float *)((int)pfVar8 + 4), iVar14 != 0; iVar14 = iVar14 + -1)
          {
            *pfVar8 = *pfVar12;
            pfVar12 = pfVar12 + 1;
          }
        }
        local_22c = DAT_00701594 * _DAT_0064b328;
        local_228 = DAT_00701598 * _DAT_0064b328;
        local_248 = local_1e8[2] * DAT_00701580 +
                    fStack_1d4 * DAT_00701584 + fStack_1c8 * DAT_00701588;
        local_244 = local_1e8[3] * DAT_00701580 +
                    fStack_1d0 * DAT_00701584 + fStack_1c4 * DAT_00701588;
        local_264 = local_1e8[4] * DAT_00701584 +
                    fStack_1cc * DAT_00701588 + local_1e8[1] * DAT_00701580 +
                    DAT_00701590 * _DAT_0064b328;
        local_260 = local_22c + local_248;
        local_25c = local_228 + local_244;
        FUN_0056e690(uStack_1c0,uStack_1bc,uStack_1b8,local_264,local_260,local_25c,
                     (double)local_254,*piVar9 != 2);
      }
      local_250 = (float)((int)local_250 + 1);
      piVar9 = piVar9 + 1;
      local_258 = (float)((int)local_258 + 0xf8);
    } while ((int)local_250 < param_1[0xa2b]);
  }
  iVar14 = param_1[0x1514];
  iVar16 = 0;
  if (((iVar14 != 0) && (*(int *)(iVar14 + 0x2638) == 3)) && (*(int *)(iVar14 + 0x3344) == 0)) {
    local_248 = DAT_007015a0 * *(float *)(iVar14 + 0x29f4) +
                DAT_007015a8 * *(float *)(iVar14 + 0x2a0c) +
                DAT_007015a4 * *(float *)(iVar14 + 0x2a00);
    local_244 = DAT_007015a0 * *(float *)(iVar14 + 0x29f8) +
                DAT_007015a8 * *(float *)(iVar14 + 0x2a10) +
                DAT_007015a4 * *(float *)(iVar14 + 0x2a04);
    local_250 = 0.0;
    local_24c = DAT_007015a0 * *(float *)(iVar14 + 0x29f0) +
                DAT_007015a8 * *(float *)(iVar14 + 0x2a08) +
                DAT_007015a4 * *(float *)(iVar14 + 0x29fc);
    if (0 < param_1[0xa2b]) {
      iVar14 = 0;
      pfStack_240 = (float *)0x0;
      local_254 = 1.87494e-41;
      do {
        iVar17 = param_1[0x1514];
        if ((*(short *)(iVar17 + 0x2b68 + iVar14) != 0) && (*(int *)(iVar17 + (int)local_254) == 0))
        {
          local_23c = DAT_00701590;
          local_238 = DAT_00701594;
          local_234 = DAT_00701598;
          fVar24 = *(float *)(iVar17 + 0x2a78) * *(float *)(iVar17 + 0x2ae8 + iVar16) -
                   *(float *)(iVar17 + 0x2a7c) * *(float *)(iVar17 + 0x2ae4 + iVar16);
          fVar15 = *(float *)(iVar17 + 0x2ae0 + iVar16) * *(float *)(iVar17 + 0x2a7c) -
                   *(float *)(iVar17 + 0x2a74) * *(float *)(iVar17 + 0x2ae8 + iVar16);
          fVar1 = *(float *)(iVar17 + 0x2a74) * *(float *)(iVar17 + 0x2ae4 + iVar16) -
                  *(float *)(iVar17 + 0x2ae0 + iVar16) * *(float *)(iVar17 + 0x2a78);
          local_230 = fVar24 * *(float *)(iVar17 + 0x29f0) +
                      fVar15 * *(float *)(iVar17 + 0x29fc) + fVar1 * *(float *)(iVar17 + 0x2a08);
          local_22c = fVar15 * *(float *)(iVar17 + 0x2a00) +
                      fVar1 * *(float *)(iVar17 + 0x2a0c) + fVar24 * *(float *)(iVar17 + 0x29f4);
          local_264 = local_230 + *(float *)(iVar17 + 0x2a50);
          local_260 = local_22c + *(float *)(iVar17 + 0x2a54);
          local_25c = fVar15 * *(float *)(iVar17 + 0x2a04) +
                      fVar1 * *(float *)(iVar17 + 0x2a10) + fVar24 * *(float *)(iVar17 + 0x29f8) +
                      *(float *)(iVar17 + 0x2a58);
          local_220 = local_264;
          fStack_21c = local_260;
          fStack_218 = local_25c;
          fVar23 = (float10)FUN_005aabc0(&local_220);
          local_224 = (float)fVar23;
          if (_DAT_0064b254 <= *(float *)(iVar16 + 0x2ae0 + param_1[0x1514])) {
            FUN_005aae00();
          }
          else {
            FUN_005aae40();
          }
          FUN_005aab70();
          iVar17 = param_1[0x1514];
          if (*(short *)(iVar17 + 0x2b68 + iVar14) != 0) {
            uVar18 = 0;
            if (param_1[0x12d] != 0) {
              uVar18 = 2;
            }
            piVar9 = *(int **)(iVar17 + 0x3574 + (int)pfStack_240);
            if (((piVar9 != (int *)0x0) && (*piVar9 == 1)) &&
               ((iVar20 = piVar9[1], iVar20 == 4 || ((iVar20 == 7 || (iVar20 == 9)))))) {
              uVar18 = uVar18 | 1;
            }
            puVar11 = (undefined4 *)(iVar17 + 0x2b50 + iVar14);
            FUN_0056e630(*puVar11,puVar11[1],puVar11[2],local_23c,local_238,local_234,
                         (double)local_224,uVar18);
            puVar11 = (undefined4 *)(param_1[0x1514] + 0x2b50 + iVar14);
            FUN_004bad60(*puVar11,puVar11[1],puVar11[2],param_1[0x68],param_1[0x69],param_1[0x6a],
                         local_23c,local_238,local_234,uVar18,
                         *(undefined4 *)(param_1[0x1514] + 0x34b4));
          }
        }
        local_250 = (float)((int)local_250 + 1);
        local_254 = (float)((int)local_254 + 4);
        iVar16 = iVar16 + 0xc;
        pfStack_240 = (float *)((int)pfStack_240 + 0xd0);
        iVar14 = iVar14 + 0xf8;
      } while ((int)local_250 < param_1[0xa2b]);
    }
  }
  uVar6 = __ftol();
  *(undefined1 *)(param_1 + 0x9ed) = uVar6;
  param_1[0x1474] = (int)((float)param_1[0x143c] / _DAT_00673380);
  if (0 < param_1[0xa2a]) {
    puVar19 = (undefined1 *)((int)param_1 + 0x27b5);
    piVar9 = param_1 + 0xa52;
    iVar14 = -2;
    do {
      uVar6 = __ftol();
      *puVar19 = uVar6;
      iVar17 = param_1[0xa2b];
      iVar16 = iVar14 + 2;
      if (iVar16 < iVar17) {
        piVar9[-0x62] = piVar9[0x9f3];
        FUN_0061c369(auStack_a0,s__Vehicle__make_new_Pos___1__s_in_00679114,
                     *(undefined4 *)(param_1[0x50] + 0xc),iVar16);
        FUN_004e3a69(piVar9[-0x62],auStack_a0);
      }
      else if ((iVar14 < 0) || (iVar17 <= iVar14)) {
        if ((iVar14 + -2 < 0) || (iVar17 <= iVar14 + -2)) {
          piVar9[-0x62] = 0;
        }
        else {
          piVar9[-0x62] = (int)((float)piVar9[0x9ef] - (float)_DAT_0064e738);
          FUN_0061c369(auStack_a0,s__Vehicle__make_new_Pos___3__s_in_006790ac,
                       *(undefined4 *)(param_1[0x50] + 0xc),iVar16);
          FUN_004e3a69(piVar9[0x9ef],auStack_a0);
        }
      }
      else {
        piVar9[-0x62] = (int)((float)piVar9[0x9f1] + (float)_DAT_0064e738);
        FUN_0061c369(auStack_a0,s__Vehicle__make_new_Pos___2__s_in_006790e0,
                     *(undefined4 *)(param_1[0x50] + 0xc),iVar14);
        FUN_004e3a69(piVar9[0x9f1],auStack_a0);
      }
      piVar9 = piVar9 + 1;
      puVar19 = puVar19 + 1;
      iVar16 = iVar14 + 3;
      iVar14 = iVar14 + 1;
    } while (iVar16 < param_1[0xa2a]);
  }
  local_254 = 0.0;
  if (0 < param_1[0xa2a]) {
    piVar9 = param_1 + 0x969;
    pfStack_240 = (float *)(param_1 + 0xa52);
    do {
      piVar13 = (int *)FUN_005ab5d0();
      piVar22 = piVar9;
      for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
        *piVar22 = *piVar13;
        piVar13 = piVar13 + 1;
        piVar22 = piVar22 + 1;
      }
      if (*(int *)(&DAT_00696914 + ((int)local_254 + param_1[0xa29] * 0x25c) * 4) != 0) {
        local_250 = (float)(int)(char)param_1[0x9ed];
        puVar19 = local_10c;
        fVar24 = (float)(int)local_250 * _DAT_00673380 * (float)_DAT_0064e4b8;
        uVar7 = FUN_005ab7d0();
        piVar13 = (int *)FUN_005ab130(local_1e8 + 1,piVar9,uVar7,puVar19,fVar24);
        piVar22 = piVar9;
        for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
          *piVar22 = *piVar13;
          piVar13 = piVar13 + 1;
          piVar22 = piVar22 + 1;
        }
      }
      iVar14 = (param_1[0xa29] * 0x1f + (int)local_254) * 0x30;
      piVar9[9] = *(int *)(&DAT_006d1184 + iVar14);
      piVar9[10] = *(int *)(&DAT_006d1188 + iVar14);
      piVar9[0xb] = *(int *)(&DAT_006d118c + iVar14);
      local_250 = (float)(uint)*(byte *)((int)param_1 + (int)local_254 + 0x27b5);
      local_254 = (float)((int)local_254 + 1);
      piVar9[0xb] = (int)((float)piVar9[0xb] -
                         (float)(int)local_250 * *pfStack_240 * (float)_DAT_0064db98);
      piVar9 = piVar9 + 0xc;
      pfStack_240 = pfStack_240 + 1;
    } while ((int)local_254 < param_1[0xa2a]);
  }
  return;
}

