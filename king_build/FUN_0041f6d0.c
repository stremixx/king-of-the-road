
void FUN_0041f6d0(char *param_1,char **param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcStack_2c;
  char *local_28;
  undefined1 *local_18;
  char *local_14;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063cc23;
  local_c = ExceptionList;
  local_28 = (char *)0x8;
  pcStack_2c = s_START__0066b830;
  local_14 = s_pickPresent_PlayerId_player__Pre_0066c7c8;
  local_10 = &DAT_0071d768;
  ExceptionList = &local_c;
  FUN_00401870();
  local_28 = s_pickPresent_PlayerId_player__Pre_0066c7c8;
  pcStack_2c = (char *)0x41f71a;
  FUN_004018b0();
  local_4 = 0;
  local_28 = param_1;
  pcStack_2c = (char *)0x41f734;
  iVar2 = FUN_00456670();
  if (iVar2 != 0) {
    local_28 = &DAT_0066c4e4;
    pcStack_2c = &DAT_0077d5c0;
    FUN_0061c369();
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1b17,s_Invalid_id_0066bbf4,
                 s_PlayerId_0066c4d8,&DAT_0077d5c0);
  }
  pcVar3 = (char *)param_2;
  local_28 = (char *)param_2;
  pcStack_2c = (char *)0x41f786;
  iVar2 = FUN_00456c60();
  if (iVar2 != 0) {
    local_28 = &DAT_0066c4e4;
    pcStack_2c = &DAT_0077d540;
    FUN_0061c369();
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1b18,s_Invalid_id_0066bbf4,
                 s_PresentId_0066c64c,&DAT_0077d540);
  }
  param_2 = &local_28;
  local_28 = param_1;
  pcStack_2c = (char *)0x41f7d8;
  FUN_00417560();
  if (((byte)*(undefined4 *)(*(int *)(pcVar3 + 8) + 8) & 0xf0) != 0x10) {
    local_28 = (char *)0x41f7ef;
    FUN_00427510();
  }
  if ((*(byte *)(*(int *)(pcVar3 + 8) + 8) & 0x80) == 0) {
    local_28 = (char *)0x38;
    pcStack_2c = (char *)0x41f8c6;
    iVar2 = FUN_00631d33();
    local_4._0_1_ = 1;
    if (iVar2 == 0) {
      param_2 = (char **)0x0;
    }
    else {
      local_18 = (undefined1 *)&pcStack_2c;
      local_28 = pcVar3;
      FUN_0041d3f0(&param_1);
      param_2 = (char **)FUN_0041f9c0();
    }
    pcStack_2c = (char *)&param_2;
    local_4 = (uint)local_4._1_3_ << 8;
    local_28 = pcStack_2c;
    FUN_004af790(&pcStack_2c);
    FUN_0044afd0(&local_18);
    if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
      pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
      *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
      *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
      DAT_0071d778 = DAT_0071d778 + 8;
    }
    pcVar3 = s_pickPresent_PlayerId_player__Pre_0066c7c8;
    cVar1 = s_pickPresent_PlayerId_player__Pre_0066c7c8[0];
    if (DAT_0071d774 != 0) {
      for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
        cVar1 = *pcVar3;
      }
    }
  }
  else {
    local_28 = &DAT_0068c120;
    pcStack_2c = &DAT_0068c120;
    FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1b28,
                 s_pickPresent_called_for_a_parked_c_0066c770);
    if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
      pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
      *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
      *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
      DAT_0071d778 = DAT_0071d778 + 8;
    }
    pcVar3 = s_pickPresent_PlayerId_player__Pre_0066c7c8;
    if ((DAT_0071d774 != 0) && (s_pickPresent_PlayerId_player__Pre_0066c7c8[0] != '\0')) {
      while (DAT_0071d778 < DAT_0071d770) {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
        DAT_0071d778 = DAT_0071d778 + 1;
        if (*pcVar3 == '\0') {
          ExceptionList = local_c;
          return;
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}

