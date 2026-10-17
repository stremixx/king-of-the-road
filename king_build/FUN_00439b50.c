
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00439b50(undefined4 param_1,char *param_2,undefined4 param_3,char *param_4,undefined4 param_5,
            char *param_6,undefined1 *param_7,undefined1 *param_8)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char **ppcVar9;
  char *apcStack_7c [5];
  undefined4 uStack_68;
  char *pcStack_64;
  undefined1 *puStack_60;
  char *pcStack_5c;
  char local_44 [24];
  undefined4 local_2c [2];
  double local_24;
  int local_1c;
  int local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063da08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &pvStack_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &pvStack_c;
    *(undefined4 *)pcVar5 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcStack_5c = s__getOrientation_PositionId_pos__0066d6e0;
  puStack_60 = (undefined1 *)0x439bc5;
  FUN_004018b0();
  local_4 = 0;
  puVar7 = &param_2;
  puVar8 = local_2c;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  pcStack_5c = (undefined1 *)0x439be5;
  iVar6 = FUN_00423b20();
  puVar4 = param_7;
  pcVar3 = param_6;
  pcVar5 = param_2;
  if (iVar6 == 0) {
    pcStack_5c = (undefined1 *)0x439bfe;
    iVar6 = FUN_00423b50();
    if (iVar6 != 0) goto LAB_00439c02;
LAB_00439c34:
    pcStack_5c = param_8;
    puStack_60 = puVar4;
    pcStack_64 = pcVar3;
    uStack_68 = param_5;
    apcStack_7c[4] = param_4;
    apcStack_7c[3] = pcVar5;
    apcStack_7c[2] = s___d__g__d__d__x__0066bc0c;
    apcStack_7c[1] = &DAT_0077d640;
    apcStack_7c[0] = (char *)0x439c55;
    FUN_0061c369();
    apcStack_7c[0] = &DAT_0077d640;
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x3c30,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00);
  }
  else {
LAB_00439c02:
    if ((((local_24 < _DAT_0064a678) || (_DAT_0064a670 < local_24)) || (local_1c < 0)) ||
       (local_18 < 0)) goto LAB_00439c34;
  }
  if ((-1 < (int)pcVar5) && (pcVar5 < (char *)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    iVar6 = *(int *)(DAT_0068be98 + (int)pcVar5 * 4);
    iVar2 = *(int *)(iVar6 + 0x78);
    if ((int)puVar4 < *(int *)(iVar6 + 0x7c) - iVar2 >> 2) {
      pcStack_5c = (undefined1 *)0x439cb3;
      iVar6 = (**(code **)(**(int **)(iVar2 + (int)puVar4 * 4) + 0x18))();
      if ((int)pcVar3 < iVar6) goto LAB_00439ce1;
    }
    pcStack_5c = &DAT_0068c120;
    puStack_60 = &DAT_0068c120;
    pcStack_64 = s_Invalid_Position_Id_0066bbe0;
    uStack_68 = 0x3c30;
    apcStack_7c[4] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_7c[3] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_7c[2] = (char *)0x64;
    apcStack_7c[1] = (undefined1 *)0x21;
    apcStack_7c[0] = (char *)0x439cde;
    FUN_00401010();
  }
LAB_00439ce1:
  apcStack_7c[0] = local_44;
  puVar7 = &param_2;
  ppcVar9 = apcStack_7c + 1;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppcVar9 = (char *)*puVar7;
    puVar7 = puVar7 + 1;
    ppcVar9 = ppcVar9 + 1;
  }
  pcStack_5c = (char *)FUN_00439180();
  puVar7 = &param_2;
  ppcVar9 = apcStack_7c;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppcVar9 = (char *)*puVar7;
    puVar7 = puVar7 + 1;
    ppcVar9 = ppcVar9 + 1;
  }
  puStack_60 = (undefined1 *)FUN_00435cd0(local_2c);
  pcStack_64 = (char *)param_1;
  uStack_68 = 0x439d2d;
  FUN_004398c0();
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar5 = s__getOrientation_PositionId_pos__0066d6e0;
  cVar1 = s__getOrientation_PositionId_pos__0066d6e0[0];
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

