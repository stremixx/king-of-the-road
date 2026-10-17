
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00442de0(int param_1,int param_2,int *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  double *pdVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  char *pcVar16;
  undefined4 *puVar17;
  int *piVar18;
  undefined4 *puVar19;
  float10 fVar20;
  int local_194 [25];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  char *pcStack_124;
  char *pcStack_120;
  char *pcStack_11c;
  char *pcStack_118;
  int *piStack_114;
  double *pdStack_110;
  double *pdStack_10c;
  double *local_108;
  int local_f8;
  undefined4 uStack_f4;
  double local_f0;
  double local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  char *local_d0;
  undefined *local_cc;
  double local_c8;
  double local_c0;
  int local_b8;
  int local_b4;
  int local_ac;
  undefined4 local_a0 [12];
  double local_70;
  undefined4 local_50;
  undefined4 *local_40;
  undefined4 *local_3c;
  int local_38;
  undefined1 local_28 [8];
  undefined1 local_20 [12];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063df12;
  local_14 = ExceptionList;
  local_108 = (double *)0x8;
  pdStack_10c = (double *)s_START__0066b830;
  local_d0 = s_loadOrder_PlayerId_player__Prese_0066e184;
  local_cc = &DAT_0071d768;
  pdStack_110 = (double *)0x442e25;
  ExceptionList = &local_14;
  FUN_00401870();
  local_108 = (double *)s_loadOrder_PlayerId_player__Prese_0066e184;
  pdStack_10c = (double *)0x442e34;
  FUN_004018b0();
  local_c = 0;
  local_108 = (double *)param_1;
  pdStack_10c = (double *)0x442e50;
  iVar8 = FUN_00456670();
  if (iVar8 != 0) {
    local_108 = (double *)&DAT_0066c4e4;
    pdStack_10c = (double *)&DAT_0077d5c0;
    pdStack_110 = (double *)0x442e66;
    FUN_0061c369();
    pdStack_110 = (double *)&DAT_0077d5c0;
    piStack_114 = (int *)s_PlayerId_0066c4d8;
    pcStack_118 = s_Invalid_id_0066bbf4;
    pcStack_11c = (char *)0x446f;
    pcStack_120 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    pcStack_124 = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    uStack_128 = 100;
    uStack_12c = 0x21;
    uStack_130 = 0x442e8d;
    FUN_00401010();
  }
  iVar8 = param_2;
  local_108 = (double *)param_2;
  pdStack_10c = (double *)0x442ea1;
  iVar9 = FUN_00456c60();
  if (iVar9 != 0) {
    local_108 = (double *)&DAT_0066c4e4;
    pdStack_10c = (double *)&DAT_0077d540;
    pdStack_110 = (double *)0x442eb7;
    FUN_0061c369();
    pdStack_110 = (double *)&DAT_0077d540;
    piStack_114 = (int *)s_PresentId_0066c64c;
    pcStack_118 = s_Invalid_id_0066bbf4;
    pcStack_11c = (char *)0x4470;
    pcStack_120 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    pcStack_124 = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    uStack_128 = 100;
    uStack_12c = 0x21;
    uStack_130 = 0x442ede;
    FUN_00401010();
  }
  local_108 = (double *)param_1;
  pdStack_10c = (double *)0x442ef2;
  FUN_00417560();
  iVar9 = *(int *)(iVar8 + 8);
  if (((((byte)*(undefined4 *)(iVar9 + 8) & 0xf0) == 0x80) ||
      (((byte)*(undefined4 *)(iVar9 + 8) & 0xf0) == 0x20)) ||
     (((byte)*(undefined4 *)(iVar9 + 8) & 0xf0) == 0x10)) {
    local_108 = (double *)0x8;
    pdStack_10c = (double *)s_COMPL__0066b7ec;
    pdStack_110 = (double *)0x442f33;
    FUN_00401870();
    local_108 = (double *)s_loadOrder_PlayerId_player__Prese_0066e184;
    pdStack_10c = (double *)0x442f42;
    FUN_004018b0();
    ExceptionList = local_14;
    return 0;
  }
  piVar18 = *(int **)(iVar9 + 0x58);
  if (piVar18 != (int *)0x0) {
    local_108 = (double *)param_1;
    pdStack_10c = (double *)0x442f77;
    cVar7 = FUN_00417560();
    if (cVar7 != '\0') {
      if ((*(byte *)(DAT_0068bc18 + 0x30 + *piVar18 * 0x68) & 4) != 0) {
        local_108 = (double *)param_1;
        pdStack_10c = (double *)0x442fa7;
        uVar10 = FUN_0041ba70();
        if ((uVar10 & 1) == 0) {
          local_108 = (double *)s_NEED_A_PETROL_SEMITRAILER_0066e168;
          pdStack_10c = (double *)0x442fb8;
          pdStack_10c = (double *)FUN_0040e1d0();
          pdStack_110 = (double *)0x442fbe;
          FUN_00483da0();
          local_108 = (double *)0x8;
          pdStack_10c = (double *)s_COMPL__0066b7ec;
          pdStack_110 = (double *)0x442fd2;
          FUN_00401870();
          local_108 = (double *)s_loadOrder_PlayerId_player__Prese_0066e184;
          pdStack_10c = (double *)0x442fe1;
          FUN_004018b0();
          ExceptionList = local_14;
          return 0xfffffff6;
        }
      }
      if ((*(byte *)(DAT_0068bc18 + 0x30 + *piVar18 * 0x68) & 4) == 0) {
        local_108 = (double *)param_1;
        pdStack_10c = (double *)0x443021;
        uVar10 = FUN_0041ba70();
        if ((uVar10 & 1) != 0) {
          local_108 = (double *)s_LOAD_AT_AN_OIL_TANK_0066e154;
          pdStack_10c = (double *)0x443032;
          pdStack_10c = (double *)FUN_0040e1d0();
          pdStack_110 = (double *)0x443038;
          FUN_00483da0();
          local_108 = (double *)0x8;
          pdStack_10c = (double *)s_COMPL__0066b7ec;
          pdStack_110 = (double *)0x44304c;
          FUN_00401870();
          local_108 = (double *)s_loadOrder_PlayerId_player__Prese_0066e184;
          pdStack_10c = (double *)0x44305b;
          FUN_004018b0();
          ExceptionList = local_14;
          return 0xfffffff5;
        }
      }
    }
    local_108 = (double *)(DAT_0068bc18 + *piVar18 * 0x68);
    pdStack_10c = (double *)&local_e0;
    pdStack_110 = (double *)local_28;
    pcStack_118 = local_20;
    pcStack_11c = (char *)&param_1;
    pcStack_120 = (char *)0x4430ab;
    piStack_114 = (int *)pcStack_118;
    FUN_0041d3f0();
    pcStack_11c = (char *)0x4430b0;
    FUN_0041bb20();
    uStack_d4 = local_dc;
    local_d8 = local_e0;
    local_108 = (double *)0x4430cc;
    FUN_00470dd0();
    local_b8 = *piVar18;
    local_ac = piVar18[3];
    local_b4 = piVar18[1];
    local_c._0_1_ = 1;
    puVar17 = (undefined4 *)(*(int *)(iVar8 + 8) + 0x38);
    puVar19 = local_a0;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar19 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar19 = puVar19 + 1;
    }
    local_50 = 3;
    if (*(int *)(param_1 + 0x208) == 0) {
      local_f8 = 0;
      uStack_f4 = 0x3ff00000;
    }
    else {
      local_f8 = DAT_0066e898;
      uStack_f4 = DAT_0066e89c;
    }
    local_108 = (double *)0x44313b;
    fVar20 = (float10)FUN_00401000();
    local_108 = &local_f0;
    pdStack_10c = &local_e8;
    piStack_114 = &param_1;
    local_70 = (double)((float10)(double)CONCAT44(uStack_f4,local_f8) *
                        (float10)*(double *)(piVar18 + 6) + fVar20);
    local_e8 = 0.0;
    local_f0 = 0.0;
    pcStack_118 = (char *)0x443185;
    FUN_0041d3f0();
    piStack_114 = (int *)0x44318a;
    FUN_0041bba0();
    local_108 = &local_c8;
    pdStack_110 = &local_c0;
    piStack_114 = &param_1;
    pcStack_118 = (char *)0x4431a7;
    pdStack_10c = pdStack_110;
    FUN_0041d3f0();
    piStack_114 = (int *)0x4431ac;
    FUN_0041b9e0();
    local_e8 = local_e8 - local_c0;
    local_f0 = local_f0 - local_c8;
    if (_DAT_0064a668 <= local_e8) {
      local_c._0_1_ = 2;
      for (puVar17 = local_40; puVar17 != local_3c; puVar17 = puVar17 + 4) {
        pdStack_10c = (double *)0x443203;
        local_108 = (double *)puVar17;
        FUN_00460d40();
      }
      local_c = (uint)local_c._1_3_ << 8;
      local_108 = (double *)0x443221;
      FUN_0044abe0();
      local_108 = (double *)0x8;
      pdStack_10c = (double *)s_COMPL__0066b7ec;
      pdStack_110 = (double *)0x443232;
      FUN_00401870();
      local_108 = (double *)s_loadOrder_PlayerId_player__Prese_0066e184;
      pdStack_10c = (double *)0x443241;
      FUN_004018b0();
      ExceptionList = local_14;
      return 0xfffffffd;
    }
    if (_DAT_0064a668 <= local_f0) {
      local_c._0_1_ = 3;
      for (puVar17 = local_40; puVar17 != local_3c; puVar17 = puVar17 + 4) {
        pdStack_10c = (double *)0x44329b;
        local_108 = (double *)puVar17;
        FUN_00460d40();
      }
      local_c = (uint)local_c._1_3_ << 8;
      local_108 = (double *)0x4432b9;
      FUN_0044abe0();
      local_108 = (double *)0x8;
      pdStack_10c = (double *)s_COMPL__0066b7ec;
      pdStack_110 = (double *)0x4432ca;
      FUN_00401870();
      local_108 = (double *)s_loadOrder_PlayerId_player__Prese_0066e184;
      pdStack_10c = (double *)0x4432d9;
      FUN_004018b0();
      ExceptionList = local_14;
      return 0xfffffffc;
    }
    piVar13 = local_194;
    piVar18 = local_194;
    piVar14 = local_194;
    piVar15 = local_194;
    FUN_00443830(&local_b8);
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00418950();
    FUN_004437d0();
    uVar11 = FUN_00447d30();
    FUN_00418950(uVar11);
    FUN_004437d0();
    uVar11 = FUN_004558b0();
    pdVar12 = (double *)FUN_004579d0(uVar11);
    iVar8 = *(int *)(param_1 + 0x208);
    if ((iVar8 == 0) || (*(int *)(iVar8 + 4) == -1)) {
      iVar8 = *(int *)(param_1 + 0x204);
      if ((iVar8 == 0) || (*(int *)(iVar8 + 4) == -1)) {
        local_108 = (double *)&DAT_0068c120;
        pdStack_10c = (double *)&DAT_0068c120;
        pdStack_110 = (double *)s_Internal_error_9012_0066c41c;
        piStack_114 = (int *)0x2e4;
        pcStack_118 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
        pcStack_11c = s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc;
        pcStack_120 = (char *)0x1;
        pcStack_124 = (char *)0x0;
        uStack_128 = 0x4433a8;
        FUN_00401010();
      }
      else {
        piVar13 = (int *)(iVar8 + 0x1c);
      }
    }
    else {
      piVar13 = (int *)(iVar8 + 0x1c);
    }
    if (pdVar12 == *(double **)((int)piVar13 + 4)) {
      iVar8 = *(int *)(param_1 + 0x208);
      if ((iVar8 == 0) || (*(int *)(iVar8 + 4) == -1)) {
        iVar8 = *(int *)(param_1 + 0x204);
        if ((iVar8 == 0) || (*(int *)(iVar8 + 4) == -1)) {
          local_108 = (double *)&DAT_0068c120;
          pdStack_10c = (double *)&DAT_0068c120;
          pdStack_110 = (double *)s_Internal_error_9012_0066c41c;
          piStack_114 = (int *)0x2e4;
          pcStack_118 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
          pcStack_11c = s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc;
          pcStack_120 = (char *)0x1;
          pcStack_124 = (char *)0x0;
          uStack_128 = 0x443409;
          FUN_00401010();
        }
        else {
          piVar18 = (int *)(iVar8 + 0x1c);
        }
      }
      else {
        piVar18 = (int *)(iVar8 + 0x1c);
      }
      pdStack_10c = *(double **)((int)piVar18 + 4);
      if (pdStack_10c == *(double **)((int)piVar18 + 8)) {
        local_108 = (double *)&local_b8;
        pdStack_110 = (double *)0x443442;
        FUN_00450900();
      }
      else {
        local_108 = (double *)&local_b8;
        pdStack_110 = (double *)0x443425;
        FUN_00460d50();
        *(int *)((int)piVar18 + 4) = *(int *)((int)piVar18 + 4) + 0x90;
      }
      iVar8 = *(int *)(param_1 + 0x208);
      if ((iVar8 == 0) || (*(int *)(iVar8 + 4) == -1)) {
        iVar8 = *(int *)(param_1 + 0x204);
        if ((iVar8 == 0) || (*(int *)(iVar8 + 4) == -1)) {
          local_108 = (double *)&DAT_0068c120;
          pdStack_10c = (double *)&DAT_0068c120;
          pdStack_110 = (double *)s_Internal_error_9012_0066c41c;
          piStack_114 = (int *)0x2e4;
          pcStack_118 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
          pcStack_11c = s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc;
          pcStack_120 = (char *)0x1;
          pcStack_124 = (char *)0x0;
          uStack_128 = 0x443493;
          FUN_00401010();
        }
        else {
          piVar14 = (int *)(iVar8 + 0x1c);
        }
      }
      else {
        piVar14 = (int *)(iVar8 + 0x1c);
      }
      pdVar12 = (double *)(*(int *)((int)piVar14 + 4) + -0x90);
    }
    iVar8 = *(int *)(param_1 + 0x208);
    if ((iVar8 == 0) || (*(int *)(iVar8 + 4) == -1)) {
      iVar8 = *(int *)(param_1 + 0x204);
      if ((iVar8 == 0) || (*(int *)(iVar8 + 4) == -1)) {
        local_108 = (double *)&DAT_0068c120;
        pdStack_10c = (double *)&DAT_0068c120;
        pdStack_110 = (double *)s_Internal_error_9012_0066c41c;
        piStack_114 = (int *)0x2e4;
        pcStack_118 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
        pcStack_11c = s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc;
        pcStack_120 = (char *)0x1;
        pcStack_124 = (char *)0x0;
        uStack_128 = 0x4434f4;
        FUN_00401010();
      }
      else {
        piVar15 = (int *)(iVar8 + 0x1c);
      }
    }
    else {
      piVar15 = (int *)(iVar8 + 0x1c);
    }
    *param_3 = ((int)pdVar12 - *piVar15) / 0x90;
    dVar2 = pdVar12[7];
    dVar3 = (double)CONCAT44(uStack_d4,local_d8) + pdVar12[7];
    pdVar12[7] = dVar3;
    if (dVar3 < _DAT_0064a668) {
      *(int *)(pdVar12 + 7) = 0;
      *(int *)((int)pdVar12 + 0x3c) = 0;
    }
    dVar3 = *(double *)(DAT_0068bc18 + 0x10 + *(int *)pdVar12 * 0x68);
    iVar9 = DAT_0068bc18 + *(int *)pdVar12 * 0x68;
    pdVar1 = (double *)(iVar9 + 0x18);
    iVar8 = *(int *)pdVar1;
    uVar11 = *(undefined4 *)(iVar9 + 0x1c);
    dVar6 = *pdVar1;
    dVar5 = *pdVar1;
    dVar4 = (pdVar12[7] - dVar2) * dVar3 + local_e8;
    if (_DAT_0064a668 < dVar4) {
      pdVar12[7] = pdVar12[7] - dVar4 / dVar3;
    }
    dVar2 = (pdVar12[7] - dVar2) * dVar5 + local_f0;
    if (_DAT_0064a668 < dVar2) {
      pdVar12[7] = pdVar12[7] - dVar2 / dVar6;
    }
    dVar2 = pdVar12[7];
    if ((dVar2 == _DAT_0064a668) == 0) {
      pcStack_118 = (char *)&param_1;
      local_108 = (double *)
                  CONCAT31((int3)(CONCAT22((short)((uint)uVar11 >> 0x10),
                                           (ushort)(dVar2 < _DAT_0064a668) << 8 |
                                           (ushort)(NAN(dVar2) || NAN(_DAT_0064a668)) << 10 |
                                           (ushort)(dVar2 == _DAT_0064a668) << 0xe) >> 8),
                           *(int *)(param_1 + 0x208) != 0);
      pdStack_10c = (double *)0x1;
      piStack_114 = param_3;
      pcStack_11c = (char *)0x443692;
      pdStack_110 = pdVar12;
      FUN_0041d3f0();
      pcStack_118 = (char *)0x443697;
      FUN_00471250();
    }
    else {
      *param_3 = -1;
      iVar9 = *(int *)(param_1 + 0x208);
      if ((iVar9 == 0) || (*(int *)(iVar9 + 4) == -1)) {
        iVar9 = *(int *)(param_1 + 0x204);
        if ((iVar9 == 0) || (*(int *)(iVar9 + 4) == -1)) {
          local_108 = (double *)&DAT_0068c120;
          pdStack_10c = (double *)&DAT_0068c120;
          pdStack_110 = (double *)s_Internal_error_9012_0066c41c;
          piStack_114 = (int *)0x2e4;
          pcStack_118 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
          pcStack_11c = s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc;
          pcStack_120 = (char *)0x1;
          pcStack_124 = (char *)0x0;
          uStack_128 = 0x44360d;
          FUN_00401010();
        }
        else {
          iVar8 = iVar9 + 0x1c;
        }
      }
      else {
        iVar8 = iVar9 + 0x1c;
      }
      if ((pdVar12 + 0x12 != *(double **)(iVar8 + 4)) &&
         (local_f8 = ((int)*(double **)(iVar8 + 4) - (int)(pdVar12 + 0x12)) / 0x90, 0 < local_f8)) {
        do {
          pdVar12 = pdVar12 + 0x12;
          pdStack_10c = (double *)0x44364c;
          local_108 = pdVar12;
          FUN_00458350();
          local_f8 = local_f8 + -1;
        } while (local_f8 != 0);
      }
      *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + -0x90;
      local_108 = (double *)0x44366e;
      FUN_004482f0();
    }
    local_c._0_1_ = 5;
    for (puVar17 = local_40; puVar17 != local_3c; puVar17 = puVar17 + 4) {
      pdStack_10c = (double *)0x4436c5;
      local_108 = (double *)puVar17;
      FUN_00460d40();
    }
    local_c = (uint)local_c._1_3_ << 8;
    iVar8 = local_38 - (int)local_40 >> 4;
    if (iVar8 != 0) {
      uVar10 = iVar8 * 0x10;
      if (uVar10 < 0x81) {
        local_108 = (double *)0x443718;
        FUN_00401aa0();
        *local_40 = *(undefined4 *)(&DAT_0068c120 + (uVar10 + 7 >> 3) * 4);
        *(undefined4 **)(&DAT_0068c120 + (uVar10 + 7 >> 3) * 4) = local_40;
        local_108 = (double *)0x443728;
        FUN_00434030();
      }
      else {
        pdStack_10c = (double *)0x4436fc;
        FUN_0061c888();
      }
    }
  }
  local_108 = (double *)param_1;
  pdStack_10c = (double *)0x443739;
  FUN_00442c30();
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar16 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar16 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar16 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar16 = s_loadOrder_PlayerId_player__Prese_0066e184;
  cVar7 = s_loadOrder_PlayerId_player__Prese_0066e184[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar7 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar7 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar7;
      cVar7 = *pcVar16;
    }
  }
  ExceptionList = local_14;
  return 0;
}

