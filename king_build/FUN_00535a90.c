
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00535a90(int param_1)

{
  byte *pbVar1;
  char cVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  float *pfVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  undefined8 *puVar22;
  char **ppcVar23;
  undefined4 *puVar24;
  float **ppfVar25;
  undefined8 *puVar26;
  char *pcVar27;
  char *pcVar28;
  float *pfVar29;
  float10 fVar30;
  float10 fVar31;
  char *apcStack_378 [3];
  float *pfStack_36c;
  float *pfStack_368;
  char *pcStack_364;
  undefined4 uStack_360;
  float *pfStack_35c;
  float *pfStack_358;
  float *pfStack_354;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  float local_30c;
  float local_308;
  float local_304;
  float fStack_300;
  int local_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float local_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  double dStack_298;
  float local_290;
  float local_28c;
  float local_288;
  float afStack_284 [4];
  char *pcStack_274;
  char *pcStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  undefined4 uStack_254;
  float afStack_250 [50];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  double dStack_170;
  double dStack_168;
  double dStack_160;
  char acStack_158 [48];
  undefined1 auStack_128 [48];
  undefined1 auStack_f8 [244];
  
  uStack_338 = (double)CONCAT44(*(undefined4 *)(param_1 + 0x268),0x535aae);
  iVar12 = FUN_0053ee80();
  *(int *)(param_1 + 0x268) = iVar12;
  if (iVar12 == 0) {
    uStack_338 = 2.12469473621452e-314;
    FUN_005d29a0();
    return;
  }
  iVar12 = 0;
  local_2d0 = (float)*(double *)(*(int *)(param_1 + 0x20) + 0xb90);
  uStack_338 = (double)CONCAT44(0x535ae2,(char *)uStack_338);
  fVar30 = (float10)FUN_004e1fd9();
  if ((float10)_DAT_0064e3c8 <= fVar30) {
    uStack_338 = (double)CONCAT44(0x535afb,(char *)uStack_338);
    fVar30 = (float10)FUN_004e1fd9();
    if ((float10)_DAT_0064e3c0 <= fVar30) {
      uStack_338 = (double)CONCAT44(0x535b0d,(char *)uStack_338);
      fVar30 = (float10)FUN_004e1fd9();
      if ((float10)_DAT_0064a830 <= fVar30) goto LAB_00535b1c;
    }
    iVar12 = 0;
  }
  else {
    iVar12 = 1;
  }
LAB_00535b1c:
  if (*(int *)(param_1 + 0x578) == 0) {
    if (*(int *)(param_1 + 0x574) == 0) {
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x10);
    }
    uStack_338 = 5.51745895716105e-313;
    iVar13 = FUN_0052f7d0();
    if (iVar13 == 0) {
      uStack_338 = 5.72965853704808e-313;
      iVar13 = FUN_0052f7d0();
      if (iVar13 != 0) goto LAB_00535b56;
    }
    else {
LAB_00535b56:
      if (*(int *)(DAT_006cdbcc + 0x514) < 2) {
        uStack_338 = (double)CONCAT44(DAT_006957b4 / 2,DAT_006957b0 / 2);
        uStack_340 = (double)CONCAT44(0x535b7f,(undefined4)uStack_340);
        FUN_005ac200();
      }
    }
    uStack_338 = 5.51745896091595e-313;
    iVar13 = FUN_0052f7d0();
    if (iVar13 == 0) {
      uStack_338 = 5.72965854297687e-313;
      iVar20 = FUN_0052f7d0();
      iVar13 = *(int *)(param_1 + 0x574);
      if (iVar20 == 0) {
        if (iVar13 == 2) {
          *(undefined4 *)(param_1 + 0x574) = 1;
        }
        else {
          *(uint *)(param_1 + 0x574) = (iVar13 != -2) - 1;
        }
      }
      else {
        if (0 < iVar13) goto LAB_00535bf5;
        if ((iVar13 == 0) || (iVar12 < *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x6c))) {
          *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x10);
          *(int *)(param_1 + 0x574) = iVar13 + -1;
        }
      }
    }
    else {
      iVar13 = *(int *)(param_1 + 0x574);
      if (iVar13 < 0) {
LAB_00535bf5:
        *(undefined4 *)(param_1 + 0x574) = 0;
      }
      else if ((iVar13 == 0) || (iVar12 < *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x6c))) {
        *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x10);
        *(int *)(param_1 + 0x574) = iVar13 + 1;
      }
    }
    if (2 < *(int *)(param_1 + 0x574)) {
      *(undefined4 *)(param_1 + 0x574) = 2;
    }
    if (*(int *)(param_1 + 0x574) < -2) {
      *(undefined4 *)(param_1 + 0x574) = 0xfffffffe;
    }
  }
  else {
    _DAT_00695c70 = 0.0;
    DAT_00695c74 = 0;
    *(undefined4 *)(param_1 + 0x574) = 0;
  }
  if ((*(byte *)(param_1 + 0x57c) & 2) != 0) {
    uStack_338 = 4.24426149750267e-313;
    iVar12 = FUN_0052f7d0();
    if (iVar12 == 1) {
      if (*(int *)(param_1 + 0x578) == 0) {
        *(undefined4 *)(param_1 + 0x578) = 1;
        if (*(int *)(DAT_006cdbcc + 0x514) < 2) {
          uStack_338 = (double)CONCAT44(DAT_006957b4 / 2,DAT_006957b0 / 2);
          uStack_340 = (double)CONCAT44(0x535cb5,(undefined4)uStack_340);
          FUN_005ac200();
        }
        uStack_338 = (double)CONCAT44(0x535cc2,(char *)uStack_338);
        FUN_00598560();
      }
      else {
        *(undefined4 *)(param_1 + 0x578) = 0;
        DAT_00695c74 = 1;
        if (*(int *)(DAT_006cdbcc + 0x514) < 2) {
          uStack_338 = (double)CONCAT44(DAT_006957b4 / 2,DAT_006957b0 / 2);
          uStack_340 = (double)CONCAT44(0x535cff,(undefined4)uStack_340);
          FUN_005ac200();
        }
      }
      *(undefined4 *)(DAT_006cdbcc + 0x548) = *(undefined4 *)(param_1 + 0x578);
    }
  }
  if ((*(int *)(param_1 + 0x268) != 0) &&
     (iVar12 = *(int *)(*(int *)(param_1 + 0x268) + 0x5460), iVar12 != 0)) {
    *(float *)(iVar12 + 0x2724) =
         (float)(int)*(short *)(DAT_006cdbd4 + 0x184) * (float)_DAT_0064a590;
    *(float *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x2728) =
         (float)(int)*(short *)(DAT_006cdbd4 + 0x186) * (float)_DAT_0064a590;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x2764) = 0x3e99999a;
    if ((*(int *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x3344) == 0) &&
       (*(int *)(param_1 + 0x578) == 2)) {
      *(undefined4 *)(param_1 + 0x578) = 0;
      *(undefined4 *)(DAT_006cdbcc + 0x548) = 0;
    }
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x3344) == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0x49742400;
      *(undefined4 *)(param_1 + 0x570) = 0;
    }
    else {
      uStack_338 = (double)CONCAT44(0x535dde,(char *)uStack_338);
      fVar30 = (float10)FUN_004e2035();
      if (fVar30 < (float10)*(float *)(param_1 + 0x2c)) {
        uStack_338 = (double)CONCAT44(0x535ded,(char *)uStack_338);
        fVar30 = (float10)FUN_004e2035();
        *(float *)(param_1 + 0x2c) = (float)fVar30;
        if ((*(byte *)(param_1 + 0x57c) & 0x10) != 0) {
          uStack_338 = (double)CONCAT44(0x3e99999a,DAT_006d0c5c);
          uStack_340 = (double)CONCAT44(0x535e0b,(undefined4)uStack_340);
          FUN_0052f190();
        }
      }
      uStack_338 = (double)CONCAT44(0x535e13,(char *)uStack_338);
      FUN_004e2035();
      uStack_338 = (double)CONCAT44(0x535e21,(char *)uStack_338);
      iVar12 = __ftol();
      iVar12 = 1 - iVar12;
      *(int *)(param_1 + 0x570) = iVar12;
      if ((100000 < iVar12) || (iVar12 < 0)) {
        *(undefined4 *)(param_1 + 0x570) = 0;
        uStack_338 = 2.12469518037953e-314;
        FUN_00532cc0();
        uStack_338 = (double)CONCAT44(*(int *)(*(int *)(param_1 + 0x24) + 0x104) / 2,
                                      *(int *)(*(int *)(param_1 + 0x24) + 0x100) / 2);
        uStack_340 = (double)CONCAT44(0x535e69,(undefined4)uStack_340);
        FUN_005e2770();
      }
    }
  }
  if (*(int *)(param_1 + 0x268) != 0) {
    uStack_338 = (double)CONCAT44(0x535e89,(char *)uStack_338);
    fVar30 = (float10)FUN_004de4b0();
    _DAT_00695c70 = (float)fVar30;
    piVar3 = *(int **)(param_1 + 0x268);
    local_290 = (float)piVar3[0x33d];
    local_28c = (float)piVar3[0x33e];
    local_288 = (float)piVar3[0x33f];
    if (*(int *)(param_1 + 0x578) == 0) {
      uStack_338 = (double)CONCAT44(0x5361b6,(char *)uStack_338);
      (**(code **)(*piVar3 + 0x68))();
      uStack_338 = (double)CONCAT44(0x5361c1,(char *)uStack_338);
      FUN_00555d60();
      uStack_338 = (double)CONCAT44(0x5361ca,(char *)uStack_338);
      FUN_005351a0();
      uStack_338 = (double)ZEXT48(&uStack_2c0);
      uStack_340 = (double)CONCAT44(0x5361d6,(undefined4)uStack_340);
      puVar17 = (undefined4 *)FUN_004de8f0();
      puVar15 = (undefined4 *)(param_1 + 0x620);
      for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar15 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar15 = puVar15 + 1;
      }
      uStack_338 = (double)CONCAT44(auStack_128,0x5361f7);
      FUN_005356b0();
      uStack_338 = (double)CONCAT44(afStack_284,0x53620d);
      FUN_0057d5f0();
      uStack_338 = (double)CONCAT44(param_1 + 0x208,auStack_128);
      puVar17 = (undefined4 *)(param_1 + 0x590);
      uStack_340 = (double)CONCAT44(&uStack_2c0,0x53622c);
      puVar15 = (undefined4 *)FUN_005ab130();
      puVar24 = puVar17;
      for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar24 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar24 = puVar24 + 1;
      }
      fVar30 = (float10)fcos((float10)_DAT_00695c70);
      fVar4 = (float)ABS(fVar30);
      if ((*(uint *)(DAT_006d0fd8 + 0x57c) & 0x100) != 0) {
        uStack_338 = (double)CONCAT44(&dStack_298,&dStack_2a0);
        uStack_340 = (double)CONCAT44(&dStack_2a8,&dStack_2b0);
        uStack_348 = (double)CONCAT44(&uStack_2b8,&uStack_2c0);
        pfVar16 = afStack_284;
        ppcVar23 = apcStack_378;
        for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
          *ppcVar23 = (char *)*pfVar16;
          pfVar16 = pfVar16 + 1;
          ppcVar23 = ppcVar23 + 1;
        }
        FUN_005de000();
        uStack_338 = (double)CONCAT44(s__Viewer__run_tilt__3_00677e4c,
                                      (float)((float10)dStack_298 * (float10)_DAT_0064c308));
        uStack_340 = (double)CONCAT44(0x5362cb,(undefined4)uStack_340);
        FUN_004ea55e();
        uStack_338 = (double)CONCAT44(s__Viewer__run_tang__4_00677e34,
                                      (float)((float10)dStack_2a0 * (float10)_DAT_0064c308));
        uStack_340 = (double)CONCAT44(0x5362ee,(undefined4)uStack_340);
        FUN_004ea55e();
        uStack_338 = (double)CONCAT44(0x5362f5,(char *)uStack_338);
        fVar30 = (float10)FUN_004ea828();
        fVar5 = fVar4 + _DAT_0064b240;
        fVar6 = (float)_DAT_0064a6d0;
        uStack_338 = (double)CONCAT44(0x536326,(char *)uStack_338);
        fVar31 = (float10)FUN_004ea828();
        uStack_338 = (double)((float10)(fVar5 * (float)dStack_298 * fVar6) -
                             fVar31 * (float10)fVar4 * (float10)_DAT_0064a6d0);
        uStack_340 = (double)(float)((float10)dStack_2a0 - fVar30 * (float10)fVar4);
        uStack_348 = dStack_2a8;
        uStack_350 = dStack_2b0;
        pfStack_354 = uStack_2b8._4_4_;
        pfStack_358 = (float *)uStack_2b8;
        pfStack_35c = (float *)uStack_2c0._4_4_;
        pcStack_364 = acStack_158;
        uStack_360 = (int)uStack_2c0;
        pfStack_368 = (float *)0x536392;
        pfVar16 = (float *)FUN_005da010();
        pfVar29 = afStack_284;
        for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
          *pfVar29 = *pfVar16;
          pfVar16 = pfVar16 + 1;
          pfVar29 = pfVar29 + 1;
        }
      }
      iVar12 = *(int *)(param_1 + 0x268);
      fVar4 = *(float *)(param_1 + 0x5bc) * *(float *)(iVar12 + 0xd04) -
              *(float *)(iVar12 + 0xd08) * *(float *)(param_1 + 0x5b8);
      fVar6 = *(float *)(iVar12 + 0xd08) * *(float *)(param_1 + 0x5b4) -
              *(float *)(param_1 + 0x5bc) * *(float *)(iVar12 + 0xd00);
      uStack_338 = (double)CONCAT44(&fStack_2e8,&fStack_2cc);
      fVar5 = *(float *)(iVar12 + 0xd00) * *(float *)(param_1 + 0x5b8) -
              *(float *)(param_1 + 0x5b4) * *(float *)(iVar12 + 0xd04);
      fStack_2e8 = afStack_284[0] * fVar4 + fVar6 * afStack_284[3] + fVar5 * fStack_26c;
      fStack_2e4 = fVar4 * afStack_284[1] + fVar6 * (float)pcStack_274 + fVar5 * fStack_268;
      fStack_2e0 = fVar4 * afStack_284[2] + fVar6 * (float)pcStack_270 + fVar5 * fStack_264;
      uStack_340 = (double)CONCAT44(0x53646d,(undefined4)uStack_340);
      FUN_005aae00();
      uStack_338 = (double)CONCAT44(afStack_284,puVar17);
      uStack_340 = (double)CONCAT44(acStack_158,0x536483);
      puVar15 = (undefined4 *)FUN_005ab130();
      uStack_338._4_4_ = (char *)(param_1 + 0x5b4);
      for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar17 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar17 = puVar17 + 1;
      }
      uStack_338._0_4_ = acStack_158;
      uStack_340 = (double)CONCAT44(0x5364ae,(undefined4)uStack_340);
      iVar12 = FUN_0057d570();
      uStack_338 = (double)CONCAT44(uStack_338._4_4_,iVar12 + 0x24);
      uStack_340 = (double)CONCAT44(0x5364c0,(undefined4)uStack_340);
      uVar14 = FUN_0057d5d0();
      uStack_340 = (double)CONCAT44(uVar14,0x5364c6);
      local_2ec = FUN_004e5437();
      if (local_2ec == 0) {
        uStack_338 = (double)CONCAT44(0x5364df,(char *)uStack_338);
        local_2ec = FUN_0057d5d0();
      }
      if (*(int *)(DAT_00695c10 + 0x12fc) != 0) {
        pbVar1 = (byte *)(*(int *)(DAT_00695c10 + 0x12fc) + 0x28);
        *pbVar1 = *pbVar1 | 1;
      }
      uStack_338 = (double)CONCAT44(0x536502,(char *)uStack_338);
      FUN_004dec20();
    }
    else {
      uStack_338 = 0.85;
      fVar4 = *(float *)(param_1 + 0x5b4);
      fVar5 = *(float *)(param_1 + 0x5b8);
      fVar6 = *(float *)(param_1 + 0x5bc);
      uStack_340 = (double)CONCAT44(param_1 + 0x590,0x535f01);
      local_2ec = FUN_00599720();
      local_290 = (*(float *)(param_1 + 0x5b4) - fVar4) / local_2d0;
      local_28c = (*(float *)(param_1 + 0x5b8) - fVar5) / local_2d0;
      local_288 = (*(float *)(param_1 + 0x5bc) - fVar6) / local_2d0;
      uStack_338 = (double)CONCAT44(0x535f6d,(char *)uStack_338);
      (**(code **)(**(int **)(param_1 + 0x268) + 100))();
      puVar17 = &DAT_00701550;
      puVar15 = (undefined4 *)(param_1 + 0x5f0);
      for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar15 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar15 = puVar15 + 1;
      }
      *(undefined4 *)(param_1 + 0x650) = 0;
      *(float *)(param_1 + 0x654) = DAT_007015b0;
      *(float *)(param_1 + 0x658) = DAT_007015b4;
      *(float *)(param_1 + 0x65c) = DAT_007015b8;
      iVar12 = *(int *)(param_1 + 0x24);
      puVar17 = &DAT_00701550;
      puVar15 = (undefined4 *)(param_1 + 0x620);
      for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar15 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar15 = puVar15 + 1;
      }
      iVar13 = *(int *)(iVar12 + 0x104);
      piVar3 = (int *)(iVar12 + 0x100);
      iVar12 = *piVar3;
      uStack_338 = *(double *)piVar3;
      uStack_340 = (double)((ulonglong)DAT_00671d7c << 0x20);
      uStack_348 = (double)CONCAT44(0x535ff5,(undefined4)uStack_348);
      (**(code **)(**(int **)(param_1 + 0x20) + 0x2c))();
      iVar20 = *(int *)(DAT_00695c10 + 0x12fc);
      if (iVar20 != 0) {
        fStack_300 = (float)iVar12;
        fVar4 = ((float)iVar13 * (float)_DAT_0064c368) / fStack_300;
        *(byte *)(iVar20 + 0x28) = *(byte *)(iVar20 + 0x28) & 0xfe;
        if (iVar12 < 0x280) {
          fStack_300 = fStack_300 * _DAT_0064e3bc;
        }
        else {
          fStack_300 = 1.0;
        }
        fStack_2c8 = DAT_00701594 * fVar4;
        fStack_2c4 = DAT_00701598 * fVar4;
        fStack_2e4 = -DAT_007015a4 - fStack_2c8;
        fStack_2e0 = -DAT_007015a8 - fStack_2c4;
        fVar4 = (-DAT_007015a0 - DAT_00701590 * fVar4) * _DAT_0064e3b8;
        local_308 = fStack_2e4 * _DAT_0064e3b8;
        fVar5 = fStack_2e0 * _DAT_0064e3b8;
        if ((float)_DAT_0064a8e8 <= fStack_300) {
          if (fStack_300 < _DAT_0064b240) goto LAB_00536111;
        }
        else {
          fStack_300 = 0.66;
LAB_00536111:
          uStack_338 = (double)CONCAT44(fStack_300,&fStack_2e8);
          uStack_340 = (double)CONCAT44(0x536124,(undefined4)uStack_340);
          FUN_005aad10();
          local_308 = (fStack_300 - _DAT_0064b240) * (float)_DAT_0064a658;
        }
        uStack_340 = (double)CONCAT44(local_308,fVar4);
        uStack_348 = (double)CONCAT44(auStack_128,0x53615f);
        uStack_338._0_4_ = (char *)fVar5;
        uStack_338._4_4_ = (char *)(param_1 + 0x590);
        uVar14 = FUN_005ab330();
        uStack_338 = (double)CONCAT44(uStack_338._4_4_,uVar14);
        uStack_340._4_4_ = afStack_284;
        uStack_340._0_4_ = 0x536170;
        uVar14 = FUN_005ab130();
        uStack_340 = (double)CONCAT44(uStack_340._4_4_,uVar14);
        uStack_348 = (double)(ulonglong)*(uint *)(DAT_00695c10 + 0x1308);
        uStack_350 = (double)CONCAT44(0x536185,(undefined4)uStack_350);
        FUN_004e4172();
      }
      uStack_338 = 1.0455212465009784e-306;
      uStack_340 = (double)CONCAT44(0x53619a,(undefined4)uStack_340);
      FUN_004ea55e();
      uStack_338 = 1.0455049495733038e-306;
      uStack_340 = (double)CONCAT44(0x5361ac,(undefined4)uStack_340);
      FUN_004ea55e();
    }
    puVar17 = (undefined4 *)(param_1 + 0x590);
    uStack_338 = (double)CONCAT44(puVar17,local_2ec);
    uStack_340 = (double)CONCAT44(0x536510,(undefined4)uStack_340);
    FUN_005dec10();
    uStack_338 = (double)CONCAT44(puVar17,&uStack_2c0);
    uStack_340 = (double)CONCAT44(0x536521,(undefined4)uStack_340);
    puVar15 = (undefined4 *)FUN_005aba00();
    puVar24 = (undefined4 *)(param_1 + 0x5c0);
    for (iVar12 = 0xc; iVar13 = DAT_00695c18, iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar24 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar24 = puVar24 + 1;
    }
    puVar15 = &DAT_00695930;
    puVar24 = &DAT_00695af8;
    for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar24 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar24 = puVar24 + 1;
    }
    puVar15 = &DAT_00695930;
    for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar15 = puVar15 + 1;
    }
    puVar17 = (undefined4 *)(param_1 + 0x5c0);
    puVar15 = &DAT_00695900;
    for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar15 = puVar15 + 1;
    }
    if (iVar13 != local_2ec) {
      uStack_338 = (double)CONCAT44(*(undefined4 *)(local_2ec + 0xc),&DAT_00695c1c);
      uStack_340 = (double)CONCAT44(0x53657b,(undefined4)uStack_340);
      FUN_0061c369();
    }
    DAT_00695c18 = local_2ec;
    _DAT_006956a0 = local_290;
    fVar4 = -DAT_00701590;
    fVar5 = -DAT_00701594;
    fVar7 = -DAT_00701598;
    _DAT_006956a4 = local_28c;
    _DAT_006956a8 = local_288;
    fVar8 = fVar4 * *(float *)(param_1 + 0x208) +
            fVar5 * *(float *)(param_1 + 0x214) + fVar7 * *(float *)(param_1 + 0x220) +
            *(float *)(param_1 + 0x22c);
    fVar6 = fVar5 * *(float *)(param_1 + 0x218) +
            fVar7 * *(float *)(param_1 + 0x224) + fVar4 * *(float *)(param_1 + 0x20c) +
            *(float *)(param_1 + 0x230);
    fVar4 = fVar5 * *(float *)(param_1 + 0x21c) +
            fVar7 * *(float *)(param_1 + 0x228) + fVar4 * *(float *)(param_1 + 0x210) +
            *(float *)(param_1 + 0x234);
    uStack_338 = (double)CONCAT44(acStack_158,0x53664c);
    pfVar16 = (float *)FUN_0057d5f0();
    fStack_2d8 = fVar6 * pfVar16[4] + fVar4 * pfVar16[7] + fVar8 * pfVar16[1] + pfVar16[10];
    fStack_2d4 = fVar6 * pfVar16[5] + fVar4 * pfVar16[8] + fVar8 * pfVar16[2] + pfVar16[0xb];
    fStack_2dc = fVar8 * *pfVar16 + fVar6 * pfVar16[3] + fVar4 * pfVar16[6] + pfVar16[9];
    uStack_338._4_4_ = (char *)&fStack_2dc;
    uStack_338._0_4_ = acStack_158;
    uStack_340 = (double)CONCAT44(0x5366ce,(undefined4)uStack_340);
    iVar12 = FUN_0057d570();
    uStack_338 = (double)CONCAT44(uStack_338._4_4_,iVar12 + 0x24);
    uStack_340 = (double)CONCAT44(0x5366e0,(undefined4)uStack_340);
    uVar14 = FUN_0057d5d0();
    uStack_340 = (double)CONCAT44(uVar14,0x5366e6);
    FUN_004e5437();
    uStack_338 = 2.69229413751945e-317;
    uStack_340 = (double)CONCAT44(fStack_2d4,fStack_2d8);
    uStack_348._4_4_ = (float *)fStack_2dc;
    uStack_348._0_4_ = 0x536717;
    uVar14 = FUN_0057d5d0();
    uStack_348 = (double)CONCAT44(uStack_348._4_4_,uVar14);
    uStack_350 = (double)CONCAT44(0x536720,(undefined4)uStack_350);
    FUN_005db580();
    uStack_338 = 2.69229413751945e-317;
    uStack_340 = (double)CONCAT44(fStack_2d4,fStack_2d8);
    uStack_348 = (double)CONCAT44(fStack_2dc,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x210));
    uStack_350 = (double)CONCAT44(0x53674f,(undefined4)uStack_350);
    FUN_005db580();
    iVar12 = *(int *)(param_1 + 0x268);
    if (((*(int *)(iVar12 + 0x5460) != 0) && (*(int *)(*(int *)(iVar12 + 0x5460) + 0x3344) == 0)) &&
       (*(int *)(iVar12 + 0x509c) != DAT_0068a8f0)) {
      uStack_338 = (double)CONCAT44(*(undefined4 *)(iVar12 + 0x509c),&uStack_2c0);
      uStack_340 = (double)CONCAT44(0x53679a,(undefined4)uStack_340);
      FUN_00437600();
      afStack_284[0] = 0.0;
      afStack_284[2] = 0.0;
      afStack_284[3] = 0.0;
      pcStack_274 = s_UNDEFINED_MODULE_0066c638;
      pcStack_270 = s_UNDEFINED_ROOM_0066c628;
      fStack_26c = 0.0;
      fStack_268 = 0.0;
      fStack_260 = -NAN;
      fStack_25c = -NAN;
      if ((int)uStack_2c0 != -1) {
        uStack_338 = (double)CONCAT44(afStack_284,(char *)uStack_338);
        puVar22 = &uStack_2c0;
        ppfVar25 = &pfStack_354;
        for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
          *ppfVar25 = (float *)*(undefined4 *)puVar22;
          puVar22 = (undefined8 *)((int)puVar22 + 4);
          ppfVar25 = ppfVar25 + 1;
        }
        pfStack_358 = (float *)0x536824;
        FUN_00438e50();
        pfStack_354 = &fStack_2e8;
        puVar22 = &uStack_2c0;
        puVar26 = &uStack_350;
        for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
          *(undefined4 *)puVar26 = *(undefined4 *)puVar22;
          puVar22 = (undefined8 *)((int)puVar22 + 4);
          puVar26 = (undefined8 *)((int)puVar26 + 4);
        }
        pfStack_358 = (float *)0x536841;
        FUN_00439660();
        uStack_338 = (double)CONCAT44(acStack_158,0x53685a);
        iVar12 = FUN_0057d570();
        fStack_2cc = fStack_2e8 - *(float *)(iVar12 + 0x24);
        fStack_2c8 = fStack_2e4 - *(float *)(iVar12 + 0x28);
        fStack_2c4 = fStack_2e0 - *(float *)(iVar12 + 0x2c);
        uStack_338 = (double)CONCAT44(&fStack_2cc,0x5368a0);
        fVar30 = (float10)FUN_005aabc0();
        if (fVar30 - (float10)(double)CONCAT44(afStack_284[3],afStack_284[2]) <
            (float10)*(float *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x332c) *
            (float10)_DAT_0064c0e0) {
          uStack_338 = (double)CONCAT44(acStack_158,0x5368df);
          pfVar16 = (float *)FUN_0057d570();
          fVar4 = DAT_00701580 * pfVar16[1];
          fVar6 = DAT_00701588 * pfVar16[7];
          fVar5 = DAT_00701584 * pfVar16[4];
          fVar7 = DAT_00701580 * pfVar16[2];
          fVar9 = DAT_00701588 * pfVar16[8];
          fVar8 = DAT_00701584 * pfVar16[5];
          *(float *)(param_1 + 0xd8) =
               DAT_00701580 * *pfVar16 + DAT_00701584 * pfVar16[3] + DAT_00701588 * pfVar16[6];
          *(float *)(param_1 + 0xdc) = fVar5 + fVar6 + fVar4;
          *(float *)(param_1 + 0xe0) = fVar8 + fVar9 + fVar7;
          uStack_338 = (double)CONCAT44(acStack_158,0x536977);
          iVar12 = FUN_0057d570();
          *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(iVar12 + 0x24);
          *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(iVar12 + 0x28);
          *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(iVar12 + 0x2c);
          uStack_338 = (double)CONCAT44(0x53699e,(char *)uStack_338);
          iVar12 = FUN_0057d5d0();
          uVar18 = 0xffffffff;
          pcVar28 = *(char **)(iVar12 + 0xc);
          do {
            pcVar27 = pcVar28;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pcVar27 = pcVar28 + 1;
            cVar2 = *pcVar28;
            pcVar28 = pcVar27;
          } while (cVar2 != '\0');
          uVar18 = ~uVar18;
          pcVar28 = pcVar27 + -uVar18;
          pcVar27 = (char *)(param_1 + 0xe4);
          for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(undefined4 *)pcVar27 = *(undefined4 *)pcVar28;
            pcVar28 = pcVar28 + 4;
            pcVar27 = pcVar27 + 4;
          }
          for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pcVar27 = *pcVar28;
            pcVar28 = pcVar28 + 1;
            pcVar27 = pcVar27 + 1;
          }
        }
      }
    }
  }
  uStack_338 = (double)CONCAT44(0x5369ca,(char *)uStack_338);
  FUN_0053a8b0();
  uStack_254 = 0;
  if (*(int *)(param_1 + 0x268) != 0) {
    if (DAT_006cdbc8 == 0) {
      uStack_338 = (double)CONCAT44(0x5369fc,(char *)uStack_338);
      FUN_00534c00();
    }
    else {
      uStack_338 = 0.0;
      uStack_340 = (double)CONCAT44(0x5369f3,(undefined4)uStack_340);
      FUN_0053cc60();
    }
    if (*(int *)(param_1 + 0x268) != 0) {
      uStack_338 = (double)CONCAT44(0x536a0b,(char *)uStack_338);
      fVar30 = (float10)FUN_004e2035();
      if ((float10)*(float *)(param_1 + 0x1d4) <= fVar30) {
        fVar4 = _DAT_00677704 + *(float *)(param_1 + 0x1d4);
        uStack_338 = (double)CONCAT44(0x536a2d,(char *)uStack_338);
        fVar30 = (float10)FUN_004e2035();
        if (fVar30 <= (float10)fVar4) {
          uStack_338 = (double)CONCAT44(param_1 + 0x1c8,*(undefined4 *)(param_1 + 0x268));
          uStack_340 = (double)CONCAT44(0x536a4b,(undefined4)uStack_340);
          FUN_00535830();
        }
      }
    }
  }
  if ((*(byte *)(param_1 + 0x57c) & 0x10) != 0) {
    uStack_338 = (double)CONCAT44(&uStack_254,auStack_f8);
    uStack_340 = (double)CONCAT44(0x536a6e,(undefined4)uStack_340);
    FUN_00537aa0();
  }
  uStack_338 = (double)CONCAT44(&dStack_160,&dStack_168);
  uStack_340 = (double)CONCAT44(&dStack_170,auStack_178);
  uStack_348 = (double)CONCAT44(auStack_180,auStack_188);
  uStack_350 = (double)CONCAT44(acStack_158,0x536ab4);
  puVar17 = (undefined4 *)FUN_0057d570();
  ppcVar23 = apcStack_378;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *ppcVar23 = (char *)*puVar17;
    puVar17 = puVar17 + 1;
    ppcVar23 = ppcVar23 + 1;
  }
  FUN_005de000();
  local_30c = DAT_00701590 * _DAT_0064c980;
  local_308 = DAT_00701594 * _DAT_0064c980;
  local_304 = DAT_00701598 * _DAT_0064c980;
  if (((*(int *)(param_1 + 0x578) == 0) && (iVar12 = *(int *)(param_1 + 0x268), iVar12 != 0)) &&
     (*(int *)(iVar12 + 0x5460) != 0)) {
    fStack_2dc = *(float *)(iVar12 + 0x1d4);
    fStack_2d8 = *(float *)(iVar12 + 0x1d8);
    fStack_2d4 = *(float *)(iVar12 + 0x1dc);
    fStack_2e4 = *(float *)(iVar12 + 0x1b4) - fStack_2d8;
    fStack_2e0 = *(float *)(iVar12 + 0x1b8) - fStack_2d4;
    fStack_2c8 = fStack_2e4 / local_2d0;
    fStack_2c4 = fStack_2e0 / local_2d0;
    fVar4 = (*(float *)(iVar12 + 0x1b0) - fStack_2dc) / local_2d0 + local_30c;
    fVar5 = local_308 + fStack_2c8;
    local_304 = local_304 + fStack_2c4;
    uStack_338 = (double)CONCAT44(acStack_158,0x536c04);
    pfVar16 = (float *)FUN_0057d5a0();
    local_30c = fVar4 * *pfVar16 + fVar5 * pfVar16[3] + local_304 * pfVar16[6];
    local_308 = fVar5 * pfVar16[4] + local_304 * pfVar16[7] + fVar4 * pfVar16[1];
    iVar12 = *(int *)(param_1 + 0x268);
    local_304 = fVar5 * pfVar16[5] + local_304 * pfVar16[8] + fVar4 * pfVar16[2];
    iVar13 = *(int *)(iVar12 + 0x5460);
    if ((*(int *)(iVar13 + 0x3344) == 0) && (*(int *)(iVar12 + 0xd98) == 0)) {
      fVar6 = *(float *)(iVar13 + 0x2a74);
      fVar7 = *(float *)(iVar13 + 0x2a78);
      fVar9 = DAT_007015b0 * *(float *)(param_1 + 0x208) +
              DAT_007015b4 * *(float *)(param_1 + 0x214) +
              DAT_007015b8 * *(float *)(param_1 + 0x220) + *(float *)(param_1 + 0x22c);
      fVar4 = *(float *)(param_1 + 0x20c);
      fVar5 = *(float *)(param_1 + 0x224);
      fVar8 = *(float *)(iVar13 + 0x2a7c);
      pfVar16 = (float *)(iVar12 + 0x2c4);
      pfVar29 = afStack_284;
      for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 + -1) {
        *pfVar29 = *pfVar16;
        pfVar16 = pfVar16 + 1;
        pfVar29 = pfVar29 + 1;
      }
      fVar10 = DAT_007015b4 * *(float *)(param_1 + 0x218) +
               DAT_007015b8 * fVar5 + DAT_007015b0 * fVar4 + *(float *)(param_1 + 0x230);
      fVar4 = DAT_007015b4 * *(float *)(param_1 + 0x21c) +
              DAT_007015b8 * *(float *)(param_1 + 0x228) +
              DAT_007015b0 * *(float *)(param_1 + 0x210) + *(float *)(param_1 + 0x234);
      fVar11 = afStack_284[3] * fVar10 + fStack_26c * fVar4 + afStack_284[0] * fVar9 + fStack_260;
      fVar5 = fVar9 * afStack_284[1] + (float)pcStack_274 * fVar10 + fStack_268 * fVar4 + fStack_25c
      ;
      fStack_258 = fVar9 * afStack_284[2] + (float)pcStack_270 * fVar10 + fStack_264 * fVar4 +
                   fStack_258;
      fStack_2cc = fVar7 * fStack_258 - fVar8 * fVar5;
      fVar4 = fVar11 * fVar8 - fVar6 * fStack_258;
      fVar5 = fVar6 * fVar5 - fVar11 * fVar7;
      fStack_2e8 = fVar4 * fVar8 - fVar5 * fVar7;
      fStack_2c8 = -*(float *)(iVar13 + 0x33b0);
      fStack_2c4 = -*(float *)(iVar13 + 0x33b4);
      local_30c = -*(float *)(iVar13 + 0x33ac) - fStack_2e8;
      local_308 = fStack_2c8 - (fVar6 * fVar5 - fStack_2cc * fVar8);
      local_304 = fStack_2c4 - (fStack_2cc * fVar7 - fVar6 * fVar4);
    }
  }
  dStack_298 = dStack_170 * _DAT_0064e3b0;
  dStack_168 = dStack_168 * _DAT_0064e3b0;
  dStack_2a8 = dStack_160 * _DAT_0064e3b0;
  dStack_2a0 = -dStack_168;
  fStack_2e4 = local_30c * _DAT_006d0794 + local_308 * _DAT_006d07a0 + local_304 * _DAT_006d07ac;
  fStack_2e0 = local_30c * _DAT_006d0798 + local_308 * _DAT_006d07a4 + local_304 * _DAT_006d07b0;
  uStack_2c0 = (double)(_DAT_006d0790 * local_30c +
                       local_308 * _DAT_006d079c + local_304 * _DAT_006d07a8);
  uStack_2b8 = (double)fStack_2e4;
  dStack_2b0 = (double)fStack_2e0;
  dStack_170 = dStack_298;
  dStack_160 = dStack_2a8;
  if ((DAT_00695bd0 != 0) || (DAT_00695bd4 != 0)) {
    uStack_338 = *(double *)(*(int *)(param_1 + 0x20) + 0xb98);
    uStack_340 = (double)CONCAT44(s_time__6_3f_00677e28,afStack_250);
    uStack_348 = (double)CONCAT44(0x536fb6,(undefined4)uStack_348);
    FUN_0061c369();
    uStack_348 = (double)CONCAT44(afStack_250,0x536fc3);
    FUN_004e9b0e();
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 0xbb0) & 1) == 0) {
      uStack_338 = *(double *)(*(int *)(param_1 + 0x20) + 0xb90);
      uStack_340 = (double)CONCAT44(s_dt0__6_3f_00677e1c,afStack_250);
      uStack_348 = (double)CONCAT44(0x537045,(undefined4)uStack_348);
      FUN_0061c369();
      uStack_348 = (double)CONCAT44(afStack_250,0x537052);
      FUN_004e9b0e();
      uStack_338 = 0.0;
      uStack_340 = (double)CONCAT44(s_dt1__6_3f_00677e10,afStack_250);
      uStack_348 = (double)CONCAT44(0x53706b,(undefined4)uStack_348);
      FUN_0061c369();
    }
    else {
      uStack_338 = 0.0;
      uStack_340 = (double)CONCAT44(s_dt0__6_3f_00677e1c,afStack_250);
      uStack_348 = (double)CONCAT44(0x536fe8,(undefined4)uStack_348);
      FUN_0061c369();
      uStack_348 = (double)CONCAT44(afStack_250,0x536ff5);
      FUN_004e9b0e();
      uStack_338 = *(double *)(*(int *)(param_1 + 0x20) + 0xb90);
      uStack_340 = (double)CONCAT44(s_dt1__6_3f_00677e10,afStack_250);
      uStack_348 = (double)CONCAT44(0x53701b,(undefined4)uStack_348);
      FUN_0061c369();
    }
    uStack_348._4_4_ = afStack_250;
    uStack_348 = (double)CONCAT44(uStack_348._4_4_,0x537078);
    FUN_004e9b0e();
  }
  if (DAT_00671d80 != 0) {
    uStack_338 = *(double *)(*(int *)(param_1 + 0x20) + 0xb98);
    uStack_340 = (double)CONCAT44(s_time__6_3f_00677e28,afStack_250);
    uStack_348 = (double)CONCAT44(0x5370ab,(undefined4)uStack_348);
    FUN_0061c369();
    uStack_348 = (double)CONCAT44(afStack_250,0x5370b8);
    FUN_004e9b0e();
    uStack_338 = (double)CONCAT44(DAT_00695bf4,DAT_00695bf0);
    uStack_340 = (double)CONCAT44(s_dt__6_3f_00677e04,afStack_250);
    uStack_348 = (double)CONCAT44(0x5370da,(undefined4)uStack_348);
    FUN_0061c369();
    uStack_348 = (double)CONCAT44(afStack_250,0x5370e7);
    FUN_004e9b0e();
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 0xbb0) & 1) == 0) {
      uStack_338 = *(double *)(*(int *)(param_1 + 0x20) + 0xb90) * _DAT_0064a720;
      uStack_340 = (double)CONCAT44(s_dt0__6_3f_00677e1c,afStack_250);
      uStack_348 = (double)CONCAT44(0x53716e,(undefined4)uStack_348);
      FUN_0061c369();
      uStack_348 = (double)CONCAT44(afStack_250,0x53717b);
      FUN_004e9b0e();
      uStack_338 = 0.0;
      uStack_340 = (double)CONCAT44(s_dt1__6_3f_00677e10,afStack_250);
      uStack_348 = (double)CONCAT44(0x537194,(undefined4)uStack_348);
      FUN_0061c369();
    }
    else {
      uStack_338 = 0.0;
      uStack_340 = (double)CONCAT44(s_dt0__6_3f_00677e1c,afStack_250);
      uStack_348 = (double)CONCAT44(0x53710c,(undefined4)uStack_348);
      FUN_0061c369();
      uStack_348 = (double)CONCAT44(afStack_250,0x537119);
      FUN_004e9b0e();
      uStack_338 = *(double *)(*(int *)(param_1 + 0x20) + 0xb90) * _DAT_0064a720;
      uStack_340 = (double)CONCAT44(s_dt1__6_3f_00677e10,afStack_250);
      uStack_348 = (double)CONCAT44(0x537140,(undefined4)uStack_348);
      FUN_0061c369();
    }
    uStack_348._4_4_ = afStack_250;
    uStack_348 = (double)CONCAT44(uStack_348._4_4_,0x5371a1);
    FUN_004e9b0e();
  }
  if (DAT_00695bd0 == 0) {
LAB_005372ef:
    if (DAT_00695bd4 == 0) goto LAB_00537863;
  }
  else {
    pcVar28 = s_Col_1__________________________00677de0;
    if (*(int *)(*(int *)(param_1 + 0x268) + 0xd98) == 0) {
      pcVar28 = &DAT_00677dd8;
    }
    uVar18 = 0xffffffff;
    do {
      pcVar27 = pcVar28;
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      pcVar27 = pcVar28 + 1;
      cVar2 = *pcVar28;
      pcVar28 = pcVar27;
    } while (cVar2 != '\0');
    uVar18 = ~uVar18;
    pfVar16 = (float *)(pcVar27 + -uVar18);
    pfVar29 = afStack_250;
    for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
      *pfVar29 = *pfVar16;
      pfVar16 = pfVar16 + 1;
      pfVar29 = pfVar29 + 1;
    }
    for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(char *)pfVar29 = *(char *)pfVar16;
      pfVar16 = (float *)((int)pfVar16 + 1);
      pfVar29 = (float *)((int)pfVar29 + 1);
    }
    uStack_338 = (double)CONCAT44(afStack_250,0x5371fc);
    FUN_004e9b0e();
    uVar18 = 0;
    iVar12 = *(int *)(*(int *)(param_1 + 0x268) + 0x5460);
    iVar13 = *(int *)(iVar12 + 0x3340);
    if (iVar13 < 1) {
LAB_00537278:
      uVar18 = 0xffffffff;
      pcVar28 = s_Shock_0_00677d8c;
      do {
        pcVar27 = pcVar28;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar27 = pcVar28 + 1;
        cVar2 = *pcVar28;
        pcVar28 = pcVar27;
      } while (cVar2 != '\0');
      uVar18 = ~uVar18;
      pfVar16 = (float *)(pcVar27 + -uVar18);
      pfVar29 = afStack_250;
      for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pfVar29 = *pfVar16;
        pfVar16 = pfVar16 + 1;
        pfVar29 = pfVar29 + 1;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(char *)pfVar29 = *(char *)pfVar16;
        pfVar16 = (float *)((int)pfVar16 + 1);
        pfVar29 = (float *)((int)pfVar29 + 1);
      }
    }
    else {
      puVar21 = (uint *)(iVar12 + 0x3be8);
      do {
        uVar19 = *puVar21;
        puVar21 = puVar21 + 1;
        uVar18 = uVar18 | uVar19;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      if (uVar18 == 0) goto LAB_00537278;
      uStack_338 = *(double *)(iVar12 + 0x3c00);
      uStack_340 = *(double *)(iVar12 + 0x3bf8);
      uStack_348 = *(double *)(iVar12 + 0x3bf0);
      uStack_350 = *(double *)(iVar12 + 0x3be8);
      pfStack_358 = afStack_250;
      pfStack_354 = (float *)s_Shock_1________d__d__d__d__d__d___00677d98;
      pfStack_35c = (float *)0x537273;
      FUN_0061c369();
    }
    uStack_338 = (double)CONCAT44(afStack_250,0x5372ae);
    FUN_004e9b0e();
    uStack_338 = (double)*(float *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x271c);
    uStack_340 = (double)CONCAT44(s_steering__5_3f_00677d78,afStack_250);
    uStack_348 = (double)CONCAT44(0x5372d6,(undefined4)uStack_348);
    FUN_0061c369();
    uStack_348 = (double)CONCAT44(afStack_250,0x5372e3);
    FUN_004e9b0e();
    if (DAT_00695bd0 == 0) goto LAB_005372ef;
  }
  uStack_338 = (double)CONCAT44(acStack_158,0x537312);
  iVar13 = FUN_0057d5a0();
  iVar12 = *(int *)(param_1 + 0x268);
  uStack_338 = (double)(*(float *)(iVar13 + 4) * *(float *)(iVar12 + 0xcf4) +
                       *(float *)(iVar12 + 0xcf8) * *(float *)(iVar13 + 0x10) +
                       *(float *)(iVar12 + 0xcfc) * *(float *)(iVar13 + 0x1c));
  uStack_340 = (double)CONCAT44(s_iVy__8_4f_00677d68,afStack_250);
  uStack_348 = (double)CONCAT44(0x53734b,(undefined4)uStack_348);
  FUN_0061c369();
  uStack_348 = (double)CONCAT44(afStack_250,0x537358);
  FUN_004e9b0e();
  iVar12 = *(int *)(*(int *)(param_1 + 0x268) + 0x5460);
  uStack_338 = *(double *)(iVar12 + 0x344c);
  uStack_340 = *(double *)(iVar12 + 0x3444);
  uStack_348 = (double)CONCAT44(s_air__d__d__d__d_00677d50,afStack_250);
  uStack_350 = (double)CONCAT44(0x537395,(undefined4)uStack_350);
  FUN_0061c369();
  uStack_350 = (double)CONCAT44(afStack_250,0x5373a2);
  FUN_004e9b0e();
  if (DAT_00695bd0 != 0) {
    uStack_338 = (double)CONCAT44(acStack_158,0x5373c8);
    pfVar16 = (float *)FUN_0057d5a0();
    iVar12 = *(int *)(param_1 + 0x268);
    fStack_2dc = *pfVar16 * *(float *)(iVar12 + 0xcf4) +
                 pfVar16[6] * *(float *)(iVar12 + 0xcfc) + pfVar16[3] * *(float *)(iVar12 + 0xcf8);
    fStack_2d8 = pfVar16[7] * *(float *)(iVar12 + 0xcfc) +
                 pfVar16[4] * *(float *)(iVar12 + 0xcf8) + pfVar16[1] * *(float *)(iVar12 + 0xcf4);
    fStack_2d4 = pfVar16[8] * *(float *)(iVar12 + 0xcfc) +
                 pfVar16[5] * *(float *)(iVar12 + 0xcf8) + pfVar16[2] * *(float *)(iVar12 + 0xcf4);
    fStack_2e4 = *(float *)(iVar12 + 0x1c0) * _DAT_0064b40c;
    uStack_340._4_4_ = afStack_250;
    fStack_2e0 = *(float *)(iVar12 + 0x1c4) * _DAT_0064b40c;
    uStack_338 = (double)CONCAT44(*(undefined4 *)(*(int *)(iVar12 + 0x5460) + 0x3bd8),
                                  s_gear__d_00677d44);
    fVar4 = *(float *)(iVar12 + 0x1bc) * _DAT_0064b40c * _DAT_0064e3ac;
    fVar5 = fStack_2e4 * _DAT_0064e3ac;
    fVar6 = fStack_2e0 * _DAT_0064e3ac;
    uStack_340._0_4_ = 0x5374bb;
    FUN_0061c369();
    uStack_340 = (double)CONCAT44(uStack_340._4_4_,afStack_250);
    uStack_348 = (double)CONCAT44(0x5374c8,(undefined4)uStack_348);
    FUN_004e9b0e();
    uStack_338 = (double)*(float *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x3c38);
    uStack_340 = (double)CONCAT44(s_throttle__5_3f_00677d30,afStack_250);
    uStack_348 = (double)CONCAT44(0x5374f2,(undefined4)uStack_348);
    FUN_0061c369();
    uStack_348 = (double)CONCAT44(afStack_250,0x5374ff);
    FUN_004e9b0e();
    uStack_338 = (double)*(float *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x3bd0);
    uStack_340 = (double)CONCAT44(s_braking__5_3f_00677d20,afStack_250);
    uStack_348 = (double)CONCAT44(0x537529,(undefined4)uStack_348);
    FUN_0061c369();
    uStack_348 = (double)CONCAT44(afStack_250,0x537536);
    FUN_004e9b0e();
    uStack_338 = (double)*(float *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x3c3c);
    uStack_340 = (double)CONCAT44(s_tach__5_2f_00677d10,afStack_250);
    uStack_348 = (double)CONCAT44(0x537560,(undefined4)uStack_348);
    FUN_0061c369();
    uStack_348 = (double)CONCAT44(afStack_250,0x53756d);
    FUN_004e9b0e();
    iVar12 = *(int *)(*(int *)(param_1 + 0x268) + 0x5460);
    uStack_338 = (double)*(float *)(iVar12 + 0x3354);
    uStack_340 = (double)*(float *)(iVar12 + 0x3350);
    uStack_348 = (double)*(float *)(iVar12 + 0x334c);
    pfStack_358 = afStack_250;
    uStack_350 = (double)*(float *)(iVar12 + 0x3348);
    pfStack_354 = (float *)s_h__6_4f__6_4f__6_4f__6_4f_00677cf0;
    pfStack_35c = (float *)0x5375be;
    FUN_0061c369();
    pfStack_35c = afStack_250;
    uStack_360 = 0x5375cb;
    FUN_004e9b0e();
    iVar12 = *(int *)(*(int *)(param_1 + 0x268) + 0x5460);
    uStack_338 = *(double *)(iVar12 + 0x3474);
    uStack_340 = *(double *)(iVar12 + 0x346c);
    uStack_348 = (double)CONCAT44(s_uze__d__d__d__d_00677cdc,afStack_250);
    uStack_350 = (double)CONCAT44(0x537608,(undefined4)uStack_350);
    FUN_0061c369();
    uStack_350 = (double)CONCAT44(afStack_250,0x537615);
    FUN_004e9b0e();
    iVar12 = *(int *)(*(int *)(param_1 + 0x268) + 0x5460);
    uStack_338 = (double)*(float *)(iVar12 + 0x33b4);
    uStack_340 = (double)*(float *)(iVar12 + 0x33b0);
    uStack_348 = (double)*(float *)(iVar12 + 0x33ac);
    uStack_350 = (double)CONCAT44(s_carv_iA__8_4f__8_4f__8_4f_00677cbc,afStack_250);
    pfStack_354 = (float *)0x537659;
    FUN_0061c369();
    pfStack_354 = afStack_250;
    pfStack_358 = (float *)0x537666;
    FUN_004e9b0e();
    uStack_338 = (double)fStack_2d4;
    uStack_340 = (double)fStack_2d8;
    uStack_348 = (double)fStack_2dc;
    uStack_350 = (double)CONCAT44(s_iV__8_4f__8_4f__8_4f_00677ca4,afStack_250);
    pfStack_354 = (float *)0x537699;
    FUN_0061c369();
    pfStack_354 = afStack_250;
    pfStack_358 = (float *)0x5376a6;
    FUN_004e9b0e();
    uStack_338 = (double)fVar6;
    uStack_340 = (double)fVar5;
    uStack_348 = (double)fVar4;
    uStack_350 = (double)CONCAT44(s_iW__8_4f__8_4f__8_4f_00677c8c,afStack_250);
    pfStack_354 = (float *)0x5376d6;
    FUN_0061c369();
    pfStack_354 = afStack_250;
    pfStack_358 = (float *)0x5376e3;
    FUN_004e9b0e();
    uStack_338 = dStack_298;
    uStack_340 = dStack_2a0;
    uStack_348 = dStack_2a8;
    uStack_350 = dStack_2b0;
    pfStack_354 = uStack_2b8._4_4_;
    pfStack_358 = (float *)uStack_2b8;
    pfStack_35c = (float *)uStack_2c0._4_4_;
    uStack_360 = (int)uStack_2c0;
    pfStack_368 = afStack_250;
    pcStack_364 = s_toDarimA__8_4f__8_4f__8_4f__8_4f_00677c5c;
    pfStack_36c = (float *)0x537758;
    FUN_0061c369();
    pfStack_36c = afStack_250;
    apcStack_378[2] = (char *)0x537765;
    FUN_004e9b0e();
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x268) + 0x5460) + 0x3344) == 0) {
      uStack_338._4_4_ = s_CarExpl_0_00677c28;
    }
    else {
      uStack_338._4_4_ = s_CarExpl_1______________________00677c38;
    }
    uStack_338 = (double)CONCAT44(uStack_338._4_4_,0x53778f);
    FUN_004e9b0e();
    uStack_338 = (double)CONCAT44(acStack_158,0x5377a8);
    iVar12 = FUN_0057d570();
    uStack_338 = (double)*(float *)(iVar12 + 0x2c);
    uStack_340 = (double)CONCAT44(auStack_128,0x5377c7);
    iVar12 = FUN_0057d570();
    uStack_340 = (double)*(float *)(iVar12 + 0x28);
    uStack_348 = (double)CONCAT44(afStack_284,0x5377e6);
    iVar12 = FUN_0057d570();
    uStack_348 = (double)*(float *)(iVar12 + 0x24);
    uStack_350 = (double)CONCAT44(s_M_v_3___8_4f__8_4f__8_4f_00677c0c,afStack_250);
    pfStack_354 = (float *)0x537801;
    FUN_0061c369();
    pfStack_354 = afStack_250;
    pfStack_358 = (float *)0x53780e;
    FUN_004e9b0e();
    uStack_338 = dStack_160;
    uStack_340 = dStack_168;
    uStack_348 = dStack_170;
    uStack_350 = (double)CONCAT44(s_M_angles__8_4f__8_4f__8_4f_00677bec,afStack_250);
    pfStack_354 = (float *)0x537853;
    FUN_0061c369();
    pfStack_354 = afStack_250;
    pfStack_358 = (float *)0x537860;
    FUN_004e9b0e();
  }
