
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041bf30(int param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  int iVar9;
  double *pdVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 extraout_EDX;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int *piVar15;
  double **ppdVar16;
  double ***pppdVar17;
  int **ppiVar18;
  int *piVar19;
  float10 fVar20;
  int *local_2c4;
  double *local_2c0;
  double **local_2bc;
  char *local_2b8;
  undefined8 local_2b4;
  undefined1 local_2ac [8];
  undefined8 local_2a4;
  double *local_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  double *local_270;
  undefined4 uStack_26c;
  double *local_264;
  double *local_260;
  undefined4 local_25c;
  double *local_258;
  undefined4 local_254;
  double *local_250;
  undefined4 local_24c;
  undefined4 local_244 [2];
  undefined4 local_23c;
  undefined4 local_238;
  char *local_234;
  char *local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  char *local_214;
  undefined *local_210;
  double local_20c;
  double local_204;
  double local_1fc;
  undefined4 local_1f4 [4];
  double local_1e4;
  undefined1 local_1dc [24];
  undefined1 local_1c4 [24];
  undefined1 local_1ac [24];
  undefined1 local_194 [24];
  undefined1 local_17c [24];
  undefined1 local_164 [24];
  undefined1 local_14c [24];
  undefined1 local_134 [24];
  undefined1 local_11c [24];
  undefined1 local_104 [24];
  undefined1 local_ec [104];
  undefined4 local_84;
  int local_74;
  int local_70;
  undefined1 local_5c [24];
  undefined4 local_44 [12];
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063ca81;
  pvStack_14 = ExceptionList;
  local_2a4 = 1.69792922906944e-313;
  local_214 = s_getPresentData_PlayerId_player__P_0066c658;
  local_210 = &DAT_0071d768;
  local_2ac._4_4_ = 0x41bf7b;
  ExceptionList = &pvStack_14;
  FUN_00401870();
  local_2a4 = 1.0135113650746628e-306;
  FUN_004018b0();
  local_c = 0;
  if (param_1 != DAT_0068a8f0) {
    local_280 = (double *)((int)&local_2a4 + 4);
    local_2a4 = (double)CONCAT44(param_1,0x41bfb0);
    iVar5 = FUN_00456670();
    if (iVar5 != 0) {
      local_2a4 = 1.0132587632561158e-306;
      local_2ac._4_4_ = 0x41bfc6;
      FUN_0061c369();
      local_2ac = (undefined1  [8])0x77d5c00066c4d8;
      local_2b4 = 1.0117051215771394e-306;
      local_2b8 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
      local_2bc = (double **)(s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2);
      local_2c0 = (double *)0x64;
      local_2c4 = (int *)0x21;
      FUN_00401010();
    }
  }
  iVar5 = param_2;
  local_280 = (double *)((int)&local_2a4 + 4);
  local_2a4 = (double)CONCAT44(param_2,0x41c001);
  iVar6 = FUN_00456c60();
  if (iVar6 != 0) {
    local_2a4 = 1.0132587632560956e-306;
    local_2ac._4_4_ = 0x41c017;
    FUN_0061c369();
    local_2ac = (undefined1  [8])0x77d5400066c64c;
    local_2b4 = 1.0117051215771398e-306;
    local_2b8 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    local_2bc = (double **)(s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2);
    local_2c0 = (double *)0x64;
    local_2c4 = (int *)0x21;
    FUN_00401010();
  }
  puVar4 = param_3;
  *param_3 = *(undefined4 *)(*(int *)(iVar5 + 8) + 8);
  iVar6 = *(int *)(iVar5 + 8);
  local_280 = *(double **)(iVar6 + 0x28);
  uStack_27c = *(undefined4 *)(iVar6 + 0x2c);
  local_270 = *(double **)(iVar6 + 0x20);
  uStack_26c = *(undefined4 *)(iVar6 + 0x24);
  local_2a4 = (double)CONCAT44((float)*(double *)(iVar6 + 0x30),(float)*(double *)(iVar6 + 0x28));
  local_2ac._4_4_ = (float)*(double *)(iVar6 + 0x20);
  local_2ac._0_4_ = 0x41c08b;
  FUN_0041ce10();
  puVar4[0xd] = local_280;
  puVar4[0xe] = uStack_27c;
  puVar4[0xf] = local_278;
  iVar6 = *(int *)(*(int *)(iVar5 + 8) + 0x18);
  if (iVar6 == -1) {
    local_2a4 = (double)CONCAT44(local_244,(undefined4)local_2a4);
    local_244[0] = 0;
    local_23c = 0;
    local_238 = 0;
    local_234 = s_UNDEFINED_MODULE_0066c638;
    local_230 = s_UNDEFINED_ROOM_0066c628;
    local_22c = 0;
    local_228 = 0;
    local_220 = 0xffffffff;
    local_21c = 0xffffffff;
    puVar14 = (undefined4 *)(*(int *)(iVar5 + 8) + 0x38);
    ppdVar16 = &local_2c0;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *ppdVar16 = (double *)*puVar14;
      puVar14 = puVar14 + 1;
      ppdVar16 = ppdVar16 + 1;
    }
    local_2c4 = (int *)0x41c33f;
    FUN_00438e50();
    puVar4[0x12] = local_220;
    puVar4[0x13] = local_21c;
    puVar4[0x10] = local_234;
    puVar4[0x11] = local_230;
  }
  else {
    puVar4[0x12] = *(undefined4 *)(*(int *)(*(int *)(DAT_0068be60 + iVar6 * 4) + 0xb8) + 0xc);
    puVar4[0x13] = *(undefined4 *)(*(int *)(*(int *)(DAT_0068be60 + iVar6 * 4) + 0xbc) + 0xc);
    piVar2 = *(int **)(*(int *)(DAT_0068be60 + iVar6 * 4) + 0xbc);
    iVar5 = *piVar2;
    if (iVar5 == piVar2[1]) {
      iVar5 = 0;
    }
    puVar4[0x10] = iVar5;
    piVar2 = *(int **)(*(int *)(DAT_0068be60 + iVar6 * 4) + 0xb8);
    iVar5 = *piVar2;
    if (iVar5 == piVar2[1]) {
      iVar5 = 0;
    }
    puVar4[0x11] = iVar5;
    iVar5 = *(int *)(DAT_0068be60 + iVar6 * 4);
    if ((*(byte *)(iVar5 + 0xc) & 0x80) != 0) {
      puVar14 = (undefined4 *)(iVar5 + 0x90);
      pdVar7 = &local_20c;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined4 *)pdVar7 = *puVar14;
        puVar14 = puVar14 + 1;
        pdVar7 = (double *)((int)pdVar7 + 4);
      }
      local_2a4 = (double)CONCAT44(3,local_1f4);
      local_2ac._4_4_ = 0x41c154;
      iVar5 = FUN_0041cf20();
      local_2a4 = (double)CONCAT44(3,local_1dc);
      local_2ac._4_4_ = 0x41c16e;
      pdVar7 = (double *)FUN_0041cf20();
      local_2a4 = (double)CONCAT44(2,local_104);
      local_2ac._4_4_ = 0x41c183;
      iVar6 = FUN_0041cf20();
      local_2a4 = (double)CONCAT44(2,local_11c);
      local_2ac._4_4_ = 0x41c19b;
      iVar8 = FUN_0041cf20();
      local_2a4 = (double)CONCAT44(2,local_194);
      local_2ac._4_4_ = 0x41c1b3;
      local_264 = (double *)FUN_0041cf20();
      local_2a4 = (double)CONCAT44(1,local_134);
      local_2ac._4_4_ = 0x41c1c8;
      iVar9 = FUN_0041cf20();
      local_258 = (double *)(iVar9 + 0x10);
      local_2a4 = (double)CONCAT44(1,local_164);
      local_2ac._4_4_ = 0x41c1e0;
      iVar9 = FUN_0041cf20();
      local_260 = (double *)(iVar9 + 8);
      local_2a4 = (double)CONCAT44(1,local_14c);
      local_2ac._4_4_ = 0x41c1f8;
      local_250 = (double *)FUN_0041cf20();
      local_2a4 = (double)ZEXT48(local_1c4);
      local_2ac._4_4_ = 0x41c20d;
      iVar9 = FUN_0041cf20();
      local_270 = (double *)(iVar9 + 0x10);
      local_2a4 = (double)ZEXT48(local_1ac);
      local_2ac._4_4_ = 0x41c225;
      iVar9 = FUN_0041cf20();
      local_280 = (double *)(iVar9 + 8);
      local_2a4 = (double)ZEXT48(local_17c);
      local_2ac._4_4_ = 0x41c23d;
      pdVar10 = (double *)FUN_0041cf20();
      local_2a4 = (double)CONCAT44((float)local_1fc,(float)*(double *)(iVar5 + 8));
      local_2ac = (undefined1  [8])CONCAT44((float)*pdVar7,(float)*(double *)(iVar6 + 0x10));
      local_2b4 = (double)CONCAT44((float)*(double *)(iVar8 + 8),(float)*local_264);
      local_2b8 = (char *)(float)*local_258;
      local_2bc = (double **)(float)*local_260;
      local_2c0 = (double *)(float)*local_250;
      local_2c4 = (int *)(float)*local_270;
      FUN_0041ce30((float)*pdVar10,(float)*local_280);
      iVar5 = 0xc;
      puVar13 = local_244;
      puVar14 = puVar4 + 1;
      goto LAB_0041c5a9;
    }
  }
  local_2c0 = &local_20c;
  puVar14 = (undefined4 *)(*(int *)(param_2 + 8) + 0x38);
  pppdVar17 = &local_2bc;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pppdVar17 = (double **)*puVar14;
    puVar14 = puVar14 + 1;
    pppdVar17 = pppdVar17 + 1;
  }
  local_2c4 = (int *)0x41c38c;
  FUN_00435cd0();
  iVar6 = param_2;
  iVar5 = *(int *)(param_2 + 8);
  local_2a4 = local_1fc - *(double *)(iVar5 + 0x30);
  local_280 = *(double **)(iVar5 + 0x28);
  uStack_27c = *(undefined4 *)(iVar5 + 0x2c);
  local_270 = *(double **)(iVar5 + 0x20);
  uStack_26c = *(undefined4 *)(iVar5 + 0x24);
  local_2ac = (undefined1  [8])(local_204 - *(double *)(iVar5 + 0x28));
  local_2b4 = local_20c - *(double *)(iVar5 + 0x20);
  local_2b8 = (char *)0x41c3f2;
  FUN_00405ea0();
  local_2a4 = (double)CONCAT44(local_1dc,*(int *)(iVar6 + 8) + 0x20);
  local_2ac._4_4_ = local_ec;
  local_2ac._0_4_ = 0x41c40e;
  local_280 = (double *)FUN_004398c0();
  pdVar7 = local_280 + 9;
  puVar14 = local_1f4;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar14 = *(undefined4 *)pdVar7;
    pdVar7 = (double *)((int)pdVar7 + 4);
    puVar14 = puVar14 + 1;
  }
  local_2a4 = (double)CONCAT44(3,local_17c);
  local_2ac._4_4_ = 0x41c437;
  iVar5 = FUN_0041cf20();
  local_2a4 = (double)CONCAT44(3,local_1ac);
  local_2ac._4_4_ = 0x41c451;
  local_280 = (double *)FUN_0041cf20();
  local_2a4 = (double)CONCAT44(2,local_1c4);
  local_2ac._4_4_ = 0x41c466;
  iVar6 = FUN_0041cf20();
  local_270 = (double *)(iVar6 + 0x10);
  local_2a4 = (double)CONCAT44(2,local_14c);
  local_2ac._4_4_ = 0x41c47e;
  iVar6 = FUN_0041cf20();
  local_250 = (double *)(iVar6 + 8);
  local_2a4 = (double)CONCAT44(2,local_164);
  local_2ac._4_4_ = 0x41c496;
  local_260 = (double *)FUN_0041cf20();
  local_2a4 = (double)CONCAT44(1,local_134);
  local_2ac._4_4_ = 0x41c4ab;
  iVar6 = FUN_0041cf20();
  local_258 = (double *)(iVar6 + 0x10);
  local_2a4 = (double)CONCAT44(1,local_194);
  local_2ac._4_4_ = 0x41c4c3;
  iVar6 = FUN_0041cf20();
  local_264 = (double *)(iVar6 + 8);
  local_2a4 = (double)CONCAT44(1,local_11c);
  local_2ac._4_4_ = 0x41c4db;
  pdVar7 = (double *)FUN_0041cf20();
  local_2a4 = (double)ZEXT48(local_104);
  local_2ac._4_4_ = 0x41c4f0;
  iVar6 = FUN_0041cf20();
  local_2a4 = (double)ZEXT48(local_5c);
  local_2ac._4_4_ = 0x41c508;
  iVar8 = FUN_0041cf20();
  local_2a4 = (double)ZEXT48(local_244);
  local_2ac._4_4_ = 0x41c51d;
  pdVar10 = (double *)FUN_0041cf20();
  local_2a4 = (double)CONCAT44((float)local_1e4,(float)*(double *)(iVar5 + 8));
  local_2ac = (undefined1  [8])CONCAT44((float)*local_280,(float)*local_270);
  local_2b4 = (double)CONCAT44((float)*local_250,(float)*local_260);
  local_2b8 = (char *)(float)*local_258;
  local_2bc = (double **)(float)*local_264;
  local_2c0 = (double *)(float)*pdVar7;
  local_2c4 = (int *)(float)*(double *)(iVar6 + 0x10);
  FUN_0041ce30((float)*pdVar10,(float)*(double *)(iVar8 + 8));
  puVar14 = puVar4 + 1;
  iVar5 = 0xc;
  puVar13 = local_44;
