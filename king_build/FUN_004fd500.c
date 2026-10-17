
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004fd500(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  float *pfVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  undefined4 auStack_360 [11];
  undefined4 uStack_334;
  undefined1 *puStack_330;
  float *pfStack_32c;
  undefined4 *puStack_328;
  float *local_324;
  float *local_320;
  float *local_31c;
  float local_308;
  float local_304;
  float local_300;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float *local_2e0;
  float fStack_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  int local_2c4;
  short *local_2c0;
  float local_2bc;
  float *local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  undefined1 local_298 [12];
  undefined1 local_28c [12];
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  undefined1 local_250 [8];
  undefined1 local_248 [8];
  undefined1 local_240 [8];
  undefined1 local_238 [8];
  undefined1 local_230 [8];
  undefined1 local_228 [8];
  undefined4 local_220 [12];
  undefined1 local_1f0 [48];
  undefined1 local_1c0 [48];
  undefined4 local_190 [12];
  undefined1 local_160 [48];
  undefined1 local_130 [48];
  undefined1 local_100 [48];
  undefined1 local_d0 [104];
  undefined4 local_68;
  
  local_31c = (float *)0x43160000;
  pfVar16 = (float *)(param_1 + 0x40);
  local_320 = (float *)s__Car_V__run1__1_00673768;
  puStack_328 = (undefined4 *)0x4fd523;
  local_324 = pfVar16;
  local_2b8 = pfVar16;
  FUN_004e20b1();
  local_31c = (float *)0x4fd52b;
  fVar18 = (float10)FUN_004e1fd9();
  local_2e4 = (float)fVar18;
  local_31c = (float *)0x4fd534;
  fVar18 = (float10)FUN_004e2035();
  *(float *)(param_1 + 0x3bd4) = (float)(fVar18 - (float10)*(float *)(param_1 + 0x17e0));
  local_31c = (float *)0x4fd547;
  FUN_005011b0();
  local_31c = (float *)0x4fd54e;
  FUN_005000d0();
  *(undefined4 *)(param_1 + 0x3c84) = 0;
  *(undefined4 *)(param_1 + 0x3c58) = 0;
  *(float *)(param_1 + 0x3c5c) = DAT_007015b0;
  *(float *)(param_1 + 0x3c60) = DAT_007015b4;
  *(float *)(param_1 + 0x3c64) = DAT_007015b8;
  *(undefined4 *)(param_1 + 0x3c88) = 0;
  fVar1 = *(float *)(param_1 + 0x2640);
  *(float *)(param_1 + 0xc54) = fVar1 * *(float *)(param_1 + 0xd40);
  *(float *)(param_1 + 0xc58) = fVar1 * *(float *)(param_1 + 0xd44);
  iVar13 = 0;
  *(float *)(param_1 + 0xc5c) = fVar1 * *(float *)(param_1 + 0xd48);
  if (0 < *(int *)(param_1 + 0xdd4)) {
    puVar11 = (undefined4 *)(param_1 + 0x3b90);
    do {
      puVar11[-0xb55] = 0;
      *puVar11 = 0;
      puVar11[-0xb45] = 0;
      puVar11[-0xb4d] = 0;
      iVar13 = iVar13 + 1;
      puVar11 = puVar11 + 1;
    } while (iVar13 < *(int *)(param_1 + 0xdd4));
  }
  if (*(short *)(param_1 + 0x2748) != 0) {
    *(undefined4 *)(param_1 + 0x3344) = 0;
    *(undefined2 *)(param_1 + 0x2748) = 0;
    *(undefined4 *)(param_1 + 0x271c) = 0;
    *(undefined4 *)(param_1 + 0x29e0) = 0;
    *(undefined4 *)(param_1 + 0x2720) = 0;
    *(undefined4 *)(param_1 + 0x29e0) = 0;
    *(undefined4 *)(param_1 + 0x29dc) = 0;
    *(undefined4 *)(param_1 + 0x29d8) = 0x3d4ccccd;
    *(undefined4 *)(param_1 + 0x29e8) = 0;
    local_31c = (float *)0x4fd647;
    FUN_004eb290();
  }
  local_31c = (float *)0x4fd64e;
  FUN_004efcd0();
  local_31c = (float *)0x4fd655;
  FUN_004f0560();
  if (0 < *(int *)(param_1 + 0xdd4)) {
    puVar11 = (undefined4 *)(param_1 + 0xd00);
    pfVar10 = (float *)(param_1 + 0x68);
    iVar13 = 0;
    do {
      *puVar11 = 0;
      iVar14 = iVar13 + 1;
      puVar11 = puVar11 + 1;
      pfVar10[0x823] = DAT_007015b0;
      pfVar10[0x824] = DAT_007015b4;
      pfVar10[0x825] = DAT_007015b8;
      fVar1 = *(float *)(param_1 + 0x904);
      fVar2 = *(float *)(param_1 + 0x91c);
      fVar3 = *(float *)(param_1 + 0x910);
      fVar4 = *(float *)(param_1 + 0x928);
      fVar5 = *(float *)(param_1 + 0x914);
      fVar6 = *(float *)(param_1 + 0x908);
      fVar7 = *(float *)(param_1 + 0x920);
      fVar8 = *(float *)(param_1 + 0x92c);
      pfVar10[0x5f7] =
           *pfVar10 * *(float *)(param_1 + 0x90c) +
           pfVar10[-1] * *(float *)(param_1 + 0x900) + *(float *)(param_1 + 0x918) * pfVar10[1] +
           *(float *)(param_1 + 0x924);
      pfVar10[0x5f8] = *pfVar10 * fVar3 + fVar2 * pfVar10[1] + pfVar10[-1] * fVar1 + fVar4;
      pfVar10[0x5f9] = pfVar10[1] * fVar7 + pfVar10[-1] * fVar6 + *pfVar10 * fVar5 + fVar8;
      *(undefined1 *)(iVar13 + 0x19c4 + param_1) = 0;
      pfVar10 = pfVar10 + 3;
      iVar13 = iVar14;
    } while (iVar14 < *(int *)(param_1 + 0xdd4));
  }
  pfVar10 = (float *)(param_1 + 0xd0);
  *(float *)(param_1 + 0x1008) =
       *pfVar10 * *(float *)(param_1 + 0x900) +
       *(float *)(param_1 + 0x918) * *(float *)(param_1 + 0xd8) +
       *(float *)(param_1 + 0x90c) * *(float *)(param_1 + 0xd4);
  *(float *)(param_1 + 0x100c) =
       *(float *)(param_1 + 0x91c) * *(float *)(param_1 + 0xd8) +
       *(float *)(param_1 + 0x904) * *pfVar10 +
       *(float *)(param_1 + 0x910) * *(float *)(param_1 + 0xd4);
  *(float *)(param_1 + 0x1010) =
       *(float *)(param_1 + 0x920) * *(float *)(param_1 + 0xd8) +
       *(float *)(param_1 + 0x908) * *pfVar10 +
       *(float *)(param_1 + 0x914) * *(float *)(param_1 + 0xd4);
  local_31c = (float *)0x4fd7d9;
  fVar18 = (float10)FUN_004ef910();
  local_31c = (float *)(float)fVar18;
  local_320 = &local_280;
  *(float *)(param_1 + 0x1a20) = (float)fVar18;
  local_324 = (float *)0x4fd7f5;
  local_2bc = (float)local_31c;
  FUN_005ab7d0();
  local_31c = &local_280;
  local_320 = (float *)0x4fd807;
  FUN_004f1eb0();
  local_31c = (float *)0x4fd80e;
  FUN_004f1d10();
  fVar18 = (float10)fsin((float10)*(float *)(param_1 + 0x1a20));
  fVar19 = ABS(fVar18) / (float10)*(float *)(param_1 + 0x1f60);
  if (*(char *)(param_1 + 0x19b5) != '\0') {
    fVar19 = (float10)_DAT_0064b254;
  }
  fVar20 = fVar19 * ABS((float10)*(float *)(param_1 + 0xdc8));
  local_2b4 = 1.0;
  local_2bc = (float)fVar20;
  local_2d4 = (float)(fVar20 * ABS((float10)*(float *)(param_1 + 0xdc8)));
  if (_DAT_0064b254 < (float)fVar18 !=
      (float)_DAT_0064a668 <
      *(float *)(param_1 + 0xa2c) * *(float *)(param_1 + 0x9fc) +
      *(float *)(param_1 + 0xa00) * *(float *)(param_1 + 0xa30) +
      *(float *)(param_1 + 0xa04) * *(float *)(param_1 + 0xa34)) {
    local_2b4 = -1.0;
  }
  pfVar15 = (float *)(param_1 + 0xc78);
  fVar19 = (float10)local_2b4 * (float10)*(float *)(param_1 + 0xdc4) * fVar19;
  *(float *)(param_1 + 0xc24) = (float)(fVar19 * (float10)*pfVar10);
  *(float *)(param_1 + 0xc28) = (float)(fVar19 * (float10)*(float *)(param_1 + 0xd4));
  *(float *)(param_1 + 0xc2c) = (float)(fVar19 * (float10)*(float *)(param_1 + 0xd8));
  local_2e0 = (float *)(local_2b4 * *(float *)(param_1 + 0x2640) * local_2d4);
  *pfVar15 = (*(float *)(param_1 + 0xd4) * *(float *)(param_1 + 0xa04) -
             *(float *)(param_1 + 0xa00) * *(float *)(param_1 + 0xd8)) * (float)local_2e0;
  *(float *)(param_1 + 0xc7c) =
       (*(float *)(param_1 + 0x9fc) * *(float *)(param_1 + 0xd8) -
       *pfVar10 * *(float *)(param_1 + 0xa04)) * (float)local_2e0;
  *(float *)(param_1 + 0xc80) =
       (*(float *)(param_1 + 0xa00) * *pfVar10 -
       *(float *)(param_1 + 0x9fc) * *(float *)(param_1 + 0xd4)) * (float)local_2e0;
  fVar1 = *pfVar15;
  fVar2 = *pfVar15;
  fVar3 = *(float *)(param_1 + 0xc7c);
  *pfVar15 = local_274 * *(float *)(param_1 + 0xc7c) +
             local_268 * *(float *)(param_1 + 0xc80) + local_280 * *pfVar15;
  *(float *)(param_1 + 0xc7c) =
       local_270 * *(float *)(param_1 + 0xc7c) +
       local_264 * *(float *)(param_1 + 0xc80) + local_27c * fVar1;
  *(float *)(param_1 + 0xc80) =
       local_26c * fVar3 + local_260 * *(float *)(param_1 + 0xc80) + local_278 * fVar2;
  local_31c = (float *)0x4fda0e;
  FUN_004f2e70();
  local_2a0 = DAT_007015b4;
  fStack_2dc = DAT_007015b4;
  local_2a4 = DAT_007015b0;
  local_29c = DAT_007015b8;
  local_2e0 = (float *)DAT_007015b0;
  local_2d8 = DAT_007015b8;
  local_2c4 = 0;
  if (0 < *(int *)(param_1 + 0x27c0)) {
    pfVar17 = (float *)(param_1 + 0x2808);
    do {
      local_31c = pfVar17 + -1;
      local_320 = &local_2f0;
      local_324 = (float *)0x4fda65;
      FUN_005aae00();
      fVar1 = *(float *)(param_1 + 0x90c) * *pfVar17 +
              pfVar17[1] * *(float *)(param_1 + 0x918) + pfVar17[-1] * *(float *)(param_1 + 0x900);
      fVar3 = pfVar17[-1] * *(float *)(param_1 + 0x904) +
              *(float *)(param_1 + 0x910) * *pfVar17 + *(float *)(param_1 + 0x91c) * pfVar17[1];
      fVar2 = *(float *)(param_1 + 0x914) * *pfVar17 +
              *(float *)(param_1 + 0x920) * pfVar17[1] + *(float *)(param_1 + 0x908) * pfVar17[-1];
      local_2e0 = (float *)((float)local_2e0 + (fVar2 * pfVar17[-0xf] - fVar3 * pfVar17[-0xe]));
      fStack_2dc = (fVar1 * pfVar17[-0xe] - fVar2 * pfVar17[-0x10]) + fStack_2dc;
      local_2d8 = (fVar3 * pfVar17[-0x10] - fVar1 * pfVar17[-0xf]) + local_2d8;
      local_2c4 = local_2c4 + 1;
      pfVar16 = local_2b8;
      pfVar17 = pfVar17 + 3;
    } while (local_2c4 < *(int *)(param_1 + 0x27c0));
  }
  *(float *)(param_1 + 0xc6c) = DAT_007015b0;
  *(float *)(param_1 + 0xc70) = DAT_007015b4;
  *(float *)(param_1 + 0xc74) = DAT_007015b8;
  *(float *)(param_1 + 0xcc0) = DAT_007015b0;
  *(float *)(param_1 + 0xcc4) = DAT_007015b4;
  *(float *)(param_1 + 0xcc8) = DAT_007015b8;
  local_2d4 = 0.0;
  local_2c4 = 0;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    local_2c0 = (short *)(param_1 + 0x19a4);
    local_2e0 = (float *)(param_1 + 0x2098);
    pfVar17 = (float *)(param_1 + 0x108);
    do {
      if ((local_2d4 != 0.0) || (local_2d4 = 0.0, *local_2c0 != 0)) {
        local_2d4 = 1.4013e-45;
      }
      local_308 = DAT_007015b0;
      local_2b0 = DAT_007015b0;
      local_304 = DAT_007015b4;
      local_300 = DAT_007015b8;
      local_2ac = DAT_007015b4;
      local_2a8 = DAT_007015b8;
      if (*local_2c0 == 0) {
        local_308 = local_2e0[0x47];
        local_304 = local_2e0[0x48];
        local_2b0 = local_2e0[-0x464];
        local_300 = local_2e0[0x49];
        local_2ac = local_2e0[-0x463];
        local_2a8 = local_2e0[-0x462];
      }
      local_2f0 = local_2b0 + local_308;
      local_2ec = local_2ac + local_304;
      local_31c = &local_2f0;
      local_2e8 = local_2a8 + local_300;
      local_320 = (float *)local_28c;
      local_324 = (float *)0x4fdc99;
      local_2d0 = local_2f0;
      local_2cc = local_2ec;
      local_2c8 = local_2e8;
      FUN_005aae00();
      if (*local_2c0 == 0) {
        local_31c = local_2e0 + -0x19;
        fVar5 = local_2e0[1] * *pfVar17 - *local_2e0 * pfVar17[1];
        fVar7 = local_2e0[-1] * pfVar17[1] - local_2e0[1] * pfVar17[-1];
        local_320 = (float *)local_298;
        fVar6 = *local_2e0 * pfVar17[-1] - *pfVar17 * local_2e0[-1];
        fVar1 = pfVar17[-1];
        fVar2 = pfVar17[1];
        fVar3 = *pfVar17;
        fVar4 = pfVar17[-1];
        *local_31c = fVar7 * pfVar17[1] - fVar6 * *pfVar17;
        local_2e0[-0x18] = fVar6 * fVar1 - fVar5 * fVar2;
        local_2e0[-0x17] = fVar5 * fVar3 - fVar7 * fVar4;
        local_324 = (float *)0x4fdd2b;
        FUN_005aae00();
      }
      local_2e0 = local_2e0 + 3;
      local_2c4 = local_2c4 + 1;
      local_2c0 = local_2c0 + 1;
      pfVar17 = pfVar17 + 0x3e;
      pfVar16 = local_2b8;
    } while (local_2c4 < *(int *)(param_1 + 0xdd4));
  }
  local_2e0 = *(float **)(param_1 + 0x2640);
  pfVar17 = (float *)(param_1 + 0xd40);
  local_2c8 = (*(float *)(param_1 + 0xc74) + *(float *)(param_1 + 0xc80)) / (float)local_2e0;
  *(float *)(param_1 + 0xd58) =
       *pfVar17 - (*pfVar15 + *(float *)(param_1 + 0xc6c)) / (float)local_2e0;
  *(float *)(param_1 + 0xd5c) =
       *(float *)(param_1 + 0xd44) -
       (*(float *)(param_1 + 0xc70) + *(float *)(param_1 + 0xc7c)) / (float)local_2e0;
  *(float *)(param_1 + 0xd60) = *(float *)(param_1 + 0xd48) - local_2c8;
  local_308 = *pfVar17;
  local_304 = *(float *)(param_1 + 0xd44);
  local_300 = *(float *)(param_1 + 0xd48);
  if (local_2d4 == 0.0) {
    fVar1 = *pfVar17 * *pfVar10 +
            *(float *)(param_1 + 0xd44) * *(float *)(param_1 + 0xd4) +
            *(float *)(param_1 + 0xd48) * *(float *)(param_1 + 0xd8);
    fVar4 = *(float *)(param_1 + 0xd48) * *(float *)(param_1 + 0xd4) -
            *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0xd44);
    fVar2 = *(float *)(param_1 + 0xd8) * *pfVar17 - *pfVar10 * *(float *)(param_1 + 0xd48);
    fVar3 = *pfVar10 * *(float *)(param_1 + 0xd44) - *pfVar17 * *(float *)(param_1 + 0xd4);
    local_2b0 = (fVar2 * *(float *)(param_1 + 0xd8) - fVar3 * *(float *)(param_1 + 0xd4)) *
                _DAT_0064b248;
    local_2ac = (fVar3 * *pfVar10 - fVar4 * *(float *)(param_1 + 0xd8)) * _DAT_0064b248;
    local_308 = local_2b0 + fVar1 * *pfVar10;
    local_304 = fVar1 * *(float *)(param_1 + 0xd4) + local_2ac;
    local_300 = fVar1 * *(float *)(param_1 + 0xd8) +
                (fVar4 * *(float *)(param_1 + 0xd4) - fVar2 * *pfVar10) * _DAT_0064b248;
  }
  fVar2 = *(float *)(param_1 + 0x278c) + *(float *)(param_1 + 0x2640);
  fVar1 = *(float *)(param_1 + 0x2640);
  local_2d0 = local_308 + *(float *)(param_1 + 0xc6c) / fVar2;
  local_2cc = *(float *)(param_1 + 0xc70) / fVar2 + local_304;
  local_2f0 = (local_2d0 + local_2a4 / fVar1) * local_2e4;
  local_2ec = (local_2a0 / fVar1 + local_2cc) * local_2e4;
  local_31c = &local_2f0;
  local_2e8 = (*(float *)(param_1 + 0xc74) / fVar2 + local_300 + local_29c / fVar1) * local_2e4;
  local_320 = (float *)local_298;
  local_324 = (float *)0x4fdfb6;
  FUN_005aae00();
  local_31c = (float *)0x43160000;
  local_320 = (float *)s__Car_V__run1__2_00673758;
  puStack_328 = (undefined4 *)0x4fdfc6;
  local_324 = pfVar16;
  FUN_004e20b1();
  if (((local_2d4 == 0.0) || (*(char *)(param_1 + 0x19b5) == '\0')) ||
     (*(char *)(param_1 + 0x19b7) == '\0')) {
    fVar3 = pfVar16[2] * *(float *)(param_1 + 0xd4) - *(float *)(param_1 + 0xd8) * pfVar16[1];
    fVar6 = *(float *)(param_1 + 0xd8) * *pfVar16 - *pfVar10 * pfVar16[2];
    fVar1 = *pfVar10 * pfVar16[1] - *pfVar16 * *(float *)(param_1 + 0xd4);
    fVar4 = fVar6 * *(float *)(param_1 + 0xd8) - fVar1 * *(float *)(param_1 + 0xd4);
    fVar5 = fVar1 * *pfVar10 - fVar3 * *(float *)(param_1 + 0xd8);
    fVar1 = *(float *)(param_1 + 0xd4);
    fVar2 = *pfVar10;
    *pfVar16 = fVar4;
    fVar1 = fVar3 * fVar1 - fVar6 * fVar2;
    pfVar16[1] = fVar5;
    pfVar16[2] = fVar1;
    local_320 = (float *)0x4fe057;
    local_31c = pfVar16;
    fVar18 = (float10)FUN_005aabc0();
    *(float *)(param_1 + 0xdc0) = (float)fVar18;
    if ((*(char *)(param_1 + 0x19b6) == '\0') && (*(char *)(param_1 + 0x19b8) == '\0')) {
      fVar2 = *(float *)(param_1 + 0x1f7c) * _DAT_0064b248;
    }
    else {
      iVar13 = *(int *)(param_1 + 0xdd4);
      fVar2 = _DAT_0064b254;
      if (0 < iVar13) {
        pfVar15 = (float *)(param_1 + 0xe18);
        do {
          if (fVar2 < *pfVar15) {
            fVar2 = *pfVar15;
          }
          pfVar15 = pfVar15 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
    if ((*(float *)(param_1 + 0xd8) < (float)_DAT_0064a888) ||
       (*(float *)(param_1 + 0x1f7c) * _DAT_0064b3f8 < fVar2)) {
      local_320 = (float *)0x4fe19e;
      local_31c = pfVar16;
      fVar18 = (float10)FUN_005aabc0();
      *(float *)(param_1 + 0xdc0) = (float)fVar18;
    }
    else {
      local_2e0 = (float *)0x0;
      fStack_2dc = 1.875;
      if (*(float *)(param_1 + 0xa38) * *pfVar16 +
          pfVar16[1] * *(float *)(param_1 + 0xa3c) + pfVar16[2] * *(float *)(param_1 + 0xa40) <=
          (float)_DAT_0064a668) {
        fStack_2dc = -1.875;
      }
      local_31c = (float *)(float)(fVar18 * (float10)*(float *)(param_1 + 0xa40));
      local_320 = (float *)(float)(fVar18 * (float10)*(float *)(param_1 + 0xa3c));
      local_324 = (float *)(float)(fVar18 * (float10)*(float *)(param_1 + 0xa38));
      puStack_328 = (undefined4 *)0x4fe14f;
      FUN_0041ce10();
      fVar2 = (float)(double)CONCAT44(fStack_2dc,local_2e0);
      local_31c = (float *)(local_2e8 * fVar2);
      local_320 = (float *)(local_2ec * fVar2);
      local_324 = (float *)(local_2f0 * fVar2);
      puStack_328 = (undefined4 *)0x4fe17c;
      FUN_0041ce10();
      *pfVar16 = fVar4;
      pfVar16[1] = fVar5;
      pfVar16[2] = fVar1;
    }
    local_31c = (float *)0x43160000;
    local_320 = (float *)s__Car_V__run1__3_00673748;
    puStack_328 = (undefined4 *)0x4fe1b7;
    local_324 = pfVar16;
    FUN_004e20b1();
    if ((*(int *)(param_1 + 0x1abc) != 0) &&
       ((*(float *)(param_1 + 0xdc4) < (float)_DAT_0064a5a8 ||
        (*pfVar16 * *(float *)(param_1 + 0xa08) +
         pfVar16[1] * *(float *)(param_1 + 0xa0c) + pfVar16[2] * *(float *)(param_1 + 0xa10) <
         (float)_DAT_0064a668)))) {
      local_31c = (float *)0x4fe20d;
      FUN_004ef490();
      *(float *)(param_1 + 0xc6c) = DAT_007015b0;
      *(float *)(param_1 + 0xc70) = DAT_007015b4;
      *(float *)(param_1 + 0xc74) = DAT_007015b8;
      *(float *)(param_1 + 0xa14) = DAT_007015b0;
      *(float *)(param_1 + 0xa18) = DAT_007015b4;
      *(float *)(param_1 + 0xa1c) = DAT_007015b8;
    }
  }
  local_31c = (float *)FUN_004042a0;
  local_320 = (float *)0x4;
  puStack_328 = local_220;
  local_324 = (float *)0xc;
  pfStack_32c = (float *)0x4fe26a;
  FUN_004011e0();
  cVar9 = *(char *)(param_1 + 0x19b5);
  puVar11 = &DAT_00701550;
  puVar12 = local_220;
  for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  if (cVar9 == '\0') {
    local_31c = (float *)(*(float *)(param_1 + 0x914) * *(float *)(param_1 + 0xc28) +
                         *(float *)(param_1 + 0x920) * *(float *)(param_1 + 0xc2c) +
                         *(float *)(param_1 + 0x908) * *(float *)(param_1 + 0xc24));
    local_320 = (float *)(*(float *)(param_1 + 0x910) * *(float *)(param_1 + 0xc28) +
                         *(float *)(param_1 + 0x91c) * *(float *)(param_1 + 0xc2c) +
                         *(float *)(param_1 + 0x904) * *(float *)(param_1 + 0xc24));
    local_324 = (float *)(*(float *)(param_1 + 0xc24) * *(float *)(param_1 + 0x900) +
                         *(float *)(param_1 + 0x90c) * *(float *)(param_1 + 0xc28) +
                         *(float *)(param_1 + 0x918) * *(float *)(param_1 + 0xc2c));
    puStack_328 = (undefined4 *)0x4fe38e;
    FUN_0041ce10();
    local_324 = (float *)(param_1 + 0x58);
    *local_324 = local_2f0;
    *(float *)(param_1 + 0x5c) = local_2ec;
    *(float *)(param_1 + 0x60) = local_2e8;
    local_31c = (float *)(param_1 + 0x10);
    local_320 = (float *)(param_1 + 0x1f48);
    puStack_328 = (undefined4 *)local_298;
    pfStack_32c = (float *)0x4fe3c0;
    local_320 = (float *)FUN_004e2984();
    local_324 = (float *)local_28c;
    puStack_328 = (undefined4 *)0x4fe3d1;
    puVar11 = (undefined4 *)FUN_004cb300();
    *(undefined4 *)(param_1 + 0x4c) = *puVar11;
    local_31c = (float *)(local_2b4 * local_2bc * local_2e4);
    *(undefined4 *)(param_1 + 0x50) = puVar11[1];
    *(undefined4 *)(param_1 + 0x54) = puVar11[2];
    local_320 = (float *)local_1f0;
    local_324 = (float *)0x4fe403;
    puVar11 = (undefined4 *)FUN_005ab7d0();
  }
  else {
    local_31c = (float *)(local_2e4 * *(float *)(param_1 + 0x5c));
    local_320 = (float *)local_130;
    local_324 = (float *)0x4fe29f;
    local_31c = (float *)FUN_005ab6d0();
    local_320 = (float *)(local_2e4 * *(float *)(param_1 + 0x58));
    local_324 = (float *)local_100;
    puStack_328 = (undefined4 *)0x4fe2bb;
    local_320 = (float *)FUN_005ab5d0();
    local_324 = (float *)(local_2e4 * *(float *)(param_1 + 0x60));
    puStack_328 = (undefined4 *)local_160;
    pfStack_32c = (float *)0x4fe2d7;
    local_324 = (float *)FUN_005ab7d0();
    puStack_328 = (undefined4 *)local_1c0;
    pfStack_32c = (float *)0x4fe2e8;
    local_320 = (float *)FUN_005ab130();
    local_324 = (float *)local_1f0;
    puStack_328 = (undefined4 *)0x4fe2f9;
    puVar11 = (undefined4 *)FUN_005ab130();
  }
  puVar12 = local_220;
  for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  if (DAT_006965d0 != 0) {
    local_320 = (float *)local_1f0;
    local_31c = (float *)0x3e32b8c2;
    local_324 = (float *)0x4fe431;
    local_324 = (float *)FUN_005ab5d0();
    puStack_328 = local_220;
    pfStack_32c = (float *)local_1c0;
    puStack_330 = (undefined1 *)0x4fe447;
    puVar11 = (undefined4 *)FUN_005ab130();
    puVar12 = local_220;
    for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  local_31c = (float *)(local_2e4 * local_2b8[2]);
  local_320 = (float *)(local_2e4 * local_2b8[1]);
  local_324 = (float *)(local_2e4 * *local_2b8);
  puStack_328 = (undefined4 *)0x4fe487;
  FUN_0041ce10();
  local_324 = (float *)local_2f0;
  local_320 = (float *)local_2ec;
  puStack_328 = (undefined4 *)local_1f0;
  local_31c = (float *)local_2e8;
  pfStack_32c = (float *)0x4fe4b0;
  local_31c = (float *)FUN_005ab330();
  local_324 = (float *)local_220;
  puStack_328 = (undefined4 *)local_1c0;
  pfStack_32c = (float *)0x4fe4ca;
  local_320 = (float *)(param_1 + 0x10);
  local_320 = (float *)FUN_005ab130();
  local_324 = (float *)local_160;
  puStack_328 = (undefined4 *)0x4fe4db;
  puVar11 = (undefined4 *)FUN_005ab130();
  puVar12 = (undefined4 *)(param_1 + 0x10);
  for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar11 = (undefined4 *)(param_1 + 0x10);
  puStack_330 = local_298;
  pfStack_32c = (float *)&DAT_00701580;
  uStack_334 = 0x4fe4fa;
  puStack_328 = puVar11;
  puVar12 = (undefined4 *)FUN_004cb300();
  local_320 = (float *)(param_1 + 0xa2c);
  *local_320 = (float)*puVar12;
  *(undefined4 *)(param_1 + 0xa30) = puVar12[1];
  *(undefined4 *)(param_1 + 0xa34) = puVar12[2];
  puStack_328 = (undefined4 *)local_298;
  pfStack_32c = (float *)0x4fe527;
  local_324 = pfVar10;
  local_31c = pfVar10;
  local_320 = (float *)FUN_004bde70();
  local_324 = (float *)local_28c;
  puStack_328 = (undefined4 *)0x4fe538;
  puStack_328 = (undefined4 *)FUN_004bde70();
  pfStack_32c = &local_2f0;
  puStack_330 = (undefined1 *)0x4fe543;
  puVar12 = (undefined4 *)FUN_005aaad0();
  *(undefined4 *)(param_1 + 0xa38) = *puVar12;
  *(undefined4 *)(param_1 + 0xa3c) = puVar12[1];
  *(undefined4 *)(param_1 + 0xa40) = puVar12[2];
  local_320 = (float *)0x4fe564;
  local_31c = (float *)puVar11;
  FUN_00504db0();
  local_31c = (float *)local_190;
  local_320 = (float *)0x4fe573;
  FUN_004fc290();
  local_320 = (float *)local_1f0;
  puVar12 = local_190;
  for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar11 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar11 = puVar11 + 1;
  }
  local_324 = (float *)0x4fe592;
  local_31c = (float *)(param_1 + 0x10);
  puVar11 = (undefined4 *)FUN_005aba00();
  local_320 = (float *)(param_1 + 0x900);
  puVar12 = local_320;
  for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  local_31c = (float *)(param_1 + 0x1f48);
  local_324 = (float *)(param_1 + 0x4c);
  puStack_328 = (undefined4 *)local_298;
  pfStack_32c = (float *)0x4fe5bf;
  local_320 = (float *)FUN_004cb300();
  local_324 = (float *)local_28c;
  puStack_328 = (undefined4 *)0x4fe5d0;
  puVar11 = (undefined4 *)FUN_004e29c2();
  *(undefined4 *)(param_1 + 0x58) = *puVar11;
  *(undefined4 *)(param_1 + 0x5c) = puVar11[1];
  *(undefined4 *)(param_1 + 0x60) = puVar11[2];
  local_324 = (float *)local_238;
  puVar11 = (undefined4 *)(param_1 + 0x3be8);
  for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  *(undefined4 *)(param_1 + 0x3c08) = 0;
  *(undefined4 *)(param_1 + 0x3c0c) = 0;
  local_31c = (float *)local_228;
  local_320 = (float *)local_230;
  puStack_328 = (undefined4 *)local_240;
  pfStack_32c = (float *)local_248;
  puStack_330 = local_250;
  puVar11 = (undefined4 *)(param_1 + 0x10);
  puVar12 = auStack_360;
  for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  FUN_005de000();
  local_31c = (float *)0x4fe651;
  FUN_005eebf0();
  local_31c = (float *)local_d0;
  local_320 = (float *)(param_1 + 0x34);
  puStack_328 = *(undefined4 **)(param_1 + 0x1a10);
  local_324 = (float *)(param_1 + 0x8f4);
  pfStack_32c = (float *)0x4fe670;
  iVar13 = FUN_004e53b2();
  if (iVar13 != 0) {
    *(undefined4 *)(param_1 + 0xf4) = local_68;
  }
  local_31c = (float *)0x4fe68b;
  FUN_004f0560();
  local_31c = (float *)local_250;
  local_320 = (float *)0x4fe69a;
  FUN_004f63f0();
  local_31c = (float *)0x4fe6a1;
  iVar13 = FUN_004ef880();
  if (iVar13 != 0) {
    iVar13 = 0;
    if (0 < *(int *)(param_1 + 0xdd4)) {
      puVar11 = (undefined4 *)(param_1 + 0xdd8);
      do {
        iVar13 = iVar13 + 1;
        *puVar11 = puVar11[0x471];
        puVar11 = puVar11 + 1;
      } while (iVar13 < *(int *)(param_1 + 0xdd4));
    }
    *(undefined4 *)(param_1 + 0x3344) = 1;
    return;
  }
  local_31c = (float *)0x4fe6e9;
  FUN_004843e0();
  iVar13 = 0;
  if (0 < *(int *)(param_1 + 0x27c0)) {
    pfVar16 = (float *)(param_1 + 0x2804);
    do {
      iVar13 = iVar13 + 1;
      *pfVar16 = DAT_007015b0;
      pfVar16[1] = DAT_007015b4;
      pfVar16[2] = DAT_007015b8;
      pfVar16 = pfVar16 + 3;
    } while (iVar13 < *(int *)(param_1 + 0x27c0));
  }
  local_31c = (float *)0x43160000;
  local_320 = (float *)s__Car_V__run1__4_00673738;
  local_324 = local_2b8;
  *(undefined4 *)(param_1 + 0x27c0) = 0;
  puStack_328 = (undefined4 *)0x4fe743;
  FUN_004e20b1();
  return;
}

