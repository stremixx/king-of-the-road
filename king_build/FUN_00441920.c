
undefined4
FUN_00441920(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  int iStack_24;
  undefined4 local_18;
  char *local_14;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = (int)param_4;
  puStack_8 = &LAB_0063ddf8;
  local_c = ExceptionList;
  local_14 = s_getOrderInfo_PlayerId_player__Vr_0066df68;
  local_10 = &DAT_0071d768;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar3 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar3 = s_getOrderInfo_PlayerId_player__Vr_0066df68;
  cVar1 = s_getOrderInfo_PlayerId_player__Vr_0066df68[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar3;
    }
  }
  puStack_28 = &local_18;
  iStack_24 = param_2;
  local_4 = 0;
  *(undefined1 *)((int)param_4 + 0xb8) = 0;
  uStack_2c = 0x4419e8;
  FUN_00404b50();
  iStack_24 = iVar2;
  puStack_28 = (undefined4 *)param_3;
  uStack_2c = local_18;
  param_4 = auStack_30;
  FUN_0041d3f0(&param_1);
  uVar4 = FUN_004410f0();
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar3 = s_getOrderInfo_PlayerId_player__Vr_0066df68;
  cVar1 = s_getOrderInfo_PlayerId_player__Vr_0066df68[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar3;
    }
  }
  ExceptionList = local_c;
  return uVar4;
}

