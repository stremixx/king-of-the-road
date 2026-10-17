
undefined4 FUN_00444f50(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *local_34;
  int *local_20;
  undefined1 *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063dfd8;
  local_c = ExceptionList;
  local_34 = (char *)0x8;
  ExceptionList = &local_c;
  FUN_00401870(s_START__0066b830);
  local_34 = s_cancelIllegalOrders_PlayerId_pla_0066e294;
  FUN_004018b0();
  local_4 = 0;
  local_34 = param_1;
  iVar4 = FUN_00456670();
  pcVar6 = param_1;
  local_1c = (undefined1 *)&local_34;
  if (iVar4 != 0) {
    local_34 = &DAT_0066c4e4;
    FUN_0061c369(&DAT_0077d5c0);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x461c,s_Invalid_id_0066bbf4,
                 s_PlayerId_0066c4d8,&DAT_0077d5c0);
    local_1c = (undefined1 *)&local_34;
  }
  while( true ) {
    iVar4 = *(int *)(pcVar2 + 0x208);
    if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == -1)) {
      iVar4 = *(int *)(pcVar2 + 0x204);
      if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == -1)) {
        local_34 = &DAT_0068c120;
        FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                     s_Internal_error_9012_0066c41c,&DAT_0068c120);
      }
      else {
        param_1 = (char *)(iVar4 + 0x1c);
      }
    }
    else {
      param_1 = (char *)(iVar4 + 0x1c);
    }
    pcVar1 = *(char **)(param_1 + 4);
    iVar4 = *(int *)(pcVar2 + 0x208);
    if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == -1)) {
      iVar4 = *(int *)(pcVar2 + 0x204);
      if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == -1)) {
        local_34 = &DAT_0068c120;
        FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                     s_Internal_error_9012_0066c41c,&DAT_0068c120);
      }
      else {
        local_20 = (int *)(iVar4 + 0x1c);
      }
    }
    else {
      local_20 = (int *)(iVar4 + 0x1c);
    }
    for (pcVar7 = (char *)*local_20; (pcVar7 != pcVar1 && (*(int *)(pcVar7 + 4) == -1));
        pcVar7 = pcVar7 + 0x90) {
    }
    iVar4 = *(int *)(pcVar2 + 0x208);
    if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == -1)) {
      iVar4 = *(int *)(pcVar2 + 0x204);
      if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == -1)) {
        local_34 = &DAT_0068c120;
        FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                     s_Internal_error_9012_0066c41c,&DAT_0068c120);
      }
      else {
        local_1c = (undefined1 *)(iVar4 + 0x1c);
      }
    }
    else {
      local_1c = (undefined1 *)(iVar4 + 0x1c);
    }
    if (pcVar7 == *(char **)(local_1c + 4)) break;
    iVar4 = *(int *)(pcVar2 + 0x208);
    if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == -1)) {
      iVar4 = *(int *)(pcVar2 + 0x204);
      if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == -1)) {
        local_34 = &DAT_0068c120;
        FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                     s_Internal_error_9012_0066c41c,&DAT_0068c120);
      }
      else {
        pcVar6 = (char *)(iVar4 + 0x1c);
      }
    }
    else {
      pcVar6 = (char *)(iVar4 + 0x1c);
    }
    if (pcVar7 + 0x90 != *(char **)(pcVar6 + 4)) {
      local_34 = pcVar7;
      FUN_00457bf0(pcVar7 + 0x90,*(char **)(pcVar6 + 4));
    }
    local_34 = (char *)0x0;
    *(int *)(pcVar6 + 4) = *(int *)(pcVar6 + 4) + -0x90;
    FUN_00461b20();
    local_34 = pcVar2;
    cVar3 = FUN_00417560();
    if (cVar3 != '\0') {
      local_34 = s_LOAD_SEIZED_0066e288;
      uVar5 = FUN_0040e1d0();
      FUN_0056a570(uVar5);
    }
  }
  pcVar2[200] = '\0';
  local_34 = pcVar2;
  FUN_00425880();
  local_34 = pcVar2;
  FUN_0041f080();
  local_34 = pcVar2;
  FUN_004772b0();
  local_34 = (char *)0x445230;
  FUN_0056eda0();
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  local_34 = s_cancelIllegalOrders_PlayerId_pla_0066e294;
  FUN_004018b0();
  ExceptionList = local_c;
  return 0;
}

