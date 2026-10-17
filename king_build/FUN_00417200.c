
undefined4 FUN_00417200(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c828;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00401870(s_START__0066b830);
  FUN_004018b0();
  local_4 = 0;
  if ((*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c)) &&
     (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x4c))) {
    FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x10a4,s_Internal_error_325696_0066c1e8
                 ,&DAT_0068c120);
  }
  if (2 < (uint)((*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48)) / 0x28)) {
    FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x10af,s_Internal_error_2562_0066c1d4,
                 &DAT_0068c120);
  }
  if ((*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x1c)) &&
     (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x4c))) {
    piVar4 = (int *)(param_1 + 0x28);
    piVar5 = local_2c;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    if (local_2c[1] == *(int *)(*(int *)(param_1 + 0x1c) + -0xc)) {
      piVar4 = (int *)(param_1 + 0x28);
      piVar5 = local_2c;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
      cVar1 = FUN_00478040();
      if (cVar1 == '\0') {
        if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x4c)) {
          FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                       s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x10b7,
                       s_Internal_error_23464_0066c1bc,&DAT_0068c120);
        }
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x28;
      }
      FUN_004781a0();
      if (DAT_0068c0e8 == 0) {
        FUN_00409f20();
      }
    }
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar2 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar2 = s_actOnSemiArrival_PlayerId_player_0066c200;
  cVar1 = s_actOnSemiArrival_PlayerId_player_0066c200[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar2;
    }
  }
  ExceptionList = local_c;
  return 0;
}

