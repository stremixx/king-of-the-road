
undefined4 FUN_004015a0(int param_1,char *param_2,char **param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcStack_2c;
  char *pcStack_28;
  char *pcStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ad08;
  local_c = ExceptionList;
  pcStack_24 = (char *)0x8;
  pcStack_28 = s_START__0066b830;
  pcStack_2c = (char *)0x4015e0;
  ExceptionList = &local_c;
  FUN_00401870();
  pcStack_24 = s_vrPlayerMessage_PlayerId_player__0066b7f8;
  pcStack_28 = (char *)0x4015ef;
  FUN_004018b0();
  local_4 = 0;
  if ((DAT_0068c075 != '\0') ||
     ((param_2 != (char *)0x7 && ((*(uint *)(param_1 + 0x60) & 0x40000) != 0)))) {
    pcStack_24 = (char *)0x8;
    pcStack_28 = s_COMPL__0066b7ec;
    local_4 = 0xffffffff;
    pcStack_2c = (char *)0x40162e;
    FUN_00401870();
    goto LAB_00401842;
  }
  if (param_2 == (char *)0x1) {
    pcStack_2c = (char *)(uint)*(byte *)(param_1 + 800);
    if (*(byte *)(param_1 + 800) == 0) {
      *(undefined1 *)(param_1 + 800) = 1;
      pcStack_24 = (char *)param_3;
      pcStack_28 = (char *)0x1;
      param_3 = &pcStack_2c;
      FUN_0041d3f0(&param_1);
      uVar2 = (*DAT_0068c078)();
      local_4 = 0xffffffff;
      if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
        pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
        *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
        *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
        DAT_0071d778 = DAT_0071d778 + 8;
      }
      pcStack_24 = s_vrPlayerMessage_PlayerId_player__0066b7f8;
      pcStack_28 = (char *)0x4016f0;
      FUN_004018b0();
      ExceptionList = local_c;
      return uVar2;
    }
    pcStack_24 = &DAT_0068c120;
    pcStack_28 = &DAT_0068c120;
    pcStack_2c = s_Internal_error_04721_0066b7d4;
    FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xba);
LAB_0040171b:
    local_4 = 0xffffffff;
    if ((DAT_0071d774 == 0) || (DAT_0071d770 <= DAT_0071d778 + 8)) goto LAB_00401842;
  }
  else {
    if (*(char *)(param_1 + 800) != '\0') {
      if (DAT_0068c074 == '\0') {
        pcStack_24 = (char *)param_3;
        pcStack_28 = param_2;
        param_3 = &pcStack_2c;
        pcStack_2c = param_2;
        FUN_0041d3f0(&param_1);
        uVar2 = (*DAT_0068c078)();
        if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
          pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
          *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
          *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
          DAT_0071d778 = DAT_0071d778 + 8;
        }
        pcVar3 = s_vrPlayerMessage_PlayerId_player__0066b7f8;
        cVar1 = s_vrPlayerMessage_PlayerId_player__0066b7f8[0];
        if (DAT_0071d774 != 0) {
          for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1)
          {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
            cVar1 = *pcVar3;
          }
        }
        ExceptionList = local_c;
        return uVar2;
      }
      goto LAB_0040171b;
    }
    local_4 = 0xffffffff;
    if ((DAT_0071d774 == 0) || (DAT_0071d770 <= DAT_0071d778 + 8)) goto LAB_00401842;
  }
  local_4 = 0xffffffff;
  pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
  *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
  *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
  DAT_0071d778 = DAT_0071d778 + 8;
LAB_00401842:
  pcStack_24 = s_vrPlayerMessage_PlayerId_player__0066b7f8;
  pcStack_28 = (char *)0x401851;
  FUN_004018b0();
  ExceptionList = local_c;
  return 0;
}