LAB_0041c5a9:
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  iVar5 = *(int *)(param_2 + 8);
  if ((*(int *)(iVar5 + 0x58) != 0) && (*(int *)(iVar5 + 0x14) == 0)) {
    piVar15 = puVar4 + 0x2a;
    puVar4[0x14] = **(undefined4 **)(iVar5 + 0x58);
    iVar5 = *(int *)(DAT_0068be20 + *(int *)(*(int *)(*(int *)(param_2 + 8) + 0x58) + 0xc) * 4);
    piVar2 = (int *)(iVar5 + 0xc);
    if (piVar2 != piVar15) {
      local_2ac._4_4_ = *piVar2;
      local_2a4 = *(double *)piVar2;
      uVar11 = *(int *)(iVar5 + 0x10) - local_2ac._4_4_;
      if ((uint)(puVar4[0x2c] - *piVar15) < uVar11) {
        local_2ac._4_4_ = uVar11;
        local_2ac._0_4_ = 0x41c621;
        iVar5 = FUN_00458d60();
        iVar6 = puVar4[0x2c] - *piVar15;
        if (iVar6 != 0) {
          local_2a4 = (double)CONCAT44(iVar6,*piVar15);
          local_2ac._4_4_ = 0x41c633;
          FUN_0044b440();
        }
        *piVar15 = iVar5;
        puVar4[0x2c] = iVar5 + uVar11;
      }
      else if ((uint)(puVar4[0x2b] - *piVar15) < uVar11) {
        local_2a4 = (double)CONCAT44(*piVar15,(puVar4[0x2b] - *piVar15) + local_2ac._4_4_);
        local_2ac._0_4_ = 0x41c67b;
        FUN_00407250();
        local_2ac._0_4_ = puVar4[0x2b];
        local_2b4 = (double)CONCAT44(*(undefined4 *)(iVar5 + 0x10),
                                     (puVar4[0x2b] - *piVar15) + *piVar2);
        local_2b8 = (char *)0x41c691;
        FUN_00407250();
      }
      else {
        local_2a4 = (double)CONCAT44(*piVar15,*(int *)(iVar5 + 0x10));
        local_2ac._0_4_ = 0x41c664;
        FUN_00407250();
      }
      puVar4[0x2b] = uVar11 + *piVar15;
    }
    piVar2 = puVar4 + 0x21;
    piVar15 = (int *)(DAT_0068bc18 + 0x58 + **(int **)(*(int *)(param_2 + 8) + 0x58) * 0x68);
    if (piVar15 != piVar2) {
      local_2ac._4_4_ = *piVar15;
      local_2a4 = *(double *)piVar15;
      uVar11 = piVar15[1] - local_2ac._4_4_;
      if ((uint)(puVar4[0x23] - *piVar2) < uVar11) {
        local_2ac._4_4_ = uVar11;
        local_2ac._0_4_ = 0x41c6f9;
        iVar5 = FUN_00458d60();
        iVar6 = puVar4[0x23] - *piVar2;
        if (iVar6 != 0) {
          local_2a4 = (double)CONCAT44(iVar6,*piVar2);
          local_2ac._4_4_ = 0x41c70b;
          FUN_0044b440();
        }
        *piVar2 = iVar5;
        puVar4[0x23] = iVar5 + uVar11;
      }
      else if ((uint)(puVar4[0x22] - *piVar2) < uVar11) {
        local_2a4 = (double)CONCAT44(*piVar2,(puVar4[0x22] - *piVar2) + local_2ac._4_4_);
        local_2ac._0_4_ = 0x41c753;
        FUN_00407250();
        local_2ac._0_4_ = puVar4[0x22];
        local_2b4 = (double)CONCAT44(piVar15[1],(puVar4[0x22] - *piVar2) + *piVar15);
        local_2b8 = (char *)0x41c769;
        FUN_00407250();
      }
      else {
        local_2a4 = (double)CONCAT44(*piVar2,piVar15[1]);
        local_2ac._0_4_ = 0x41c73c;
        FUN_00407250();
      }
      puVar4[0x22] = uVar11 + *piVar2;
    }
    iVar6 = param_2;
    iVar5 = *(int *)(*(int *)(param_2 + 8) + 0x58);
    puVar4[0x36] = *(undefined4 *)(iVar5 + 0x18);
    puVar4[0x37] = *(undefined4 *)(iVar5 + 0x1c);
    if (param_1 != DAT_0068a8f0) {
      local_2a4 = (double)CONCAT44(0xffffffff,
                                   DAT_0068bc18 + **(int **)(*(int *)(param_2 + 8) + 0x58) * 0x68);
      local_2ac._4_4_ = &local_258;
      local_2ac._0_4_ = &local_260;
      local_280 = (double *)&local_2b4;
      local_2b4 = (double)CONCAT44(&local_250,&local_260);
      local_2b8 = (char *)&param_1;
      local_2bc = (double **)0x41c7e1;
      FUN_0041d3f0();
      local_2b8 = (char *)0x41c7e6;
      FUN_0041bcb0();
      puVar4[0x38] = local_250;
      puVar4[0x3a] = local_260;
      puVar4[0x39] = local_24c;
      puVar4[0x3b] = local_25c;
      local_2bc = &local_280;
      local_2b8 = *(char **)(DAT_0068be20 + *(int *)(*(int *)(*(int *)(iVar6 + 8) + 0x58) + 0xc) * 4
                            );
      local_2c0 = (double *)0x41c82b;
      FUN_00404d60();
      local_2a4 = (double)CONCAT44(0x41c83a,(undefined4)local_2a4);
      FUN_00470dd0();
      iVar5 = *(int *)(iVar6 + 8);
      local_2a4 = (double)CONCAT44(local_254,local_258);
      uVar3 = *(undefined4 *)(iVar5 + 0x58);
      puVar14 = (undefined4 *)(iVar5 + 0x38);
      ppiVar18 = &local_2c4;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *ppiVar18 = (int *)*puVar14;
        puVar14 = puVar14 + 1;
        ppiVar18 = ppiVar18 + 1;
      }
      local_c._0_1_ = 1;
      FUN_00471640(local_ec,uVar3,0xffffffff);
      local_84 = 3;
      local_2a4 = (double)CONCAT44(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                            *(int *)(param_1 + 0x208) != 0),1);
      local_270 = (double *)local_2ac;
      local_2ac._4_4_ = local_ec;
      local_2ac._0_4_ = param_1;
      local_2b4 = (double)CONCAT44(&param_1,0x41c8aa);
      FUN_0041d3f0();
      local_2b4 = (double)CONCAT44(0x41c8af,(undefined4)local_2b4);
      FUN_00471250();
      if (*(int *)(param_1 + 0x208) != 0) {
        *(double *)(puVar4 + 0x36) = _DAT_0066e898 * *(double *)(puVar4 + 0x36);
      }
      local_2a4 = 0.0;
      local_2ac._4_4_ = 0;
      local_2ac._0_4_ = local_ec;
      local_2b4 = (double)CONCAT44(0x41c8e4,(undefined4)local_2b4);
      fVar20 = (float10)FUN_004715b0();
      *(double *)(puVar4 + 0x32) = (double)fVar20;
      *(double *)(puVar4 + 0x34) = (double)fVar20;
      local_270 = (double *)&local_74;
      local_c._0_1_ = 2;
      for (; local_74 != local_70; local_74 = local_74 + 0x10) {
        local_2a4 = (double)CONCAT44(local_74,0x41c920);
        FUN_00460d40();
      }
      local_c = (uint)local_c._1_3_ << 8;
      local_2a4 = (double)CONCAT44(0x41c93e,(undefined4)local_2a4);
      FUN_0044abe0();
    }
    puVar4[0x2d] = 0;
    puVar4[0x2e] = 0;
    puVar4[0x2f] = 0;
    puVar4[0x30] = 0;
    if (puVar4[0x21] != puVar4[0x22]) {
      puVar4[0x2d] = puVar4[0x21];
    }
    if (puVar4[0x24] != puVar4[0x25]) {
      puVar4[0x2e] = puVar4[0x24];
    }
    if (puVar4[0x27] != puVar4[0x28]) {
      puVar4[0x2f] = puVar4[0x27];
    }
    if (puVar4[0x2a] != puVar4[0x2b]) {
      puVar4[0x30] = puVar4[0x2a];
    }
  }
  puVar4[0x44] = 0xffffffff;
  puVar4[0x45] = 0xffffffff;
  iVar5 = *(int *)(*(int *)(param_2 + 8) + 0x14);
  if (iVar5 == 0) {
    iVar5 = *(int *)(*(int *)(param_2 + 8) + 0x6c);
    if (iVar5 != -1) {
      puVar4[0x44] = *(undefined4 *)(*(int *)(DAT_0068c018 + iVar5 * 4) + 0x20);
      puVar4[0x45] = *(undefined4 *)
                      (*(int *)(DAT_0068c018 + *(int *)(*(int *)(param_2 + 8) + 0x6c) * 4) + 0x24);
    }
  }
  else {
    puVar4[0x44] = *(undefined4 *)(*(int *)(DAT_0068bf38 + *(int *)(iVar5 + 4) * 4) + 0x40);
    puVar4[0x45] = *(undefined4 *)(*(int *)(DAT_0068bf38 + *(int *)(iVar5 + 4) * 4) + 0x44);
    piVar2 = *(int **)(iVar5 + 0x1c);
    if (piVar2 != *(int **)(iVar5 + 0x20)) {
      if (param_1 != DAT_0068a8f0) {
        local_2ac._0_4_ = &param_1;
        local_2a4 = (double)CONCAT44(*(undefined4 *)(iVar5 + 4),piVar2);
        local_280 = (double *)(local_2ac + 4);
        local_2b4 = (double)CONCAT44(0x41ca36,(undefined4)local_2b4);
        local_2ac._4_4_ = piVar2;
        FUN_0041d3f0();
        local_2ac._0_4_ = 0x41ca3b;
        FUN_0041be50();
      }
      piVar15 = puVar4 + 0x2a;
      puVar4[0x14] = *piVar2;
      iVar5 = *(int *)(DAT_0068be20 + piVar2[3] * 4);
      piVar19 = (int *)(iVar5 + 0xc);
      if (piVar19 != piVar15) {
        local_2ac._4_4_ = *piVar19;
        local_2a4 = *(double *)piVar19;
        uVar11 = *(int *)(iVar5 + 0x10) - local_2ac._4_4_;
        if ((uint)(puVar4[0x2c] - *piVar15) < uVar11) {
          local_2ac._4_4_ = uVar11;
          local_2ac._0_4_ = 0x41ca93;
          iVar5 = FUN_00458d60();
          iVar6 = puVar4[0x2c] - *piVar15;
          if (iVar6 != 0) {
            local_2a4 = (double)CONCAT44(iVar6,*piVar15);
            local_2ac._4_4_ = 0x41caa5;
            FUN_0044b440();
          }
          *piVar15 = iVar5;
          puVar4[0x2c] = iVar5 + uVar11;
        }
        else if ((uint)(puVar4[0x2b] - *piVar15) < uVar11) {
          local_2a4 = (double)CONCAT44(*piVar15,(puVar4[0x2b] - *piVar15) + local_2ac._4_4_);
          local_2ac._0_4_ = 0x41cae5;
          FUN_00407250();
          local_2ac._0_4_ = puVar4[0x2b];
          local_2b4 = (double)CONCAT44(*(undefined4 *)(iVar5 + 0x10),
                                       (*piVar19 - *piVar15) + puVar4[0x2b]);
          local_2b8 = (char *)0x41cafb;
          FUN_00407250();
        }
        else {
          local_2a4 = (double)CONCAT44(*(int *)(iVar5 + 0x10) - local_2ac._4_4_,local_2ac._4_4_);
          local_2ac._4_4_ = *piVar15;
          local_2ac._0_4_ = 0x41cad4;
          FUN_0061c980();
        }
        puVar4[0x2b] = uVar11 + *piVar15;
      }
      pdVar7 = (double *)(puVar4 + 0x21);
      local_280 = (double *)(DAT_0068bc18 + 0x58 + *piVar2 * 0x68);
      if (local_280 != pdVar7) {
        local_2ac._4_4_ = *(undefined4 *)local_280;
        local_2a4 = *local_280;
        iVar5 = *(int *)pdVar7;
        uVar11 = *(int *)((int)local_280 + 4) - local_2ac._4_4_;
        if ((uint)(puVar4[0x23] - iVar5) < uVar11) {
          local_2ac._4_4_ = uVar11;
          local_2ac._0_4_ = 0x41cb55;
          local_280 = (double *)FUN_00458d60();
          iVar5 = puVar4[0x23] - *(int *)pdVar7;
          if (iVar5 != 0) {
            local_2a4 = (double)CONCAT44(iVar5,*(int *)pdVar7);
            local_2ac._4_4_ = 0x41cb69;
            FUN_0044b440();
          }
          *(double **)pdVar7 = local_280;
          puVar4[0x23] = (int)local_280 + uVar11;
        }
        else if ((uint)(puVar4[0x22] - iVar5) < uVar11) {
          local_2a4 = (double)CONCAT44(iVar5,(puVar4[0x22] - iVar5) + local_2ac._4_4_);
          local_2ac._0_4_ = 0x41cb9c;
          FUN_00407250();
          local_2ac._0_4_ = puVar4[0x22];
          local_2b4 = (double)CONCAT44(*(int *)((int)local_280 + 4),
                                       (*(int *)local_280 - *(int *)pdVar7) + puVar4[0x22]);
          local_2b8 = (char *)0x41cbb6;
          FUN_00407250();
        }
        else {
          local_2a4 = (double)CONCAT44(iVar5,*(int *)((int)local_280 + 4));
          local_2ac._0_4_ = 0x41cb8e;
          FUN_00407250();
        }
        puVar4[0x22] = uVar11 + *(int *)pdVar7;
      }
      if (*(char *)(*(int *)(param_2 + 8) + 0x68) == '\0') {
        puVar4[0x36] = piVar2[0x16];
        puVar4[0x37] = piVar2[0x17];
        puVar4[0x3e] = piVar2[0x16];
        puVar4[0x3f] = piVar2[0x17];
      }
      else {
        local_2a4 = (double)CONCAT44(0x41cbd6,(undefined4)local_2a4);
        fVar20 = (float10)FUN_00401000();
        *(double *)(puVar4 + 0x36) = (double)((float10)*(double *)(piVar2 + 0x12) - fVar20);
        local_2a4 = (double)CONCAT44(0x41cbe8,(undefined4)local_2a4);
        fVar20 = (float10)FUN_00401000();
        *(double *)(puVar4 + 0x3e) = (double)((float10)*(double *)(piVar2 + 0x12) - fVar20);
      }
      *(double *)(puVar4 + 0x38) =
           *(double *)(DAT_0068bc18 + 0x10 + *piVar2 * 0x68) * *(double *)(piVar2 + 0xe);
      iVar5 = *piVar2;
      *(double *)(puVar4 + 0x3a) =
           *(double *)(DAT_0068bc18 + 0x18 + iVar5 * 0x68) * *(double *)(piVar2 + 0xe);
      local_2a4 = (double)((ulonglong)CONCAT31((int3)((uint)(iVar5 * 3) >> 8),piVar2[0x1a] == 1) <<
                          0x20);
      local_2ac._4_4_ = 0;
      local_2ac._0_4_ = piVar2;
      local_2b4 = (double)CONCAT44(0x41cc65,(undefined4)local_2b4);
      fVar20 = (float10)FUN_004715b0();
      *(double *)(puVar4 + 0x32) = (double)fVar20;
      local_2b4 = 0.0;
      local_2b8 = (char *)CONCAT31((int3)((uint)piVar2[0x1a] >> 8),piVar2[0x1a] == 1);
      local_2bc = (double **)0x0;
      local_2c0 = (double *)0x0;
      local_2c4 = piVar2;
      fVar20 = (float10)FUN_004714a0();
      *(double *)(puVar4 + 0x34) = (double)fVar20;
      piVar15 = piVar2 + 6;
      piVar19 = puVar4 + 0x18;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar19 = *piVar15;
        piVar15 = piVar15 + 1;
        piVar19 = piVar19 + 1;
      }
      puVar4[0x16] = piVar2[0xe];
      puVar4[0x17] = piVar2[0xf];
      iVar5 = DAT_0068bc18 + *piVar2 * 0x68;
      puVar4[0x3c] = *(undefined4 *)(DAT_0068bc18 + 0x40 + *piVar2 * 0x68);
      uVar3 = *(undefined4 *)(iVar5 + 0x44);
      *(undefined1 *)(puVar4 + 0x42) = 1;
      puVar4[0x3d] = uVar3;
      puVar4[0x2d] = 0;
      puVar4[0x2e] = 0;
      puVar4[0x2f] = 0;
      puVar4[0x30] = 0;
      if (puVar4[0x21] != puVar4[0x22]) {
        puVar4[0x2d] = puVar4[0x21];
      }
      if (puVar4[0x24] != puVar4[0x25]) {
        puVar4[0x2e] = puVar4[0x24];
      }
      if (puVar4[0x27] != puVar4[0x28]) {
        puVar4[0x2f] = puVar4[0x27];
      }
      if (puVar4[0x2a] != puVar4[0x2b]) {
        puVar4[0x30] = puVar4[0x2a];
      }
    }
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar12 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar12 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar12 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar12 = s_getPresentData_PlayerId_player__P_0066c658;
  cVar1 = s_getPresentData_PlayerId_player__P_0066c658[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar12;
    }
  }
  ExceptionList = pvStack_14;
  return;
}

