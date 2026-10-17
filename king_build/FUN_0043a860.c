
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0043a860(undefined4 param_1,char *param_2,undefined4 param_3,char *param_4,undefined4 param_5,
            char *param_6,undefined1 *param_7,undefined1 *param_8)

{
  char *pcVar1;
  undefined1 *puVar2;
  double *pdVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  char **ppcVar14;
  undefined4 *puVar15;
  char *apcStack_1d8 [4];
  float fStack_1c8;
  char *pcStack_1c4;
  undefined4 *puStack_1c0;
  char *pcStack_1bc;
  undefined4 local_194 [2];
  double local_18c;
  int local_184;
  int local_180;
  undefined4 auStack_174 [4];
  double dStack_164;
  undefined4 auStack_15c [4];
  double dStack_14c;
  double adStack_144 [3];
  undefined4 auStack_12c [2];
  double dStack_124;
  undefined1 auStack_114 [24];
  undefined1 auStack_fc [24];
  undefined1 auStack_e4 [24];
  undefined1 auStack_cc [24];
  undefined1 auStack_b4 [24];
  undefined1 auStack_9c [24];
  undefined1 auStack_84 [24];
  undefined1 local_6c [96];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063da6b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &pvStack_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar9 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &pvStack_c;
    *(undefined4 *)pcVar9 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar9 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcStack_1bc = s_getOrientation_PositionId_pos__0066d774;
  puStack_1c0 = (undefined4 *)0x43a8d9;
  FUN_004018b0();
  local_4 = 0;
  puVar13 = &param_2;
  puVar12 = local_194;
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar12 = puVar12 + 1;
  }
  pcStack_1bc = (undefined1 *)0x43a8ff;
  iVar10 = FUN_00423b20();
  puVar2 = param_7;
  pcVar1 = param_6;
  pcVar9 = param_2;
  if (iVar10 == 0) {
    pcStack_1bc = (undefined1 *)0x43a921;
    iVar10 = FUN_00423b50();
    if (iVar10 != 0) goto LAB_0043a925;
LAB_0043a957:
    pcStack_1bc = param_8;
    puStack_1c0 = (undefined4 *)puVar2;
    pcStack_1c4 = pcVar1;
    fStack_1c8 = (float)param_5;
    apcStack_1d8[3] = param_4;
    apcStack_1d8[2] = pcVar9;
    apcStack_1d8[1] = s___d__g__d__d__x__0066bc0c;
    apcStack_1d8[0] = &DAT_0077d640;
    FUN_0061c369();
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3cce,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00,&DAT_0077d640);
  }
  else {
LAB_0043a925:
    if ((((local_18c < _DAT_0064a678) || (_DAT_0064a670 < local_18c)) || (local_184 < 0)) ||
       (local_180 < 0)) goto LAB_0043a957;
  }
  if ((-1 < (int)pcVar9) && (pcVar9 < (char *)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    iVar10 = *(int *)(DAT_0068be98 + (int)pcVar9 * 4);
    iVar11 = *(int *)(iVar10 + 0x78);
    if ((int)puVar2 < *(int *)(iVar10 + 0x7c) - iVar11 >> 2) {
      pcStack_1bc = (undefined1 *)0x43a9df;
      iVar10 = (**(code **)(**(int **)(iVar11 + (int)puVar2 * 4) + 0x18))();
      if ((int)pcVar1 < iVar10) goto LAB_0043aa0d;
    }
    pcStack_1bc = &DAT_0068c120;
    puStack_1c0 = (undefined4 *)&DAT_0068c120;
    pcStack_1c4 = s_Invalid_Position_Id_0066bbe0;
    fStack_1c8 = 2.18126e-41;
    apcStack_1d8[3] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_1d8[2] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_1d8[1] = (char *)0x64;
    apcStack_1d8[0] = (char *)0x21;
    FUN_00401010();
  }
LAB_0043aa0d:
  puVar13 = &param_2;
  ppcVar14 = apcStack_1d8;
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *ppcVar14 = (char *)*puVar13;
    puVar13 = puVar13 + 1;
    ppcVar14 = ppcVar14 + 1;
  }
  iVar10 = FUN_00439b50(local_6c);
  puVar13 = (undefined4 *)(iVar10 + 0x48);
  pcStack_1bc = (char *)0x2;
  puVar12 = puVar13;
  puVar15 = auStack_174;
  for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar15 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar12 = puVar13;
  puVar15 = auStack_12c;
  for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar15 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar15 = puVar15 + 1;
  }
  pdVar3 = adStack_144;
  for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
    *(undefined4 *)pdVar3 = *puVar13;
    puVar13 = puVar13 + 1;
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  puVar13 = (undefined4 *)(iVar10 + 0x30);
  puVar12 = auStack_15c;
  for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar12 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar12 = puVar12 + 1;
  }
  puStack_1c0 = (undefined4 *)auStack_114;
  pcStack_1c4 = (char *)0x43aa7e;
  iVar10 = FUN_0041cf20();
  puStack_1c0 = (undefined4 *)auStack_9c;
  pcStack_1bc = (char *)0x2;
  pcStack_1c4 = (char *)0x43aa94;
  pdVar3 = (double *)FUN_0041cf20();
  puStack_1c0 = (undefined4 *)auStack_e4;
  pcStack_1bc = (char *)0x1;
  pcStack_1c4 = (char *)0x43aaa9;
  iVar11 = FUN_0041cf20();
  puStack_1c0 = (undefined4 *)auStack_84;
  pcStack_1bc = (char *)0x1;
  pcStack_1c4 = (char *)0x43aabf;
  iVar4 = FUN_0041cf20();
  puStack_1c0 = (undefined4 *)auStack_b4;
  pcStack_1bc = (char *)0x1;
  pcStack_1c4 = (char *)0x43aad5;
  pdVar5 = (double *)FUN_0041cf20();
  puStack_1c0 = (undefined4 *)auStack_fc;
  pcStack_1bc = (char *)0x0;
  pcStack_1c4 = (char *)0x43aaea;
  iVar6 = FUN_0041cf20();
  puStack_1c0 = (undefined4 *)auStack_cc;
  pcStack_1bc = (char *)0x0;
  pcStack_1c4 = (char *)0x43ab02;
  iVar7 = FUN_0041cf20();
  puStack_1c0 = local_194;
  pcStack_1bc = (char *)0x0;
  pcStack_1c4 = (char *)0x43ab17;
  pdVar8 = (double *)FUN_0041cf20();
  pcStack_1bc = (char *)(float)dStack_164;
  puStack_1c0 = (undefined4 *)(float)dStack_124;
  pcStack_1c4 = (char *)(float)adStack_144[0];
  fStack_1c8 = (float)dStack_14c;
  apcStack_1d8[3] = (char *)(float)*(double *)(iVar10 + 8);
  apcStack_1d8[2] = (char *)(float)*pdVar3;
  apcStack_1d8[1] = (char *)(float)*(double *)(iVar11 + 0x10);
  apcStack_1d8[0] = (char *)(float)*(double *)(iVar4 + 8);
  FUN_0041ce30((float)*pdVar8,(float)*(double *)(iVar7 + 8),(float)*(double *)(iVar6 + 0x10),
               (float)*pdVar5);
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar9 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar9 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar9 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcStack_1bc = s_getOrientation_PositionId_pos__0066d774;
  puStack_1c0 = (undefined4 *)0x43abd3;
  FUN_004018b0();
  ExceptionList = pvStack_c;
  return param_1;
}

