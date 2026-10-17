
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00528fd0(int *param_1,ushort *param_2,int param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  ushort *puVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  float *pfVar18;
  bool bVar19;
  float fStack_3ac;
  ushort *puStack_3a8;
  float *pfStack_3a4;
  ushort *puStack_3a0;
  float *pfStack_39c;
  char *pcVar20;
  size_t sVar21;
  int local_380;
  int local_370;
  int local_36c;
  undefined8 local_368;
  float local_35c;
  float local_358;
  float local_354;
  undefined8 local_350;
  int local_348;
  int local_344;
  double local_340;
  int local_334;
  int local_330;
  float local_32c;
  float local_328;
  undefined4 local_324;
  int local_320 [5];
  float local_30c [3];
  char local_300;
  undefined4 local_2dc;
  undefined4 local_2d8 [9];
  float local_2b4;
  float local_2b0;
  float local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_1cc;
  undefined4 local_1c8;
  int local_194;
  undefined4 *local_190;
  int local_188;
  undefined4 *local_184;
  int local_17c;
  undefined4 *local_178;
  int local_170;
  undefined4 *local_16c;
  int local_164;
  int local_fc;
  ushort *local_d4;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0064633a;
  local_14 = ExceptionList;
  if (param_1[1] == 0) {
    return;
  }
  ExceptionList = &local_14;
  iVar4 = FUN_0057d570();
  local_32c = *(float *)(iVar4 + 0x24);
  local_328 = *(float *)(iVar4 + 0x28);
  local_324 = *(undefined4 *)(iVar4 + 0x2c);
  pfVar5 = (float *)FUN_0057d570();
  fVar6 = DAT_00701588 * pfVar5[6];
  fVar3 = DAT_00701584 * pfVar5[3];
  fVar2 = DAT_00701580 * *pfVar5;
  FUN_0061d420();
  local_320[4] = __ftol();
  if (fVar2 + fVar3 + fVar6 < _DAT_0064b254) {
    local_320[4] = 0x18 - local_320[4];
  }
  local_320[4] = local_320[4] % 0x18;
  local_328 = -local_328;
  uVar14 = (uint)*param_2;
  uVar9 = (uint)param_2[1];
  local_350 = (double)(int)(uVar14 - 0x50) / (*(double *)(param_1 + 4) - *(double *)(param_1 + 2));
  local_368 = (double)(int)(uVar9 - 0x82) / (*(double *)(param_1 + 8) - *(double *)(param_1 + 6));
  if (param_3 != 0) {
    local_350 = local_350 + local_350;
    local_368 = local_368 + local_368;
  }
  if (local_368 < local_350) {
    local_350 = local_368;
  }
  local_368 = _DAT_0064ab80 - local_350 * *(double *)(param_1 + 2);
  local_340 = _DAT_0064ab80 - local_350 * *(double *)(param_1 + 6);
  FUN_005b5830();
  if (param_3 != 0) {
    pfStack_39c = (float *)0x0;
    local_368 = (double)((float)(uVar14 / 6) - local_32c * (float)local_350);
    fVar6 = (float)(uVar14 / 0x14);
    local_340 = (double)((float)(uVar9 / 2) - local_328 * (float)local_350);
    iVar15 = (int)uVar9 >> 2;
    iVar4 = uVar14 / 3 - (int)fVar6;
    puStack_3a0 = (ushort *)0x52927a;
    FUN_005b58c0();
    puStack_3a8 = param_2;
    fStack_3ac = 7.58308e-39;
    pfStack_3a4 = (float *)fVar6;
    puStack_3a0 = (ushort *)iVar15;
    pfStack_39c = (float *)iVar4;
    FUN_005b6a50();
    pfStack_39c = (float *)0x0;
    puStack_3a0 = (ushort *)0x5292a8;
    FUN_005b58c0();
    puStack_3a8 = param_2;
    fStack_3ac = 7.58315e-39;
    pfStack_3a4 = (float *)iVar4;
    puStack_3a0 = (ushort *)iVar15;
    pfStack_39c = (float *)iVar4;
    FUN_005b6a50();
    pfStack_39c = (float *)0x0;
    puStack_3a0 = (ushort *)0x5292d0;
    FUN_005b58c0();
    puStack_3a8 = param_2;
    fStack_3ac = 7.583207e-39;
    pfStack_3a4 = (float *)iVar4;
    puStack_3a0 = (ushort *)(uVar9 - iVar15);
    pfStack_39c = (float *)fVar6;
    FUN_005b6a50();
    pfStack_39c = (float *)0x0;
    puStack_3a0 = (ushort *)0x5292f8;
    FUN_005b58c0();
    puStack_3a8 = param_2;
    fStack_3ac = 7.583258e-39;
    pfStack_3a4 = (float *)fVar6;
    puStack_3a0 = (ushort *)(uVar9 - iVar15);
    pfStack_39c = (float *)fVar6;
    FUN_005b6a50();
  }
  fVar6 = local_350._4_4_;
  puVar12 = (ushort *)local_350;
  local_370 = 0;
  local_36c = 0;
  do {
    if ((*(short *)(local_36c + 0x24 + *param_1) != 0) || (DAT_006cdcf4 != 0)) {
      pfStack_39c = (float *)local_368._4_4_;
      puStack_3a0 = (ushort *)local_368;
      pfStack_3a4 = (float *)fVar6;
      puStack_3a8 = puVar12;
      fStack_3ac = fVar6;
      FUN_00528810(param_2,puVar12);
    }
    local_370 = local_370 + 1;
    local_36c = local_36c + 0x28;
  } while (local_370 < param_1[1]);
  FUN_005b5840();
  FUN_004364f0();
  if (local_344 != DAT_0068becc) {
    do {
      pfStack_39c = (float *)local_2d8;
      local_2dc = 0;
      puStack_3a0 = (ushort *)0x5293bf;
      FUN_004011e0();
      puVar16 = &DAT_00701550;
      puVar17 = local_2d8;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar17 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar17 = puVar17 + 1;
      }
      local_2a8 = 0;
      local_2a4 = 0;
      local_2a0 = 0;
      local_29c = 0;
      local_298 = 0;
      local_294 = 0xffffffff;
      local_290 = 0xffffffff;
      FUN_004184d0();
      local_1cc = 0xffffffff;
      local_1c8 = 0xffffffff;
      local_c = 0;
      pfStack_39c = (float *)0x529440;
      FUN_0041d3f0();
      pfStack_39c = (float *)0x52944c;
      FUN_0041ec60();
      pfStack_39c = (float *)0x529451;
      FUN_0041bf30();
      local_35c = local_2b4;
      local_358 = local_2b0;
      local_354 = local_2ac;
      fVar6 = (float)__ftol();
      __ftol();
      if (param_3 == 0) {
LAB_0052950b:
        uVar9 = FUN_0043f7e0();
        if ((((uVar9 & 0x40) != 0) && (uVar9 = FUN_0043f7e0(), (uVar9 & 0x20) != 0)) ||
           ((((uVar9 = FUN_0043f7e0(), (uVar9 & 0x40) != 0 &&
              (uVar9 = FUN_0043f7e0(), (uVar9 & 0x20) == 0)) ||
             (uVar9 = FUN_0043f7e0(), (uVar9 & 0x10) != 0)) && (DAT_006cdcf4 != 0)))) {
          puStack_3a0 = param_2;
          pfStack_3a4 = (float *)0x5295bf;
          pfStack_39c = (float *)fVar6;
          FUN_005b8030();
        }
        local_c = 6;
        FUN_0044a450();
        local_c._0_1_ = 5;
        FUN_0044a450();
        local_c = CONCAT31(local_c._1_3_,4);
      }
      else {
        pfStack_39c = (float *)0x5294be;
        iVar4 = FUN_00528790();
        if (iVar4 == 0) goto LAB_0052950b;
        local_c = 3;
        FUN_0044a450();
        local_c._0_1_ = 2;
        FUN_004497b0();
        local_c = CONCAT31(local_c._1_3_,1);
      }
      FUN_004497b0();
      local_c = 0xffffffff;
      FUN_004497b0();
      piVar7 = (int *)FUN_00436520();
      local_344 = *piVar7;
    } while (local_344 != DAT_0068becc);
  }
  local_320[0] = -1;
  local_320[1] = 0xffffffff;
  local_320[2] = 0xffffffff;
  local_320[3] = 0xffffffff;
  FUN_004184d0();
  iVar4 = 0;
  local_c = 7;
  piVar7 = local_320;
  do {
    pfStack_39c = (float *)&stack0xfffffc68;
    puStack_3a0 = (ushort *)0x52969b;
    FUN_00568670();
    pfStack_39c = (float *)0x5296a3;
    iVar15 = FUN_00442320();
    if (iVar15 != 0) break;
    iVar4 = iVar4 + 1;
    *piVar7 = local_194;
    piVar7 = piVar7 + 1;
  } while (iVar4 < 2);
  __ftol();
  FUN_00436380();
  while (local_380 != -1) {
    FUN_00440a10();
    local_358 = -local_358;
    iVar15 = __ftol();
    __ftol();
    if (param_3 == 0) {
LAB_00529786:
      iVar8 = 0;
      if (0 < iVar4) {
        piVar7 = local_320;
        do {
          if (*piVar7 == local_380) {
            if ((iVar8 < iVar4) && (local_320[iVar8] == local_380)) goto LAB_00529822;
            break;
          }
          iVar8 = iVar8 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar8 < iVar4);
      }
      uVar9 = FUN_00440a30();
      if (((((uVar9 & 1) != 0) || (uVar9 = FUN_00440a30(), (uVar9 & 2) == 0)) || (param_3 != 0)) ||
         ((iVar8 < iVar4 && (local_320[iVar8] == local_380)))) {
        pfStack_39c = (float *)(iVar15 + -5);
        puStack_3a0 = param_2;
        pfStack_3a4 = (float *)0x52981f;
        FUN_005b8030();
      }
    }
    else {
      pfStack_39c = (float *)0x52977b;
      iVar8 = FUN_00528790();
      if (iVar8 == 0) goto LAB_00529786;
    }
LAB_00529822:
    piVar7 = (int *)FUN_004363b0();
    local_380 = *piVar7;
  }
  FUN_00436440();
  while (local_330 != -1) {
    local_30c[0] = 0.0;
    local_30c[1] = 0.0;
    local_30c[2] = 0.0;
    local_300 = '\0';
    FUN_00442080();
    if (local_300 != '\0') {
      local_35c = local_30c[0];
      local_358 = local_30c[1];
      local_354 = local_30c[2];
      iVar15 = __ftol();
      __ftol();
      if (param_3 != 0) {
        pfStack_39c = (float *)0x5298fd;
        iVar8 = FUN_00528790();
        if (iVar8 != 0) goto LAB_0052991e;
      }
      pfStack_39c = (float *)(iVar15 + -5);
      puStack_3a0 = param_2;
      pfStack_3a4 = (float *)0x52991b;
      FUN_005b8030();
    }
LAB_0052991e:
    piVar7 = (int *)FUN_00436470();
    local_330 = *piVar7;
  }
  iVar15 = __ftol();
  iVar8 = __ftol();
  if (param_3 != 0) {
    pfStack_39c = (float *)0x529978;
    iVar10 = FUN_00528790();
    if (iVar10 != 0) goto LAB_005299bd;
  }
  pfStack_39c = (float *)(iVar15 + -5);
  puStack_3a0 = param_2;
  pfStack_3a4 = (float *)0x529996;
  FUN_005b8030();
  pfStack_39c = (float *)0x5299a4;
  FUN_005d2500();
  pfStack_3a4 = (float *)(iVar15 - 0x14);
  pfStack_39c = DAT_006cdc84;
  puStack_3a8 = param_2;
  fStack_3ac = 7.585657e-39;
  puStack_3a0 = (ushort *)(iVar8 + -5);
  FUN_005e97a0();
