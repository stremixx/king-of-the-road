
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ca830(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
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
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  float local_384;
  int *local_380;
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
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  float local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  int local_324;
  int local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined1 local_2b0 [12];
  undefined1 local_2a4 [12];
  undefined1 local_298 [12];
  undefined1 local_28c [12];
  undefined1 local_280 [12];
  undefined1 local_274 [12];
  undefined1 local_268 [12];
  undefined1 local_25c [12];
  undefined4 local_250 [12];
  undefined4 local_220 [12];
  undefined1 local_1f0 [52];
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined1 local_120 [48];
  undefined1 local_f0 [48];
  undefined1 local_c0 [48];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
  }
  else {
    *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) | 1;
    if (param_3 == 0) goto LAB_004ca87d;
  }
  *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 1;
LAB_004ca87d:
  if (param_1 == *(int *)(DAT_006d0fd8 + 0x268)) {
    if (param_2 != 0) {
      *(undefined4 *)(param_2 + 0x80) = 0x96;
    }
    if (param_3 != 0) {
      *(undefined4 *)(param_2 + 0x80) = 0x8c;
    }
  }
  else {
    if (_DAT_00694fa0 < _DAT_0064b248) {
      return;
    }
    if (param_2 != 0) {
      *(undefined4 *)(param_2 + 0x80) = 0x8c;
    }
    if (param_3 != 0) {
      *(undefined4 *)(param_2 + 0x80) = 0x82;
    }
  }
  if (param_4 != 0) {
    if (param_4 == 1) {
      if (param_2 != 0) {
        *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) & 0xfe;
      }
    }
    else {
      if (param_4 != 2) {
        FUN_0061c369(&DAT_00694e10,s_setLampValue___val____d_006718e8,param_4);
        FUN_005d2250(&DAT_00694e10,0);
        return;
      }
      if (param_2 != 0) {
        *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) & 0xfe;
      }
      if (param_3 == 0) {
        param_4 = 1;
      }
      else {
        *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) & 0xfe;
      }
    }
    iVar2 = (param_4 != 1) + 1;
    fVar1 = _DAT_0064b654;
    if (param_4 == 1) {
      fVar1 = _DAT_0064b92c;
    }
    local_324 = param_2;
    fVar10 = (float10)fpatan((float10)fVar1 * (float10)_DAT_0064b410,(float10)1);
    local_320 = param_3;
    local_384 = (float)(fVar10 + fVar10);
    fVar10 = (float10)fpatan((float10)fVar1 * (float10)_DAT_0064b318,(float10)1);
    fVar10 = (fVar10 + fVar10) - (float10)local_384;
    local_364 = (float)fVar10;
    fVar10 = (float10)fptan((fVar10 + (float10)local_384) * (float10)_DAT_0064b248);
    local_394 = (float)(fVar10 * (float10)_DAT_0064b654);
    uVar3 = FUN_0057d5d0();
    FUN_005eebf0();
    local_3a4 = DAT_00701580 * _DAT_0064b31c;
    local_3a0 = DAT_00701584 * _DAT_0064b31c;
    local_39c = DAT_00701588 * _DAT_0064b31c;
    pfVar4 = (float *)FUN_004ca490(&local_330,param_1);
    local_3bc = local_3a4 + *pfVar4;
    local_3b8 = local_3a0 + pfVar4[1];
    local_3b4 = local_39c + pfVar4[2];
    local_3b0 = DAT_00701590 * _DAT_0064b654;
    local_3ac = DAT_00701594 * _DAT_0064b654;
    local_3a8 = DAT_00701598 * _DAT_0064b654;
    pfVar4 = (float *)FUN_0057d570(local_220);
    local_36c = local_3bc * pfVar4[1] + local_3b8 * pfVar4[4] + local_3b4 * pfVar4[7] + pfVar4[10];
    local_368 = local_3bc * pfVar4[2] + local_3b8 * pfVar4[5] + local_3b4 * pfVar4[8] + pfVar4[0xb];
    local_3a4 = local_3bc * *pfVar4 + local_3b8 * pfVar4[3] + local_3b4 * pfVar4[6] + pfVar4[9] +
                local_3b0;
    local_3a0 = local_3ac + local_36c;
    local_39c = local_3a8 + local_368;
    local_35c = local_3a4;
    local_358 = local_3a0;
    local_354 = local_39c;
    pfVar4 = (float *)FUN_0057d570(local_250);
    local_34c = DAT_007015b0 * pfVar4[1] + DAT_007015b4 * pfVar4[4] + DAT_007015b8 * pfVar4[7] +
                pfVar4[10];
    local_398 = DAT_007015b0 * pfVar4[2] + DAT_007015b4 * pfVar4[5] + DAT_007015b8 * pfVar4[8] +
                pfVar4[0xb];
    local_350 = DAT_007015b0 * *pfVar4 + DAT_007015b4 * pfVar4[3] + DAT_007015b8 * pfVar4[6] +
                pfVar4[9];
    local_348 = local_398;
    uVar3 = FUN_004ca440(uVar3,&local_350,&local_35c);
    local_390 = 0;
    local_38c = 0;
    local_388 = 0;
    local_37c = 0.0;
    local_378 = 0.0;
    local_374 = 0.0;
    if (iVar2 != 0) {
      local_380 = &local_324;
      local_398 = (float)iVar2;
      do {
        iVar2 = *local_380;
        *(float *)(iVar2 + 0x68) = local_364;
        *(float *)(iVar2 + 100) = local_384;
        *(undefined4 *)(iVar2 + 0x88) = 1;
        *(undefined4 *)(iVar2 + 0x8c) = 1;
        *(undefined4 *)(iVar2 + 0x38) = 3;
        *(undefined4 *)(iVar2 + 0x54) = 0x3f800000;
        *(undefined4 *)(iVar2 + 0x58) = 0;
        *(undefined4 *)(iVar2 + 0x5c) = 0x3a91a2b4;
        *(undefined4 *)(iVar2 + 0x6c) = 0x3f800000;
        *(undefined4 *)(iVar2 + 0x70) = 0x3f800000;
        *(undefined4 *)(iVar2 + 0x74) = 0x3f800000;
        local_3b0 = DAT_00701590 * _DAT_0064b654;
        local_3ac = DAT_00701594 * _DAT_0064b654;
        local_3a8 = DAT_00701598 * _DAT_0064b654;
        pfVar4 = (float *)FUN_0057d570(local_c0);
        FUN_0041ce10((local_3bc * *pfVar4 + local_3b8 * pfVar4[3] + local_3b4 * pfVar4[6] +
                     pfVar4[9]) - local_3b0,
                     (local_3bc * pfVar4[1] + local_3b8 * pfVar4[4] + local_3b4 * pfVar4[7] +
                     pfVar4[10]) - local_3ac,
                     (local_3bc * pfVar4[2] + local_3b8 * pfVar4[5] + local_3b4 * pfVar4[8] +
                     pfVar4[0xb]) - local_3a8);
        local_2e0 = local_350;
        local_2dc = local_34c;
        local_2d8 = local_348;
        FUN_0041ce10(DAT_00701590 * _DAT_0064b654,DAT_00701594 * _DAT_0064b654,
                     DAT_00701598 * _DAT_0064b654);
        local_3a4 = local_35c;
        local_3a0 = local_358;
        local_39c = local_354;
        pfVar4 = (float *)FUN_0057d570(local_30);
        FUN_0041ce10(local_3bc * *pfVar4 + local_3b8 * pfVar4[3] + local_3b4 * pfVar4[6] + pfVar4[9]
                     ,local_3bc * pfVar4[1] + local_3b8 * pfVar4[4] + local_3b4 * pfVar4[7] +
                      pfVar4[10],
                     local_3bc * pfVar4[2] + local_3b8 * pfVar4[5] + local_3b4 * pfVar4[8] +
                     pfVar4[0xb]);
        FUN_0041ce10(local_3a4 + local_2c8,local_3a0 + local_2c4,local_39c + local_2c0);
        local_2bc = local_2d4;
        local_2b8 = local_2d0;
        local_2b4 = local_2cc;
        iVar5 = FUN_004e6061(uVar3,&local_2bc,&local_2e0,local_1f0);
        if (iVar5 == 0) {
          local_37c = DAT_00701590;
          local_378 = DAT_00701594;
          local_374 = DAT_00701598;
          pfVar4 = (float *)FUN_0057d570(local_120);
          FUN_0041ce10(local_3bc * *pfVar4 + local_3b8 * pfVar4[3] + local_3b4 * pfVar4[6] +
                       pfVar4[9],
                       local_3bc * pfVar4[1] + local_3b8 * pfVar4[4] + local_3b4 * pfVar4[7] +
                       pfVar4[10],
                       local_3bc * pfVar4[2] + local_3b8 * pfVar4[5] + local_3b4 * pfVar4[8] +
                       pfVar4[0xb]);
          local_390 = local_2f8;
          local_38c = local_2f4;
          local_388 = local_2f0;
        }
        else {
          local_390 = local_1bc;
          local_38c = local_1b8;
          local_388 = local_1b4;
          local_37c = local_1b0;
          local_378 = local_1ac;
          local_374 = local_1a8;
        }
        FUN_0041ce10(DAT_00701580 * local_394,DAT_00701584 * local_394,DAT_00701588 * local_394);
        FUN_0041ce10(local_31c + local_3bc,local_318 + local_3b8,local_314 + local_3b4);
        local_3b4 = local_308;
        local_3bc = local_310;
        local_3b8 = local_30c;
        FUN_0041ce10(DAT_00701590 * _DAT_0064b654,DAT_00701594 * _DAT_0064b654,
                     DAT_00701598 * _DAT_0064b654);
        local_370 = local_304;
        local_368 = local_2fc;
        local_36c = local_300;
        uVar6 = FUN_0057d570(local_60);
        pfVar4 = (float *)FUN_0043f690(local_2a4,&local_3bc,uVar6);
        FUN_0041ce10(local_370 + *pfVar4,local_36c + pfVar4[1],local_368 + pfVar4[2]);
        local_330 = local_2ec;
        local_32c = local_2e8;
        local_328 = local_2e4;
        local_344 = FUN_004ca440(uVar3,&local_390,&local_330);
        FUN_004042a0();
        local_33c = local_38c;
        local_340 = local_390;
        local_338 = local_388;
        local_334 = local_394;
        fVar10 = (float10)FUN_004ca530(&local_340);
        local_360 = (float)fVar10;
        if ((float10)_DAT_0064b254 < fVar10) {
          puVar7 = local_250;
          puVar8 = (undefined4 *)(param_1 + 0x2f4);
          puVar9 = local_250;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          uVar3 = FUN_0057d5a0(local_f0);
          uVar3 = FUN_004bdd80(local_25c,&local_37c,0x41f00000,uVar3,puVar7);
          uVar3 = FUN_004bddd0(local_298,&local_390,uVar3);
          uVar3 = FUN_0043f690(local_268,uVar3);
          puVar7 = (undefined4 *)FUN_0043f690(local_280,uVar3);
          *(undefined4 *)(iVar2 + 0x3c) = *puVar7;
          *(undefined4 *)(iVar2 + 0x40) = puVar7[1];
          *(undefined4 *)(iVar2 + 0x44) = puVar7[2];
          puVar7 = local_220;
          puVar8 = (undefined4 *)(param_1 + 0x2f4);
          puVar9 = local_220;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          uVar3 = FUN_0057d5a0(local_90);
          uVar3 = FUN_004cb2c0(local_2b0,&local_37c,uVar3,puVar7);
          uVar3 = FUN_004cb300(local_28c,uVar3);
          puVar7 = (undefined4 *)FUN_004cb300(local_274,uVar3);
          *(undefined4 *)(iVar2 + 0x48) = *puVar7;
          *(undefined4 *)(iVar2 + 0x4c) = puVar7[1];
          *(undefined4 *)(iVar2 + 0x50) = puVar7[2];
          *(float *)(iVar2 + 0x60) = local_360;
          iVar2 = FUN_005cd2c0();
          if (iVar2 != 0) {
            puVar7 = &local_340;
            FUN_005cd2c0(puVar7);
            FUN_005cd260(puVar7);
          }
        }
        else {
          *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 1;
        }
        local_380 = local_380 + 1;
        local_398 = (float)((int)local_398 + -1);
        uVar3 = local_344;
      } while (local_398 != 0.0);
    }
  }
  return;
}