LAB_00537863:
  if (DAT_00671d80 != 0) {
    uStack_340._4_4_ = afStack_250;
    uStack_338 = (double)CONCAT44(DAT_006f557c,s_mi_show_num__d_00677bd8);
    uStack_340._0_4_ = 0x537889;
    FUN_0061c369();
    uStack_340 = (double)CONCAT44(uStack_340._4_4_,afStack_250);
    uStack_348 = (double)CONCAT44(0x537896,(undefined4)uStack_348);
    FUN_004e9b0e();
    uStack_338 = (double)CONCAT44(DAT_006f5544,DAT_006f5540);
    uStack_340 = (double)CONCAT44(s_mi_show_time__6_3f_00677bc0,afStack_250);
    uStack_348 = (double)CONCAT44(0x5378b8,(undefined4)uStack_348);
    FUN_0061c369();
    uStack_348 = (double)CONCAT44(afStack_250,0x5378c5);
    FUN_004e9b0e();
    uStack_340._4_4_ = afStack_250;
    uStack_338 = (double)CONCAT44(DAT_006ee220 + DAT_006ee178,s_veh_runnum__d_00677bb0);
    uStack_340._0_4_ = 0x5378e8;
    FUN_0061c369();
    uStack_340 = (double)CONCAT44(uStack_340._4_4_,afStack_250);
    uStack_348 = (double)CONCAT44(0x5378f5,(undefined4)uStack_348);
    FUN_004e9b0e();
    uStack_338 = _DAT_006ee218 + _DAT_006ee170;
    uStack_340 = (double)CONCAT44(s_veh_runtime__6_3f_00677b98,afStack_250);
    uStack_348 = (double)CONCAT44(0x537919,(undefined4)uStack_348);
    FUN_0061c369();
    uStack_348 = (double)CONCAT44(afStack_250,0x537926);
    FUN_004e9b0e();
    uStack_338 = (double)CONCAT44(DAT_006f551c,DAT_006f5518);
    uStack_340 = (double)CONCAT44(s_total_col_time__6_3f_00677b80,afStack_250);
    uStack_348 = (double)CONCAT44(0x537948,(undefined4)uStack_348);
    FUN_0061c369();
    uStack_348 = (double)CONCAT44(afStack_250,0x537955);
    FUN_004e9b0e();
    uStack_338 = (double)CONCAT44(DAT_006ee194,DAT_006ee190);
    uStack_340 = (double)CONCAT44(s_veh_carv_run_time__6_3f_00677b64,afStack_250);
    uStack_348 = (double)CONCAT44(0x537978,(undefined4)uStack_348);
    FUN_0061c369();
    uStack_348 = (double)CONCAT44(afStack_250,0x537985);
    FUN_004e9b0e();
    uStack_340._4_4_ = afStack_250;
    uStack_338 = (double)CONCAT44(DAT_006ee198,s_total_veh_carv_run_num__d_00677b48);
    uStack_340._0_4_ = 0x5379a1;
    FUN_0061c369();
    uStack_340 = (double)CONCAT44(uStack_340._4_4_,afStack_250);
    uStack_348 = (double)CONCAT44(0x5379ae,(undefined4)uStack_348);
    FUN_004e9b0e();
    uStack_338 = (double)CONCAT44(DAT_006ee1a4,DAT_006ee1a0);
    uStack_340 = (double)CONCAT44(s_veh_copter_run_time__6_3f_00677b28,afStack_250);
    uStack_348 = (double)CONCAT44(0x5379d0,(undefined4)uStack_348);
    FUN_0061c369();
    uStack_348 = (double)CONCAT44(afStack_250,0x5379dd);
    FUN_004e9b0e();
    uStack_340._4_4_ = afStack_250;
    uStack_338 = (double)CONCAT44(DAT_006ee1a8,s_total_veh_copter_run_num__d_00677b08);
    uStack_340._0_4_ = 0x5379f8;
    FUN_0061c369();
    uStack_340 = (double)CONCAT44(uStack_340._4_4_,afStack_250);
    uStack_348 = (double)CONCAT44(0x537a05,(undefined4)uStack_348);
    FUN_004e9b0e();
    uStack_338 = (double)CONCAT44(DAT_006965bc,DAT_006965b8);
    uStack_340 = (double)CONCAT44(s_CarV_get_ground_time__6_3f_00677ae8,afStack_250);
    uStack_348 = (double)CONCAT44(0x537a27,(undefined4)uStack_348);
    FUN_0061c369();
    uStack_348 = (double)CONCAT44(afStack_250,0x537a34);
    FUN_004e9b0e();
    uStack_340._4_4_ = afStack_250;
    uStack_338 = (double)CONCAT44(DAT_006965c0,s_CarV_get_ground_num__d_00677acc);
    uStack_340._0_4_ = 0x537a50;
    FUN_0061c369();
    uStack_340 = (double)CONCAT44(uStack_340._4_4_,afStack_250);
    uStack_348 = (double)CONCAT44(0x537a5d,(undefined4)uStack_348);
    FUN_004e9b0e();
  }
  uStack_338 = 2.12469873765218e-314;
  FUN_005d29a0();
  if (((DAT_00695bd0 != 0) || (DAT_00671d80 != 0)) || (DAT_00695bd4 != 0)) {
    uStack_338 = (double)CONCAT44(0x537a89,(char *)uStack_338);
    FUN_004e9650();
  }
  return;
}

