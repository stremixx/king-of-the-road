
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00587780(int *param_1)

{
  int *piVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char *pcVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  undefined4 *puVar17;
  char *pcVar18;
  float10 fVar19;
  float10 fVar20;
  float local_4a4;
  float local_4a0;
  float local_49c;
  float local_498;
  float local_494;
  float local_490;
  float local_48c;
  float local_488;
  float local_484;
  float local_480;
  float local_47c;
  float local_478;
  float local_474;
  float local_470;
  float local_46c;
  float local_468;
  float local_464;
  float local_460;
  float local_45c;
  float local_458;
  float local_454;
  float local_450;
  int local_44c;
  float local_448;
  float local_444;
  float local_440;
  float local_43c;
  float local_438;
  float local_434;
  float local_430;
  float local_42c;
  float local_428;
  float local_424;
  float local_420;
  float local_41c;
  int local_418;
  undefined4 local_414 [6];
  float local_3fc;
  float local_3f8;
  float local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4 [6];
  undefined1 auStack_3cc [12];
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
  float local_378;
  float local_374;
  float local_370;
  float local_36c;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  undefined1 local_354 [24];
  float local_33c;
  float local_338;
  float local_334;
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  char local_2f4 [40];
  char local_2cc [12];
  float fStack_2c0;
  undefined4 local_2ac [12];
  undefined4 local_27c [12];
  char local_24c [32];
  undefined1 auStack_22c [20];
  undefined1 local_218 [12];
  undefined1 local_20c [12];
  undefined1 auStack_200 [12];
  undefined1 auStack_1f4 [12];
  undefined1 local_1e8 [12];
  undefined1 local_1dc [12];
  undefined1 auStack_1d0 [12];
  undefined1 local_1c4 [12];
  undefined1 local_1b8 [48];
  undefined1 auStack_188 [48];
  undefined1 local_158 [48];
  undefined1 auStack_128 [48];
  undefined1 auStack_f8 [48];
  undefined1 local_c8 [200];
  
  switch(param_1[0x12e]) {
  case 1:
  case 4:
  case 5:
  case 6:
    local_44c = param_1[0x12f];
    iVar7 = param_1[0x130];
    local_48c = (float)param_1[0x131];
    local_480 = (float)param_1[0x134];
    local_488 = (float)param_1[0x132];
    local_484 = (float)param_1[0x133];
    if (iVar7 != 0) {
      local_47c = local_48c * (float)param_1[0x325] +
                  local_488 * (float)param_1[0x328] + local_484 * (float)param_1[0x32b] +
                  (float)param_1[0x32e];
      local_478 = local_488 * (float)param_1[0x329] +
                  local_484 * (float)param_1[0x32c] + local_48c * (float)param_1[0x326] +
                  (float)param_1[0x32f];
      local_474 = local_488 * (float)param_1[0x32a] +
                  local_484 * (float)param_1[0x32d] + local_48c * (float)param_1[0x327] +
                  (float)param_1[0x330];
      local_36c = (float)param_1[0x6e] * (float)param_1[0x325] +
                  (float)param_1[0x32b] * (float)param_1[0x70] +
                  (float)param_1[0x328] * (float)param_1[0x6f];
      local_368 = (float)param_1[0x32c] * (float)param_1[0x70] +
                  (float)param_1[0x326] * (float)param_1[0x6e] +
                  (float)param_1[0x329] * (float)param_1[0x6f];
      local_364 = (float)param_1[0x32d] * (float)param_1[0x70] +
                  (float)param_1[0x327] * (float)param_1[0x6e] +
                  (float)param_1[0x32a] * (float)param_1[0x6f];
      local_418 = iVar7;
      pfVar6 = (float *)FUN_004e29c2(local_20c,&local_36c,param_1 + 0x65);
      fVar3 = local_474 * pfVar6[1] - local_478 * pfVar6[2];
      fVar5 = local_47c * pfVar6[2] - local_474 * *pfVar6;
      fVar4 = local_478 * *pfVar6 - local_47c * pfVar6[1];
      local_48c = fVar3 * (float)param_1[0x7d] +
                  fVar5 * (float)param_1[0x80] + fVar4 * (float)param_1[0x83] + (float)param_1[0x68]
      ;
      local_488 = fVar3 * (float)param_1[0x7e] +
                  fVar5 * (float)param_1[0x81] + fVar4 * (float)param_1[0x84] + (float)param_1[0x69]
      ;
      local_49c = (float)param_1[99];
      local_4a4 = local_48c * local_49c;
      local_4a0 = local_488 * local_49c;
      local_49c = (fVar3 * (float)param_1[0x7f] +
                   fVar5 * (float)param_1[0x82] + fVar4 * (float)param_1[0x85] +
                  (float)param_1[0x6a]) * local_49c;
      local_424 = local_4a4;
      local_420 = local_4a0;
      local_41c = local_49c;
      fVar19 = (float10)FUN_005aabc0(&local_424);
      iVar14 = param_1[0x12e];
      local_45c = (float)fVar19;
      local_460 = 20000.0;
      if ((iVar14 == 5) || (iVar14 == 6)) {
        local_460 = 40000.0;
      }
      fVar20 = fVar19;
      if ((float10)local_460 < fVar19) {
        fVar20 = (float10)local_460;
      }
      if (param_1[0x161] == 0) {
        param_1[0x161] = iVar14;
      }
      if ((float10)local_460 * (float10)(float)param_1[0x162] < fVar20) {
        param_1[0x162] = (int)(float)(fVar20 / (float10)local_460);
      }
      if ((float10)_DAT_0064e3d0 <= fVar19) {
        iVar14 = 4;
        do {
          FUN_004042a0();
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        puVar8 = &DAT_00701550;
        puVar17 = local_2ac;
        for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
          *puVar17 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar17 = puVar17 + 1;
        }
        iVar14 = 4;
        do {
          FUN_004042a0();
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        puVar8 = &DAT_00701550;
        puVar17 = local_3e4;
        for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
          *puVar17 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar17 = puVar17 + 1;
        }
        iVar14 = 4;
        do {
          FUN_004042a0();
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        puVar8 = &DAT_00701550;
        puVar17 = local_414;
        for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
          *puVar17 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar17 = puVar17 + 1;
        }
        FUN_005e10a0(iVar7,local_2ac);
        local_470 = *(float *)(iVar7 + 0x2c);
        if (local_470 == 0.0) {
          FUN_0061c369(local_c8,s_Space__s__has_no_parent___Node___0067c96c,
                       *(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(local_44c + 0xc));
          FUN_004e1e9c(local_c8);
        }
        if ((param_1[0x12e] == 5) && (iVar7 = FUN_004d8980(local_480), iVar7 != 0)) {
          *(byte *)(iVar7 + 0x128) = *(byte *)(iVar7 + 0x128) | 1;
        }
        if (param_1[0x12e] == 6) {
          piVar1 = param_1 + 0x134;
          uVar9 = 0xffffffff;
          piVar16 = piVar1;
          do {
            piVar15 = piVar16;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            piVar15 = (int *)((int)piVar16 + 1);
            iVar7 = *piVar16;
            piVar16 = piVar15;
          } while ((char)iVar7 != '\0');
          uVar9 = ~uVar9;
          pcVar13 = (char *)((int)piVar15 - uVar9);
          pcVar18 = local_24c;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar18 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar18 = pcVar18 + 1;
          }
          uVar9 = 0xffffffff;
          piVar16 = piVar1;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            iVar7 = *piVar16;
            piVar16 = (int *)((int)piVar16 + 1);
          } while ((char)iVar7 != '\0');
          uVar10 = 0xffffffff;
          pcVar13 = (char *)(~uVar9 + (int)piVar1);
          do {
            pcVar18 = pcVar13;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar18 = pcVar13 + 1;
            cVar2 = *pcVar13;
            pcVar13 = pcVar18;
          } while (cVar2 != '\0');
          uVar10 = ~uVar10;
          pcVar13 = pcVar18 + -uVar10;
          pcVar18 = local_2f4;
          for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar18 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar18 = pcVar18 + 1;
          }
          iVar7 = FUN_005ee8e0(0,local_24c);
          if (iVar7 != 0) {
            *(undefined4 *)(iVar7 + 0x88) = 0;
          }
          iVar7 = FUN_005ee8e0(0,local_2f4);
          if (iVar7 != 0) {
            *(byte *)(iVar7 + 0x28) = *(byte *)(iVar7 + 0x28) | 1;
          }
        }
        if ((param_1[0x12e] == 5) || (param_1[0x12e] == 6)) {
          uVar11 = 0;
          iVar7 = *(int *)(local_44c + 0x2c);
          if ((iVar7 != 0) &&
             ((*(char **)(iVar7 + 0xc) != (char *)0x0 &&
              (iVar14 = _strncmp(*(char **)(iVar7 + 0xc),&DAT_0067c968,2), iVar14 == 0)))) {
            uVar9 = 0xffffffff;
            pcVar13 = *(char **)(iVar7 + 0xc);
            do {
              pcVar18 = pcVar13;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar18 = pcVar13 + 1;
              cVar2 = *pcVar13;
              pcVar13 = pcVar18;
            } while (cVar2 != '\0');
            uVar9 = ~uVar9;
            pcVar13 = pcVar18 + -uVar9;
            pcVar18 = local_2cc;
            for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar18 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar18 = pcVar18 + 1;
            }
            uVar9 = 0xffffffff;
            pcVar13 = local_2cc;
            do {
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              cVar2 = *pcVar13;
              pcVar13 = pcVar13 + 1;
            } while (cVar2 != '\0');
            if (2 < (int)(~uVar9 - 1)) {
              uVar9 = 0xffffffff;
              pcVar13 = local_2cc + 2;
              do {
                pcVar18 = pcVar13;
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                pcVar18 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar18;
              } while (cVar2 != '\0');
              uVar9 = ~uVar9;
              pcVar13 = pcVar18 + -uVar9;
              pcVar18 = local_2f4;
              for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined4 *)pcVar18 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar18 = pcVar18 + 4;
              }
              for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *pcVar18 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar18 = pcVar18 + 1;
              }
              iVar7 = FUN_005ee8e0(0,local_2f4);
              if (iVar7 != 0) {
                if (param_1[0x12e] == 5) {
                  uVar11 = FUN_005ee8e0(iVar7,s_RadarHeadOn_0067c95c);
                }
                if (param_1[0x12e] == 6) {
                  uVar11 = FUN_005ee8e0(iVar7,s_FonarHeadOn_0067c950);
                }
                FUN_005e10c0(uVar11,1);
              }
            }
          }
        }
        FUN_005e1080(local_470,local_3e4);
        puVar8 = (undefined4 *)FUN_005ab130(local_1b8,local_2ac,local_3e4);
        local_48c = local_424 / local_45c;
        puVar17 = local_414;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar17 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar17 = puVar17 + 1;
        }
        local_3ec = DAT_007015b4;
        local_494 = DAT_00701594;
        local_3e8 = DAT_007015b8;
        local_490 = DAT_00701598;
        local_3f0 = DAT_007015b0;
        local_43c = 0.0;
        local_498 = DAT_00701590;
        local_438 = 0.0;
        local_434 = 0.0;
        local_488 = local_420 / local_45c;
        local_484 = local_41c / local_45c;
        fVar3 = local_484 * DAT_00701594 - local_488 * DAT_00701598;
        fVar5 = DAT_00701598 * local_48c - local_484 * DAT_00701590;
        fVar4 = local_488 * DAT_00701590 - DAT_00701594 * local_48c;
        local_4a4 = fVar5 * DAT_00701598 - fVar4 * DAT_00701594;
        local_4a0 = fVar4 * DAT_00701590 - DAT_00701598 * fVar3;
        local_49c = DAT_00701594 * fVar3 - fVar5 * DAT_00701590;
        local_3a8 = local_4a4;
        local_3a4 = local_4a0;
        local_3a0 = local_49c;
        FUN_005aaad0(&local_458,&local_3a8);
        uVar11 = FUN_004e5437(param_1[200],param_1 + 0x86,param_1 + 0xf1);
        local_468 = (local_454 - DAT_00701594) * _DAT_0064b440;
        local_464 = (local_450 - DAT_00701598) * _DAT_0064b440;
        local_4a4 = local_3c0 + DAT_00701590 * _DAT_0064b3f8;
        local_4a0 = local_3bc + DAT_00701594 * _DAT_0064b3f8;
        local_49c = DAT_00701598 * _DAT_0064b3f8 + local_3b8;
        local_360 = local_4a4 + (local_458 - DAT_00701590) * _DAT_0064b440;
        local_35c = local_468 + local_4a0;
        local_358 = local_464 + local_49c;
        local_480 = local_4a0;
        local_478 = local_4a0;
        local_474 = local_49c;
        local_470 = local_49c;
        local_39c = local_4a4;
        local_398 = local_4a0;
        local_394 = local_49c;
        uVar9 = FUN_004e5fd9(uVar11,&local_39c,&local_360,&local_43c,&local_498);
        if ((uVar9 & 1) == 0) {
          local_4a4 = local_3c0 + local_458;
          local_4a0 = local_3bc + local_454;
          local_49c = local_450 + local_3b8;
          local_43c = local_4a4;
          local_438 = local_4a0;
          local_434 = local_49c;
        }
        else {
          local_47c = local_43c - local_3c0;
          local_478 = local_438 - local_3bc;
          local_474 = local_434 - local_3b8;
          FUN_0041ce10(local_478 * DAT_00701598 - local_474 * DAT_00701594,
                       local_474 * DAT_00701590 - local_47c * DAT_00701598,
                       local_47c * DAT_00701594 - local_478 * DAT_00701590);
          FUN_0041ce10(local_474 * local_4a0 - local_478 * local_49c,
                       local_47c * local_49c - local_474 * local_4a4,
                       local_478 * local_4a4 - local_47c * local_4a0);
          local_390 = local_46c;
          local_38c = local_468;
          local_388 = local_464;
          pfVar6 = (float *)FUN_005aaad0(local_1dc,&local_390);
          local_498 = *pfVar6;
          local_494 = pfVar6[1];
          local_490 = pfVar6[2];
        }
        FUN_0041ce10(local_484 * local_494 - local_488 * local_490,
                     local_490 * local_48c - local_484 * local_498,
                     local_488 * local_498 - local_494 * local_48c);
        FUN_0041ce10(local_490 * local_4a0 - local_494 * local_49c,
                     local_498 * local_49c - local_490 * local_4a4,
                     local_494 * local_4a4 - local_498 * local_4a0);
        local_384 = local_46c;
        local_380 = local_468;
        local_37c = local_464;
        pfVar6 = (float *)FUN_005aaad0(local_1c4,&local_384);
        local_458 = *pfVar6;
        local_454 = pfVar6[1];
        local_450 = pfVar6[2];
        if (_DAT_0064b248 <= local_3f4) {
          FUN_005aba00(&local_324,local_414);
          FUN_0041ce10(local_450 * local_3f8 - local_454 * local_3f4,
                       local_458 * local_3f4 - local_450 * local_3fc,
                       local_454 * local_3fc - local_458 * local_3f8);
          local_378 = local_46c;
          local_374 = local_468;
          local_370 = local_464;
          FUN_005aaad0(&local_430,&local_378);
          FUN_0041ce10(local_318 * local_42c + local_30c * local_428 + local_324 * local_430,
                       local_314 * local_42c + local_308 * local_428 + local_320 * local_430,
                       local_310 * local_42c + local_304 * local_428 + local_31c * local_430);
          fVar19 = (float10)FUN_0061d420();
          fVar19 = fVar19 * (float10)_DAT_0064b948;
          local_470 = (float)((((float10)local_45c - (float10)_DAT_0064e3d0) *
                              (float10)_DAT_0064f62c) /
                             ((float10)local_460 - (float10)_DAT_0064e3d0));
          local_480 = (float)(((float10)local_460 - (float10)_DAT_0064e3d0) * fVar19 *
                             (float10)_DAT_0064f628);
          if (fVar19 < (float10)local_470) {
            local_470 = (float)fVar19;
          }
          uVar12 = 0;
          uVar11 = FUN_005ab380(local_158,DAT_007015b0,DAT_007015b4,DAT_007015b8,local_448,local_444
                                ,local_440,local_470,local_2ac);
          FUN_005ab130(local_27c,uVar11);
          FUN_005ab130(local_354,local_27c,local_3e4);
          if ((((local_490 * local_334 + local_494 * local_338 + local_498 * local_33c <
                 _DAT_0064b248) || ((float)_DAT_0064f620 < local_470)) ||
              ((local_450 * local_334 + local_454 * local_338 + local_458 * local_33c <
                (float)_DAT_0064a668 &&
               ((float)_DAT_0064a668 <
                local_450 * local_3f4 + local_454 * local_3f8 + local_458 * local_3fc)))) ||
             (local_334 < _DAT_0064b248)) {
            *(byte *)(local_44c + 0x28) = *(byte *)(local_44c + 0x28) | 1;
            FUN_0041ce10(local_494 * local_334 - local_490 * local_338,
                         local_490 * local_33c - local_498 * local_334,
                         local_498 * local_338 - local_494 * local_33c);
            FUN_0041ce10(local_490 * local_4a0 - local_494 * local_49c,
                         local_498 * local_49c - local_490 * local_4a4,
                         local_494 * local_4a4 - local_498 * local_4a0);
            FUN_0041ce10(local_494 * local_474 - local_490 * local_478,
                         local_490 * local_47c - local_498 * local_474,
                         local_498 * local_478 - local_494 * local_47c);
            local_48c = local_46c;
            local_488 = local_468;
            local_484 = local_464;
            pfVar6 = (float *)FUN_004cb300(local_1e8,&local_48c,local_3e4);
            local_48c = *pfVar6;
            local_488 = pfVar6[1];
            local_484 = pfVar6[2];
            if (local_480 < local_45c) {
              local_480 = _DAT_0064b240 - local_480 / local_45c;
              FUN_0041ce10(local_480 * (float)param_1[0x68],local_480 * (float)param_1[0x69],
                           local_480 * (float)param_1[0x6a]);
              local_3ac = local_464;
              local_3b0 = local_468;
              local_3b4 = local_46c;
              (**(code **)(*param_1 + 0x90))(&local_3b4,s_AnmCol_1_0067c944);
              iVar7 = *param_1;
              uVar11 = FUN_004bdd80(auStack_22c,param_1 + 0x6b,local_488,s_AnmCol_2_0067c938);
              (**(code **)(iVar7 + 0x94))(uVar11);
              uVar12 = 1;
              if (local_45c <= local_460) {
                local_480 = local_45c / local_460;
                uVar11 = FUN_004bdd80(auStack_1f4,&local_48c,_DAT_0064b240 - local_480);
                uVar11 = FUN_004bdd80(auStack_1d0,&local_448,local_480,uVar11);
                pfVar6 = (float *)FUN_004bddd0(auStack_200,uVar11);
                local_48c = *pfVar6;
                local_488 = pfVar6[1];
                local_484 = pfVar6[2];
              }
              else {
                local_48c = local_448;
                local_488 = local_444;
                local_484 = local_440;
              }
            }
            fVar19 = (float10)fpatan((float10)local_424,(float10)local_420);
            local_470 = (float)-fVar19;
            FUN_004e280c(local_3e4,local_2cc);
            FUN_004e1080(&local_458,auStack_3cc);
            fVar19 = (float10)FUN_0061d420();
            local_480 = (float)(fVar19 * (float10)_DAT_0064f618);
            uVar11 = FUN_005ab380(auStack_f8,DAT_007015b0,DAT_007015b4,DAT_007015b8,local_448,
                                  local_444,local_440,local_480);
            uVar11 = FUN_005ab7d0(auStack_188,local_470 - fStack_2c0,uVar11);
            puVar8 = (undefined4 *)FUN_005ab130(auStack_128,uVar11);
            iVar7 = param_1[0x12e];
            puVar17 = local_27c;
            for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
              *puVar17 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar17 = puVar17 + 1;
            }
            if ((((iVar7 == 4) && (iVar7 = *(int *)(local_44c + 0x2c), iVar7 != 0)) &&
                (*(char **)(iVar7 + 0xc) != (char *)0x0)) &&
               (iVar14 = _strncmp(*(char **)(iVar7 + 0xc),&DAT_0067c968,2), iVar14 == 0)) {
              uVar9 = 0xffffffff;
              pcVar13 = *(char **)(iVar7 + 0xc);
              do {
                pcVar18 = pcVar13;
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                pcVar18 = pcVar13 + 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar18;
              } while (cVar2 != '\0');
              uVar9 = ~uVar9;
              pcVar13 = pcVar18 + -uVar9;
              pcVar18 = local_2f4;
              for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined4 *)pcVar18 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar18 = pcVar18 + 4;
              }
              for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *pcVar18 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar18 = pcVar18 + 1;
              }
              uVar9 = 0xffffffff;
              pcVar13 = local_2f4;
              do {
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                cVar2 = *pcVar13;
                pcVar13 = pcVar13 + 1;
              } while (cVar2 != '\0');
              if (2 < (int)(~uVar9 - 1)) {
                uVar9 = 0xffffffff;
                pcVar13 = local_2f4 + 2;
                do {
                  pcVar18 = pcVar13;
                  if (uVar9 == 0) break;
                  uVar9 = uVar9 - 1;
                  pcVar18 = pcVar13 + 1;
                  cVar2 = *pcVar13;
                  pcVar13 = pcVar18;
                } while (cVar2 != '\0');
                uVar9 = ~uVar9;
                pcVar13 = pcVar18 + -uVar9;
                pcVar18 = local_24c;
                for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *(undefined4 *)pcVar18 = *(undefined4 *)pcVar13;
                  pcVar13 = pcVar13 + 4;
                  pcVar18 = pcVar18 + 4;
                }
                for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *pcVar18 = *pcVar13;
                  pcVar13 = pcVar13 + 1;
                  pcVar18 = pcVar18 + 1;
                }
                iVar7 = FUN_005ee8e0(0,local_24c);
                if (iVar7 != 0) {
                  uVar11 = FUN_005ee8e0(iVar7,s_TL_operative_0067c928);
                  FUN_005e10c0(uVar11,0);
                }
              }
            }
          }
          iVar7 = local_418;
          FUN_005e1060(local_418,0,local_27c);
          FUN_00586230(*(undefined4 *)(iVar7 + 0xc),local_2ac);
          FUN_00586230(*(undefined4 *)(iVar7 + 0xc),local_27c);
          return uVar12;
        }
      }
    }
    break;
  case 2:
    local_46c = (float)param_1[0x68];
    local_468 = (float)param_1[0x69];
    local_464 = (float)param_1[0x6a];
    FUN_005800e0(param_1,param_1 + 0xf1,param_1 + 0xf4);
    uVar11 = FUN_004bde20(local_218,&local_46c,param_1 + 0x68,param_1[99]);
    FUN_004bdd80(&local_4a4,uVar11);
    FUN_005c79c0(&local_4a4,param_1[0x12f],0);
  }
  return 0;
}

