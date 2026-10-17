
undefined4 FUN_00441d40(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063de38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00401870(s_START__0066b830,8);
  FUN_004018b0(s_getParkingInfo_PlayerId_player__P_0066e024);
  local_4 = 0;
  if ((*(int *)(param_1 + 0x78) != -1) &&
     (iVar2 = *(int *)(DAT_0068bbf8 + *(int *)(param_1 + 0x78) * 4),
     (*(byte *)(*(int *)(iVar2 + 0x1c) + 4 + *(int *)(param_1 + 0x7c) * 0x24) & 3) != 0)) {
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(iVar2 + 0x18);
    *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x7c);
    uVar3 = FUN_00441ab0(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),param_2);
    if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
      pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
      *(undefined4 *)pcVar4 = s_COMPL__0066b7ec._0_4_;
      *(undefined4 *)(pcVar4 + 4) = s_COMPL__0066b7ec._4_4_;
      DAT_0071d778 = DAT_0071d778 + 8;
    }
    pcVar4 = s_getParkingInfo_PlayerId_player__P_0066e024;
    cVar1 = s_getParkingInfo_PlayerId_player__P_0066e024[0];
    if (DAT_0071d774 != 0) {
      for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
        cVar1 = *pcVar4;
      }
    }
    ExceptionList = local_c;
    return uVar3;
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar4 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar4 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar4 = s_getParkingInfo_PlayerId_player__P_0066e024;
  cVar1 = s_getParkingInfo_PlayerId_player__P_0066e024[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar4;
    }
  }
  ExceptionList = local_c;
  return 0xffffffff;
}

