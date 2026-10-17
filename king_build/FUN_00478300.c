
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00478300(int param_1,char *param_2,undefined4 param_3,char *param_4,undefined4 param_5,
                 char *param_6,undefined1 *param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint *puVar9;
  char *pcVar10;
  uint *puVar11;
  char **ppcVar12;
  char *pcVar13;
  char *apcStack_120 [5];
  char *pcStack_10c;
  undefined4 uStack_108;
  char *pcStack_104;
  undefined1 *puStack_100;
  undefined1 *puStack_fc;
  char *local_e8;
  int iStack_e4;
  char *pcStack_e0;
  undefined4 uStack_dc;
  char *pcStack_d8;
  undefined1 *puStack_d4;
  undefined1 *puStack_d0;
  uint auStack_c8 [5];
  int iStack_b4;
  uint auStack_a8 [4];
  int iStack_98;
  undefined4 uStack_88;
  char acStack_80 [128];
  
  puVar7 = &param_2;
  ppcVar12 = &local_e8;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppcVar12 = (char *)*puVar7;
    puVar7 = puVar7 + 1;
    ppcVar12 = ppcVar12 + 1;
  }
  puStack_fc = (undefined1 *)0x478325;
  iVar4 = FUN_0040a460();
  puVar3 = param_7;
  pcVar10 = param_2;
  if (iVar4 == 0) {
    puStack_fc = (undefined1 *)param_8;
    puStack_100 = param_7;
    pcStack_104 = param_6;
    uStack_108 = param_5;
    pcStack_10c = param_4;
    apcStack_120[4] = param_2;
    apcStack_120[3] = s___d__g__d__d__x__0066bc0c;
    apcStack_120[2] = &DAT_0077d640;
    apcStack_120[1] = (char *)0x478368;
    FUN_0061c369();
    apcStack_120[1] = &DAT_0077d640;
    apcStack_120[0] = s_PositionId_0066bc00;
    FUN_00401010(0x21,100,s_C__Nek_Vrappl_Gi_Htai_Ai_play_cp_0066e9d8,
                 s__Id__ai_play_cpp_2001_8_14_15_09_0066e920,0x7b3,s_Invalid_id_0066bbf4);
  }
  if ((-1 < (int)pcVar10) && (pcVar10 < (char *)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    iVar4 = *(int *)(DAT_0068be98 + (int)pcVar10 * 4);
    iVar2 = *(int *)(iVar4 + 0x78);
    if ((int)puVar3 < *(int *)(iVar4 + 0x7c) - iVar2 >> 2) {
      puStack_fc = (undefined1 *)0x4783cf;
      iVar4 = (**(code **)(**(int **)(iVar2 + (int)puVar3 * 4) + 0x18))();
      if ((int)param_6 < iVar4) goto LAB_00478402;
    }
    puStack_fc = &DAT_0068c120;
    puStack_100 = &DAT_0068c120;
    pcStack_104 = s_Invalid_Position_Id_0066bbe0;
    uStack_108 = 0x7b3;
    pcStack_10c = s__Id__ai_play_cpp_2001_8_14_15_09_0066e920;
    apcStack_120[4] = s_C__Nek_Vrappl_Gi_Htai_Ai_play_cp_0066e9d8;
    apcStack_120[3] = (char *)0x64;
    apcStack_120[2] = (undefined1 *)0x21;
    apcStack_120[1] = (undefined1 *)0x4783ff;
    FUN_00401010();
  }
LAB_00478402:
  puVar9 = (uint *)(param_1 + 0x28);
  puVar8 = puVar9;
  ppcVar12 = &local_e8;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppcVar12 = (char *)*puVar8;
    puVar8 = puVar8 + 1;
    ppcVar12 = ppcVar12 + 1;
  }
  if (((((local_e8 == (char *)0xffffffff) && (iStack_e4 == -1)) &&
       ((double)CONCAT44(uStack_dc,pcStack_e0) == _DAT_0064a668)) &&
      ((pcStack_d8 == (char *)0x0 && (puStack_d4 == (undefined1 *)0x0)))) &&
     (puStack_d0 == (undefined1 *)0x0)) {
    puStack_fc = &DAT_0068c120;
    puStack_100 = &DAT_0068c120;
    pcStack_104 = s_Internal_error_92667_0066eb38;
    uStack_108 = 0x7b5;
    pcStack_10c = s__Id__ai_play_cpp_2001_8_14_15_09_0066e920;
    apcStack_120[4] = s_C__Nek_Vrappl_Gi_Htai_Ai_play_cp_0066e9d8;
    apcStack_120[3] = (char *)0x64;
    apcStack_120[2] = (undefined1 *)0x0;
    apcStack_120[1] = (undefined1 *)0x478478;
    FUN_00401010();
  }
  puVar8 = puVar9;
  ppcVar12 = &local_e8;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppcVar12 = (char *)*puVar8;
    puVar8 = puVar8 + 1;
    ppcVar12 = ppcVar12 + 1;
  }
  puStack_fc = (undefined1 *)0x478491;
  iVar4 = FUN_0040a460();
  if (iVar4 == 0) {
    puVar8 = puVar9;
    ppcVar12 = &local_e8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppcVar12 = (char *)*puVar8;
      puVar8 = puVar8 + 1;
      ppcVar12 = ppcVar12 + 1;
    }
    puStack_fc = puStack_d0;
    puStack_100 = puStack_d4;
    pcStack_104 = pcStack_d8;
    uStack_108 = uStack_dc;
    pcStack_10c = pcStack_e0;
    apcStack_120[4] = local_e8;
    apcStack_120[3] = s___d__g__d__d__x__0066bc0c;
    apcStack_120[2] = &DAT_0077d640;
    apcStack_120[1] = (char *)0x4784cf;
    FUN_0061c369();
    apcStack_120[1] = &DAT_0077d640;
    apcStack_120[0] = s_PositionId_0066bc00;
    FUN_00401010(0x21,100,s_C__Nek_Vrappl_Gi_Htai_Ai_play_cp_0066e9d8,
                 s__Id__ai_play_cpp_2001_8_14_15_09_0066e920,0x7b6,s_Invalid_id_0066bbf4);
  }
  puVar8 = puVar9;
  ppcVar12 = &local_e8;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppcVar12 = (char *)*puVar8;
    puVar8 = puVar8 + 1;
    ppcVar12 = ppcVar12 + 1;
  }
  if ((-1 < (int)local_e8) && (local_e8 < (char *)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    puVar8 = puVar9;
    puVar11 = auStack_c8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar8 = puVar9;
    ppcVar12 = &local_e8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppcVar12 = (char *)*puVar8;
      puVar8 = puVar8 + 1;
      ppcVar12 = ppcVar12 + 1;
    }
    iVar4 = *(int *)(DAT_0068be98 + (int)local_e8 * 4);
    if (iStack_b4 < *(int *)(iVar4 + 0x7c) - *(int *)(iVar4 + 0x78) >> 2) {
      puVar8 = puVar9;
      puVar11 = auStack_a8;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar8 = puVar9;
      ppcVar12 = &local_e8;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppcVar12 = (char *)*puVar8;
        puVar8 = puVar8 + 1;
        ppcVar12 = ppcVar12 + 1;
      }
      puVar8 = auStack_c8;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      }
      puStack_fc = (undefined1 *)0x47859e;
      iVar4 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_0068be98 + auStack_c8[0] * 4) + 0x78) +
                                     (int)puStack_d4 * 4) + 0x18))();
      if (iStack_98 < iVar4) goto LAB_004785ce;
    }
    puStack_fc = &DAT_0068c120;
    puStack_100 = &DAT_0068c120;
    pcStack_104 = s_Invalid_Position_Id_0066bbe0;
    uStack_108 = 0x7b6;
    pcStack_10c = s__Id__ai_play_cpp_2001_8_14_15_09_0066e920;
    apcStack_120[4] = s_C__Nek_Vrappl_Gi_Htai_Ai_play_cp_0066e9d8;
    apcStack_120[3] = (char *)0x64;
    apcStack_120[2] = (undefined1 *)0x21;
    apcStack_120[1] = (undefined1 *)0x4785cb;
    FUN_00401010();
  }
