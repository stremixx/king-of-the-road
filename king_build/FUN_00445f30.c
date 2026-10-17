
char * FUN_00445f30(char *param_1,int param_2,char *param_3,undefined4 param_4,char *param_5,
                   char *param_6,char *param_7,undefined1 *param_8,undefined1 *param_9)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  char **ppcVar11;
  char *apcStack_b0 [4];
  char *pcStack_a0;
  undefined4 uStack_9c;
  char *pcStack_98;
  char *pcStack_94;
  char *apcStack_90 [5];
  char *pcStack_7c;
  char *pcStack_78;
  char *pcStack_74;
  uint *puStack_70;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  char *local_50;
  undefined *local_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  int iStack_40;
  uint local_3c [4];
  char *pcStack_2c;
  char *pcStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e0a0;
  pvStack_c = ExceptionList;
  puStack_70 = (uint *)0x8;
  pcStack_74 = s_START__0066b830;
  local_50 = s_getRightDirection_PlayerId_playe_0066e364;
  local_4c = &DAT_0071d768;
  pcStack_78 = (char *)0x445f6d;
  ExceptionList = &pvStack_c;
  FUN_00401870();
  puStack_70 = (uint *)s_getRightDirection_PlayerId_playe_0066e364;
  pcStack_74 = (undefined1 *)0x445f7c;
  FUN_004018b0();
  local_4 = 0;
  puVar8 = (uint *)&param_3;
  puVar10 = local_3c;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  puStack_70 = (uint *)0x445f9c;
  iVar6 = FUN_0040a460();
  puVar4 = param_8;
  pcVar3 = param_7;
  pcVar7 = param_3;
  if (iVar6 == 0) {
    puStack_70 = (uint *)param_9;
    pcStack_74 = param_8;
    pcStack_78 = param_7;
    pcStack_7c = param_6;
    apcStack_90[4] = param_5;
    apcStack_90[3] = param_3;
    apcStack_90[2] = s___d__g__d__d__x__0066bc0c;
    apcStack_90[1] = &DAT_0077d640;
    apcStack_90[0] = (char *)0x445fdc;
    FUN_0061c369();
    apcStack_90[0] = &DAT_0077d640;
    pcStack_94 = s_PositionId_0066bc00;
    pcStack_98 = s_Invalid_id_0066bbf4;
    uStack_9c = 0x46f3;
    pcStack_a0 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_b0[3] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_b0[2] = (char *)0x64;
    apcStack_b0[1] = (char *)0x21;
    apcStack_b0[0] = (char *)0x446003;
    FUN_00401010();
  }
  if ((-1 < (int)pcVar7) && (pcVar7 < (char *)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    iVar6 = *(int *)(DAT_0068be98 + (int)pcVar7 * 4);
    iVar2 = *(int *)(iVar6 + 0x78);
    if ((int)puVar4 < *(int *)(iVar6 + 0x7c) - iVar2 >> 2) {
      puStack_70 = (uint *)0x44603a;
      iVar6 = (**(code **)(**(int **)(iVar2 + (int)puVar4 * 4) + 0x18))();
      if ((int)pcVar3 < iVar6) goto LAB_00446068;
    }
    puStack_70 = (uint *)&DAT_0068c120;
    pcStack_74 = &DAT_0068c120;
    pcStack_78 = s_Invalid_Position_Id_0066bbe0;
    pcStack_7c = (char *)0x46f3;
    apcStack_90[4] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_90[3] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_90[2] = (char *)0x64;
    apcStack_90[1] = (char *)0x21;
    apcStack_90[0] = (char *)0x446065;
    FUN_00401010();
  }
LAB_00446068:
  if (param_2 == DAT_0068a8f0) {
    puVar9 = &param_3;
    ppcVar11 = apcStack_90 + 1;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *ppcVar11 = (char *)*puVar9;
      puVar9 = puVar9 + 1;
      ppcVar11 = ppcVar11 + 1;
    }
    apcStack_90[0] = param_1;
    pcStack_94 = (char *)0x446095;
    FUN_00445c60();
    puStack_70 = (uint *)0x8;
    pcStack_74 = s_COMPL__0066b7ec;
    pcStack_78 = (char *)0x4460a9;
    FUN_00401870();
    puStack_70 = (uint *)s_getRightDirection_PlayerId_playe_0066e364;
    pcStack_74 = (char *)0x4460b8;
    FUN_004018b0();
    ExceptionList = pvStack_c;
    return param_1;
  }
  puStack_70 = (uint *)param_2;
  pcStack_74 = (char *)0x4460db;
  iVar6 = FUN_00456670();
  if (iVar6 != 0) {
    puStack_70 = (uint *)&DAT_0066c4e4;
    pcStack_74 = &DAT_0077d5c0;
    pcStack_78 = (char *)0x4460f1;
    FUN_0061c369();
    pcStack_78 = &DAT_0077d5c0;
    pcStack_7c = s_PlayerId_0066c4d8;
    apcStack_90[4] = s_Invalid_id_0066bbf4;
    apcStack_90[3] = (char *)0x46f8;
    apcStack_90[2] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_90[1] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_90[0] = (char *)0x64;
    pcStack_94 = (char *)0x21;
    pcStack_98 = (char *)0x446118;
    FUN_00401010();
  }
  pcStack_74 = (char *)0x446124;
  puStack_70 = (uint *)(param_2 + 8);
  iVar6 = FUN_00477850();
  if (iVar6 == 0) {
    puVar9 = &param_3;
    ppcVar11 = apcStack_90 + 1;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *ppcVar11 = (char *)*puVar9;
      puVar9 = puVar9 + 1;
      ppcVar11 = ppcVar11 + 1;
    }
    apcStack_90[0] = param_1;
    pcStack_94 = (char *)0x44614b;
    FUN_00445c60();
    puStack_70 = (uint *)0x8;
    pcStack_74 = s_COMPL__0066b7ec;
    pcStack_78 = (char *)0x44615f;
    FUN_00401870();
    puStack_70 = (uint *)s_getRightDirection_PlayerId_playe_0066e364;
    pcStack_74 = (char *)0x44616e;
    FUN_004018b0();
    ExceptionList = pvStack_c;
    return param_1;
  }
  puStack_70 = local_3c;
  local_3c[0] = 0;
  puVar9 = &param_3;
  ppcVar11 = apcStack_90;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppcVar11 = (char *)*puVar9;
    puVar9 = puVar9 + 1;
    ppcVar11 = ppcVar11 + 1;
  }
  local_3c[2] = 0;
  local_3c[3] = 0;
  pcStack_2c = s_UNDEFINED_MODULE_0066c638;
  pcStack_28 = s_UNDEFINED_ROOM_0066c628;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0xffffffff;
  uStack_14 = 0xffffffff;
  pcStack_94 = (char *)0x4461e0;
  FUN_00438e50();
  if ((local_3c[0] & 8) == 0) {
    if ((local_3c[0] & 4) != 0) {
      param_9 = (undefined1 *)((uint)param_9 & 0xfffffffe);
    }
  }
  else {
    param_9 = (undefined1 *)((uint)param_9 | 1);
  }
  pcStack_74 = (char *)0x446210;
  puStack_70 = (uint *)(param_2 + 8);
  iVar6 = FUN_00477850();
  pcStack_78 = (char *)&uStack_5c;
  pcStack_74 = *(char **)(DAT_0068be20 + *(int *)(iVar6 + 0xc) * 4);
  pcStack_7c = (char *)0x446226;
  FUN_00404d60();
  puStack_70 = &uStack_58;
  local_3c[0] = 0xffffffff;
  local_3c[1] = uStack_5c;
  local_3c[2] = 0;
  local_3c[3] = 0;
  pcStack_2c = (char *)0x0;
  pcStack_28 = (char *)0x0;
  uStack_24 = 0;
  uStack_20 = 0xffffffff;
  puVar8 = local_3c;
  ppcVar11 = apcStack_90;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppcVar11 = (char *)*puVar8;
    puVar8 = puVar8 + 1;
    ppcVar11 = ppcVar11 + 1;
  }
  puVar9 = &param_3;
  ppcVar11 = apcStack_b0;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppcVar11 = (char *)*puVar9;
    puVar9 = puVar9 + 1;
    ppcVar11 = ppcVar11 + 1;
  }
  uStack_58 = 0;
  uStack_54 = 0;
  FUN_004859b0(&puStack_48,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00484790(&puStack_48);
  if (puStack_48 == puStack_44) {
    puVar9 = &param_3;
    ppcVar11 = apcStack_90 + 1;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *ppcVar11 = (char *)*puVar9;
      puVar9 = puVar9 + 1;
      ppcVar11 = ppcVar11 + 1;
    }
    apcStack_90[0] = param_1;
    pcStack_94 = (char *)0x4462df;
    FUN_00445c60();
    iVar6 = (iStack_40 - (int)puStack_48) / 0xc;
    local_4 = local_4 & 0xffffff00;
    if (iVar6 != 0) {
      puStack_70 = (uint *)(iVar6 * 0xc);
      pcStack_74 = (char *)puStack_48;
      pcStack_78 = (char *)0x44630f;
      FUN_0044b440();
    }
    if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
      pcVar7 = (char *)(DAT_0071d778 + DAT_0071d774);
      *(undefined4 *)pcVar7 = s_COMPL__0066b7ec._0_4_;
      *(undefined4 *)(pcVar7 + 4) = s_COMPL__0066b7ec._4_4_;
      DAT_0071d778 = DAT_0071d778 + 8;
    }
    puStack_70 = (uint *)s_getRightDirection_PlayerId_playe_0066e364;
    pcStack_74 = (char *)0x44635c;
    FUN_004018b0();
    ExceptionList = pvStack_c;
    return param_1;
  }
  if ((*(byte *)(puStack_48 + 2) & 1) == 0) {
    param_9 = (undefined1 *)((uint)param_9 & 0xfffffffe);
  }
  else {
    param_9 = (undefined1 *)((uint)param_9 | 1);
  }
  puVar9 = &param_3;
  pcVar7 = param_1;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pcVar7 = *puVar9;
    puVar9 = puVar9 + 1;
    pcVar7 = pcVar7 + 4;
  }
  iVar6 = (iStack_40 - (int)puStack_48) / 0xc;
  if (iVar6 != 0) {
    uVar5 = iVar6 * 0xc;
    if (uVar5 < 0x81) {
      puStack_70 = (uint *)0x4463e1;
      FUN_00401aa0();
      *puStack_48 = *(undefined4 *)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4);
      *(undefined4 **)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4) = puStack_48;
      DAT_0068c164 = 0;
    }
    else {
      puStack_70 = puStack_48;
      pcStack_74 = (char *)0x4463c5;
      FUN_0061c888();
    }
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar7 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar7 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar7 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar7 = s_getRightDirection_PlayerId_playe_0066e364;
  cVar1 = s_getRightDirection_PlayerId_playe_0066e364[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar7;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

