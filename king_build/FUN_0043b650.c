
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_0043b650(undefined4 *param_1,undefined4 param_2,int param_3,char *param_4,char *param_5,
            char *param_6,undefined1 *param_7,char *param_8,double *param_9,char *param_10,
            int param_11,double *param_12,char param_13)

{
  double *pdVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  double *pdVar5;
  double *pdVar6;
  int iVar7;
  double dVar8;
  undefined4 *puVar9;
  double *pdVar10;
  int iVar11;
  char *pcVar12;
  undefined4 *puVar13;
  uint *puVar14;
  char **ppcVar15;
  char *pcStack_148;
  double *pdStack_144;
  char *apcStack_140 [2];
  uint uStack_138;
  char *pcStack_134;
  undefined1 *puStack_130;
  char *pcStack_12c;
  double *pdStack_128;
  char *pcStack_124;
  undefined4 local_108 [8];
  double local_e8;
  int local_e0;
  int local_dc;
  char *local_d0;
  undefined *local_cc;
  undefined1 *local_c8;
  undefined1 local_c4 [32];
  undefined1 local_a4 [24];
  double local_8c [4];
  double local_6c [4];
  double local_4c [4];
  double local_2c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063dacb;
  local_c = ExceptionList;
  pcStack_124 = (char *)0x8;
  pdStack_128 = (double *)s_START__0066b830;
  local_d0 = s_advancePosition_PlayerId_playeri_0066d854;
  local_cc = &DAT_0071d768;
  pcStack_12c = (char *)0x43b690;
  ExceptionList = &local_c;
  FUN_00401870();
  pcStack_124 = s_advancePosition_PlayerId_playeri_0066d854;
  pdStack_128 = (double *)0x43b69f;
  FUN_004018b0();
  puVar9 = &param_4;
  puVar13 = local_108 + 6;
  for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar13 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar13 = puVar13 + 1;
  }
  local_4 = 0;
  pcStack_124 = (char *)0x43b6c3;
  iVar11 = FUN_0040a460();
  if (iVar11 == 0) {
    pcStack_124 = param_10;
    pdStack_128 = param_9;
    pcStack_12c = param_8;
    puStack_130 = param_7;
    pcStack_134 = param_6;
    uStack_138 = (uint)param_4;
    apcStack_140[1] = s___d__g__d__d__x__0066bc0c;
    apcStack_140[0] = &DAT_0077d640;
    pdStack_144 = (double *)0x43b706;
    FUN_0061c369();
    pdStack_144 = (double *)&DAT_0077d640;
    pcStack_148 = s_PositionId_0066bc00;
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3d6a,s_Invalid_id_0066bbf4);
  }
  if (*param_12 == _DAT_0064a668) {
LAB_0043bcf2:
    puVar9 = &param_4;
    puVar13 = param_1;
    for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar13 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar13 = puVar13 + 1;
    }
    pcStack_124 = (char *)0x8;
    pdStack_128 = (double *)s_COMPL__0066b7ec;
    pcStack_12c = (char *)0x43bd1a;
    FUN_00401870();
    pcStack_124 = s_advancePosition_PlayerId_playeri_0066d854;
    pdStack_128 = (double *)0x43bd29;
    FUN_004018b0();
    ExceptionList = local_c;
    return param_1;
  }
  pdVar1 = (double *)(param_3 + 0x10);
  if ((*(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x10)) / 0xc == 1) {
    pcStack_124 = (char *)0x8;
    pdStack_128 = (double *)s_COMPL__0066b7ec;
    uVar3 = *(undefined4 *)(*(int *)(param_3 + 0x14) + -0xc);
    param_1[2] = 0;
    *param_1 = 0xffffffff;
    param_1[1] = uVar3;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0xffffffff;
    pcStack_12c = (char *)0x43b7ae;
    FUN_00401870();
    pcStack_124 = s_advancePosition_PlayerId_playeri_0066d854;
    pdStack_128 = (double *)0x43b7bd;
    FUN_004018b0();
    ExceptionList = local_c;
    return param_1;
  }
  pdStack_144 = (double *)local_a4;
  puVar9 = &param_4;
  ppcVar15 = apcStack_140;
  for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
    *ppcVar15 = (char *)*puVar9;
    puVar9 = puVar9 + 1;
    ppcVar15 = ppcVar15 + 1;
  }
  pcStack_148 = (char *)0x43b7e4;
  FUN_00435cd0();
  dVar8 = *param_12;
  pcStack_124 = (char *)0x0;
  pdStack_128 = param_12;
  puVar9 = &param_4;
  ppcVar15 = &pcStack_148;
  for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
    *ppcVar15 = (char *)*puVar9;
    puVar9 = puVar9 + 1;
    ppcVar15 = ppcVar15 + 1;
  }
  puVar9 = (undefined4 *)FUN_00435e40(local_c4);
  puVar13 = &param_4;
  for (iVar11 = 8; pcVar12 = param_5, iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar13 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar13 = puVar13 + 1;
  }
  while (param_5 = pcVar12, pcVar12 != (char *)0xffffffff) {
    pcVar4 = *(char **)pdVar1;
    pdVar5 = *(double **)(param_3 + 0x14);
    if ((((int)pdVar5 - (int)pcVar4) / 0xc < param_11) && (-1 < param_11)) {
      pcStack_12c = pcVar4 + param_11 * 0xc;
      puStack_130 = (undefined1 *)0x43b87d;
      pdStack_128 = pdVar5;
      pcStack_124 = pcVar12;
      pdVar10 = (double *)FUN_004607d0();
      if (pdVar10 == pdVar5) goto LAB_0043b884;
    }
    else {
LAB_0043b884:
      puStack_130 = (undefined1 *)0x43b88c;
      pcStack_12c = pcVar4;
      pdStack_128 = pdVar5;
      pcStack_124 = pcVar12;
      pdVar10 = (double *)FUN_004607d0();
    }
    pdVar5 = *(double **)pdVar1;
    param_11 = ((int)pdVar10 - (int)pdVar5) / 0xc;
    pdVar6 = *(double **)(param_3 + 0x14);
    if (pdVar10 == pdVar6) break;
    if (pdVar10 == pdVar5) {
      pdVar10 = (double *)((int)pdVar10 + 0xc);
      if (pdVar10 != pdVar6) {
        do {
          if (*(char **)pdVar10 == param_5) break;
          pdVar10 = (double *)((int)pdVar10 + 0xc);
        } while (pdVar10 != pdVar6);
        if (pdVar10 != pdVar6) goto LAB_0043b8e3;
      }
      pdVar10 = pdVar5;
    }
LAB_0043b8e3:
    param_11 = ((int)pdVar10 - (int)pdVar5) / 0xc;
    if (dVar8 <= _DAT_0064a668) {
      if (pdVar10 == pdVar5) break;
      param_11 = ((int)pdVar10 + (-0xc - (int)pdVar5)) / 0xc;
      iVar11 = *(int *)(pdVar10 + -1);
      if (iVar11 == 0) break;
      if (iVar11 == *(int *)(DAT_0068be98 + (int)param_4 * 4)) {
        pcStack_124 = s_ilhops_txt_0066d800;
        pcStack_12c = (char *)0x43bd3b;
        pdStack_128 = pdVar1;
        FUN_00484760();
        *(undefined4 *)param_12 = 0;
        *(undefined4 *)((int)param_12 + 4) = 0;
        puVar9 = &param_4;
        puVar13 = param_1;
        for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar13 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar13 = puVar13 + 1;
        }
        if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
          pcVar12 = (char *)(DAT_0071d778 + DAT_0071d774);
          *(undefined4 *)pcVar12 = s_COMPL__0066b7ec._0_4_;
          *(undefined4 *)(pcVar12 + 4) = s_COMPL__0066b7ec._4_4_;
          DAT_0071d778 = DAT_0071d778 + 8;
        }
        pcStack_124 = s_advancePosition_PlayerId_playeri_0066d854;
        pdStack_128 = (double *)0x43bdb3;
        FUN_004018b0();
        ExceptionList = local_c;
        return param_1;
      }
      if (param_5 == *(char **)(*(int *)(iVar11 + 0x70) + 0x10)) {
        pcStack_124 = *(char **)(iVar11 + 0xc);
        pdStack_128 = local_6c;
        pcStack_12c = (char *)0x43ba28;
        puVar9 = (undefined4 *)FUN_00480040();
        puVar13 = &param_4;
        for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar13 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar13 = puVar13 + 1;
        }
        param_10 = (char *)((uint)param_10 | 1);
      }
      else {
        if (param_5 == *(char **)(*(int *)(iVar11 + 0x74) + 0x10)) {
          pcStack_124 = *(char **)(iVar11 + 0xc);
          pdStack_128 = local_2c;
          pcStack_12c = (char *)0x43ba66;
          puVar9 = (undefined4 *)FUN_004801c0();
          goto LAB_0043b94c;
        }
        pcStack_124 = s_ilhops_txt_0066d800;
        pcStack_12c = (char *)0x43ba76;
        pdStack_128 = pdVar1;
        FUN_00484760();
        pcStack_134 = s_Incorrect_hops_sequence_4_0066d7c8;
        uStack_138 = 0x3dd5;
LAB_0043ba8a:
        pcStack_12c = &DAT_0068c120;
        puStack_130 = &DAT_0068c120;
        apcStack_140[1] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
        apcStack_140[0] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
        pdStack_144 = (double *)0x64;
        pcStack_148 = (char *)0x0;
        FUN_00401010();
      }
    }
    else {
      iVar11 = *(int *)((int)pdVar10 + 4);
      if (iVar11 == 0) break;
      if (iVar11 == *(int *)(DAT_0068be98 + (int)param_4 * 4)) {
        pcStack_124 = s_ilhops_txt_0066d800;
        pcStack_12c = (char *)0x43bcdb;
        pdStack_128 = pdVar1;
        FUN_00484760();
        *(undefined4 *)param_12 = 0;
        *(undefined4 *)((int)param_12 + 4) = 0;
        goto LAB_0043bcf2;
      }
      if (param_5 == *(char **)(*(int *)(iVar11 + 0x70) + 0x10)) {
        pcStack_124 = *(char **)(iVar11 + 0xc);
        pdStack_128 = local_4c;
        pcStack_12c = (char *)0x43b94c;
        puVar9 = (undefined4 *)FUN_00480040();
LAB_0043b94c:
        puVar13 = &param_4;
        for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar13 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar13 = puVar13 + 1;
        }
      }
      else {
        if (param_5 != *(char **)(*(int *)(iVar11 + 0x74) + 0x10)) {
          pcStack_124 = s_ilhops_txt_0066d800;
          pcStack_12c = (char *)0x43b9b0;
          pdStack_128 = pdVar1;
          FUN_00484760();
          pcStack_134 = s_Incorrect_hops_sequence_1_0066d7e4;
          uStack_138 = 0x3daa;
          goto LAB_0043ba8a;
        }
        pcStack_124 = *(char **)(iVar11 + 0xc);
        pdStack_128 = local_8c;
        pcStack_12c = (char *)0x43b97d;
        puVar9 = (undefined4 *)FUN_004801c0();
        puVar13 = &param_4;
        for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar13 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar13 = puVar13 + 1;
        }
        param_10 = (char *)((uint)param_10 | 1);
      }
    }
    if (param_13 != '\0') {
      local_108[0] = 0;
      local_108[1] = 0;
      local_108[2] = 0;
      local_108[3] = 0;
      local_108[4] = 0;
      local_108[5] = 0;
      puVar9 = local_108;
      puVar14 = &uStack_138;
      for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar14 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar14 = puVar14 + 1;
      }
      pdStack_144 = (double *)&param_2;
      apcStack_140[1] = param_5;
      local_c8 = (undefined1 *)apcStack_140;
      apcStack_140[0] = param_5;
      pcStack_148 = (char *)0x43bb0b;
      FUN_0041d3f0();
      pdStack_144 = (double *)0x43bb10;
      FUN_0040b060();
      puVar9 = &param_4;
      puVar13 = local_108 + 6;
      for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar13 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar13 = puVar13 + 1;
      }
      if (((int)param_4 < 0) || ((char *)(DAT_0068be9c - DAT_0068be98 >> 2) <= param_4)) {
        pcStack_124 = (char *)0x43bb50;
        iVar11 = FUN_00423b50();
        if (iVar11 != 0) goto LAB_0043bb61;
LAB_0043bb93:
        pcStack_124 = param_10;
        pdStack_128 = param_9;
        pcStack_12c = param_8;
        puStack_130 = param_7;
        pcStack_134 = param_6;
        apcStack_140[1] = s___d__g__d__d__x__0066bc0c;
        apcStack_140[0] = &DAT_0077d640;
        pdStack_144 = (double *)0x43bbcb;
        uStack_138 = (uint)param_4;
        FUN_0061c369();
        pdStack_144 = (double *)&DAT_0077d640;
        pcStack_148 = s_PositionId_0066bc00;
        FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3de0,s_Invalid_id_0066bbf4);
      }
      else {
LAB_0043bb61:
        if ((((local_e8 < _DAT_0064a678) || (_DAT_0064a670 < local_e8)) || (local_e0 < 0)) ||
           (local_dc < 0)) goto LAB_0043bb93;
      }
      if ((-1 < (int)param_4) && (param_4 < (char *)(DAT_0068be9c - DAT_0068be98 >> 2))) {
        iVar11 = *(int *)(DAT_0068be98 + (int)param_4 * 4);
        iVar7 = *(int *)(iVar11 + 0x78);
        if ((int)param_9 < *(int *)(iVar11 + 0x7c) - iVar7 >> 2) {
          pcStack_124 = (char *)0x43bc37;
          iVar11 = (**(code **)(**(int **)(iVar7 + (int)param_9 * 4) + 0x18))();
          if ((int)param_8 < iVar11) goto LAB_0043bc6a;
        }
        pcStack_124 = &DAT_0068c120;
        pdStack_128 = (double *)&DAT_0068c120;
        pcStack_12c = s_Invalid_Position_Id_0066bbe0;
        puStack_130 = (undefined1 *)0x3de0;
        pcStack_134 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
        uStack_138 = (uint)(s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2);
        apcStack_140[1] = (char *)0x64;
        apcStack_140[0] = (char *)0x21;
        pdStack_144 = (double *)0x43bc67;
        FUN_00401010();
      }