LAB_004785ce:
  puVar9 = (uint *)&param_2;
  puVar8 = auStack_a8;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  }
  uStack_88 = param_10;
  puVar9 = auStack_a8;
  ppcVar12 = apcStack_120;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppcVar12 = (char *)*puVar9;
    puVar9 = puVar9 + 1;
    ppcVar12 = ppcVar12 + 1;
  }
  FUN_00477f30();
  puStack_fc = (undefined1 *)param_1;
  puStack_100 = (undefined1 *)0x478617;
  FUN_004781a0();
  if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c)) {
    puStack_fc = (undefined1 *)param_8;
    puStack_100 = param_7;
    pcStack_104 = param_6;
    uStack_108 = param_5;
    pcStack_10c = param_4;
    apcStack_120[4] = pcVar10;
    apcStack_120[3] = s___d__g__d__d__x__0066bc0c;
    apcStack_120[2] = &DAT_0077d640;
    apcStack_120[1] = (char *)0x478660;
    FUN_0061c369();
    uVar5 = 0xffffffff;
    pcVar10 = &DAT_0077d640;
    do {
      pcVar13 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar13 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar13;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    apcStack_120[1] = &DAT_0068c120;
    pcVar10 = pcVar13 + -uVar5;
    pcVar13 = acStack_80;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar13 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar13 = pcVar13 + 1;
    }
    apcStack_120[0] = acStack_80;
    FUN_00401010(0,100,s_C__Nek_Vrappl_Gi_Htai_Ai_play_cp_0066e9d8,
                 s__Id__ai_play_cpp_2001_8_14_15_09_0066e920,0x7ce,s_Internal_error_5676_0066eb24);
  }
  return;
}

