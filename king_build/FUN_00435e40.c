
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00435e40(undefined4 *param_1,char *param_2,undefined4 param_3,char *param_4,
                 undefined4 *param_5,double *param_6,undefined4 *param_7,undefined1 *param_8,
                 undefined4 param_9,double *param_10)

{
  char cVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  char **ppcVar8;
  undefined4 *puVar9;
  char *apcStack_8c [5];
  double *pdStack_78;
  char *pcStack_74;
  char *pcStack_70;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char *local_54;
  undefined *local_50;
  undefined1 local_4c [24];
  undefined4 local_34 [2];
  double dStack_2c;
  int iStack_24;
  int iStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063d7c8;
  pvStack_14 = ExceptionList;
  pcStack_70 = (char *)0x8;
  pcStack_74 = s_START__0066b830;
  local_54 = s_advancePosition_PositionId_pos__d_0066d3c8;
  local_50 = &DAT_0071d768;
  pdStack_78 = (double *)0x435e82;
  ExceptionList = &pvStack_14;
  FUN_00401870();
  pcStack_70 = s_advancePosition_PositionId_pos__d_0066d3c8;
  pcStack_74 = (char *)0x435e91;
  FUN_004018b0();
  puVar7 = &param_2;
  puVar9 = local_34;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  local_c = 0;
  pcStack_70 = (undefined1 *)0x435eae;
  iVar4 = FUN_0040a460();
  if (iVar4 == 0) {
    pcStack_70 = param_8;
    pcStack_74 = (char *)param_7;
    pdStack_78 = param_6;
    apcStack_8c[4] = (char *)param_5;
    apcStack_8c[3] = param_4;
    apcStack_8c[2] = param_2;
    apcStack_8c[1] = s___d__g__d__d__x__0066bc0c;
    apcStack_8c[0] = &DAT_0077d640;
    FUN_0061c369();
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3844,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00,&DAT_0077d640);
  }
  if ((-1 < (int)param_2) && (param_2 < (char *)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    iVar4 = *(int *)(DAT_0068be98 + (int)param_2 * 4);
    if ((int)param_7 < *(int *)(iVar4 + 0x7c) - *(int *)(iVar4 + 0x78) >> 2) {
      pcStack_70 = (undefined1 *)0x435f3f;
      iVar4 = (**(code **)(**(int **)(*(int *)(iVar4 + 0x78) + (int)param_7 * 4) + 0x18))();
      if ((int)param_6 < iVar4) goto LAB_00435f6e;
    }
    pcStack_70 = &DAT_0068c120;
    pcStack_74 = &DAT_0068c120;
    pdStack_78 = (double *)s_Invalid_Position_Id_0066bbe0;
    apcStack_8c[4] = (char *)0x3844;
    apcStack_8c[3] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_8c[2] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_8c[1] = (char *)0x64;
    apcStack_8c[0] = (char *)0x21;
    FUN_00401010();
  }
LAB_00435f6e:
  puVar7 = &param_2;
  ppcVar8 = apcStack_8c;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppcVar8 = (char *)*puVar7;
    puVar7 = puVar7 + 1;
    ppcVar8 = ppcVar8 + 1;
  }
  FUN_00435cd0(local_4c);
  pdVar2 = param_10;
  if (((uint)param_8 & 1) != 0) {
    *param_10 = -*param_10;
  }
  uStack_60 = 0x9999999a;
  uStack_5c = 0x3fb99999;
  iVar4 = *(int *)(DAT_0068be98 + (int)param_2 * 4);
  piVar6 = (int *)(iVar4 + 0x78);
  if (*param_10 <= _DAT_0064a668) {
    if ((*param_10 < _DAT_0064a668) &&
       (iVar3 = *piVar6, param_7 < (undefined4 *)(*(int *)(iVar4 + 0x7c) - iVar3 >> 2))) {
      do {
        pcStack_70 = (char *)&param_6;
        pcStack_74 = (char *)&uStack_60;
        apcStack_8c[4] = (char *)&param_4;
        pdStack_78 = pdVar2;
        apcStack_8c[3] = (char *)0x43606e;
        iVar3 = (**(code **)(**(int **)(iVar3 + (int)param_7 * 4) + 0x10))();
        if ((iVar3 == 0) || (param_7 == (undefined4 *)0x0)) break;
        param_7 = (undefined4 *)((int)param_7 + -1);
        pcStack_70 = (char *)0x436087;
        iVar3 = (**(code **)(**(int **)(*piVar6 + (int)param_7 * 4) + 0x18))();
        param_6 = (double *)(iVar3 + -1);
        param_4 = (char *)0x0;
        param_5 = (undefined4 *)0x3ff00000;
        iVar3 = *piVar6;
      } while (param_7 < (undefined4 *)(*(int *)(iVar4 + 0x7c) - iVar3 >> 2));
    }
  }
  else {
    iVar3 = *piVar6;
    if (param_7 < (undefined4 *)(*(int *)(iVar4 + 0x7c) - iVar3 >> 2)) {
      do {
        pcStack_70 = (char *)&param_6;
        pcStack_74 = (char *)&uStack_60;
        apcStack_8c[4] = (char *)&param_4;
        pdStack_78 = pdVar2;
        apcStack_8c[3] = (char *)0x435ff3;
        iVar3 = (**(code **)(**(int **)(iVar3 + (int)param_7 * 4) + 0x10))();
        if ((iVar3 == 0) ||
           ((undefined4 *)((*(int *)(iVar4 + 0x7c) - *piVar6 >> 2) + -1) <= param_7)) break;
        param_7 = (undefined4 *)((int)param_7 + 1);
        param_6 = (double *)0x0;
        param_4 = (char *)0x0;
        param_5 = (undefined4 *)0x0;
        iVar3 = *piVar6;
      } while (param_7 < (undefined4 *)(*(int *)(iVar4 + 0x7c) - iVar3 >> 2));
    }
  }
  if (*pdVar2 <= _DAT_0064a668) {
    if (*pdVar2 < _DAT_0064a668) {
      param_3 = *(undefined4 *)(*(int *)(*(int *)(DAT_0068be98 + (int)param_2 * 4) + 0x70) + 0x10);
      goto LAB_004360cd;
    }
    param_3 = 0xffffffff;
  }
  else {
    param_3 = *(undefined4 *)(*(int *)(*(int *)(DAT_0068be98 + (int)param_2 * 4) + 0x74) + 0x10);
LAB_004360cd:
    if (((uint)param_8 & 1) != 0) {
      *pdVar2 = -*pdVar2;
    }
  }
  puVar7 = &param_2;
  puVar9 = local_34;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  pcStack_70 = (char *)0x43611f;
  iVar4 = FUN_00423b20();
  if (iVar4 == 0) {
    pcStack_70 = (char *)0x43612c;
    iVar4 = FUN_00423b50();
    if (iVar4 != 0) goto LAB_00436130;
LAB_0043615e:
    pcStack_70 = param_8;
    pcStack_74 = (char *)param_7;
    pdStack_78 = param_6;
    apcStack_8c[4] = (char *)param_5;
    apcStack_8c[3] = param_4;
    apcStack_8c[2] = param_2;
    apcStack_8c[1] = s___d__g__d__d__x__0066bc0c;
    apcStack_8c[0] = &DAT_0077d640;
    FUN_0061c369();
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3860,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00,&DAT_0077d640);
  }
  else {
LAB_00436130:
    if ((((dStack_2c < _DAT_0064a678) || (_DAT_0064a670 < dStack_2c)) || (iStack_24 < 0)) ||
       (iStack_20 < 0)) goto LAB_0043615e;
  }
  if ((-1 < (int)param_2) && (param_2 < (char *)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    iVar4 = *(int *)(DAT_0068be98 + (int)param_2 * 4);
    if ((int)param_7 < *(int *)(iVar4 + 0x7c) - *(int *)(iVar4 + 0x78) >> 2) {
      pcStack_70 = (char *)0x4361eb;
      iVar4 = (**(code **)(**(int **)(*(int *)(iVar4 + 0x78) + (int)param_7 * 4) + 0x18))();
      if ((int)param_6 < iVar4) goto LAB_0043621a;
    }
    pcStack_70 = &DAT_0068c120;
    pcStack_74 = &DAT_0068c120;
    pdStack_78 = (double *)s_Invalid_Position_Id_0066bbe0;
    apcStack_8c[4] = (char *)0x3860;
    apcStack_8c[3] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_8c[2] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_8c[1] = (char *)0x64;
    apcStack_8c[0] = (char *)0x21;
    FUN_00401010();
  }
LAB_0043621a:
  puVar7 = &param_2;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar7;
    puVar7 = puVar7 + 1;
    param_1 = param_1 + 1;
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar5 = s_advancePosition_PositionId_pos__d_0066d3c8;
  cVar1 = s_advancePosition_PositionId_pos__d_0066d3c8[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar5;
    }
  }
  ExceptionList = pvStack_14;
  return;
}

