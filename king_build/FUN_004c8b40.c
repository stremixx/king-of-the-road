
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c8b40(float *param_1,float param_2,float param_3,float *param_4,int param_5,int param_6,
                 undefined4 *param_7)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  float fVar8;
  int iVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float local_4e0;
  float local_4dc;
  float local_4d8;
  float local_4d4;
  float local_4d0;
  float local_4cc;
  float local_4c8;
  float local_4c4;
  float local_4c0;
  float local_4bc;
  float local_4b8;
  float local_4b4;
  float local_4b0;
  float local_4ac;
  float local_4a8;
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
  float local_44c;
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
  float local_418;
  float local_414;
  float local_410;
  float local_40c [4];
  float local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  float local_3f0;
  undefined1 local_3dc [8];
  float local_3d4;
  float local_3d0 [8];
  float local_3b0 [8];
  undefined4 local_390 [8];
  undefined4 local_370 [15];
  float local_334;
  undefined1 local_2a0 [52];
  float local_26c;
  float local_268;
  float local_264;
  undefined1 local_1d0 [208];
  char local_100 [256];
  
  if ((param_6 != 0) && (_DAT_0064b248 <= _DAT_00694fc4)) {
    local_4a8 = param_3 * _DAT_0064b248;
    local_4a4 = (float)*(double *)(DAT_00695184 + 0xb58);
    local_4a0 = (float)*(double *)(DAT_00695184 + 0xb60);
    local_49c = (float)*(double *)(DAT_00695184 + 0xb68);
    local_4c0 = local_4a4 - *param_1;
    local_4bc = local_4a0 - param_1[1];
    local_4b8 = local_49c - param_1[2];
    local_46c = local_4c0;
    local_468 = local_4bc;
    local_464 = local_4b8;
    FUN_005aaad0(&local_490,&local_4c0);
    local_46c = local_48c * DAT_00701598 - local_488 * DAT_00701594;
    local_468 = local_488 * DAT_00701590 - local_490 * DAT_00701598;
    local_464 = local_490 * DAT_00701594 - local_48c * DAT_00701590;
    local_484 = DAT_00701598 * param_4[1] - DAT_00701594 * param_4[2];
    local_480 = DAT_00701590 * param_4[2] - DAT_00701598 * *param_4;
    local_47c = DAT_00701594 * *param_4 - DAT_00701590 * param_4[1];
    local_494 = local_48c * param_4[1] + local_488 * param_4[2] + *param_4 * local_490;
    if (_DAT_0064b2f4 < local_494) {
      pfVar3 = (float *)FUN_005ab7d0(local_40c,(float)*(double *)(DAT_00695184 + 0xb70));
      local_4b8 = 0.0;
      local_4ac = 0.0;
      local_4b4 = DAT_00701580 * *pfVar3 + DAT_00701584 * pfVar3[3] + DAT_00701588 * pfVar3[6] +
                  pfVar3[9];
      local_4dc = DAT_00701580 * pfVar3[1] + DAT_00701584 * pfVar3[4] + DAT_00701588 * pfVar3[7] +
                  pfVar3[10];
      local_4c0 = *param_4;
      local_4bc = param_4[1];
      local_4b0 = local_4dc;
      pfVar3 = (float *)FUN_005aaad0(&local_4e0,&local_4c0);
      pfVar4 = (float *)FUN_005aaad0(&local_4d4,&local_4b4);
      FUN_0041ce10(pfVar4[1] * pfVar3[2] - pfVar3[1] * pfVar4[2],
                   *pfVar3 * pfVar4[2] - *pfVar4 * pfVar3[2],
                   pfVar3[1] * *pfVar4 - *pfVar3 * pfVar4[1]);
      local_4c4 = local_494 * *(float *)(DAT_006f230c + 0x218);
      FUN_0041ce10(*param_1 - local_4a4,param_1[1] - local_4a0,param_1[2] - local_49c);
      local_4c0 = local_4b4;
      local_4bc = local_4b0;
      local_4b8 = local_4ac;
      fVar11 = (float10)FUN_005aabc0(&local_4c0);
      if (fVar11 * (float10)_DAT_0064b248 <= (float10)DAT_0064b1f0) {
        local_4c8 = (float)(fVar11 * (float10)_DAT_0064b248);
      }
      else {
        local_4c8 = DAT_0064b1f0;
      }
      FUN_0041ce10(local_490 * local_4c8,local_48c * local_4c8,local_488 * local_4c8);
      FUN_0041ce10(local_4b4 + *param_1,local_4b0 + param_1[1],local_4ac + param_1[2]);
      local_450 = local_4c0;
      local_44c = local_4bc;
      local_448 = local_4b8;
      local_478 = *param_1;
      local_474 = param_1[1];
      local_470 = param_1[2];
      if ((((float)param_7[0xf] == _DAT_0064b254) && ((float)param_7[0xd] == _DAT_0064b254)) &&
         ((float)param_7[0xe] == _DAT_0064b254)) {
        param_7 = (undefined4 *)0x0;
      }
      iVar9 = 2;
      do {
        FUN_005eebf0();
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (param_7 == (undefined4 *)0x0) {
        FUN_0041ce10(DAT_00701590 * _DAT_0064b654,DAT_00701594 * _DAT_0064b654,
                     DAT_00701598 * _DAT_0064b654);
        FUN_0041ce10(*param_1 - local_4b4,param_1[1] - local_4b0,param_1[2] - local_4ac);
        local_4d0 = local_4bc;
        local_4d4 = local_4c0;
        local_4cc = local_4b8;
        FUN_0041ce10(DAT_00701590 * _DAT_0064b654,DAT_00701594 * _DAT_0064b654,
                     DAT_00701598 * _DAT_0064b654);
        FUN_0041ce10(local_4a4 + *param_1,local_4a0 + param_1[1],local_49c + param_1[2]);
        local_4e0 = local_460;
        local_4dc = local_45c;
        local_4d8 = local_458;
        iVar9 = FUN_004e6061(param_6,&local_4e0,&local_4d4,local_370);
        if (iVar9 == 0) {
          return;
        }
      }
      else {
        puVar6 = local_370;
        for (iVar9 = 0x34; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar6 = *param_7;
          param_7 = param_7 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      local_100[0] = '\0';
      iVar9 = FUN_004e5485(param_6,&local_478,&local_450,local_100);
      if (local_100[0] == '\0') {
        FUN_0041ce10(DAT_00701590 * _DAT_0064b654,DAT_00701594 * _DAT_0064b654,
                     DAT_00701598 * _DAT_0064b654);
        FUN_0041ce10(local_450 - local_4e0,local_44c - local_4dc,local_448 - local_4d8);
        local_4bc = local_4d0;
        local_4c0 = local_4d4;
        local_4b8 = local_4cc;
        FUN_0041ce10(DAT_00701590 * _DAT_0064b654,DAT_00701594 * _DAT_0064b654,
                     DAT_00701598 * _DAT_0064b654);
        FUN_0041ce10(local_460 + local_450,local_45c + local_44c,local_458 + local_448);
        local_4a4 = local_4b4;
        local_4a0 = local_4b0;
        local_49c = local_4ac;
        iVar5 = FUN_004e6061(iVar9,&local_4a4,&local_4c0,local_2a0);
        if (iVar5 != 0) {
          if (iVar9 == param_6) {
            local_4d0 = param_1[1];
            local_4cc = param_1[2];
            local_4dc = local_268;
            local_4e0 = local_26c;
            local_4d8 = local_264;
            local_4d4 = *param_1;
            FUN_005eebf0();
            iVar9 = FUN_004e6354(iVar9,&local_4d4,&local_4e0,local_1d0);
            local_470 = local_334;
          }
          else {
            local_4bc = param_1[1];
            local_4b8 = param_1[2];
            local_4a0 = local_268;
            local_4a4 = local_26c;
            local_49c = local_264;
            local_4c0 = *param_1;
            FUN_005eebf0();
            iVar9 = FUN_004e6354(iVar9,&local_4c0,&local_4a4,local_1d0);
            if (iVar9 != 0) {
              return;
            }
            iVar9 = FUN_004e6354(param_6,&local_4c0,&local_4a4,local_1d0);
            local_470 = local_334;
          }
          if (iVar9 == 0) {
            iVar9 = 3;
            do {
              FUN_004042a0();
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
            fVar8 = (_DAT_0064b1f4 * local_4a8) / local_494;
            local_498 = _DAT_0064b1f8 * local_4a8;
            local_420 = -(local_3d4 * local_4a8);
            if (DAT_0071f830 != 0) {
              fVar8 = fVar8 * _DAT_0064b1fc;
              local_498 = local_498 * _DAT_0064b1fc;
            }
            local_410 = param_2 * _DAT_0064b8f8;
            local_4a8 = (local_4c8 + param_2) * _DAT_0064b8f8;
            local_494 = (float)param_5 * _DAT_0064b8f4;
            local_414 = ((float)param_5 + _DAT_0064b240) * _DAT_0064b8f4;
            fVar1 = local_47c * fVar8;
            fVar2 = local_480 * fVar8;
            fVar8 = local_484 * fVar8;
            local_454 = fVar1;
            local_41c = fVar2;
            local_418 = fVar8;
            FUN_0041ce10(fVar8,fVar2,fVar1);
            FUN_0041ce10(local_478 - local_4e0,local_474 - local_4dc,local_470 - local_4d8);
            local_43c = local_4cc;
            local_444 = local_4d4;
            local_440 = local_4d0;
            FUN_0041ce10(fVar8,fVar2,fVar1);
            FUN_0041ce10(local_4e0 + local_478,local_4dc + local_474,local_4d8 + local_470);
            local_438 = local_4d4;
            local_434 = local_4d0;
            local_430 = local_4cc;
            FUN_0041ce10(local_490 * local_4c8,local_48c * local_4c8,local_488 * local_4c8);
            local_47c = local_4d8;
            local_484 = local_4e0;
            local_480 = local_4dc;
            FUN_0041ce10(local_46c * local_498,local_468 * local_498,local_464 * local_498);
            FUN_0041ce10(local_478 - local_4d4,local_474 - local_4d0,local_470 - local_4cc);
            FUN_0041ce10(local_460 + local_484,local_45c + local_480,local_458 + local_47c);
            local_42c = local_4b4;
            local_428 = local_4b0;
            local_424 = local_4ac;
            local_40c[0] = local_444;
            local_40c[1] = local_440;
            local_40c[2] = local_43c;
            iVar9 = __ftol();
            fVar8 = (float)(iVar9 << 0x18 | 0xffffff);
            local_3fc = local_494;
            local_40c[3] = fVar8;
            local_3f8 = 0;
            local_3f4 = 0;
            local_3f0 = local_410 - local_420;
            local_454 = local_410 + local_420;
            pfVar3 = local_40c;
            pfVar4 = local_3d0;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *pfVar4 = *pfVar3;
              pfVar3 = pfVar3 + 1;
              pfVar4 = pfVar4 + 1;
            }
            local_3f0 = local_454;
            local_40c[0] = local_438;
            local_40c[1] = local_434;
            local_40c[2] = local_430;
            local_3fc = local_414;
            local_3f8 = 0;
            local_3f4 = 0x3f800000;
            pfVar3 = local_40c;
            pfVar4 = local_3b0;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *pfVar4 = *pfVar3;
              pfVar3 = pfVar3 + 1;
              pfVar4 = pfVar4 + 1;
            }
            local_4c4 = fVar8;
            puVar6 = (undefined4 *)
                     FUN_004c9980(&local_42c,&local_4c4,local_494,0x3f800000,0,local_4a8);
            puVar10 = local_390;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar10 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar10 = puVar10 + 1;
            }
            FUN_004c8a20(local_370,2,local_3d0);
            FUN_0041ce10(local_418,local_41c,fVar1);
            local_4d4 = local_4e0;
            local_4d0 = local_4dc;
            local_4cc = local_4d8;
            pfVar3 = (float *)FUN_004bddd0(local_3dc,&local_478,&local_4d4);
            fVar1 = local_4c8;
            local_444 = *pfVar3;
            local_440 = pfVar3[1];
            local_43c = pfVar3[2];
            uVar7 = FUN_004bdd80(local_3dc,&local_490,local_4c8);
            fVar2 = local_498;
            uVar7 = FUN_004bdd80(&local_4e0,&local_46c,local_498,uVar7);
            uVar7 = FUN_004bddd0(&local_4d4,&local_478,uVar7);
            pfVar3 = (float *)FUN_004bddd0(&local_460,uVar7);
            local_438 = *pfVar3;
            local_434 = pfVar3[1];
            local_430 = pfVar3[2];
            uVar7 = FUN_004bdd80(local_3dc,&local_490,fVar1);
            uVar7 = FUN_004bdd80(&local_4e0,&local_46c,fVar2,uVar7);
            uVar7 = FUN_004bde20(&local_4d4,&local_478,uVar7);
            pfVar3 = (float *)FUN_004bddd0(&local_460,uVar7);
            fVar1 = local_414;
            local_42c = *pfVar3;
            local_428 = pfVar3[1];
            local_424 = pfVar3[2];
            local_4c4 = fVar8;
            pfVar3 = (float *)FUN_004c9980(&local_444,&local_4c4,local_414,0,0x3f800000,local_454);
            pfVar4 = local_3d0;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *pfVar4 = *pfVar3;
              pfVar3 = pfVar3 + 1;
              pfVar4 = pfVar4 + 1;
            }
            local_4c4 = fVar8;
            pfVar3 = (float *)FUN_004c9980(&local_438,&local_4c4,fVar1,0x3f800000,0x3f800000,
                                           local_4a8);
            pfVar4 = local_3b0;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *pfVar4 = *pfVar3;
              pfVar3 = pfVar3 + 1;
              pfVar4 = pfVar4 + 1;
            }
            local_4c4 = fVar8;
            puVar6 = (undefined4 *)
                     FUN_004c9980(&local_42c,&local_4c4,local_494,0x3f800000,0,local_4a8);
            puVar10 = local_390;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar10 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar10 = puVar10 + 1;
            }
            FUN_004c8a20(local_370,2,local_3d0);
          }
        }
      }
    }
  }
  return;
}

