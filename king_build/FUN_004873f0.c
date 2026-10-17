
void FUN_004873f0(int param_1,undefined1 **param_2,undefined4 param_3,char *param_4,
                 undefined4 param_5,char *param_6,undefined1 *param_7,undefined4 param_8)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char **ppcVar9;
  char *apcStack_9c [4];
  char *pcStack_8c;
  undefined4 uStack_88;
  char *pcStack_84;
  char *pcStack_80;
  char *apcStack_7c [5];
  undefined4 uStack_68;
  char *pcStack_64;
  undefined1 *puStack_60;
  char *pcStack_5c;
  undefined4 local_4c;
  undefined4 uStack_48;
  char acStack_44 [24];
  undefined4 local_2c [8];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006405d8;
  pvStack_c = ExceptionList;
  puVar7 = &param_2;
  puVar8 = local_2c;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  pcStack_5c = (char *)0x487423;
  ExceptionList = &pvStack_c;
  iVar6 = FUN_0040a460();
  puVar4 = param_7;
  pcVar3 = param_6;
  pcVar2 = (char *)param_2;
  if (iVar6 == 0) {
    pcStack_5c = (char *)param_8;
    puStack_60 = param_7;
    pcStack_64 = param_6;
    uStack_68 = param_5;
    apcStack_7c[4] = param_4;
    apcStack_7c[3] = (char *)param_2;
    apcStack_7c[2] = s___d__g__d__d__x__0066bc0c;
    apcStack_7c[1] = &DAT_0077d640;
    apcStack_7c[0] = (char *)0x487454;
    FUN_0061c369();
    apcStack_7c[0] = &DAT_0077d640;
    pcStack_80 = s_PositionId_0066bc00;
    pcStack_84 = s_Invalid_id_0066bbf4;
    uStack_88 = 0x36c;
    pcStack_8c = s__Id__ai_trce_cpp_2001_5_23_19_48_0066f0c8;
    apcStack_9c[3] = s_C__Nek_Vrappl_Gi_Htai_ai_trce_cp_0066f1e0;
    apcStack_9c[2] = (char *)0x64;
    apcStack_9c[1] = (char *)0x21;
    apcStack_9c[0] = (char *)0x48747b;
    FUN_00401010();
  }
  if ((-1 < (int)pcVar2) && (pcVar2 < (char *)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    iVar6 = *(int *)(DAT_0068be98 + (int)pcVar2 * 4);
    iVar1 = *(int *)(iVar6 + 0x78);
    if ((int)puVar4 < *(int *)(iVar6 + 0x7c) - iVar1 >> 2) {
      pcStack_5c = (char *)0x4874b2;
      iVar6 = (**(code **)(**(int **)(iVar1 + (int)puVar4 * 4) + 0x18))();
      if ((int)pcVar3 < iVar6) goto LAB_004874e0;
    }
    pcStack_5c = &DAT_0068c120;
    puStack_60 = &DAT_0068c120;
    pcStack_64 = s_Invalid_Position_Id_0066bbe0;
    uStack_68 = 0x36c;
    apcStack_7c[4] = s__Id__ai_trce_cpp_2001_5_23_19_48_0066f0c8;
    apcStack_7c[3] = s_C__Nek_Vrappl_Gi_Htai_ai_trce_cp_0066f1e0;
    apcStack_7c[2] = (char *)0x64;
    apcStack_7c[1] = (undefined1 *)0x21;
    apcStack_7c[0] = (char *)0x4874dd;
    FUN_00401010();
  }
LAB_004874e0:
  pcStack_5c = (char *)&local_4c;
  puVar7 = &param_2;
  ppcVar9 = apcStack_7c;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppcVar9 = (char *)*puVar7;
    puVar7 = puVar7 + 1;
    ppcVar9 = ppcVar9 + 1;
  }
  local_4c = 0;
  uStack_48 = 0;
  puVar7 = (undefined4 *)(param_1 + 0x28);
  ppcVar9 = apcStack_9c;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppcVar9 = (char *)*puVar7;
    puVar7 = puVar7 + 1;
    ppcVar9 = ppcVar9 + 1;
  }
  pcStack_5c = (char *)FUN_004859b0(&param_2,0);
  uStack_4 = 0;
  puStack_60 = (undefined1 *)0x487542;
  FUN_004719e0();
  pcVar2 = (char *)param_2;
  iVar6 = ((int)param_4 - (int)param_2) / 0xc;
  uStack_4 = 0xffffffff;
  if (iVar6 != 0) {
    uVar5 = iVar6 * 0xc;
    if (uVar5 < 0x81) {
      pcStack_5c = (char *)0x487595;
      FUN_00401aa0();
      *(undefined4 *)pcVar2 = *(undefined4 *)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4);
      *(char **)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4) = pcVar2;
      DAT_0068c164 = 0;
    }
    else {
      pcStack_5c = (char *)param_2;
      puStack_60 = (undefined1 *)0x487579;
      FUN_0061c888();
    }
  }
  apcStack_7c[0] = acStack_44;
  puVar7 = (undefined4 *)(param_1 + 0x28);
  ppcVar9 = apcStack_7c + 1;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppcVar9 = (char *)*puVar7;
    puVar7 = puVar7 + 1;
    ppcVar9 = ppcVar9 + 1;
  }
  pcStack_80 = (char *)0x4875c2;
  pcStack_5c = (char *)FUN_00435cd0();
  pcStack_64 = (char *)&param_1;
  param_2 = &puStack_60;
  uStack_68 = 0x4875d7;
  FUN_0041d3f0();
  pcStack_64 = (char *)0x4875dc;
  FUN_0043dd40();
  ExceptionList = pvStack_c;
  return;
}

