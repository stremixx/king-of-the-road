
void FUN_00419100(char *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  char *pcVar5;
  char *extraout_ECX;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  char **ppcVar9;
  char *pcStack_bc;
  undefined1 *puStack_b8;
  undefined1 *puStack_b4;
  char *pcStack_b0;
  char *pcStack_ac;
  undefined1 **ppuStack_a8;
  int **ppiStack_a4;
  char *pcStack_a0;
  int *piStack_9c;
  char *local_98;
  int local_8c;
  int *local_88;
  undefined1 *local_84;
  undefined1 *local_80;
  char *local_7c;
  undefined *local_78;
  char *local_74 [2];
  undefined1 **local_6c;
  int **local_68;
  char *local_64;
  int *local_60;
  char *local_5c;
  uint local_54 [5];
  int local_40;
  uint local_34 [4];
  int iStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063c968;
  pvStack_14 = ExceptionList;
  local_98 = (char *)0x8;
  piStack_9c = (int *)s_START__0066b830;
  local_7c = s_goHireIt_PlayerId_player__0066c430;
  local_78 = &DAT_0071d768;
  pcStack_a0 = (char *)0x419141;
  ExceptionList = &pvStack_14;
  FUN_00401870();
  local_98 = s_goHireIt_PlayerId_player__0066c430;
  piStack_9c = (int *)0x419150;
  FUN_004018b0();
  local_c = 0;
  iVar6 = *(int *)(param_1 + 0x208);
  if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
    iVar6 = *(int *)(param_1 + 0x204);
    if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
      local_98 = &DAT_0068c120;
      piStack_9c = (int *)&DAT_0068c120;
      pcStack_a0 = s_Internal_error_9012_0066c41c;
      ppiStack_a4 = (int **)0x2e4;
      ppuStack_a8 = (undefined1 **)s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
      pcStack_ac = s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc;
      pcStack_b0 = (char *)0x1;
      puStack_b4 = (undefined1 *)0x0;
      puStack_b8 = (undefined1 *)0x4191b0;
      FUN_00401010();
    }
    else {
      local_88 = (int *)(iVar6 + 0x1c);
    }
  }
  else {
    local_88 = (int *)(iVar6 + 0x1c);
  }
  if (*local_88 != local_88[1]) {
    local_98 = &DAT_0068c120;
    piStack_9c = (int *)&DAT_0068c120;
    pcStack_a0 = s_Internal_error_742_0066c3e8;
    ppiStack_a4 = (int **)0x1332;
    ppuStack_a8 = (undefined1 **)s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    pcStack_ac = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    pcStack_b0 = (char *)0x64;
    puStack_b4 = (undefined1 *)0x0;
    puStack_b8 = (undefined1 *)0x4191e7;
    FUN_00401010();
  }
  pcVar5 = param_1;
  local_98 = (char *)0x4191f8;
  FUN_00447d40();
  local_84 = (undefined1 *)&local_98;
  pcVar5[0x368] = '\x01';
  local_98 = param_1;
  piStack_9c = (int *)0x419210;
  FUN_00477e00();
  param_1[100] = '\x01';
  param_1[0x65] = '\x01';
  param_1[0x66] = '\0';
  param_1[0x67] = '\0';
  DAT_0068c0ac = DAT_0068c0ac + 1;
  local_8c = -1;
  local_88 = (int *)0xffffffff;
  if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c)) {
    do {
      local_98 = (char *)0x0;
      piStack_9c = (int *)0x0;
      ppiStack_a4 = &local_88;
      pcStack_a0 = (char *)&DAT_0068be30;
      ppuStack_a8 = &local_84;
      pcStack_ac = (char *)0x419255;
      piVar2 = (int *)FUN_00418ce0();
      local_8c = *piVar2;
      local_98 = (char *)0x1;
      piStack_9c = local_88;
      pcStack_a0 = (char *)0x41926e;
      FUN_00419560();
      pcStack_a0 = (char *)0x419278;
      puVar3 = (undefined4 *)FUN_004485e0();
      pcStack_bc = (char *)*puVar3;
      local_80 = (undefined1 *)&puStack_b8;
      FUN_0040a430();
      local_80 = (undefined1 *)&pcStack_bc;
      pcStack_bc = extraout_ECX;
      FUN_0041d3f0(&param_1);
      FUN_00478300();
    } while (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c));
  }
  pcVar5 = param_1 + 0x28;
  ppcVar9 = local_74;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppcVar9 = *(char **)pcVar5;
    pcVar5 = pcVar5 + 4;
    ppcVar9 = ppcVar9 + 1;
  }
  local_98 = (char *)0x4192c5;
  iVar6 = FUN_0040a460();
  if (iVar6 == 0) {
    pcVar5 = param_1 + 0x28;
    ppcVar9 = local_74;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *ppcVar9 = *(char **)pcVar5;
      pcVar5 = pcVar5 + 4;
      ppcVar9 = ppcVar9 + 1;
    }
    local_98 = local_5c;
    piStack_9c = local_60;
    pcStack_a0 = local_64;
    ppiStack_a4 = local_68;
    ppuStack_a8 = local_6c;
    pcStack_ac = local_74[0];
    pcStack_b0 = s___d__g__d__d__x__0066bc0c;
    puStack_b4 = &DAT_0077d640;
    puStack_b8 = (undefined1 *)0x419307;
    FUN_0061c369();
    puStack_b8 = &DAT_0077d640;
    pcStack_bc = s_PositionId_0066bc00;
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1346,s_Invalid_id_0066bbf4);
  }
  puVar4 = (uint *)(param_1 + 0x28);
  puVar7 = puVar4;
  ppcVar9 = local_74;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppcVar9 = (char *)*puVar7;
    puVar7 = puVar7 + 1;
    ppcVar9 = ppcVar9 + 1;
  }
  if ((-1 < (int)local_74[0]) && (local_74[0] < (char *)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    puVar7 = puVar4;
    puVar8 = local_54;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar7 = puVar4;
    ppcVar9 = local_74;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *ppcVar9 = (char *)*puVar7;
      puVar7 = puVar7 + 1;
      ppcVar9 = ppcVar9 + 1;
    }
    iVar6 = *(int *)(DAT_0068be98 + (int)local_74[0] * 4);
    if (local_40 < *(int *)(iVar6 + 0x7c) - *(int *)(iVar6 + 0x78) >> 2) {
      puVar7 = puVar4;
      puVar8 = local_34;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar7 = puVar4;
      ppcVar9 = local_74;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *ppcVar9 = (char *)*puVar7;
        puVar7 = puVar7 + 1;
        ppcVar9 = ppcVar9 + 1;
      }
      puVar7 = local_54;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      local_98 = (char *)0x4193dc;
      iVar6 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_0068be98 + local_54[0] * 4) + 0x78) +
                                     (int)local_60 * 4) + 0x18))();
      if (iStack_24 < iVar6) goto LAB_0041940c;
    }
    local_98 = &DAT_0068c120;
    piStack_9c = (int *)&DAT_0068c120;
    pcStack_a0 = s_Invalid_Position_Id_0066bbe0;
    ppiStack_a4 = (int **)0x1346;
    ppuStack_a8 = (undefined1 **)s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    pcStack_ac = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    pcStack_b0 = (char *)0x64;
    puStack_b4 = (undefined1 *)0x21;
    puStack_b8 = (undefined1 *)0x419409;
    FUN_00401010();
  }
