
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00445290(char *param_1)

{
  char cVar1;
  int iVar2;
  char **ppcVar3;
  undefined4 uVar4;
  char *pcVar5;
  float10 fVar6;
  char *local_c0;
  char *local_ac;
  undefined8 local_a8;
  undefined1 local_94 [128];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063dffb;
  local_14 = ExceptionList;
  local_c0 = (char *)0x8;
  ExceptionList = &local_14;
  FUN_00401870(s_START__0066b830);
  local_c0 = s_dropOrders_PlayerId_player__0066e2c4;
  FUN_004018b0();
  ppcVar3 = &local_c0;
  local_c = 0;
  local_c0 = param_1;
  iVar2 = FUN_00456670();
  if (iVar2 != 0) {
    local_c0 = &DAT_0066c4e4;
    FUN_0061c369(&DAT_0077d5c0);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x4639,s_Invalid_id_0066bbf4,
                 s_PlayerId_0066c4d8,&DAT_0077d5c0);
  }
  iVar2 = *(int *)(param_1 + 0x208);
  local_a8 = 0.0;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
    iVar2 = *(int *)(param_1 + 0x204);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
      local_c0 = &DAT_0068c120;
      FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,s_Internal_error_9012_0066c41c,
                   &DAT_0068c120);
    }
    else {
      ppcVar3 = (char **)(iVar2 + 0x1c);
    }
  }
  else {
    ppcVar3 = (char **)(iVar2 + 0x1c);
  }
  pcVar5 = *ppcVar3;
  local_ac = pcVar5;
  while( true ) {
    iVar2 = *(int *)(param_1 + 0x208);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
      iVar2 = *(int *)(param_1 + 0x204);
      if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
        local_c0 = &DAT_0068c120;
        FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                     s_Internal_error_9012_0066c41c,&DAT_0068c120);
      }
      else {
        pcVar5 = (char *)(iVar2 + 0x1c);
      }
    }
    else {
      pcVar5 = (char *)(iVar2 + 0x1c);
    }
    if (local_ac == *(char **)(pcVar5 + 4)) break;
    local_c0 = local_ac;
    fVar6 = (float10)FUN_00471470();
    local_ac = local_ac + 0x90;
    local_a8 = (double)(fVar6 + (float10)local_a8);
  }
  local_c0 = param_1;
  cVar1 = FUN_00417560();
  if ((cVar1 != '\0') && (local_a8 != _DAT_0064a668)) {
    local_c0 = local_a8._4_4_;
    uVar4 = FUN_0040e1d0(s_FORFEIT_0066e2bc,(undefined4)local_a8);
    FUN_0061c369(local_94,uVar4);
    FUN_0056a570(local_94);
    FUN_00483f50((undefined4)local_a8,local_a8._4_4_);
    FUN_00483f70(6,0);
  }
  *(double *)(param_1 + 0x88) = *(double *)(param_1 + 0x88) - local_a8;
  local_c0 = param_1 + 8;
  FUN_00477940();
  param_1[200] = '\0';
  param_1[0xc9] = '\0';
  local_c0 = param_1;
  FUN_00442c30();
  local_c0 = param_1;
  FUN_00427000();
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar5 = s_dropOrders_PlayerId_player__0066e2c4;
  cVar1 = s_dropOrders_PlayerId_player__0066e2c4[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar5;
    }
  }
  ExceptionList = local_14;
  return 0;
}

