
undefined4 FUN_00445710(int **param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int **ppiVar6;
  float10 fVar7;
  int **local_50;
  int **ppiStack_4c;
  int **local_48;
  int *local_34;
  int *local_30;
  int *piStack_2c;
  undefined8 local_28;
  char *local_1c;
  undefined *local_18;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063e043;
  local_14 = ExceptionList;
  local_48 = (int **)0x8;
  ppiStack_4c = (int **)s_START__0066b830;
  local_1c = s_mafiaAttack_PlayerId_player__0066e300;
  local_18 = &DAT_0071d768;
  local_50 = (int **)0x445752;
  ExceptionList = &local_14;
  FUN_00401870();
  local_48 = (int **)s_mafiaAttack_PlayerId_player__0066e300;
  ppiStack_4c = (int **)0x445761;
  FUN_004018b0();
  local_34 = (int *)&local_48;
  local_c = 0;
  local_48 = param_1;
  ppiStack_4c = (int **)0x445778;
  iVar3 = FUN_00456670();
  if (iVar3 != 0) {
    local_48 = (int **)&DAT_0066c4e4;
    ppiStack_4c = (int **)&DAT_0077d5c0;
    local_50 = (int **)0x44578e;
    FUN_0061c369();
    local_50 = (int **)&DAT_0077d5c0;
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x4686,s_Invalid_id_0066bbf4,
                 s_PlayerId_0066c4d8);
  }
  local_48 = (int **)0x4457bd;
  FUN_0042bbf0();
  local_28 = 0.0;
  piStack_2c = param_1[0x39];
  local_30 = param_1[0x38];
  piVar4 = param_1[0x82];
  if ((piVar4 == (int *)0x0) || (piVar4[1] == -1)) {
    piVar4 = param_1[0x81];
    if ((piVar4 == (int *)0x0) || (piVar4[1] == -1)) {
      local_48 = (int **)&DAT_0068c120;
      ppiStack_4c = (int **)&DAT_0068c120;
      local_50 = (int **)s_Internal_error_9012_0066c41c;
      FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4);
      piVar4 = local_34;
    }
    else {
      piVar4 = piVar4 + 7;
    }
  }
  else {
    piVar4 = piVar4 + 7;
  }
  ppiVar6 = (int **)*piVar4;
  piVar4 = local_34;
  while( true ) {
    piVar2 = param_1[0x82];
    if ((piVar2 == (int *)0x0) || (piVar2[1] == -1)) {
      piVar2 = param_1[0x81];
      if ((piVar2 == (int *)0x0) || (piVar2[1] == -1)) {
        local_48 = (int **)&DAT_0068c120;
        ppiStack_4c = (int **)&DAT_0068c120;
        local_50 = (int **)s_Internal_error_9012_0066c41c;
        FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4);
      }
      else {
        piVar4 = piVar2 + 7;
      }
    }
    else {
      piVar4 = piVar2 + 7;
    }
    if (ppiVar6 == (int **)piVar4[1]) break;
    ppiStack_4c = (int **)0x4458a5;
    local_48 = ppiVar6;
    fVar7 = (float10)FUN_00471470();
    ppiVar6 = ppiVar6 + 0x24;
    local_28 = (double)(fVar7 + (float10)local_28);
  }
  if (local_28 <= (double)CONCAT44(piStack_2c,local_30)) {
    local_48 = (int **)param_1[0x39];
    ppiStack_4c = (int **)param_1[0x38];
    local_50 = (int **)0x44595b;
    FUN_00483f50();
    local_50 = (int **)0x0;
    FUN_00483f70(0x14);
    *(double *)(param_1 + 0x22) = *(double *)(param_1 + 0x22) - *(double *)(param_1 + 0x38);
  }
  else {
    local_34 = (int *)&local_48;
    ppiStack_4c = (int **)0x4458d8;
    local_48 = param_1;
    FUN_00445580();
    ppiStack_4c = (int **)0x0;
    local_50 = (int **)0x15;
    FUN_00483f70();
    local_30 = (int *)FUN_00631d33(0x40);
    local_c._0_1_ = 1;
    if (local_30 == (int *)0x0) {
      local_34 = (int *)0x0;
    }
    else {
      local_48 = local_28._4_4_;
      ppiStack_4c = (int **)(int ***)local_28;
      local_50 = local_28._4_4_;
      local_28 = (double)CONCAT44(local_28._4_4_,&local_50);
      FUN_0041d3f0(&param_1);
      local_34 = (int *)FUN_00445a60();
    }
    ppiStack_4c = &local_34;
    local_c = (uint)local_c._1_3_ << 8;
    local_50 = (int **)&ppiStack_4c;
    local_48 = ppiStack_4c;
    FUN_004896a0();
    local_50 = (int **)&local_28;
    FUN_0044afd0();
  }
  param_1[0x38] = (int *)0x0;
  param_1[0x39] = (int *)0x0;
  param_1[0x3a] = (int *)0x0;
  local_48 = param_1;
  ppiStack_4c = (int **)0x4459a4;
  local_28._0_4_ = &local_48;
  FUN_004772b0();
  local_48 = param_1;
  ppiStack_4c = (int **)0x4459b4;
  local_28._0_4_ = &local_48;
  FUN_00427000();
  local_28 = (double)CONCAT44(local_28._4_4_,&local_48);
  local_48 = param_1;
  ppiStack_4c = (int **)0x4459c4;
  FUN_00427170();
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar5 = s_mafiaAttack_PlayerId_player__0066e300;
  cVar1 = s_mafiaAttack_PlayerId_player__0066e300[0];
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

