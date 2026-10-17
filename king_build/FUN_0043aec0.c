
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_0043aec0(undefined4 *param_1,int *param_2,char *param_3,undefined1 *param_4,char *param_5,
            undefined1 *param_6,char *param_7,double *param_8,undefined1 *param_9,int param_10,
            double *param_11)

{
  char cVar1;
  undefined4 uVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  double dVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  double *pdVar10;
  int iVar11;
  char *pcVar12;
  undefined4 *puVar13;
  char **ppcVar14;
  char *pcStack_10c;
  int *piStack_108;
  char *apcStack_104 [4];
  undefined1 *puStack_f4;
  char *pcStack_f0;
  double *pdStack_ec;
  char *pcStack_e8;
  undefined4 local_c4 [8];
  undefined1 local_a4 [24];
  undefined1 local_8c [32];
  undefined1 local_6c [32];
  undefined1 local_4c [32];
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063daab;
  local_c = ExceptionList;
  pcStack_e8 = (char *)0x8;
  pdStack_ec = (double *)s_START__0066b830;
  pcStack_f0 = (char *)0x43af00;
  ExceptionList = &local_c;
  FUN_00401870();
  pcStack_e8 = s_advancePosition_vector<Hop>___ho_0066d80c;
  pdStack_ec = (double *)0x43af0f;
  FUN_004018b0();
  puVar9 = &param_3;
  puVar13 = local_c4;
  for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar13 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar13 = puVar13 + 1;
  }
  local_4 = 0;
  pcStack_e8 = (undefined1 *)0x43af33;
  iVar11 = FUN_0040a460();
  if (iVar11 == 0) {
    pcStack_e8 = param_9;
    pdStack_ec = param_8;
    pcStack_f0 = param_7;
    puStack_f4 = param_6;
    apcStack_104[3] = param_5;
    apcStack_104[2] = param_3;
    apcStack_104[1] = s___d__g__d__d__x__0066bc0c;
    apcStack_104[0] = &DAT_0077d640;
    piStack_108 = (int *)0x43af76;
    FUN_0061c369();
    piStack_108 = (int *)&DAT_0077d640;
    pcStack_10c = s_PositionId_0066bc00;
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3cea,s_Invalid_id_0066bbf4);
  }
  if (*param_11 == _DAT_0064a668) {
LAB_0043b53c:
    puVar9 = &param_3;
    puVar13 = param_1;
    for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar13 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar13 = puVar13 + 1;
    }
    pcStack_e8 = (char *)0x8;
    pdStack_ec = (double *)s_COMPL__0066b7ec;
    pcStack_f0 = (char *)0x43b564;
    FUN_00401870();
    pcStack_e8 = s_advancePosition_vector<Hop>___ho_0066d80c;
    pdStack_ec = (double *)0x43b573;
    FUN_004018b0();
    ExceptionList = local_c;
    return param_1;
  }
  if ((param_2[1] - *param_2) / 0xc == 1) {
    uVar2 = *(undefined4 *)(param_2[1] + -0xc);
    pcStack_e8 = (char *)0x8;
    pdStack_ec = (double *)s_COMPL__0066b7ec;
    param_1[2] = 0;
    *param_1 = 0xffffffff;
    param_1[1] = uVar2;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0xffffffff;
    pcStack_f0 = (char *)0x43b01a;
    FUN_00401870();
    pcStack_e8 = s_advancePosition_vector<Hop>___ho_0066d80c;
    pdStack_ec = (double *)0x43b029;
    FUN_004018b0();
    ExceptionList = local_c;
    return param_1;
  }
  piStack_108 = (int *)local_a4;
  puVar9 = &param_3;
  ppcVar14 = apcStack_104;
  for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
    *ppcVar14 = (char *)*puVar9;
    puVar9 = puVar9 + 1;
    ppcVar14 = ppcVar14 + 1;
  }
  pcStack_10c = (char *)0x43b04d;
  FUN_00435cd0();
  dVar6 = *param_11;
  pcStack_e8 = (undefined1 *)0x0;
  pdStack_ec = param_11;
  puVar9 = &param_3;
  ppcVar14 = &pcStack_10c;
  for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
    *ppcVar14 = (char *)*puVar9;
    puVar9 = puVar9 + 1;
    ppcVar14 = ppcVar14 + 1;
  }
  puVar9 = (undefined4 *)FUN_00435e40(local_c4);
  puVar13 = &param_3;
  for (iVar11 = 8; puVar7 = param_4, iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar13 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar13 = puVar13 + 1;
  }
  while (param_4 = puVar7, puVar7 != (undefined1 *)0xffffffff) {
    pdVar3 = (double *)param_2[1];
    pcVar12 = (char *)*param_2;
    if ((((int)pdVar3 - (int)pcVar12) / 0xc < param_10) && (-1 < param_10)) {
      pcStack_f0 = pcVar12 + param_10 * 0xc;
      puStack_f4 = (undefined1 *)0x43b0dd;
      pdStack_ec = pdVar3;
      pcStack_e8 = puVar7;
      pdVar10 = (double *)FUN_004607d0();
      if (pdVar10 == pdVar3) goto LAB_0043b0e4;
    }
    else {
LAB_0043b0e4:
      puStack_f4 = (undefined1 *)0x43b0ec;
      pcStack_f0 = pcVar12;
      pdStack_ec = pdVar3;
      pcStack_e8 = puVar7;
      pdVar10 = (double *)FUN_004607d0();
    }
    pdVar3 = (double *)*param_2;
    pdVar4 = (double *)param_2[1];
    param_10 = ((int)pdVar10 - (int)pdVar3) / 0xc;
    if (pdVar10 == pdVar4) break;
    if (pdVar10 == pdVar3) {
      pdVar10 = (double *)((int)pdVar10 + 0xc);
      if (pdVar10 != pdVar4) {
        do {
          if (*(undefined1 **)pdVar10 == puVar7) break;
          pdVar10 = (double *)((int)pdVar10 + 0xc);
        } while (pdVar10 != pdVar4);
        if (pdVar10 != pdVar4) goto LAB_0043b136;
      }
      pdVar10 = pdVar3;
    }
LAB_0043b136:
    param_10 = ((int)pdVar10 - (int)pdVar3) / 0xc;
    if (dVar6 <= _DAT_0064a668) {
      if (pdVar10 == pdVar3) break;
      iVar11 = *(int *)(pdVar10 + -1);
      param_10 = ((int)pdVar10 + (-0xc - (int)pdVar3)) / 0xc;
      if (iVar11 == 0) break;
      if (iVar11 == *(int *)(DAT_0068be98 + (int)param_3 * 4)) {
        pcStack_e8 = s_ilhops_txt_0066d800;
        pdStack_ec = (double *)param_2;
        pcStack_f0 = (char *)0x43b585;
        FUN_00484760();
        *(undefined4 *)param_11 = 0;
        *(undefined4 *)((int)param_11 + 4) = 0;
        puVar9 = &param_3;
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
        pcStack_e8 = s_advancePosition_vector<Hop>___ho_0066d80c;
        pdStack_ec = (double *)0x43b5fd;
        FUN_004018b0();
        ExceptionList = local_c;
        return param_1;
      }
      if (puVar7 == *(undefined1 **)(*(int *)(iVar11 + 0x70) + 0x10)) {
        pcStack_e8 = *(char **)(iVar11 + 0xc);
        pdStack_ec = (double *)local_6c;
        pcStack_f0 = (char *)0x43b275;
        puVar9 = (undefined4 *)FUN_00480040();
        puVar13 = &param_3;
        for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar13 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar13 = puVar13 + 1;
        }
        param_9 = (undefined1 *)((uint)param_9 | 1);
      }
      else {
        if (puVar7 == *(undefined1 **)(*(int *)(iVar11 + 0x74) + 0x10)) {
          pcStack_e8 = *(char **)(iVar11 + 0xc);
          pdStack_ec = (double *)local_2c;
          pcStack_f0 = (char *)0x43b2b3;
          puVar9 = (undefined4 *)FUN_004801c0();
          goto LAB_0043b19f;
        }
        pcStack_e8 = s_ilhops_txt_0066d800;
        pdStack_ec = (double *)param_2;
        pcStack_f0 = (char *)0x43b2c3;
        FUN_00484760();
        apcStack_104[3] = s_Incorrect_hops_sequence_4_0066d7c8;
        apcStack_104[2] = (char *)0x3d55;
LAB_0043b2d7:
        pcStack_f0 = &DAT_0068c120;
        puStack_f4 = &DAT_0068c120;
        apcStack_104[1] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
        apcStack_104[0] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
        piStack_108 = (int *)0x64;
        pcStack_10c = (char *)0x0;
        FUN_00401010();
      }
    }
    else {
      iVar11 = *(int *)((int)pdVar10 + 4);
      if (iVar11 == 0) break;
      if (iVar11 == *(int *)(DAT_0068be98 + (int)param_3 * 4)) {
        pcStack_e8 = s_ilhops_txt_0066d800;
        pdStack_ec = (double *)param_2;
        pcStack_f0 = (char *)0x43b525;
        FUN_00484760();
        *(undefined4 *)param_11 = 0;
        *(undefined4 *)((int)param_11 + 4) = 0;
        goto LAB_0043b53c;
      }
      if (puVar7 == *(undefined1 **)(*(int *)(iVar11 + 0x70) + 0x10)) {
        pcStack_e8 = *(char **)(iVar11 + 0xc);
        pdStack_ec = (double *)local_4c;
        pcStack_f0 = (char *)0x43b19f;
        puVar9 = (undefined4 *)FUN_00480040();
LAB_0043b19f:
        puVar13 = &param_3;
        for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar13 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar13 = puVar13 + 1;
        }
      }
      else {
        if (puVar7 != *(undefined1 **)(*(int *)(iVar11 + 0x74) + 0x10)) {
          pcStack_e8 = s_ilhops_txt_0066d800;
          pdStack_ec = (double *)param_2;
          pcStack_f0 = (char *)0x43b200;
          FUN_00484760();
          apcStack_104[3] = s_Incorrect_hops_sequence_1_0066d7e4;
          apcStack_104[2] = (char *)0x3d2a;
          goto LAB_0043b2d7;
        }
        pcStack_e8 = *(char **)(iVar11 + 0xc);
        pdStack_ec = (double *)local_8c;
        pcStack_f0 = (char *)0x43b1cd;
        puVar9 = (undefined4 *)FUN_004801c0();
        puVar13 = &param_3;
        for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar13 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar13 = puVar13 + 1;
        }
        param_9 = (undefined1 *)((uint)param_9 | 1);
      }
    }
    pcStack_e8 = (undefined1 *)0x0;
    pdStack_ec = param_11;
    puVar9 = &param_3;
    ppcVar14 = &pcStack_10c;
    for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
      *ppcVar14 = (char *)*puVar9;
      puVar9 = puVar9 + 1;
      ppcVar14 = ppcVar14 + 1;
    }
    puVar9 = (undefined4 *)FUN_00435e40(local_c4);
    puVar13 = &param_3;
    for (iVar11 = 8; puVar7 = param_4, iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar13 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar13 = puVar13 + 1;
    }
  }
  pdVar3 = param_8;
  pcVar8 = param_7;
  pcVar12 = param_3;
  if (((((int)param_3 < 0) || ((char *)(DAT_0068be9c - DAT_0068be98 >> 2) <= param_3)) &&
      (((int)puVar7 < 0 || ((undefined1 *)(DAT_0068be64 - DAT_0068be60 >> 2) <= param_4)))) ||
     (((((double)CONCAT44(param_6,param_5) < _DAT_0064a678 ||
        (_DAT_0064a670 < (double)CONCAT44(param_6,param_5))) || ((int)param_7 < 0)) ||
      ((int)param_8 < 0)))) {
    pcStack_e8 = param_9;
    pdStack_ec = param_8;
    pcStack_f0 = param_7;
    puStack_f4 = param_6;
    apcStack_104[3] = param_5;
    apcStack_104[2] = param_3;
    apcStack_104[1] = s___d__g__d__d__x__0066bc0c;
    apcStack_104[0] = &DAT_0077d640;
    piStack_108 = (int *)0x43b3e0;
    FUN_0061c369();
    piStack_108 = (int *)&DAT_0077d640;
    pcStack_10c = s_PositionId_0066bc00;
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3d5c,s_Invalid_id_0066bbf4);
  }
  if ((-1 < (int)pcVar12) && (pcVar12 < (char *)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    iVar11 = *(int *)(DAT_0068be98 + (int)pcVar12 * 4);
    iVar5 = *(int *)(iVar11 + 0x78);
    if ((int)pdVar3 < *(int *)(iVar11 + 0x7c) - iVar5 >> 2) {
      pcStack_e8 = (undefined1 *)0x43b43f;
      iVar11 = (**(code **)(**(int **)(iVar5 + (int)pdVar3 * 4) + 0x18))();
      if ((int)pcVar8 < iVar11) goto LAB_0043b46d;
    }
    pcStack_e8 = &DAT_0068c120;
    pdStack_ec = (double *)&DAT_0068c120;
    pcStack_f0 = s_Invalid_Position_Id_0066bbe0;
    puStack_f4 = (undefined1 *)0x3d5c;
    apcStack_104[3] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_104[2] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_104[1] = (char *)0x64;
    apcStack_104[0] = (char *)0x21;
    piStack_108 = (int *)0x43b46a;
    FUN_00401010();
  }
LAB_0043b46d:
  if (param_10 == -1) {
    puVar9 = &param_3;
    ppcVar14 = apcStack_104;
    for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
      *ppcVar14 = (char *)*puVar9;
      puVar9 = puVar9 + 1;
      ppcVar14 = ppcVar14 + 1;
    }
    piStack_108 = param_2;
    pcStack_10c = (char *)0x43b497;
    param_10 = FUN_0043abf0();
  }
  puVar9 = &param_3;
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
  pcVar12 = s_advancePosition_vector<Hop>___ho_0066d80c;
  cVar1 = s_advancePosition_vector<Hop>___ho_0066d80c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar12;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

