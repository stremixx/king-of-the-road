
undefined4 FUN_0043a580(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float *pfVar12;
  undefined4 *puVar13;
  float local_1cc [4];
  float local_1bc;
  float local_1b8;
  undefined1 *local_1b4;
  float local_1b0;
  undefined4 local_18c [2];
  double local_184;
  double local_174 [3];
  undefined4 local_15c [4];
  double local_14c;
  undefined4 local_144 [2];
  double local_13c;
  undefined4 local_12c [4];
  double local_11c;
  undefined1 local_114 [24];
  undefined1 local_fc [24];
  undefined1 local_e4 [24];
  undefined1 local_cc [24];
  undefined1 local_b4 [24];
  undefined1 local_9c [24];
  undefined1 local_84 [24];
  undefined1 local_6c [96];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063da4b;
  local_c = ExceptionList;
  pcVar7 = s_getOrientationSmoothed_PlayerId_p_0066d73c;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar2 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  cVar1 = s_getOrientationSmoothed_PlayerId_p_0066d73c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar7;
    }
  }
  puVar11 = (undefined4 *)&stack0x0000000c;
  pfVar12 = local_1cc;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar12 = (float)*puVar11;
    puVar11 = puVar11 + 1;
    pfVar12 = pfVar12 + 1;
  }
  local_4 = 0;
  FUN_0041d3f0(&stack0x00000008);
  iVar8 = FUN_00439dc0(local_6c);
  puVar11 = (undefined4 *)(iVar8 + 0x48);
  local_1b4 = local_e4;
  local_1b0 = 2.8026e-45;
  puVar10 = puVar11;
  puVar13 = local_12c;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  puVar10 = puVar11;
  puVar13 = local_144;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  pdVar3 = local_174;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pdVar3 = *puVar11;
    puVar11 = puVar11 + 1;
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  puVar11 = (undefined4 *)(iVar8 + 0x30);
  puVar10 = local_15c;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar11 = (undefined4 *)(iVar8 + 0x30);
  puVar10 = local_18c;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar10 = puVar10 + 1;
  }
  local_1b8 = 6.212805e-39;
  pdVar3 = (double *)FUN_0041cf20();
  local_1b4 = local_114;
  local_1b0 = 1.4013e-45;
  local_1b8 = 6.212835e-39;
  iVar8 = FUN_0041cf20();
  local_1b4 = local_84;
  local_1b0 = 1.4013e-45;
  local_1b8 = 6.212866e-39;
  iVar9 = FUN_0041cf20();
  local_1b4 = local_b4;
  local_1b0 = 1.4013e-45;
  local_1b8 = 6.212896e-39;
  FUN_0041cf20();
  local_1b4 = local_fc;
  local_1b0 = 0.0;
  local_1b8 = 6.212926e-39;
  iVar4 = FUN_0041cf20();
  local_1b4 = local_cc;
  local_1b0 = 0.0;
  local_1b8 = 6.212957e-39;
  iVar5 = FUN_0041cf20();
  local_1b0 = 0.0;
  local_1b4 = local_9c;
  local_1b8 = 6.21299e-39;
  pdVar6 = (double *)FUN_0041cf20();
  local_1b0 = (float)local_11c;
  local_1b4 = (undefined1 *)(float)local_13c;
  local_1b8 = (float)local_174[0];
  local_1bc = (float)local_14c;
  local_1cc[3] = (float)local_184;
  local_1cc[2] = (float)*pdVar3;
  local_1cc[1] = (float)*(double *)(iVar8 + 0x10);
  local_1cc[0] = (float)*(double *)(iVar9 + 8);
  FUN_0041ce30((float)*pdVar6,(float)*(double *)(iVar5 + 8),(float)*(double *)(iVar4 + 0x10));
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar7 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar7 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar7 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar7 = s_getOrientationSmoothed_PlayerId_p_0066d73c;
  cVar1 = s_getOrientationSmoothed_PlayerId_p_0066d73c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar7;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

