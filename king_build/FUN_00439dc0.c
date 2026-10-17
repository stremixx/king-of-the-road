
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00439dc0(undefined4 param_1,double *param_2,char *param_3,undefined4 param_4,char *param_5,
            char *param_6,char *param_7,undefined1 *param_8,double *param_9)

{
  double dVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  double *pdVar10;
  undefined4 *puVar11;
  double *pdVar12;
  undefined4 *puVar13;
  char **ppcVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  char *pcStack_380;
  char *pcStack_37c;
  double *pdStack_378;
  char *apcStack_374 [4];
  char *pcStack_364;
  char *pcStack_360;
  int *piStack_35c;
  double *pdStack_358;
  int iStack_344;
  int iStack_340;
  undefined4 uStack_33c;
  double dStack_338;
  undefined8 uStack_330;
  double dStack_328;
  double dStack_320;
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  double dStack_304;
  double dStack_2fc;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  double dStack_2ec;
  double dStack_2e4;
  double dStack_2dc;
  char *local_2d4;
  undefined *local_2d0;
  undefined4 local_2cc [8];
  double dStack_2ac;
  double dStack_2a4;
  undefined1 auStack_294 [24];
  undefined1 auStack_27c [32];
  double adStack_25c [36];
  double dStack_13c;
  int iStack_1c;
  int iStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063da36;
  pvStack_14 = ExceptionList;
  pdStack_358 = (double *)0x8;
  piStack_35c = (int *)s_START__0066b830;
  local_2d4 = s__getOrientationSmoothed_PlayerId_0066d700;
  local_2d0 = &DAT_0071d768;
  pcStack_360 = "h";
  ExceptionList = &pvStack_14;
  FUN_00401870();
  pdStack_358 = (double *)s__getOrientationSmoothed_PlayerId_0066d700;
  piStack_35c = (int *)0x439e1a;
  FUN_004018b0();
  local_c = 0;
  puVar6 = &param_3;
  puVar11 = local_2cc;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar11 = puVar11 + 1;
  }
  pdStack_358 = (double *)0x439e42;
  iVar8 = FUN_0040a460();
  puVar3 = param_8;
  pcVar2 = param_7;
  pcVar7 = param_3;
  if (iVar8 == 0) {
    pdStack_358 = param_9;
    piStack_35c = (int *)param_8;
    pcStack_360 = param_7;
    pcStack_364 = param_6;
    apcStack_374[3] = param_5;
    apcStack_374[2] = param_3;
    apcStack_374[1] = s___d__g__d__d__x__0066bc0c;
    apcStack_374[0] = &DAT_0077d640;
    pdStack_378 = (double *)0x439e6d;
    FUN_0061c369();
    pdStack_378 = (double *)&DAT_0077d640;
    pcStack_37c = s_PositionId_0066bc00;
    pcStack_380 = s_Invalid_id_0066bbf4;
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3c3e);
  }
  if ((-1 < (int)pcVar7) && (pcVar7 < (char *)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    iVar8 = *(int *)(DAT_0068be98 + (int)pcVar7 * 4);
    iVar9 = *(int *)(iVar8 + 0x78);
    if ((int)puVar3 < *(int *)(iVar8 + 0x7c) - iVar9 >> 2) {
      pdStack_358 = (double *)0x439ecb;
      iVar8 = (**(code **)(**(int **)(iVar9 + (int)puVar3 * 4) + 0x18))();
      if ((int)pcVar2 < iVar8) goto LAB_00439ef9;
    }
    pdStack_358 = (double *)&DAT_0068c120;
    piStack_35c = (int *)&DAT_0068c120;
    pcStack_360 = s_Invalid_Position_Id_0066bbe0;
    pcStack_364 = (char *)0x3c3e;
    apcStack_374[3] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_374[2] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_374[1] = (char *)0x64;
    apcStack_374[0] = (char *)0x21;
    pdStack_378 = (double *)0x439ef6;
    FUN_00401010();
  }
LAB_00439ef9:
  if (param_2 == DAT_0068a8f0) {
    puVar6 = &param_3;
    ppcVar14 = apcStack_374;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppcVar14 = (char *)*puVar6;
      puVar6 = puVar6 + 1;
      ppcVar14 = ppcVar14 + 1;
    }
    pdStack_378 = (double *)param_1;
    pcStack_37c = (char *)0x439f1d;
    FUN_00439b50();
    pdStack_358 = (double *)0x8;
    piStack_35c = (int *)s_COMPL__0066b7ec;
    pcStack_360 = "h";
    FUN_00401870();
    pdStack_358 = (double *)s__getOrientationSmoothed_PlayerId_0066d700;
    piStack_35c = (int *)0x439f40;
    FUN_004018b0();
    ExceptionList = pvStack_14;
    return param_1;
  }
  dStack_338 = (double)CONCAT44(dStack_338._4_4_,&pdStack_358);
  pdStack_358 = param_2;
  piStack_35c = (int *)0x439f65;
  iVar8 = FUN_00456670();
  if (iVar8 != 0) {
    pdStack_358 = (double *)&DAT_0066c4e4;
    piStack_35c = (int *)&DAT_0077d5c0;
    pcStack_360 = (char *)0x439f7b;
    FUN_0061c369();
    pcStack_360 = &DAT_0077d5c0;
    pcStack_364 = s_PlayerId_0066c4d8;
    apcStack_374[3] = s_Invalid_id_0066bbf4;
    apcStack_374[2] = (char *)0x3c41;
    apcStack_374[1] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_374[0] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    pdStack_378 = (double *)0x64;
    pcStack_37c = (char *)0x21;
    pcStack_380 = (char *)0x439fa2;
    FUN_00401010();
  }
  dStack_338 = (double)CONCAT44(dStack_338._4_4_,&pdStack_358);
  pdStack_358 = param_2;
  piStack_35c = (int *)0x439fb6;
  cVar5 = FUN_00420930();
  if (cVar5 != '\0') {
    puVar6 = &param_3;
    ppcVar14 = apcStack_374;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppcVar14 = (char *)*puVar6;
      puVar6 = puVar6 + 1;
      ppcVar14 = ppcVar14 + 1;
    }
    pdStack_378 = (double *)param_1;
    pcStack_37c = (char *)0x439fd5;
    FUN_00439b50();
    pdStack_358 = (double *)0x8;
    piStack_35c = (int *)s_COMPL__0066b7ec;
    pcStack_360 = "h";
    FUN_00401870();
    pdStack_358 = (double *)s__getOrientationSmoothed_PlayerId_0066d700;
    piStack_35c = (int *)0x439ff8;
    FUN_004018b0();
    ExceptionList = pvStack_14;
    return param_1;
  }
  piStack_35c = &iStack_340;
  pdStack_358 = (double *)0x0;
  puVar6 = &param_3;
  ppcVar14 = &pcStack_37c;
  for (pcStack_380 = (char *)0x8; pcStack_380 != (char *)0x0; pcStack_380 = pcStack_380 + -1) {
    *ppcVar14 = (char *)*puVar6;
    puVar6 = puVar6 + 1;
    ppcVar14 = ppcVar14 + 1;
  }
  iStack_344 = 0xf;
  dStack_338 = (double)CONCAT44(dStack_338._4_4_,&pcStack_380);
  iStack_340 = 0x33333333;
  uStack_33c = 0x402e3333;
  FUN_0041d3f0(&param_2);
  FUN_0043bff0(local_2cc);
  if (((double)CONCAT44(uStack_33c,iStack_340) != _DAT_0064a668) &&
     (_DAT_0064a908 - (double)CONCAT44(uStack_33c,iStack_340) < _DAT_0064a908)) {
    pdStack_358 = (double *)0x43a08c;
    iStack_344 = __ftol();
  }
  piStack_35c = &iStack_340;
  pdStack_358 = (double *)0x0;
  puVar6 = &param_3;
  ppcVar14 = &pcStack_37c;
  for (pcStack_380 = (char *)0x8; pcStack_380 != (char *)0x0; pcStack_380 = pcStack_380 + -1) {
    *ppcVar14 = (char *)*puVar6;
    puVar6 = puVar6 + 1;
    ppcVar14 = ppcVar14 + 1;
  }
  iStack_340 = 0x33333333;
  dStack_338 = (double)CONCAT44(dStack_338._4_4_,&pcStack_380);
  uStack_33c = 0xc02e3333;
  FUN_0041d3f0(&param_2);
  FUN_0043bff0(local_2cc);
  if (((double)CONCAT44(uStack_33c,iStack_340) != _DAT_0064a668) &&
     ((double)CONCAT44(uStack_33c,iStack_340) + _DAT_0064a908 < (double)iStack_344)) {
    pdStack_358 = (double *)0x43a107;
    iStack_344 = __ftol();
  }
  if (iStack_344 < 1) {
    puVar6 = &param_3;
    ppcVar14 = apcStack_374;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppcVar14 = (char *)*puVar6;
      puVar6 = puVar6 + 1;
      ppcVar14 = ppcVar14 + 1;
    }
    pdStack_378 = (double *)param_1;
    pcStack_37c = (char *)0x43a12f;
    FUN_00439b50();
    pdStack_358 = (double *)0x8;
    piStack_35c = (int *)s_COMPL__0066b7ec;
    pcStack_360 = "h";
    FUN_00401870();
    pdStack_358 = (double *)s__getOrientationSmoothed_PlayerId_0066d700;
    piStack_35c = (int *)0x43a152;
    FUN_004018b0();
    ExceptionList = pvStack_14;
    return param_1;
  }
  pdStack_378 = (double *)auStack_294;
  puVar6 = &param_3;
  ppcVar14 = apcStack_374;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *ppcVar14 = (char *)*puVar6;
    puVar6 = puVar6 + 1;
    ppcVar14 = ppcVar14 + 1;
  }
  pcStack_37c = (char *)0x43a185;
  FUN_00435cd0();
  pdStack_378 = &dStack_2ac;
  puVar6 = &param_3;
  ppcVar14 = apcStack_374;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *ppcVar14 = (char *)*puVar6;
    puVar6 = puVar6 + 1;
    ppcVar14 = ppcVar14 + 1;
  }
  pcStack_37c = (char *)0x43a1a1;
  FUN_00439180();
  pdVar10 = &dStack_2ac;
  pdVar12 = &dStack_328;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pdVar12 = *(undefined4 *)pdVar10;
    pdVar10 = (double *)((int)pdVar10 + 4);
    pdVar12 = (double *)((int)pdVar12 + 4);
  }
  iStack_1c = 0x24;
  local_c = CONCAT31(local_c._1_3_,1);
  if (&stack0x00000000 != (undefined1 *)0x13c) {
    fVar17 = (float10)fpatan((float10)dStack_2a4,(float10)dStack_2ac);
    dStack_13c = (double)fVar17;
  }
  iStack_18 = 0x25;
  iVar8 = 0;
  do {
    puVar6 = &param_3;
    puVar11 = local_2cc;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar11 = puVar11 + 1;
    }
    iStack_340 = 1;
    if (1 < iStack_344) {
      iVar9 = (-(uint)(iVar8 != 0) & 0xfffffffe) + 1;
      dStack_338 = (double)CONCAT44(dStack_338._4_4_,iVar9);
      uStack_330 = (double)iVar9;
      do {
        piStack_35c = &uStack_310;
        pdStack_358 = (double *)0x0;
        uStack_30c = uStack_330._4_4_;
        uVar4 = (undefined4)uStack_330;
        puVar6 = local_2cc;
        ppcVar14 = &pcStack_37c;
        for (pcStack_380 = (char *)0x8; pcStack_380 != (char *)0x0; pcStack_380 = pcStack_380 + -1)
        {
          *ppcVar14 = (char *)*puVar6;
          puVar6 = puVar6 + 1;
          ppcVar14 = ppcVar14 + 1;
        }
        uStack_310 = uVar4;
        dStack_338 = (double)CONCAT44(dStack_338._4_4_,&pcStack_380);
        FUN_0041d3f0(&param_2);
        puVar6 = (undefined4 *)FUN_0043bff0(auStack_27c);
        puVar11 = puVar6;
        puVar13 = local_2cc;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        if ((double)CONCAT44(uStack_30c,uStack_310) != _DAT_0064a668) break;
        pdStack_378 = &dStack_2ec;
        ppcVar14 = apcStack_374;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *ppcVar14 = (char *)*puVar6;
          puVar6 = puVar6 + 1;
          ppcVar14 = ppcVar14 + 1;
        }
        pcStack_37c = (char *)0x43a2c0;
        FUN_00439180();
        dStack_328 = dStack_328 + dStack_2ec;
        dStack_320 = dStack_2e4 + dStack_320;
        uStack_318 = dStack_2dc + uStack_318;
        fVar17 = (float10)fpatan((float10)dStack_2e4,(float10)dStack_2ec);
        if (iVar8 == 0) {
          if (adStack_25c + iStack_18 == (double *)0x0) {
            iStack_18 = iStack_18 + 1;
          }
          else {
            adStack_25c[iStack_18] = (double)fVar17;
            iStack_18 = iStack_18 + 1;
          }
        }
        else {
          iStack_1c = iStack_1c + -1;
          if (adStack_25c + iStack_1c != (double *)0x0) {
            adStack_25c[iStack_1c] = (double)fVar17;
          }
        }
        iStack_340 = iStack_340 + 1;
      } while (iStack_340 < iStack_344);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 2);
  uStack_330 = 1.0;
  fVar17 = (float10)adStack_25c[iStack_1c];
  pdVar10 = adStack_25c + iStack_1c + 1;
  if (pdVar10 != adStack_25c + iStack_18) {
    fVar15 = (float10)1.0;
    do {
      fVar16 = (float10)*pdVar10;
      fVar15 = fVar15 + (float10)_DAT_0064a660;
      dStack_338 = (double)(fVar17 + (float10)_DAT_0064a590);
      if (fVar16 + (float10)_DAT_0064a818 < (float10)dStack_338) {
        do {
          fVar16 = fVar16 + (float10)_DAT_0064a810;
        } while (fVar16 + (float10)_DAT_0064a818 < (float10)dStack_338);
      }
      if ((float10)dStack_338 < fVar16 - (float10)_DAT_0064a818) {
        do {
          fVar16 = fVar16 - (float10)_DAT_0064a810;
        } while ((float10)dStack_338 < fVar16 - (float10)_DAT_0064a818);
      }
      pdVar10 = pdVar10 + 1;
      fVar17 = ((fVar15 - (float10)_DAT_0064a660) * fVar17 + fVar16) / fVar15;
    } while (pdVar10 != adStack_25c + iStack_18);
    if (fVar15 == (float10)_DAT_0064a668) goto LAB_0043a479;
  }
  uStack_318 = uStack_318 *
               (_DAT_0064a660 /
               SQRT(uStack_318 * uStack_318 + dStack_320 * dStack_320 + dStack_328 * dStack_328));
LAB_0043a479:
  fVar15 = (float10)fcos(fVar17);
  uStack_2f4 = (undefined4)uStack_318;
  pdStack_358 = &dStack_304;
  piStack_35c = (int *)auStack_294;
  pcStack_360 = (char *)param_1;
  uStack_2f0 = uStack_318._4_4_;
  dVar1 = (double)fVar15;
  fVar17 = (float10)fsin(fVar17);
  fVar15 = (float10)_DAT_0064a660 /
           SQRT((float10)uStack_318 * (float10)uStack_318 +
                fVar17 * fVar17 + (float10)dVar1 * (float10)dVar1);
  dStack_304 = (double)(fVar15 * (float10)dVar1);
  dStack_2fc = (double)(fVar17 * fVar15);
  pcStack_364 = (char *)0x43a4e3;
  FUN_004398c0();
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar7 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar7 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar7 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar7 = s__getOrientationSmoothed_PlayerId_0066d700;
  cVar5 = s__getOrientationSmoothed_PlayerId_0066d700[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar5 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar5 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar5;
      cVar5 = *pcVar7;
    }
  }
  ExceptionList = pvStack_14;
  return param_1;
}