LAB_005299bd:
  FUN_00436320();
  while (local_334 != -1) {
    if ((*(byte *)(*(int *)(DAT_0068be60 + local_334 * 4) + 0xc) & 8) != 0) {
      FUN_00436540();
      local_358 = -local_358;
      iVar15 = __ftol();
      __ftol();
      if (param_3 != 0) {
        pfStack_39c = (float *)0x529a37;
        iVar8 = FUN_00528790();
        if (iVar8 != 0) goto LAB_00529aaf;
      }
      sVar21 = 6;
      pcVar20 = s_mapSto_00677310;
      pfStack_39c = (float *)0x529a4f;
      pcVar11 = (char *)FUN_00436570();
      pfStack_39c = (float *)0x529a58;
      iVar8 = _strncmp(pcVar11,pcVar20,sVar21);
      if (iVar8 == 0) {
        if (param_3 != 0) {
LAB_00529a9a:
          pfStack_39c = (float *)(iVar15 + -5);
          puStack_3a0 = param_2;
          pfStack_3a4 = (float *)0x529aa8;
          FUN_005b8030();
        }
      }
      else {
        sVar21 = 7;
        pcVar20 = s_mapPark_00677308;
        pfStack_39c = (float *)0x529a82;
        pcVar11 = (char *)FUN_00436570();
        pfStack_39c = (float *)0x529a8b;
        iVar8 = _strncmp(pcVar11,pcVar20,sVar21);
        if (iVar8 == 0) goto LAB_00529a9a;
      }
    }
LAB_00529aaf:
    piVar7 = (int *)FUN_00436350();
    local_334 = *piVar7;
  }
  piVar7 = (int *)FUN_00436380();
  iVar15 = *piVar7;
  while (iVar15 != -1) {
    pfStack_39c = local_30c;
    puStack_3a0 = (ushort *)0x529b1f;
    pfVar5 = (float *)FUN_00440870();
    local_35c = *pfVar5;
    local_358 = pfVar5[1];
    local_354 = pfVar5[2];
    iVar15 = __ftol();
    iVar8 = __ftol();
    if (param_3 == 0) {
LAB_00529b74:
      uVar9 = FUN_00440a30();
      if (((uVar9 & 1) == 0) && ((uVar9 = FUN_00440a30(), (uVar9 & 2) == 0 || (param_3 != 0)))) {
        pfStack_39c = (float *)0x529bab;
        FUN_004410d0();
        puStack_3a0 = (ushort *)(iVar8 + -5);
        pfStack_3a4 = (float *)(iVar15 - 0x14);
        pfStack_39c = DAT_006cdc84;
        puStack_3a8 = param_2;
        fStack_3ac = 7.586387e-39;
        FUN_005e97a0();
      }
    }
    else {
      pfStack_39c = (float *)0x529b6d;
      iVar10 = FUN_00528790();
      if (iVar10 == 0) goto LAB_00529b74;
    }
    piVar7 = (int *)FUN_004363b0();
    iVar15 = *piVar7;
  }
  FUN_004364a0();
  if (local_348 != DAT_0068a8f0) {
    do {
      if ((*(int *)(DAT_006cdbcc + 0x524) != 0) || (uVar9 = FUN_0043f700(), (uVar9 & 0x80) != 0)) {
        pfStack_39c = (float *)0x529c48;
        FUN_0041d3f0();
        FUN_0043fd20();
        if ((local_fc != 1) || (uVar9 = FUN_0043f700(), (uVar9 & 0x100) != 0)) {
          FUN_00437600();
          pfVar5 = local_30c;
          pfVar18 = &fStack_3ac;
          for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
            *pfVar18 = *pfVar5;
            pfVar5 = pfVar5 + 1;
            pfVar18 = pfVar18 + 1;
          }
          FUN_00439660(&local_35c);
          iVar15 = FUN_005e4980();
          if ((iVar15 != 0) && (*(int *)(iVar15 + 0x1c) != 0)) {
            iVar15 = FUN_0057d570();
            local_35c = *(float *)(iVar15 + 0x24);
            local_358 = *(float *)(iVar15 + 0x28);
            local_354 = *(float *)(iVar15 + 0x2c);
          }
          local_358 = -local_358;
          fVar6 = (float)__ftol();
          puVar12 = (ushort *)__ftol();
          if (param_3 != 0) {
            pfStack_39c = (float *)0x529d41;
            iVar15 = FUN_00528790();
            if (iVar15 != 0) goto LAB_00529dea;
          }
          pfStack_3a4 = (float *)fVar6;
          puStack_3a0 = puVar12;
          if (local_fc == 1) {
            if (DAT_006f2290 == 0) {
              pfStack_39c = (float *)((int)fVar6 + 3);
              puStack_3a8 = param_2;
              fStack_3ac = 7.587029e-39;
              FUN_005b6a50();
            }
            else {
              pfStack_39c = (float *)((int)fVar6 - 5);
              puStack_3a0 = param_2;
              pfStack_3a4 = (float *)0x529d73;
              FUN_005b8030();
            }
            pfStack_39c = DAT_006cdc84;
            pfStack_3a4 = (float *)((int)fVar6 + 0xf);
            puStack_3a8 = param_2;
            fStack_3ac = 7.587075e-39;
            puStack_3a0 = puVar12;
            FUN_005e97a0();
          }
          else if (DAT_006f1d54 == 0) {
            pfStack_39c = (float *)((int)fVar6 + 3);
            puStack_3a8 = param_2;
            fStack_3ac = 7.587155e-39;
            FUN_005b6a50();
          }
          else {
            pfStack_39c = (float *)((int)fVar6 - 5);
            puStack_3a0 = param_2;
            pfStack_3a4 = (float *)0x529dcd;
            FUN_005b8030();
          }
        }
      }
LAB_00529dea:
      piVar7 = (int *)FUN_004364d0();
      local_348 = *piVar7;
    } while (local_348 != DAT_0068a8f0);
  }
  FUN_00568670();
  piVar7 = (int *)FUN_00477280();
  local_348 = *piVar7;
  if (local_348 != DAT_0068a8f0) {
    do {
      FUN_00437600();
      pfVar5 = local_30c;
      pfVar18 = &fStack_3ac;
      for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
        *pfVar18 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar18 = pfVar18 + 1;
      }
      FUN_00439660(&local_35c);
      pfStack_39c = (float *)0x529e98;
      FUN_0041d3f0();
      FUN_0043fd20();
      local_358 = -local_358;
      iVar15 = __ftol();
      __ftol();
      if (param_3 == 0) {
LAB_00529eed:
        if (DAT_006f2290 != 0) {
          iVar8 = *(int *)(*(int *)(DAT_006cdc1c + 0x408) + 300);
          pbVar13 = (byte *)0x0;
          if (iVar8 != 0) {
            pbVar13 = *(byte **)(iVar8 + 0xc);
          }
          puVar12 = local_d4;
          if (pbVar13 != (byte *)0x0) {
            do {
              bVar1 = *pbVar13;
              bVar19 = bVar1 < (byte)*puVar12;
              if (bVar1 != (byte)*puVar12) {
LAB_00529f42:
                iVar8 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
                goto LAB_00529f47;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar13[1];
              bVar19 = bVar1 < *(byte *)((int)puVar12 + 1);
              if (bVar1 != *(byte *)((int)puVar12 + 1)) goto LAB_00529f42;
              pbVar13 = pbVar13 + 2;
              puVar12 = puVar12 + 1;
            } while (bVar1 != 0);
            iVar8 = 0;
LAB_00529f47:
            if (iVar8 == 0) {
              uVar9 = __ftol();
              uVar9 = uVar9 & 0x80000001;
              bVar19 = uVar9 == 0;
              if ((int)uVar9 < 0) {
                bVar19 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
              }
              if (bVar19) goto LAB_00529f88;
            }
          }
          pfStack_39c = (float *)(iVar15 + -5);
          puStack_3a0 = param_2;
          pfStack_3a4 = (float *)0x529f85;
          FUN_005b8030();
        }
      }
      else {
        pfStack_39c = (float *)0x529ee2;
        iVar8 = FUN_00528790();
        if (iVar8 == 0) goto LAB_00529eed;
      }
LAB_00529f88:
      FUN_00568670();
      piVar7 = (int *)FUN_00477240();
      local_348 = *piVar7;
    } while (local_348 != DAT_0068a8f0);
  }
  piVar7 = (int *)FUN_00436380();
  iVar15 = *piVar7;
  do {
    if (iVar15 == -1) {
      local_340 = (double)(local_328 * (float)local_350 + (float)local_340);
      __ftol();
      pfStack_39c = (float *)0x52a14b;
      pfStack_39c = (float *)__ftol();
      puStack_3a0 = param_2;
      pfStack_3a4 = (float *)0x52a155;
      FUN_005b8030();
      if (*(int *)(DAT_006cdbcc + 0x524) != 0) {
        pfStack_39c = (float *)0x52a17d;
        FUN_00568670();
        FUN_0043fd20();
        pfStack_39c = (float *)0x5;
        puStack_3a0 = local_d4;
        pfStack_3a4 = DAT_006cdc84;
        puStack_3a8 = (ushort *)0x52a1a0;
        puStack_3a8 = (ushort *)__ftol();
        fStack_3ac = 7.588513e-39;
        fStack_3ac = (float)__ftol();
        FUN_005e97a0(param_2);
      }
      uVar9 = local_164 - (int)local_16c;
      if (uVar9 != 0) {
        if (uVar9 < 0x81) {
          FUN_00401aa0();
          *local_16c = *(undefined4 *)(&DAT_0068c120 + (uVar9 + 7 >> 3) * 4);
          *(undefined4 **)(&DAT_0068c120 + (uVar9 + 7 >> 3) * 4) = local_16c;
          FUN_00434030();
        }
        else {
          FUN_0061c888();
        }
      }
      uVar9 = local_170 - (int)local_178;
      if (uVar9 != 0) {
        if (uVar9 < 0x81) {
          FUN_00401aa0();
          *local_178 = *(undefined4 *)(&DAT_0068c120 + (uVar9 + 7 >> 3) * 4);
          *(undefined4 **)(&DAT_0068c120 + (uVar9 + 7 >> 3) * 4) = local_178;
          FUN_00434030();
        }
        else {
          FUN_0061c888();
        }
      }
      uVar9 = local_17c - (int)local_184;
      if (uVar9 != 0) {
        if (uVar9 < 0x81) {
          FUN_00401aa0();
          *local_184 = *(undefined4 *)(&DAT_0068c120 + (uVar9 + 7 >> 3) * 4);
          *(undefined4 **)(&DAT_0068c120 + (uVar9 + 7 >> 3) * 4) = local_184;
          FUN_00434030();
        }
        else {
          FUN_0061c888();
        }
      }
      uVar9 = local_188 - (int)local_190;
      if (uVar9 != 0) {
        if (0x80 < uVar9) {
          FUN_0061c888();
          ExceptionList = local_14;
          return;
        }
        FUN_00401aa0();
        *local_190 = *(undefined4 *)(&DAT_0068c120 + (uVar9 + 7 >> 3) * 4);
        *(undefined4 **)(&DAT_0068c120 + (uVar9 + 7 >> 3) * 4) = local_190;
        FUN_00434030();
      }
      ExceptionList = local_14;
      return;
    }
    FUN_00440a10();
    local_358 = -local_358;
    iVar8 = __ftol();
    __ftol();
    if (param_3 == 0) {
LAB_0052a030:
      iVar10 = 0;
      if (0 < iVar4) {
        piVar7 = local_320;
        do {
          if (*piVar7 == iVar15) {
            if (((iVar10 < iVar4) && (iVar10 = local_320[iVar10], iVar10 == iVar15)) &&
               ((uVar9 = FUN_00440a30(), (uVar9 & 1) != 0 ||
                (((uVar9 = FUN_00440a30(), (uVar9 & 2) == 0 || (param_3 != 0)) || (iVar10 == iVar15)
                 ))))) {
              pfStack_39c = (float *)(iVar8 + -5);
              puStack_3a0 = param_2;
              pfStack_3a4 = (float *)0x52a0d0;
              FUN_005b8030();
            }
            break;
          }
          iVar10 = iVar10 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar10 < iVar4);
      }
    }
    else {
      pfStack_39c = (float *)0x52a025;
      iVar10 = FUN_00528790();
      if (iVar10 == 0) goto LAB_0052a030;
    }
    piVar7 = (int *)FUN_004363b0();
    iVar15 = *piVar7;
  } while( true );
}

