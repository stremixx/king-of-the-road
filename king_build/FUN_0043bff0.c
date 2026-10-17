
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_0043bff0(undefined4 *param_1,int param_2,char *param_3,undefined4 param_4,char *param_5,
            char *param_6,char *param_7,undefined1 *param_8,undefined1 *param_9,undefined4 param_10,
            undefined1 *param_11,int *param_12)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char **ppcVar9;
  undefined4 *puVar10;
  int iStack_90;
  char *pcStack_8c;
  char *apcStack_88 [6];
  char *pcStack_70;
  char *pcStack_6c;
  char *pcStack_68;
  char *local_64;
  undefined1 local_44 [24];
  undefined4 local_2c [2];
  double dStack_24;
  int iStack_1c;
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063dae8;
  pvStack_c = ExceptionList;
  local_64 = (char *)0x8;
  pcStack_68 = s_START__0066b830;
  pcStack_6c = (char *)0x43c02d;
  ExceptionList = &pvStack_c;
  FUN_00401870();
  local_64 = s_advancePosition_PlayerId_player__0066d8c0;
  pcStack_68 = (char *)0x43c03c;
  FUN_004018b0();
  local_4 = 0;
  local_64 = (char *)param_2;
  pcStack_68 = (undefined1 *)0x43c056;
  iVar5 = FUN_00456670();
  if (iVar5 != 0) {
    local_64 = &DAT_0066c4e4;
    pcStack_68 = &DAT_0077d5c0;
    pcStack_6c = (char *)0x43c06c;
    FUN_0061c369();
    pcStack_6c = &DAT_0077d5c0;
    pcStack_70 = s_PlayerId_0066c4d8;
    apcStack_88[5] = s_Invalid_id_0066bbf4;
    apcStack_88[4] = (char *)0x3e16;
    apcStack_88[3] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_88[2] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_88[1] = (undefined1 *)0x64;
    apcStack_88[0] = (char *)0x21;
    pcStack_8c = (char *)0x43c093;
    FUN_00401010();
  }
  puVar6 = &param_3;
  puVar8 = local_2c;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  local_64 = (undefined1 *)0x43c0ae;
  iVar5 = FUN_0040a460();
  puVar4 = param_8;
  pcVar3 = param_7;
  pcVar7 = param_3;
  if (iVar5 == 0) {
    local_64 = param_9;
    pcStack_68 = param_8;
    pcStack_6c = param_7;
    pcStack_70 = param_6;
    apcStack_88[5] = param_5;
    apcStack_88[4] = param_3;
    apcStack_88[3] = s___d__g__d__d__x__0066bc0c;
    apcStack_88[2] = &DAT_0077d640;
    apcStack_88[1] = (char *)0x43c0e5;
    FUN_0061c369();
    apcStack_88[1] = &DAT_0077d640;
    apcStack_88[0] = s_PositionId_0066bc00;
    pcStack_8c = s_Invalid_id_0066bbf4;
    iStack_90 = 0x3e17;
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558);
  }
  if ((-1 < (int)pcVar7) && (pcVar7 < (char *)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    iVar5 = *(int *)(DAT_0068be98 + (int)pcVar7 * 4);
    iVar2 = *(int *)(iVar5 + 0x78);
    if ((int)puVar4 < *(int *)(iVar5 + 0x7c) - iVar2 >> 2) {
      local_64 = (undefined1 *)0x43c143;
      iVar5 = (**(code **)(**(int **)(iVar2 + (int)puVar4 * 4) + 0x18))();
      if ((int)pcVar3 < iVar5) goto LAB_0043c171;
    }
    local_64 = &DAT_0068c120;
    pcStack_68 = &DAT_0068c120;
    pcStack_6c = s_Invalid_Position_Id_0066bbe0;
    pcStack_70 = (char *)0x3e17;
    apcStack_88[5] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_88[4] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_88[3] = (char *)0x64;
    apcStack_88[2] = (char *)0x21;
    apcStack_88[1] = (char *)0x43c16e;
    FUN_00401010();
  }
LAB_0043c171:
  apcStack_88[1] = local_44;
  puVar6 = &param_3;
  ppcVar9 = apcStack_88 + 2;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppcVar9 = (char *)*puVar6;
    puVar6 = puVar6 + 1;
    ppcVar9 = ppcVar9 + 1;
  }
  apcStack_88[0] = (char *)0x43c18e;
  FUN_00435cd0();
  local_64 = (char *)param_12;
  pcStack_68 = param_11;
  pcStack_8c = (char *)(param_2 + 8);
  puVar6 = &param_3;
  ppcVar9 = apcStack_88;
  for (iStack_90 = 8; iStack_90 != 0; iStack_90 = iStack_90 + -1) {
    *ppcVar9 = (char *)*puVar6;
    puVar6 = puVar6 + 1;
    ppcVar9 = ppcVar9 + 1;
  }
  param_12 = &iStack_90;
  FUN_0041d3f0(&param_2);
  puVar6 = (undefined4 *)FUN_0043b650(local_2c);
  puVar8 = puVar6;
  puVar10 = &param_3;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar8 = local_2c;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  local_64 = (char *)0x43c203;
  iVar5 = FUN_00423b20();
  puVar4 = param_8;
  pcVar3 = param_7;
  pcVar7 = param_3;
  if (iVar5 == 0) {
    local_64 = (char *)0x43c21f;
    iVar5 = FUN_00423b50();
    if (iVar5 != 0) goto LAB_0043c223;
LAB_0043c255:
    local_64 = param_9;
    pcStack_68 = puVar4;
    pcStack_6c = pcVar3;
    pcStack_70 = param_6;
    apcStack_88[5] = param_5;
    apcStack_88[4] = pcVar7;
    apcStack_88[3] = s___d__g__d__d__x__0066bc0c;
    apcStack_88[2] = &DAT_0077d640;
    apcStack_88[1] = (char *)0x43c279;
    FUN_0061c369();
    apcStack_88[1] = &DAT_0077d640;
    apcStack_88[0] = s_PositionId_0066bc00;
    pcStack_8c = s_Invalid_id_0066bbf4;
    iStack_90 = 0x3e1b;
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558);
  }
  else {
LAB_0043c223:
    if ((((dStack_24 < _DAT_0064a678) || (_DAT_0064a670 < dStack_24)) || (iStack_1c < 0)) ||
       (iStack_18 < 0)) goto LAB_0043c255;
  }
  if ((-1 < (int)pcVar7) && (pcVar7 < (char *)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    iVar5 = *(int *)(DAT_0068be98 + (int)pcVar7 * 4);
    iVar2 = *(int *)(iVar5 + 0x78);
    if ((int)puVar4 < *(int *)(iVar5 + 0x7c) - iVar2 >> 2) {
      local_64 = (char *)0x43c2d7;
      iVar5 = (**(code **)(**(int **)(iVar2 + (int)puVar4 * 4) + 0x18))();
      if ((int)pcVar3 < iVar5) goto LAB_0043c305;
    }
    local_64 = &DAT_0068c120;
    pcStack_68 = &DAT_0068c120;
    pcStack_6c = s_Invalid_Position_Id_0066bbe0;
    pcStack_70 = (char *)0x3e1b;
    apcStack_88[5] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_88[4] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_88[3] = (char *)0x64;
    apcStack_88[2] = (char *)0x21;
    apcStack_88[1] = (char *)0x43c302;
    FUN_00401010();
  }
LAB_0043c305:
  puVar6 = &param_3;
  puVar8 = param_1;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar7 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar7 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar7 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar7 = s_advancePosition_PlayerId_player__0066d8c0;
  cVar1 = s_advancePosition_PlayerId_player__0066d8c0[0];
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

