
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_00445c60(undefined4 *param_1,char *param_2,undefined4 param_3,char *param_4,undefined4 param_5,
            char *param_6,undefined1 *param_7,uint param_8)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  char **ppcVar8;
  undefined4 *puVar9;
  char *apcStack_94 [4];
  char *pcStack_84;
  undefined4 uStack_80;
  char *pcStack_7c;
  undefined1 *puStack_78;
  uint *puStack_74;
  undefined4 local_5c [2];
  double local_54;
  int local_4c;
  int local_48;
  uint local_3c [2];
  undefined4 local_34;
  undefined4 local_30;
  char *pcStack_2c;
  char *pcStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e078;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &pvStack_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &pvStack_c;
    *(undefined4 *)pcVar5 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  puStack_74 = (uint *)s_getRightDirection_PositionId_pos_0066e340;
  puStack_78 = (undefined1 *)0x445cd5;
  FUN_004018b0();
  local_4 = 0;
  puVar7 = &param_2;
  puVar9 = local_5c;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  puStack_74 = (uint *)0x445cf5;
  iVar6 = FUN_00423b20();
  puVar4 = param_7;
  pcVar3 = param_6;
  pcVar5 = param_2;
  if (iVar6 == 0) {
    puStack_74 = (uint *)0x445d14;
    iVar6 = FUN_00423b50();
    if (iVar6 != 0) goto LAB_00445d18;
LAB_00445d4a:
    puStack_74 = (uint *)param_8;
    puStack_78 = puVar4;
    pcStack_7c = pcVar3;
    uStack_80 = param_5;
    pcStack_84 = param_4;
    apcStack_94[3] = pcVar5;
    apcStack_94[2] = s___d__g__d__d__x__0066bc0c;
    apcStack_94[1] = &DAT_0077d640;
    apcStack_94[0] = (char *)0x445d74;
    FUN_0061c369();
    apcStack_94[0] = &DAT_0077d640;
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x46e1,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00);
  }
  else {
LAB_00445d18:
    if ((((local_54 < _DAT_0064a678) || (_DAT_0064a670 < local_54)) || (local_4c < 0)) ||
       (local_48 < 0)) goto LAB_00445d4a;
  }
  if ((-1 < (int)pcVar5) && (pcVar5 < (char *)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    iVar6 = *(int *)(DAT_0068be98 + (int)pcVar5 * 4);
    iVar2 = *(int *)(iVar6 + 0x78);
    if ((int)puVar4 < *(int *)(iVar6 + 0x7c) - iVar2 >> 2) {
      puStack_74 = (uint *)0x445dd0;
      iVar6 = (**(code **)(**(int **)(iVar2 + (int)puVar4 * 4) + 0x18))();
      if ((int)pcVar3 < iVar6) goto LAB_00445dfe;
    }
    puStack_74 = (uint *)&DAT_0068c120;
    puStack_78 = &DAT_0068c120;
    pcStack_7c = s_Invalid_Position_Id_0066bbe0;
    uStack_80 = 0x46e1;
    pcStack_84 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_94[3] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_94[2] = (char *)0x64;
    apcStack_94[1] = (undefined1 *)0x21;
    apcStack_94[0] = (char *)0x445dfb;
    FUN_00401010();
  }
LAB_00445dfe:
  local_18 = 0xffffffff;
  local_14 = 0xffffffff;
  puStack_74 = local_3c;
  local_3c[0] = 0;
  local_34 = 0;
  local_30 = 0;
  puVar7 = &param_2;
  ppcVar8 = apcStack_94;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppcVar8 = (char *)*puVar7;
    puVar7 = puVar7 + 1;
    ppcVar8 = ppcVar8 + 1;
  }
  pcStack_2c = s_UNDEFINED_MODULE_0066c638;
  pcStack_28 = s_UNDEFINED_ROOM_0066c628;
  uStack_24 = 0;
  uStack_20 = 0;
  FUN_00438e50();
  if ((local_3c[0] & 8) == 0) {
    if ((local_3c[0] & 4) == 0) goto LAB_00445e85;
    param_8 = param_8 & 0xfffffffe;
  }
  else {
    param_8 = param_8 | 1;
  }
LAB_00445e85:
  puVar7 = &param_2;
  puVar9 = param_1;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar5 = s_getRightDirection_PositionId_pos_0066e340;
  cVar1 = s_getRightDirection_PositionId_pos_0066e340[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar5;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

