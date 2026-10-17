
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005de3f0(int *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  float *pfVar12;
  undefined4 *puVar13;
  int iStack_3d0;
  undefined4 local_39c [9];
  float fStack_378;
  float fStack_374;
  float fStack_370;
  undefined4 local_36c [9];
  float fStack_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float fStack_338;
  float fStack_334;
  undefined4 auStack_330 [3];
  int local_324;
  float local_320 [16];
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  int iStack_2d0;
  int iStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 local_250 [12];
  undefined1 auStack_220 [48];
  undefined1 auStack_1f0 [12];
  float local_1e4 [25];
  undefined4 uStack_180;
  int iStack_170;
  undefined4 uStack_16c;
  float local_114 [25];
  undefined4 *puStack_b0;
  int *piStack_a0;
  undefined1 auStack_44 [48];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006489bb;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_005eebf0();
  FUN_005eebf0();
  FUN_005eebf0();
  puVar5 = local_36c + 2;
  iVar8 = 4;
  do {
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 3;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  puVar5 = local_39c + 2;
  puVar11 = &DAT_00701550;
  puVar13 = local_36c;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  iVar8 = 4;
  do {
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 3;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  puVar5 = local_250 + 2;
  puVar11 = &DAT_00701550;
  puVar13 = local_39c;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  iVar8 = 4;
  do {
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 3;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  uVar10 = 0;
  puVar5 = &DAT_00701550;
  puVar11 = local_250;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar11 = puVar11 + 1;
  }
  local_324 = 0;
  local_c = 0;
  if (param_1[0x7a] != 0) {
    dVar1 = *(double *)(param_1 + 0x2dc);
    dVar2 = *(double *)(param_1 + 0x2de);
    dVar3 = *(double *)(param_1 + 0x2e0);
    (**(code **)(*param_1 + 0xb0))();
    auStack_330[0] = 1000;
    if ((param_1[0x2f3] & 0x40000000U) == 0) {
      FUN_005f1c30(local_36c);
      param_1[0x8e] = (int)fStack_348;
      param_1[0x8f] = (int)fStack_344;
      param_1[0x90] = (int)fStack_340;
      puVar5 = (undefined4 *)
               FUN_005da010(auStack_220,param_1[0x2d6],param_1[0x2d7],param_1[0x2d8],param_1[0x2d9],
                            param_1[0x2da],param_1[0x2db],
                            *(double *)(param_1 + 0x2e2) + *(double *)(param_1 + 0x2dc),
                            param_1[0x2de],param_1[0x2df],param_1[0x2e0],param_1[0x2e1]);
    }
    else {
      FUN_005f1c30(local_36c);
      puVar5 = local_36c;
      param_1[0x8e] = (int)fStack_348;
      param_1[0x8f] = (int)fStack_344;
      param_1[0x90] = (int)fStack_340;
    }
    puVar11 = local_250;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar11 = puVar11 + 1;
    }
    FUN_005f1800(local_250,0);
    uStack_180 = 0;
    iStack_170 = 0;
    uStack_16c = 0;
    iStack_3d0 = 0;
    if (*(int *)(param_1[0x7a] + 0x4c) != 0) {
      do {
        FUN_005f1c30(local_39c);
        param_1[0x91] = (int)fStack_378;
        pfVar6 = local_320;
        local_320[0] = (float)*(double *)(param_1 + 0x9e);
        param_1[0x92] = (int)fStack_374;
        param_1[0x93] = (int)fStack_370;
        pfVar12 = (float *)&DAT_00701550;
        for (iVar8 = 0xc; pfVar6 = (float *)((int)pfVar6 + 4), iVar8 != 0; iVar8 = iVar8 + -1) {
          *pfVar6 = *pfVar12;
          pfVar12 = pfVar12 + 1;
        }
        fStack_2c4 = fStack_374;
        fStack_2c8 = fStack_378;
        fStack_2c0 = fStack_370;
        fStack_2d4 = (float)param_1[0x8e];
        iStack_2d0 = param_1[0x8f];
        iStack_2cc = param_1[0x90];
        uStack_2ac = 0;
        uStack_2a8 = 0;
        uStack_2bc = 0;
        uVar10 = (**(code **)(**(int **)(param_1[0x7a] + 0x4c) + 0x34))
                           (-(param_1[0x2f5] != 0) & 6,local_320);
        FUN_005aba00(auStack_220,local_320 + 1);
        FUN_005ab040(auStack_220);
        FUN_005ab0a0(auStack_220);
        if ((param_1[0x2f5] == 0) || ((uVar10 & 1) == 0)) break;
        if (iStack_3d0 == 0) {
LAB_005de8af:
          iVar8 = *param_1;
          pfVar6 = local_320;
          pfVar12 = local_1e4;
          for (iVar9 = 0x34; iVar9 != 0; iVar9 = iVar9 + -1) {
            *pfVar12 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            pfVar12 = pfVar12 + 1;
          }
          (**(code **)(iVar8 + 0x9c))(local_39c,local_36c,local_320);
          if (param_1[0x2ea] == 1) {
            *(double *)(param_1 + 0x2dc) = (double)(float)dVar1;
            *(double *)(param_1 + 0x2e0) = (double)(float)dVar3;
            *(double *)(param_1 + 0x2de) = (double)(float)dVar2;
          }
        }
        else {
          fStack_334 = (float)param_1[0x93] - (float)param_1[0x90];
          fStack_338 = (float)param_1[0x92] - (float)param_1[0x8f];
          fStack_33c = (float)param_1[0x91] - (float)param_1[0x8e];
          pfVar6 = (float *)FUN_005aaad0(auStack_1f0,&fStack_33c);
          if ((float)_DAT_0064c328 <
              ABS(fStack_2e0 * *pfVar6 + pfVar6[1] * fStack_2dc + pfVar6[2] * fStack_2d8))
          goto LAB_005de8af;
          fStack_378 = fStack_348;
          fStack_374 = fStack_344;
          fStack_370 = fStack_340;
          fVar4 = (float)*(double *)(param_1 + 0x9e);
          uVar7 = FUN_005ab330(auStack_44,fStack_2e0 * _DAT_0064b2f4 * fVar4,
                               fStack_2dc * _DAT_0064b2f4 * fVar4,fStack_2d8 * _DAT_0064b2f4 * fVar4
                              );
          FUN_005ab2f0(uVar7);
        }
        FUN_005f1800(local_39c,0);
        iStack_3d0 = iStack_3d0 + 1;
      } while (iStack_3d0 < 10);
      if (iStack_3d0 == 10) {
        fStack_378 = fStack_348;
        fStack_374 = fStack_344;
        fStack_370 = fStack_340;
        FUN_005f1800(local_39c,0);
        uVar10 = 0;
      }
    }
    if ((uVar10 & 2) != 0) {
      *(undefined4 *)(param_1[0x7a] + 0x4c) = uStack_2b8;
    }
    if ((int *)param_1[0x85] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x85] + 0x24))();
      (**(code **)(**(int **)(param_1[0x7a] + 0x4c) + 0x1c))(param_1[0x85]);
    }
    if (iStack_170 != 0) {
      pfVar6 = local_1e4;
      pfVar12 = local_114;
      for (iVar8 = 0x34; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pfVar12 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar12 = pfVar12 + 1;
      }
      puStack_b0 = auStack_330;
      (**(code **)(*piStack_a0 + 0x20))(local_114);
    }
    (**(code **)(*param_1 + 0x98))(local_1e4);
    FUN_005f1c30(local_39c);
    *(double *)(param_1 + 0x2d6) = (double)fStack_378;
    local_c = 0xffffffff;
    *(double *)(param_1 + 0x2d8) = (double)fStack_374;
    param_1[0x91] = (int)fStack_378;
    *(double *)(param_1 + 0x2da) = (double)fStack_370;
    param_1[0x92] = (int)fStack_374;
    param_1[0x93] = (int)fStack_370;
    if (local_324 != 0) {
      FUN_00631d5c(local_324);
    }
  }
  ExceptionList = local_14;
  return;
}