LAB_0041940c:
  *(int *)(param_1 + 0x78) = local_8c;
  *(int **)(param_1 + 0x7c) = local_88;
  if (*(int *)(*(int *)(*(int *)(DAT_0068bbf8 + local_8c * 4) + 0x1c) + 8 + (int)local_88 * 0x24) !=
      DAT_0068a8f0) {
    local_98 = &DAT_0068c120;
    piStack_9c = (int *)&DAT_0068c120;
    pcStack_a0 = s_Internal_error_97726_0066c3d0;
    ppiStack_a4 = (int **)0x134c;
    ppuStack_a8 = (undefined1 **)s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    pcStack_ac = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    pcStack_b0 = (char *)0x64;
    puStack_b4 = (undefined1 *)0x0;
    puStack_b8 = (undefined1 *)0x41946c;
    FUN_00401010();
  }
  *(char **)(*(int *)(*(int *)(DAT_0068bbf8 + local_8c * 4) + 0x1c) + 8 + (int)local_88 * 0x24) =
       param_1;
  puVar4 = (uint *)(*(int *)(*(int *)(DAT_0068bbf8 + local_8c * 4) + 0x1c) + 4 +
                   (int)local_88 * 0x24);
  *puVar4 = *puVar4 | 2;
  iVar6 = *(int *)(DAT_0068bbf8 + local_8c * 4);
  *(int *)(iVar6 + 0x28) = *(int *)(iVar6 + 0x28) + 1;
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar5 = s_goHireIt_PlayerId_player__0066c430;
  cVar1 = s_goHireIt_PlayerId_player__0066c430[0];
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