LAB_0043bc6a:
      pcStack_124 = (char *)&param_4;
      pdStack_128 = (double *)0x43bc7e;
      FUN_004742e0();
    }
    pcStack_124 = (char *)0x0;
    pdStack_128 = param_12;
    puVar9 = &param_4;
    ppcVar15 = &pcStack_148;
    for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
      *ppcVar15 = (char *)*puVar9;
      puVar9 = puVar9 + 1;
      ppcVar15 = ppcVar15 + 1;
    }
    puVar9 = (undefined4 *)FUN_00435e40(local_c4);
    puVar13 = &param_4;
    for (iVar11 = 8; pcVar12 = param_5, iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar13 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar13 = puVar13 + 1;
    }
  }
  if (((((int)param_4 < 0) || ((char *)(DAT_0068be9c - DAT_0068be98 >> 2) <= param_4)) &&
      (((int)param_5 < 0 || ((char *)(DAT_0068be64 - DAT_0068be60 >> 2) <= param_5)))) ||
     (((((double)CONCAT44(param_7,param_6) < _DAT_0064a678 ||
        (_DAT_0064a670 < (double)CONCAT44(param_7,param_6))) || ((int)param_8 < 0)) ||
      ((int)param_9 < 0)))) {
    pcStack_124 = param_10;
    pdStack_128 = param_9;
    pcStack_12c = param_8;
    puStack_130 = param_7;
    pcStack_134 = param_6;
    uStack_138 = (uint)param_4;
    apcStack_140[1] = s___d__g__d__d__x__0066bc0c;
    apcStack_140[0] = &DAT_0077d640;
    pdStack_144 = (double *)0x43be5d;
    FUN_0061c369();
    pdStack_144 = (double *)&DAT_0077d640;
    pcStack_148 = s_PositionId_0066bc00;
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3ded,s_Invalid_id_0066bbf4);
  }
  if ((-1 < (int)param_4) && (param_4 < (char *)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    iVar11 = *(int *)(DAT_0068be98 + (int)param_4 * 4);
    iVar7 = *(int *)(iVar11 + 0x78);
    if ((int)param_9 < *(int *)(iVar11 + 0x7c) - iVar7 >> 2) {
      pcStack_124 = (char *)0x43becb;
      iVar11 = (**(code **)(**(int **)(iVar7 + (int)param_9 * 4) + 0x18))();
      if ((int)param_8 < iVar11) goto LAB_0043befe;
    }
    pcStack_124 = &DAT_0068c120;
    pdStack_128 = (double *)&DAT_0068c120;
    pcStack_12c = s_Invalid_Position_Id_0066bbe0;
    puStack_130 = (undefined1 *)0x3ded;
    pcStack_134 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    uStack_138 = (uint)(s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2);
    apcStack_140[1] = (char *)0x64;
    apcStack_140[0] = (char *)0x21;
    pdStack_144 = (double *)0x43befb;
    FUN_00401010();
  }
LAB_0043befe:
  if ((param_11 == -1) && (param_3 != 0)) {
    puVar9 = &param_4;
    ppcVar15 = apcStack_140;
    for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
      *ppcVar15 = (char *)*puVar9;
      puVar9 = puVar9 + 1;
      ppcVar15 = ppcVar15 + 1;
    }
    pcStack_148 = (char *)0x43bf2c;
    pdStack_144 = pdVar1;
    param_11 = FUN_0043abf0();
  }
  puVar9 = &param_4;
  puVar13 = param_1;
  for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar13 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar13 = puVar13 + 1;
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar12 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar12 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar12 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar12 = s_advancePosition_PlayerId_playeri_0066d854;
  cVar2 = s_advancePosition_PlayerId_playeri_0066d854[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar2 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
      cVar2 = *pcVar12;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

