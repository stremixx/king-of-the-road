
undefined4 FUN_00440f40(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063dda8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar2 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar2 = s_getTownInfo_PlayerId_player__VrI_0066dec8;
  cVar1 = s_getTownInfo_PlayerId_player__VrI_0066dec8[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar2;
    }
  }
  puStack_24 = &param_2;
  uStack_20 = param_2;
  local_4 = 0;
  uStack_28 = 0x440ffd;
  piVar3 = (int *)FUN_00404b50();
  puStack_24 = *(undefined4 **)(DAT_0068be20 + *piVar3 * 4);
  uStack_20 = param_3;
  uStack_28 = param_3;
  param_3 = &uStack_28;
  FUN_0041d3f0(&param_1);
  uVar4 = FUN_00440a50();
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar2 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar2 = s_getTownInfo_PlayerId_player__VrI_0066dec8;
  cVar1 = s_getTownInfo_PlayerId_player__VrI_0066dec8[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar2;
    }
  }
  ExceptionList = local_c;
  return uVar4;
}

