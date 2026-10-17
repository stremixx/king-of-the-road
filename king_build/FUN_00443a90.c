
undefined4 FUN_00443a90(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int local_18;
  char *local_14;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063df68;
  local_c = ExceptionList;
  local_14 = s_playerCanUnload_PlayerId_player__0066e1c8;
  local_10 = &DAT_0071d768;
  ExceptionList = &local_c;
  FUN_00401870(s_START__0066b830,8);
  FUN_004018b0(s_playerCanUnload_PlayerId_player__0066e1c8);
  local_4 = 0;
  FUN_00404b50(&local_18,param_2);
  iVar2 = *(int *)(param_1 + 0x208);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
    iVar2 = *(int *)(param_1 + 0x204);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
      FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,s_Internal_error_9012_0066c41c,
                   &DAT_0068c120,&DAT_0068c120);
      piVar3 = param_2;
    }
    else {
      piVar3 = (int *)(iVar2 + 0x1c);
    }
  }
  else {
    piVar3 = (int *)(iVar2 + 0x1c);
  }
  iVar2 = piVar3[1];
  iVar5 = *(int *)(param_1 + 0x208);
  if ((iVar5 == 0) || (*(int *)(iVar5 + 4) == -1)) {
    iVar5 = *(int *)(param_1 + 0x204);
    if ((iVar5 == 0) || (*(int *)(iVar5 + 4) == -1)) {
      FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,s_Internal_error_9012_0066c41c,
                   &DAT_0068c120,&DAT_0068c120);
      piVar3 = param_2;
    }
    else {
      piVar3 = (int *)(iVar5 + 0x1c);
    }
  }
  else {
    piVar3 = (int *)(iVar5 + 0x1c);
  }
  for (iVar5 = *piVar3; (iVar5 != iVar2 && (*(int *)(iVar5 + 0xc) != local_18));
      iVar5 = iVar5 + 0x90) {
  }
  iVar2 = *(int *)(param_1 + 0x208);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
    iVar2 = *(int *)(param_1 + 0x204);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
      FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,s_Internal_error_9012_0066c41c,
                   &DAT_0068c120,&DAT_0068c120);
    }
    else {
      param_2 = (int *)(iVar2 + 0x1c);
    }
  }
  else {
    param_2 = (int *)(iVar2 + 0x1c);
  }
  if (iVar5 != param_2[1]) {
    if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
      pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
      *(undefined4 *)pcVar4 = s_COMPL__0066b7ec._0_4_;
      *(undefined4 *)(pcVar4 + 4) = s_COMPL__0066b7ec._4_4_;
      DAT_0071d778 = DAT_0071d778 + 8;
    }
    FUN_004018b0(s_playerCanUnload_PlayerId_player__0066e1c8);
    ExceptionList = local_c;
    return 1;
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar4 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar4 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar4 = s_playerCanUnload_PlayerId_player__0066e1c8;
  cVar1 = s_playerCanUnload_PlayerId_player__0066e1c8[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar4;
    }
  }
  ExceptionList = local_c;
  return 0;
}

