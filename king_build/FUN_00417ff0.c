
void FUN_00417ff0(int param_1,char **param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  char *extraout_ECX;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  char *pcStack_a8;
  undefined1 *puStack_a4;
  undefined1 *puStack_a0;
  char *pcStack_9c;
  char *pcStack_98;
  char *pcStack_94;
  undefined4 uStack_90;
  char *pcStack_8c;
  int *piStack_88;
  char *pcStack_84;
  int local_78;
  char *local_74;
  undefined *local_70;
  uint local_6c [4];
  undefined4 local_5c;
  int *local_58;
  undefined4 local_54;
  uint local_4c [5];
  int local_38;
  uint local_2c [4];
  int iStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c888;
  local_c = ExceptionList;
  pcStack_84 = (char *)0x8;
  piStack_88 = (int *)s_START__0066b830;
  local_74 = s_traceToOrderNumber_PlayerId_play_0066c2bc;
  local_70 = &DAT_0071d768;
  pcStack_8c = (char *)0x41802b;
  ExceptionList = &local_c;
  FUN_00401870();
  pcStack_84 = s_traceToOrderNumber_PlayerId_play_0066c2bc;
  piStack_88 = (int *)0x41803a;
  FUN_004018b0();
  iVar3 = param_1;
  local_4 = 0;
  pcStack_84 = (char *)0x418054;
  FUN_00447d40();
  piStack_88 = &local_78;
  pcStack_84 = (char *)param_2;
  *(undefined1 *)(iVar3 + 0x368) = 1;
  pcStack_8c = (char *)0x41806d;
  FUN_00404b50();
  iVar3 = *(int *)(DAT_0068be20 + local_78 * 4);
  if ((uint)(*(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c) >> 4) <= param_3) {
    pcStack_84 = (char *)0x8;
    piStack_88 = (int *)s_COMPL__0066b7ec;
    pcStack_8c = (char *)0x4180a4;
    FUN_00401870();
    pcStack_84 = s_traceToOrderNumber_PlayerId_play_0066c2bc;
    piStack_88 = (int *)0x4180b3;
    FUN_004018b0();
    ExceptionList = local_c;
    return;
  }
  pcStack_84 = (char *)0x1;
  param_2 = &puStack_a4;
  pcStack_a8 = *(char **)(param_3 * 0x10 + *(int *)(iVar3 + 0x1c));
  FUN_0040a430();
  param_2 = &pcStack_a8;
  pcStack_a8 = extraout_ECX;
  FUN_0041d3f0(&param_1);
  FUN_00478300();
  puVar5 = (uint *)(param_1 + 0x28);
  puVar4 = local_6c;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  pcStack_84 = (char *)0x41811e;
  iVar3 = FUN_0040a460();
  if (iVar3 == 0) {
    puVar5 = (uint *)(param_1 + 0x28);
    puVar4 = local_6c;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    pcStack_84 = (char *)local_54;
    piStack_88 = local_58;
    pcStack_8c = (char *)local_5c;
    uStack_90 = local_6c[3];
    pcStack_94 = (char *)local_6c[2];
    pcStack_98 = (char *)local_6c[0];
    pcStack_9c = s___d__g__d__d__x__0066bc0c;
    puStack_a0 = &DAT_0077d640;
    puStack_a4 = (undefined1 *)0x418164;
    FUN_0061c369();
    puStack_a4 = &DAT_0077d640;
    pcStack_a8 = s_PositionId_0066bc00;
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1197,s_Invalid_id_0066bbf4);
  }
  puVar5 = (uint *)(param_1 + 0x28);
  puVar4 = puVar5;
  puVar6 = local_6c;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  if ((-1 < (int)local_6c[0]) && (local_6c[0] < (uint)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    puVar4 = puVar5;
    puVar6 = local_4c;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar4 = puVar5;
    puVar6 = local_6c;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar3 = *(int *)(DAT_0068be98 + local_6c[0] * 4);
    if (local_38 < *(int *)(iVar3 + 0x7c) - *(int *)(iVar3 + 0x78) >> 2) {
      puVar4 = puVar5;
      puVar6 = local_2c;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar4 = puVar5;
      puVar6 = local_6c;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar4 = local_4c;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
      }
      pcStack_84 = (char *)0x41823d;
      iVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_0068be98 + local_4c[0] * 4) + 0x78) +
                                     (int)local_58 * 4) + 0x18))();
      if (iStack_1c < iVar3) goto LAB_0041826d;
    }
    pcStack_84 = &DAT_0068c120;
    piStack_88 = (int *)&DAT_0068c120;
    pcStack_8c = s_Invalid_Position_Id_0066bbe0;
    uStack_90 = 0x1197;
    pcStack_94 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    pcStack_98 = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    pcStack_9c = (char *)0x64;
    puStack_a0 = (undefined1 *)0x21;
    puStack_a4 = (undefined1 *)0x41826a;
    FUN_00401010();
  }
LAB_0041826d:
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar2 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar2 = s_traceToOrderNumber_PlayerId_play_0066c2bc;
  cVar1 = s_traceToOrderNumber_PlayerId_play_0066c2bc[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar2;
    }
  }
  ExceptionList = local_c;
  return;
}

