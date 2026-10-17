
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00507b80(LPCSTR param_1)

{
  char cVar1;
  byte bVar2;
  float *pfVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  char *pcVar14;
  CHAR *pCVar15;
  float *pfVar16;
  LPCSTR pCVar17;
  char *pcVar18;
  byte *pbVar19;
  CHAR *pCVar20;
  float fVar21;
  LPCSTR pCVar22;
  bool bVar23;
  float10 fVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  uint local_4a8;
  CHAR local_4a4 [32];
  CHAR local_484 [32];
  float local_464;
  float *local_460;
  float local_45c;
  float local_458;
  float local_454;
  float local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  CHAR *local_440;
  float local_43c;
  float local_438;
  float local_434;
  float local_430;
  float local_42c;
  float local_428;
  float local_424;
  float local_420;
  float local_41c;
  float local_418;
  float local_414;
  float local_410;
  float local_40c;
  float local_408;
  float local_404;
  float local_400;
  float local_3fc;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  float local_3d4;
  float local_3d0;
  float local_3cc;
  float local_3c8;
  float local_3c4;
  float local_3c0;
  float local_3bc;
  float local_3b8;
  float local_3b4;
  float local_3b0;
  float local_3ac;
  float local_3a8;
  float local_3a4;
  float local_3a0;
  float local_39c;
  float local_398;
  float local_394;
  float local_390;
  float local_38c;
  float local_388;
  float local_384;
  float local_380;
  float local_37c;
  char local_378 [20];
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  float local_358;
  float local_354;
  float local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  float local_318;
  float local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  float local_2ec;
  float local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  float local_298;
  float local_294;
  float local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284 [5];
  undefined1 local_270 [8];
  byte local_268 [200];
  CHAR local_1a0 [32];
  CHAR local_180 [32];
  undefined1 local_160 [48];
  undefined1 local_130 [48];
  undefined1 local_100 [48];
  undefined1 local_d0 [204];
  
  iVar4 = FUN_0061c356(param_1,&DAT_00670518);
  if (iVar4 == 0) {
    FUN_0061c369(local_268,s_obsolete___s__and___s__not_found_0067410c,
                 PTR_s___vehicle_tech_00673a62_2_00673a58,param_1);
    FUN_00507500(local_268);
  }
  FUN_0061c25a(iVar4);
  GetPrivateProfileStringA
            (&DAT_006740ec,&DAT_006740f4,s_not_the_tech_006740fc,(LPSTR)local_268,0x46,param_1);
  pcVar14 = s_not_the_tech_006740fc;
  pbVar5 = local_268;
  do {
    bVar2 = *pbVar5;
    bVar23 = bVar2 < (byte)*pcVar14;
    if (bVar2 != *pcVar14) {
LAB_00507c2c:
      iVar4 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
      goto LAB_00507c31;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar23 = bVar2 < (byte)pcVar14[1];
    if (bVar2 != pcVar14[1]) goto LAB_00507c2c;
    pbVar5 = pbVar5 + 2;
    pcVar14 = pcVar14 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_00507c31:
  if (iVar4 != 0) {
    FUN_0061c369();
  }
  uVar10 = 0xffffffff;
  pcVar14 = &DAT_006740c0;
  do {
    pcVar18 = pcVar14;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar18 = pcVar14 + 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar18;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  DAT_006cd28c = 0;
  pcVar14 = pcVar18 + -uVar10;
  pcVar18 = local_378;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
    pcVar14 = pcVar14 + 4;
    pcVar18 = pcVar18 + 4;
  }
  local_4a8 = 0;
  local_460 = (float *)0x0;
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar18 = *pcVar14;
    pcVar14 = pcVar14 + 1;
    pcVar18 = pcVar18 + 1;
  }
  local_464 = 1.4013e-45;
  puVar12 = &DAT_0069710c;
  do {
    FUN_0061c369();
    GetPrivateProfileStringA
              (local_378,local_1a0,s_ThereIsNoMoreAnything_006740a0,(LPSTR)local_268,0x1e,param_1);
    pcVar14 = s_ThereIsNoMoreAnything_006740a0;
    pbVar5 = local_268;
    do {
      bVar2 = *pbVar5;
      bVar23 = bVar2 < (byte)*pcVar14;
      if (bVar2 != *pcVar14) {
LAB_00507d04:
        iVar4 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
        goto LAB_00507d09;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar23 = bVar2 < (byte)pcVar14[1];
      if (bVar2 != pcVar14[1]) goto LAB_00507d04;
      pbVar5 = pbVar5 + 2;
      pcVar14 = pcVar14 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_00507d09:
    if (iVar4 == 0) {
      local_460 = (float *)((int)local_460 + 1);
      local_464 = 0.0;
      if (local_460 == (float *)0x1) {
        DAT_006cd294 = local_4a8;
        uVar10 = 0xffffffff;
        pcVar14 = s_LORRIES_00674098;
        do {
          pcVar18 = pcVar14;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar18 = pcVar14 + 1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar18;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar14 = pcVar18 + -uVar10;
        pcVar18 = local_378;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar18 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar18 = pcVar18 + 1;
        }
      }
      else if (local_460 == (float *)0x2) {
        DAT_006cd298 = local_4a8;
        uVar10 = 0xffffffff;
        pcVar14 = s_TRACTORS_0067408c;
        do {
          pcVar18 = pcVar14;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar18 = pcVar14 + 1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar18;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar14 = pcVar18 + -uVar10;
        pcVar18 = local_378;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar18 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar18 = pcVar18 + 1;
        }
      }
      else if (local_460 == (float *)0x3) {
        DAT_006cd29c = local_4a8;
        uVar10 = 0xffffffff;
        pcVar14 = s_SEMI_TRAILERS_0067407c;
        do {
          pcVar18 = pcVar14;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar18 = pcVar14 + 1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar18;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar14 = pcVar18 + -uVar10;
        pcVar18 = local_378;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar18 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar18 = pcVar18 + 1;
        }
      }
      else if (local_460 == (float *)0x4) {
        DAT_006cd2a0 = local_4a8;
        uVar10 = 0xffffffff;
        pcVar14 = s_TRAILERS_00674070;
        do {
          pcVar18 = pcVar14;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar18 = pcVar14 + 1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar18;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar14 = pcVar18 + -uVar10;
        pcVar18 = local_378;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar18 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar18 = pcVar18 + 1;
        }
      }
      else {
        fVar21 = 0.0;
        if (local_460 != (float *)0x5) break;
        DAT_006cd2a4 = local_4a8;
        uVar10 = 0xffffffff;
        pcVar14 = s_HELICOPTERS_00674064;
        do {
          pcVar18 = pcVar14;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar18 = pcVar14 + 1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar18;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar14 = pcVar18 + -uVar10;
        pcVar18 = local_378;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar18 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar18 = pcVar18 + 1;
        }
      }
    }
    else {
      if (0x6c640b < (int)puVar12) {
        FUN_0061c369(local_d0,s__s_Maximum_is__d_but_the_fact_is_00674000,
                     s_There_was_exceded_the_total_numb_00674024,0x50,local_4a8 + 1);
        FUN_00507500(local_d0);
      }
      switch(local_460) {
      case (float *)0x0:
        *puVar12 = 0;
        break;
      case (float *)0x1:
        *puVar12 = 1;
        break;
      case (float *)0x2:
        *puVar12 = 2;
        break;
      case (float *)0x3:
        *puVar12 = 3;
        break;
      case (float *)0x4:
        *puVar12 = 4;
        break;
      case (float *)0x5:
        *puVar12 = 5;
      }
      uVar10 = 0xffffffff;
      pbVar5 = local_268;
      do {
        pbVar19 = pbVar5;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pbVar19 = pbVar5 + 1;
        bVar2 = *pbVar5;
        pbVar5 = pbVar19;
      } while (bVar2 != 0);
      uVar10 = ~uVar10;
      pbVar5 = pbVar19 + -uVar10;
      pbVar19 = (byte *)((int)puVar12 + -0x82);
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pbVar19 = *(undefined4 *)pbVar5;
        pbVar5 = pbVar5 + 4;
        pbVar19 = pbVar19 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pbVar19 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        pbVar19 = pbVar19 + 1;
      }
      uVar10 = 0xffffffff;
      pbVar5 = local_268;
      do {
        pbVar19 = pbVar5;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pbVar19 = pbVar5 + 1;
        bVar2 = *pbVar5;
        pbVar5 = pbVar19;
      } while (bVar2 != 0);
      uVar10 = ~uVar10;
      pbVar5 = pbVar19 + -uVar10;
      pbVar19 = (byte *)(puVar12 + -0x19);
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pbVar19 = *(undefined4 *)pbVar5;
        pbVar5 = pbVar5 + 4;
        pbVar19 = pbVar19 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pbVar19 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        pbVar19 = pbVar19 + 1;
      }
      FUN_0061c369();
      GetPrivateProfileStringA(local_378,local_180,param_1,(LPSTR)local_268,0x1e,param_1);
      FUN_0061c369();
      local_4a8 = local_4a8 + 1;
      puVar12 = puVar12 + 0x25c;
    }
    local_464 = (float)((int)local_464 + 1);
    fVar21 = local_464;
  } while ((int)puVar12 < 0x6c640d);
  local_464 = fVar21;
  DAT_006cd28c = local_4a8;
  local_4a8 = 0;
  DAT_006cd2a8 = DAT_006cd28c;
  if (0 < (int)DAT_006cd28c) {
    local_460 = (float *)&DAT_00696888;
    do {
      pfVar3 = local_460;
      uVar10 = 0xffffffff;
      pfVar9 = local_460 + 0x208;
      do {
        pfVar16 = pfVar9;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pfVar16 = (float *)((int)pfVar9 + 1);
        cVar1 = *(char *)pfVar9;
        pfVar9 = pfVar16;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pCVar15 = (CHAR *)((int)pfVar16 - uVar10);
      pCVar20 = local_4a4;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pCVar20 = *(undefined4 *)pCVar15;
        pCVar15 = pCVar15 + 4;
        pCVar20 = pCVar20 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pCVar20 = *pCVar15;
        pCVar15 = pCVar15 + 1;
        pCVar20 = pCVar20 + 1;
      }
      uVar10 = 0xffffffff;
      pfVar9 = pfVar3 + 0x1f9;
      do {
        pfVar16 = pfVar9;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pfVar16 = (float *)((int)pfVar9 + 1);
        cVar1 = *(char *)pfVar9;
        pfVar9 = pfVar16;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pCVar15 = (CHAR *)((int)pfVar16 - uVar10);
      pCVar20 = local_484;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pCVar20 = *(undefined4 *)pCVar15;
        pCVar15 = pCVar15 + 4;
        pCVar20 = pCVar20 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pCVar20 = *pCVar15;
        pCVar15 = pCVar15 + 1;
        pCVar20 = pCVar20 + 1;
      }
      FUN_006033f0(local_4a4,&DAT_00673ff0,0,0x408f4000,pfVar3 + -0x18,local_484);
      pfVar16 = local_460;
      FUN_006033f0(local_4a4,s_maxrotmomentum_00673fe0,0,0x407f4000,local_460,local_484);
      FUN_006033f0(local_4a4,s_breakpower_00673fd4,0,0x40b77000,pfVar16 + 2,local_484);
      FUN_006033f0(local_4a4,s_rwheel_00673fcc,0x33333333,0x3fd33333,pfVar16 + -0x17,local_484);
      FUN_006033f0(local_4a4,s_rwheel1_00673fc4,0x33333333,0x3fd33333,pfVar16 + -0x16,local_484);
      FUN_006033f0(local_4a4,s_front_wheel_thickness_00673fac,0x9999999a,0x3fc99999,pfVar16 + -2,
                   local_484);
      FUN_006033f0(local_4a4,s_rear_wheel_thickness_00673f94,0x9999999a,0x3fd99999,pfVar16 + -1,
                   local_484);
      FUN_006033f0(local_4a4,s_air_press_coeff_00673f84,0x33333333,0x3fd33333,pfVar16 + -5,local_484
                  );
      FUN_006033f0(local_4a4,s_air_resist_coeff_00673f70,0x33333333,0x3fd33333,pfVar16 + -4,
                   local_484);
      FUN_006033f0(local_4a4,s_air_side_resist_coeff_00673f58,0x9999999a,0x3fe99999,pfVar16 + -3,
                   local_484);
      pfVar9 = pfVar16 + 0x13;
      FUN_006033f0(local_4a4,s_tach_with_max_power_00673f44,0,0x4092c000,pfVar9,local_484);
      *pfVar9 = *pfVar9 * _DAT_0064b410;
      FUN_006033f0(local_4a4,s_rear_axle_coeff_00673f34,0,0x40140000,pfVar16 + 3,local_484);
      FUN_006033f0(local_4a4,s_reverse_trans_coeff_00673f20,0,0xc0100000,pfVar16 + 4,local_484);
      pfVar16[5] = 0.0;
      pfVar16[-0xc] = 1.4013e-45;
      fVar21 = 2.8026e-45;
      pfVar16 = pfVar16 + 6;
      do {
        iVar4 = (int)fVar21 + -1;
        pbVar5 = local_268;
        pcVar14 = s_gear_trans_coeff_d_00673f0c;
        FUN_0061c369();
        FUN_006033f0(local_4a4,local_268,0,0xc0590000,pfVar16,local_484,pbVar5,pcVar14,iVar4);
        if ((*pfVar16 < _DAT_0064cae0) &&
           (*pfVar16 = pfVar16[-1] * (float)_DAT_0064cad8, pfVar3[-0xc] == 1.4013e-45)) {
          if ((int)fVar21 < 0xc) {
            pfVar3[-0xc] = fVar21;
          }
          else {
            pfVar3[-0xc] = 1.54143e-44;
          }
        }
        fVar21 = (float)((int)fVar21 + 1);
        pfVar16 = pfVar16 + 1;
      } while ((int)fVar21 < 0xf);
      FUN_006033f0(local_4a4,&DAT_00673f04,(double)(*pfVar3 * _DAT_0064b8f4),pfVar3 + -0x15,
                   local_484);
      FUN_006033f0(local_4a4,s_fuelTimeEndurance_00673ef0,(double)_DAT_00673a5c,pfVar3 + -0x14,
                   local_484);
      pfVar3[1] = (*pfVar3 * (float)_DAT_0064a830) / (pfVar3[0x13] + pfVar3[0x13]);
      fVar24 = (float10)FUN_00507030(local_4a8,pfVar3[-0x18],pfVar3 + -0xc,pfVar3 + -0xe,
                                     pfVar3 + -0xd);
      pfVar3[-0x10] = (float)fVar24;
      pfVar9 = pfVar3 + -6;
      *pfVar9 = 50.0;
      FUN_006033f0(local_4a4,s_kilometrage_00673ee4,0,0x40490000,pfVar9,local_484);
      fVar21 = pfVar3[-0x18] * _DAT_0064cab8;
      pfVar16 = pfVar3 + -8;
      *pfVar16 = fVar21;
      FUN_006033f0(local_4a4,s_fuelConsumption_00673ed4,(double)(_DAT_00673a60 * fVar21),pfVar16,
                   local_484);
      fVar21 = *pfVar16 / _DAT_00673a60;
      *pfVar16 = fVar21;
      fVar21 = fVar21 * *pfVar9;
      pfVar3[-0x15] = fVar21;
      FUN_006033f0(local_4a4,&DAT_00673f04,(double)fVar21,pfVar3 + -0x15,local_484);
      pfVar3[-0x14] =
           (pfVar3[-0xd] * pfVar3[-0x15]) /
           ((*pfVar16 * pfVar3[-0x10] * _DAT_0064cab8) / (pfVar3[-0xe] / pfVar3[0x13]));
      fVar24 = (float10)FUN_00507200(local_4a8,pfVar3[-0x18],pfVar3 + -0xb,pfVar3 + -0xf,
                                     pfVar3 + -0x11,pfVar3 + -7);
      pfVar3[-9] = (float)fVar24;
      fVar24 = (float10)FUN_00507290(local_4a8,pfVar3[-0x18],pfVar3 + -10,pfVar3 + -0xe,
                                     pfVar3 + -0x10,pfVar9,pfVar3 + -0xd);
      *pfVar16 = (float)fVar24;
      pfVar3[-0x12] = (pfVar3[-7] * _DAT_0064c7a8) / pfVar3[-0x11];
      pfVar3[-0x13] = (*pfVar9 * _DAT_0064c7a8) / pfVar3[-0x10];
      local_384 = DAT_00701590 * _DAT_0064b248;
      local_380 = DAT_00701594 * _DAT_0064b248;
      local_37c = DAT_00701598 * _DAT_0064b248;
      local_328 = local_384;
      local_324 = local_380;
      local_320 = local_37c;
      FUN_00507580(local_4a4,&DAT_00673ed0,&local_328,pfVar3 + 0x33,local_484);
      pfVar9 = pfVar3 + 0x36;
      FUN_006033f0(local_4a4,s_tangViewer_00673ec4,0,0xbfc00000,pfVar9,local_484);
      *pfVar9 = *pfVar9 * (float)_DAT_0064cad0;
      local_340 = 0x43fa0000;
      local_33c = 0x43480000;
      local_338 = 0x43fa0000;
      FUN_00507580(local_4a4,&DAT_00673ec0,&local_340,pfVar3 + 0x37,local_484);
      pfVar3[0x82] = 1.4013e-45;
      local_364 = 0xbf19999a;
      local_360 = 0x3f800000;
      local_35c = 0xbe4ccccd;
      iVar4 = FUN_00507580(local_4a4,&DAT_00673ebc,&local_364,pfVar3 + 0x3a,local_484);
      if ((pfVar3[0x82] == 0.0) || (iVar4 == 0)) {
        fVar21 = 0.0;
      }
      else {
        fVar21 = 1.4013e-45;
      }
      pfVar3[0x82] = fVar21;
      local_310 = 0x3f19999a;
      local_30c = 0x3f800000;
      local_308 = 0xbe4ccccd;
      iVar6 = FUN_00507580(local_4a4,&DAT_00673eb8,&local_310,pfVar3 + 0x3d,local_484);
      if ((pfVar3[0x82] == 0.0) || (iVar6 == 0)) {
        fVar21 = 0.0;
      }
      else {
        fVar21 = 1.4013e-45;
      }
      pfVar3[0x82] = fVar21;
      local_2f8 = 0xbf19999a;
      local_2f4 = 0xbf800000;
      local_2f0 = 0xbe4ccccd;
      iVar7 = FUN_00507580(local_4a4,&DAT_00673eb4,&local_2f8,pfVar3 + 0x40,local_484);
      if ((pfVar3[0x82] == 0.0) || (iVar7 == 0)) {
        fVar21 = 0.0;
      }
      else {
        fVar21 = 1.4013e-45;
      }
      pfVar3[0x82] = fVar21;
      local_34c = 0x3f19999a;
      local_348 = 0xbf800000;
      local_344 = 0xbe4ccccd;
      iVar8 = FUN_00507580(local_4a4,&DAT_00673eb0,&local_34c,pfVar3 + 0x43,local_484);
      iVar4 = iVar4 + iVar6 + iVar7 + iVar8;
      if ((pfVar3[0x82] == 0.0) || (iVar8 == 0)) {
        fVar21 = 0.0;
      }
      else {
        fVar21 = 1.4013e-45;
      }
      pfVar3[0x82] = fVar21;
      if ((iVar4 != 0) && (fVar21 == 0.0)) {
        FUN_0061c369(local_268,s__s___s___Number_of_rs_is_less_th_00673e84,local_484,local_4a4,iVar4
                    );
        FUN_00507500(local_268);
      }
      FUN_005075b0(local_4a4,s_suspension_00673e78,0x3e99999a,pfVar3 + 0x8b,local_484,8);
      pfVar9 = pfVar3 + 0x83;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar9 = 0.0;
        pfVar9 = pfVar9 + 1;
      }
      FUN_005075b0(local_4a4,&DAT_00673e74,0x46435000,pfVar3 + 0x93,local_484,8);
      FUN_005075b0(local_4a4,&DAT_00673e70,0x3f800000,pfVar3 + 0x9b,local_484,8);
      pfVar9 = pfVar3 + 0xa8;
      FUN_006033f0(local_4a4,s_rubber_collision_coeff_00673e58,0,0x3fe00000,pfVar9,local_484);
      if ((*pfVar9 < _DAT_0064b254) || (_DAT_0064b240 < *pfVar9)) {
        *pfVar9 = 0.2;
      }
      pfVar9 = pfVar3 + 0xa9;
      FUN_006033f0(local_4a4,s_slide_collision_coeff_00673e40,0,0x3fe00000,pfVar9,local_484);
      if ((*pfVar9 < _DAT_0064b254) || (_DAT_0064b240 < *pfVar9)) {
        *pfVar9 = 0.5;
      }
      FUN_00507820(local_4a4,s_driving_wheels_00673e30,1,pfVar3 + 0x1b,local_484,8);
      FUN_00507820(local_4a4,s_touching_road_wheels_00673e18,1,pfVar3 + 0x2b,local_484,8);
      local_28c = 1;
      local_288 = 1;
      puVar12 = local_284;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      puVar12 = local_284;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      FUN_00507670(local_4a4,s_steering_wheels_00673e08,&local_28c,pfVar3 + 0x23,local_484,8);
      pfVar9 = (float *)&DAT_00701550;
      pfVar16 = pfVar3 + -0x30;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar16 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        pfVar16 = pfVar16 + 1;
      }
      fVar21 = (float)FUN_00507580(local_4a4,s_CenterMassInB3D_00673df8,&DAT_007015b0,pfVar3 + -0x27
                                   ,local_484);
      pfVar3[0xa7] = fVar21;
      pfVar9 = (float *)FUN_005aba00(local_100,pfVar3 + -0x30);
      pfVar16 = pfVar3 + -0x24;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar16 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        pfVar16 = pfVar16 + 1;
      }
      if (pfVar3[0xa7] == 0.0) {
        FUN_0061c369(local_268,s__s___s___CenterMassInB3D_must_be_00673dcc,local_484,local_4a4);
        FUN_00507500(local_268);
      }
      FUN_00507580(local_4a4,s_CollisionCenter_00673dbc,&DAT_007015b0,pfVar3 + 0xa4,local_484);
      FUN_006033f0(local_4a4,s_CollisionRadius_00673dac,0,0x3ff00000,pfVar3 + 0xa3,local_484);
      FUN_00603230(local_4a4,s_horse_power_00673da0,0x96,pfVar3 + 0x1c1,local_484);
      FUN_00603230(local_4a4,s_price_00673d98,10000,pfVar3 + 0x1c2,local_484);
      FUN_006032b0(local_4a4,s_glowwing_00673d8c,1,pfVar3 + 0x1c3,local_484);
      pfVar9 = pfVar3 + 0x1c4;
      local_2c8 = 0;
      local_2c4 = 0xc0000000;
      local_2c0 = 0;
      FUN_00507580(local_4a4,s_lowSaddle_00673d80,&local_2c8,pfVar9,local_484);
      local_330 = DAT_00701594 * _DAT_0064b328;
      local_32c = DAT_00701598 * _DAT_0064b328;
      local_3c0 = *pfVar9 - DAT_00701590 * _DAT_0064b328;
      local_3bc = pfVar3[0x1c5] - local_330;
      local_3b8 = pfVar3[0x1c6] - local_32c;
      *pfVar9 = local_3c0;
      pfVar3[0x1c5] = local_3bc;
      pfVar3[0x1c6] = local_3b8;
      pfVar9 = pfVar3 + 0x1c7;
      local_2a4 = 0;
      local_2a0 = 0x40000000;
      local_29c = 0xbf800000;
      FUN_00507580(local_4a4,s_topSaddle_00673d74,&local_2a4,pfVar9,local_484);
      local_318 = DAT_00701594 * _DAT_0064b328;
      local_314 = DAT_00701598 * _DAT_0064b328;
      local_414 = *pfVar9 - DAT_00701590 * _DAT_0064b328;
      local_410 = pfVar3[0x1c8] - local_318;
      local_40c = pfVar3[0x1c9] - local_314;
      *pfVar9 = local_414;
      pfVar3[0x1c8] = local_410;
      pfVar3[0x1c9] = local_40c;
      FUN_006033f0(local_4a4,s_shiftSaddle_00673d68,0,0,pfVar3 + 0x1d0,local_484);
      local_2e0 = 0;
      local_2dc = 0xc0400000;
      local_2d8 = 0;
      FUN_00507580(local_4a4,s_TowHook_00673d60,&local_2e0,pfVar3 + 0x1ca,local_484);
      local_304 = 0;
      local_300 = 0x40000000;
      local_2fc = 0;
      FUN_00507580(local_4a4,s_Coupler_00673d58,&local_304,pfVar3 + 0x1cd,local_484);
      FUN_006033f0(local_4a4,s_CouplerLength_00673d48,0,0x40000000,pfVar3 + 0x1d1,local_484);
      pfVar3[0x12d] = 0.0;
      iVar4 = 0;
      pfVar9 = pfVar3 + 0x12e;
      do {
        iVar4 = iVar4 + 1;
        pbVar5 = local_268;
        pcVar14 = s_Corner_Mark_W_d_00673d38;
        iVar6 = iVar4;
        FUN_0061c369();
        iVar6 = FUN_00507580(local_4a4,local_268,&DAT_007015b0,pfVar9,local_484,pbVar5,pcVar14,iVar6
                            );
        if (iVar6 == 0) break;
        pfVar9 = pfVar9 + 3;
        pfVar3[0x12d] = (float)((int)pfVar3[0x12d] + 1);
      } while (iVar4 < 4);
      iVar4 = 0;
      pfVar9 = pfVar3 + 0xac;
      pfVar3[0xaa] = 0.0;
      do {
        iVar4 = iVar4 + 1;
        pbVar5 = local_268;
        pcVar14 = s_Corner_Mark__d_00673d28;
        iVar6 = iVar4;
        FUN_0061c369();
        iVar6 = FUN_00507580(local_4a4,local_268,&DAT_007015b0,pfVar9,local_484,pbVar5,pcVar14,iVar6
                            );
        if (iVar6 == 0) break;
        pfVar9 = pfVar9 + 3;
        pfVar3[0xaa] = (float)((int)pfVar3[0xaa] + 1);
      } while (iVar4 < 0x14);
      iVar4 = 0;
      pfVar9 = pfVar3 + 0xe8;
      pfVar3[0xab] = 0.0;
      do {
        pbVar5 = local_268;
        pcVar14 = s_AddColPnts_d_00673d18;
        iVar6 = iVar4;
        FUN_0061c369();
        iVar6 = FUN_00507580(local_4a4,local_268,&DAT_007015b0,pfVar9,local_484,pbVar5,pcVar14,iVar6
                            );
        if (iVar6 == 0) break;
        pfVar9 = pfVar9 + 3;
        iVar4 = iVar4 + 1;
        pfVar3[0xab] = (float)((int)pfVar3[0xab] + 1);
      } while (iVar4 < 0x14);
      iVar4 = 0;
      local_424 = 10000.0;
      local_430 = -10000.0;
      local_43c = 10000.0;
      local_438 = -10000.0;
      local_434 = 10000.0;
      local_42c = -10000.0;
      pfVar3[0x18b] = 0.0;
      if (0 < (int)pfVar3[0xaa]) {
        pfVar9 = pfVar3 + 0xae;
        do {
          fVar21 = pfVar9[-2];
          local_464 = pfVar9[-1];
          local_428 = *pfVar9;
          if (fVar21 < local_424) {
            local_424 = fVar21;
          }
          if (local_430 < fVar21) {
            local_430 = fVar21;
          }
          if (local_464 < local_43c) {
            local_43c = local_464;
          }
          if (local_438 < local_464) {
            local_438 = local_464;
          }
          if (local_428 < local_434) {
            local_434 = local_428;
          }
          if (local_42c < local_428) {
            local_42c = local_428;
          }
          local_390 = pfVar9[-2] - pfVar3[0xa4];
          local_38c = pfVar9[-1] - pfVar3[0xa5];
          local_388 = *pfVar9 - pfVar3[0xa6];
          local_2b0 = local_390;
          local_2ac = local_38c;
          local_2a8 = local_388;
          fVar24 = (float10)FUN_005aabc0(&local_2b0);
          if ((float10)pfVar3[0x18b] < fVar24) {
            pfVar3[0x18b] = (float)fVar24;
          }
          iVar4 = iVar4 + 1;
          pfVar9 = pfVar9 + 3;
        } while (iVar4 < (int)pfVar3[0xaa]);
      }
      local_3fc = local_430 - local_424;
      local_3f8 = local_438 - local_43c;
      pfVar3[0x124] = local_3fc;
      local_3f4 = local_42c - local_434;
      pfVar3[0x125] = local_3f8;
      local_3b4 = local_430;
      pfVar3[0x126] = local_3f4;
      local_3b0 = local_438;
      local_3ac = local_42c;
      pfVar3[0x127] = local_430;
      pfVar3[0x128] = local_438;
      local_3e4 = local_424;
      pfVar3[0x129] = local_42c;
      local_3e0 = local_43c;
      local_3dc = local_434;
      pfVar3[0x12a] = local_424;
      pfVar3[299] = local_43c;
      iVar4 = DAT_006cd290;
      pfVar3[300] = local_434;
      if (((int)local_4a8 < iVar4) || ((int)DAT_006cd294 <= (int)local_4a8)) {
        FUN_006033f0(local_4a4,s_cargo_and_body_pick_load_00673cfc,0,0x40b77000,pfVar3 + 0x14,
                     local_484);
        FUN_00507580(local_4a4,s_center_of_cargo_bottom_00673ccc,&DAT_007015b0,pfVar3 + 0x18,
                     local_484);
        FUN_006033f0(local_4a4,s_body_mass_00673cc0,0,0x408f4000,pfVar3 + 0x15,local_484);
        FUN_006033f0(local_4a4,s_body_height_00673cf0,0,0x40000000,pfVar3 + 0x16,local_484);
        FUN_006033f0(local_4a4,s_body_square_00673ce4,0,0x40240000,pfVar3 + 0x17,local_484);
      }
      else {
        FUN_006033f0(local_4a4,s_cargo_and_body_pick_load_00673cfc,0,0x40790000,pfVar3 + 0x14,
                     local_484);
        fVar21 = pfVar3[-0x18] * _DAT_0064cab8;
        pfVar3[0x18] = pfVar3[-0x27];
        pfVar3[0x15] = fVar21;
        fVar21 = pfVar3[0x126] * _DAT_0064b8f4;
        pfVar3[0x19] = pfVar3[-0x26];
        pfVar3[0x1a] = pfVar3[-0x25];
        FUN_006033f0(local_4a4,s_body_height_00673cf0,(double)fVar21,pfVar3 + 0x16,local_484);
        FUN_006033f0(local_4a4,s_body_square_00673ce4,
                     (double)(pfVar3[0x125] * pfVar3[0x124] * _DAT_0064b8f4),pfVar3 + 0x17,local_484
                    );
      }
      pfVar3[0x18a] = 0.0;
      pfVar3[0x18c] = pfVar3[0x18b];
      local_440 = (CHAR *)0x0;
      pfVar9 = pfVar3 + 0x13c;
      do {
        pbVar5 = local_268;
        pcVar14 = s_CollisionPlane_d_00673cac;
        pCVar15 = local_440;
        FUN_0061c369();
        iVar4 = FUN_005075b0(local_4a4,local_268,0x3f800000,pfVar9 + -2,local_484,4,pbVar5,pcVar14,
                             pCVar15);
        if (iVar4 == 0) break;
        fVar21 = -pfVar9[1];
        local_2ec = fVar21 * pfVar9[-2];
        local_2e8 = fVar21 * pfVar9[-1];
        local_3a8 = local_2ec - pfVar3[0xa4];
        local_3a4 = local_2e8 - pfVar3[0xa5];
        local_3a0 = fVar21 * *pfVar9 - pfVar3[0xa6];
        local_298 = local_3a8;
        local_294 = local_3a4;
        local_290 = local_3a0;
        fVar24 = (float10)FUN_005aabc0(&local_298);
        if (fVar24 < (float10)pfVar3[0x18c]) {
          pfVar3[0x18c] = (float)fVar24;
        }
        pfVar9 = pfVar9 + 4;
        pfVar3[0x18a] = (float)((int)pfVar3[0x18a] + 1);
        local_440 = (CHAR *)((int)local_440 + 1);
      } while ((int)local_440 < 0x14);
      iVar4 = 0;
      pfVar9 = pfVar3 + 0x18d;
      pfVar3[0x19c] = 0.0;
      do {
        iVar4 = iVar4 + 1;
        pbVar5 = local_268;
        pcVar14 = s_tvCameraPosition_d_00673c98;
        iVar6 = iVar4;
        FUN_0061c369();
        iVar6 = FUN_00507580(local_4a4,local_268,&DAT_007015b0,pfVar9,local_484,pbVar5,pcVar14,iVar6
                            );
        if (iVar6 == 0) break;
        pfVar9 = pfVar9 + 3;
        pfVar3[0x19c] = (float)((int)pfVar3[0x19c] + 1);
      } while (iVar4 < 5);
      FUN_00507580(local_4a4,s_tvCameraRightConer_00673c84,&DAT_007015b0,pfVar3 + 0x19d,local_484);
      local_3cc = DAT_00701590 * _DAT_0064b31c;
      local_3c8 = DAT_00701594 * _DAT_0064b31c;
      local_3c4 = DAT_00701598 * _DAT_0064b31c;
      local_2bc = local_3cc;
      local_2b8 = local_3c8;
      local_2b4 = local_3c4;
      FUN_00507580(local_4a4,s_SmokePosition_00673c74,&local_2bc,pfVar3 + 0x1a0,local_484);
      local_39c = -DAT_007015a0;
      local_398 = -DAT_007015a4;
      local_394 = -DAT_007015a8;
      local_2d4 = local_39c;
      local_2d0 = local_398;
      local_2cc = local_394;
      FUN_00507580(local_4a4,s_SmokeDirection_00673c64,&local_2d4,pfVar3 + 0x1a3,local_484);
      local_408 = DAT_00701590 * _DAT_0064b31c;
      local_404 = DAT_00701594 * _DAT_0064b31c;
      local_400 = DAT_00701598 * _DAT_0064b31c;
      local_358 = local_408;
      local_354 = local_404;
      local_350 = local_400;
      FUN_00507580(local_4a4,s_SmokePosition2_00673c54,&local_358,pfVar3 + 0x1a6,local_484);
      FUN_00507580(local_4a4,s_SmokeDirection2_00673c44,pfVar3 + 0x1a3,pfVar3 + 0x1a9,local_484);
      FUN_005aab70();
      FUN_005aab70();
      FUN_00507580(local_4a4,s_flame_place_00673c38,&DAT_007015b0,pfVar3 + 0x1ac,local_484);
      FUN_00507580(local_4a4,s_Fara_FL_00673c30,&DAT_007015b0,pfVar3 + 0x1af,local_484);
      FUN_00507580(local_4a4,s_Fara_FR_00673c28,&DAT_007015b0,pfVar3 + 0x1b2,local_484);
      FUN_00507580(local_4a4,s_Fara_BLs_00673c1c,&DAT_007015b0,pfVar3 + 0x1b5,local_484);
      FUN_00507580(local_4a4,s_Fara_BL_00673c14,&DAT_007015b0,pfVar3 + 0x1bb,local_484);
      FUN_00507580(local_4a4,s_Fara_BRs_00673c08,&DAT_007015b0,pfVar3 + 0x1b8,local_484);
      FUN_00507580(local_4a4,s_Fara_BR_00673c00,&DAT_007015b0,pfVar3 + 0x1be,local_484);
      pbVar5 = (byte *)((int)pfVar3 + 0x83e);
      GetPrivateProfileStringA
                (local_4a4,s_prefix_00673bf8,s_ThereIsNoMoreAnything_006740a0,(LPSTR)pbVar5,0x1d,
                 local_484);
      pcVar14 = s_ThereIsNoMoreAnything_006740a0;
      do {
        bVar2 = *pbVar5;
        bVar23 = bVar2 < (byte)*pcVar14;
        if (bVar2 != *pcVar14) {
LAB_005095f3:
          iVar4 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
          goto LAB_005095f8;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar23 = bVar2 < (byte)pcVar14[1];
        if (bVar2 != pcVar14[1]) goto LAB_005095f3;
        pbVar5 = pbVar5 + 2;
        pcVar14 = pcVar14 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_005095f8:
      if (iVar4 == 0) {
        GetPrivateProfileStringA
                  (local_4a4,s_car_node_00673bec,s_ThereIsNoMoreAnything_006740a0,
                   (LPSTR)((int)pfVar3 + 0x83e),0x1d,local_484);
        FUN_0061c369(local_268,s_There_is_no_neither_car_node_nor_00673bb4,local_4a4,local_484);
        FUN_00507500(local_268);
      }
      uVar10 = 0xffffffff;
      pCVar17 = (LPCSTR)((int)pfVar3 + 0x83e);
      do {
        pCVar22 = pCVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pCVar22 = pCVar17 + 1;
        cVar1 = *pCVar17;
        pCVar17 = pCVar22;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      local_440 = (CHAR *)((int)pfVar3 + 0x866);
      pCVar17 = pCVar22 + -uVar10;
      pCVar15 = local_440;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pCVar15 = *(undefined4 *)pCVar17;
        pCVar17 = pCVar17 + 4;
        pCVar15 = pCVar15 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pCVar15 = *pCVar17;
        pCVar17 = pCVar17 + 1;
        pCVar15 = pCVar15 + 1;
      }
      GetPrivateProfileStringA
                (local_4a4,s_prefixCab_00673ba8,(LPCSTR)((int)pfVar3 + 0x83e),
                 (LPSTR)((int)pfVar3 + 0x852),0x1d,local_484);
      pfVar3[0x1e9] = 0.0;
      pfVar3[0x1e8] = 0.0;
      GetPrivateProfileStringA
                (local_4a4,s_cockpit_space_00673b98,s_ThereIsNoMoreAnything_006740a0,
                 (LPSTR)(pfVar3 + 0x1ea),0x1d,local_484);
      local_45c = 50.0;
      local_458 = 240.0;
      FUN_00507610(local_4a4,s_TachScale_00673b8c,&local_45c,&local_45c,local_484,2);
      pfVar3[0x1d4] = local_45c * _DAT_0064cac8;
      fVar21 = local_458 * (float)_DAT_0064cad0;
      local_45c = 100.0;
      local_458 = 240.0;
      pfVar3[0x1d5] = fVar21;
      FUN_00507610(local_4a4,s_SpeedScale_00673b80,&local_45c,&local_45c,local_484,2);
      fVar21 = local_45c * (float)_DAT_0064c0d8;
      local_45c = 1.0;
      pfVar3[0x1d2] = fVar21;
      fVar21 = local_458 * (float)_DAT_0064cad0;
      local_458 = 90.0;
      pfVar3[0x1d3] = fVar21;
      FUN_00507610(local_4a4,s_FuelScale_00673b74,&local_45c,&local_45c,local_484,2);
      fVar21 = (float)_DAT_0064a660 / local_45c;
      local_45c = 1.75;
      local_454 = 5.0;
      fVar21 = fVar21 * local_458;
      local_458 = 2.0;
      pfVar3[0x1d6] = fVar21 * (float)_DAT_0064cad0;
      FUN_00507610(local_4a4,s_CabRWindow_00673b68,&local_45c,pfVar3 + 0x1d7,local_484,3);
      local_45c = 1.75;
      local_458 = 0.5;
      local_454 = 5.0;
      FUN_00507610(local_4a4,s_CabLWindow_00673b5c,&local_45c,pfVar3 + 0x1da,local_484,3);
      local_45c = 1.34;
      local_458 = 1.11;
      local_454 = 1.9;
      local_450 = -0.61;
      FUN_00507610(local_4a4,s_CabFrontWindow_00673b4c,&local_45c,&local_45c,local_484,4);
      pfVar3[0x1dd] = local_45c;
      pfVar3[0x1de] = local_458;
      pfVar3[0x1df] = local_454;
      pfVar3[0x1e0] = local_450;
      local_45c = 70.0;
      local_458 = 20.0;
      local_454 = 10.0;
      local_450 = 0.0;
      local_44c = 0xc1200000;
      local_448 = 0xc1a00000;
      local_444 = 0xc28c0000;
      FUN_00507610(local_4a4,s_Drivers_neck_Angles_00673b38,&local_45c,pfVar3 + 0x1e1,local_484,7);
      local_45c = 0.0;
      local_458 = 0.0;
      FUN_00507610(local_4a4,s_Fara_Dir_00673b2c,&local_45c,&local_45c,local_484,2);
      pfVar9 = (float *)FUN_005ab7d0(local_130,local_45c * (float)_DAT_0064cad0);
      local_3f0 = DAT_00701580 * *pfVar9 + DAT_00701584 * pfVar9[3] + DAT_00701588 * pfVar9[6] +
                  pfVar9[9];
      local_3ec = DAT_00701580 * pfVar9[1] + DAT_00701584 * pfVar9[4] + DAT_00701588 * pfVar9[7] +
                  pfVar9[10];
      local_3e8 = DAT_00701580 * pfVar9[2] + DAT_00701584 * pfVar9[5] + DAT_00701588 * pfVar9[8] +
                  pfVar9[0xb];
      local_420 = -DAT_00701580;
      local_41c = -DAT_00701584;
      local_418 = -DAT_00701588;
      fVar21 = (float)_DAT_0064cad0;
      pfVar3[0x223] = local_3f0;
      pfVar3[0x224] = local_3ec;
      pfVar3[0x225] = local_3e8;
      pfVar9 = (float *)FUN_005ab7d0(local_160,local_458 * fVar21);
      local_3d8 = local_420 * *pfVar9 + local_41c * pfVar9[3] + local_418 * pfVar9[6] + pfVar9[9];
      local_3d4 = local_420 * pfVar9[1] + local_41c * pfVar9[4] + local_418 * pfVar9[7] + pfVar9[10]
      ;
      local_3d0 = local_420 * pfVar9[2] + local_41c * pfVar9[5] + local_418 * pfVar9[8] +
                  pfVar9[0xb];
      local_45c = 0.3;
      local_458 = 0.2;
      local_454 = 0.2;
      pfVar3[0x226] = local_3d8;
      pfVar3[0x227] = local_3d4;
      pfVar3[0x228] = local_3d0;
      FUN_00507610(local_4a4,s_Fara_Width_00673b20,&local_45c,&local_45c);
      pfVar3[0x229] = local_45c;
      pfVar3[0x22a] = local_458;
      pfVar3[0x22b] = local_454;
      if ((pfVar3[0x221] == 4.2039e-45) || (pfVar3[0x221] == 5.60519e-45)) {
        GetPrivateProfileStringA
                  (local_4a4,s_trailer_type_00673b10,&DAT_006719a8,(LPSTR)local_268,0x1e,local_484);
        iVar4 = FUN_0061d520(local_268,s_platform_00673b04);
        if (iVar4 == 0) {
          pfVar3[0x222] = 2.8026e-45;
        }
        else {
          iVar4 = FUN_0061d520(local_268,&DAT_00673f04);
          if (iVar4 == 0) {
            pfVar3[0x222] = 4.2039e-45;
          }
          else {
            pfVar3[0x222] = 1.4013e-45;
          }
        }
      }
      else {
        pfVar3[0x222] = 0.0;
      }
      local_4a8 = local_4a8 + 1;
      local_460 = local_460 + 0x25c;
    } while ((int)local_4a8 < (int)DAT_006cd28c);
  }
  iVar4 = FUN_0061c356(PTR_s___vehicle_tech_00673a62_2_00673a58,&DAT_0066f3e4);
  if (iVar4 != 0) {
    local_4a8 = 0xffffffff;
    pCVar17 = param_1;
    do {
      if (local_4a8 == 0) break;
      local_4a8 = local_4a8 - 1;
      cVar1 = *pCVar17;
      pCVar17 = pCVar17 + 1;
    } while (cVar1 != '\0');
    local_4a8 = ~local_4a8;
    if (199 < (int)local_4a8) {
      local_4a8 = 199;
    }
    FUN_0061d9d6(&local_4a8,4,1,iVar4);
    FUN_0061d9d6(param_1,1,local_4a8,iVar4);
    iVar6 = FUN_006310b6(param_1,&local_28c);
    if (iVar6 == -1) {
      FUN_00507500(s_Coud_not_been_open_tech_file_by_s_00673adc);
    }
    FUN_0061d9d6(local_270,4,1,iVar4);
    local_4a8 = 0x970;
    FUN_0061d9d6(&local_4a8,4,1,iVar4);
    FUN_0061d9d6(&DAT_006cd28c,4,1,iVar4);
    FUN_0061d9d6(&DAT_006cd290,4,1,iVar4);
    FUN_0061d9d6(&DAT_006cd294,4,1,iVar4);
    FUN_0061d9d6(&DAT_006cd298,4,1,iVar4);
    FUN_0061d9d6(&DAT_006cd29c,4,1,iVar4);
    FUN_0061d9d6(&DAT_006cd2a0,4,1,iVar4);
    FUN_0061d9d6(&DAT_006cd2a4,4,1,iVar4);
    FUN_0061d9d6(&DAT_006cd2a8,4,1,iVar4);
    puVar12 = &DAT_006967c8;
    do {
      local_4a8 = FUN_0061d9d6(puVar12,1,0x970,iVar4);
      puVar12 = puVar12 + 0x25c;
    } while ((int)puVar12 < 0x6c5ac8);
    iVar6 = 0;
    if (0 < (int)DAT_006cd28c) {
      puVar13 = &DAT_0069706c;
      do {
        iVar7 = FUN_006310b6(puVar13,&local_28c);
        if (iVar7 == -1) {
          puVar25 = local_d0;
          pcVar14 = s_stat____s____buf_____1_00673ac4;
          puVar26 = puVar13;
          FUN_0061c369();
          FUN_00507500(local_d0,puVar25,pcVar14,puVar26);
        }
        FUN_0061d9d6(local_270,4,1,iVar4);
        iVar6 = iVar6 + 1;
        puVar13 = puVar13 + 0x970;
      } while (iVar6 < (int)DAT_006cd28c);
    }
    FUN_0061c25a(iVar4);
  }
  return;
}

