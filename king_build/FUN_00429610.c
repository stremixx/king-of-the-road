
void FUN_00429610(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063cf88;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00401870(s_START__0066b830);
  FUN_004018b0();
  local_c = 0;
  if (*(int *)(param_1 + 0xb0) == DAT_0068a8f0) {
    FUN_00473720();
    iVar3 = *(int *)(param_1 + 0xa0);
    if (iVar3 != *(int *)(param_1 + 0xa4)) {
      do {
        FUN_00473720();
        iVar3 = iVar3 + 0x10;
      } while (iVar3 != *(int *)(param_1 + 0xa4));
    }
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar2 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar2 = s_getPlayerCapital_PlayerId_player_0066cb94;
  cVar1 = s_getPlayerCapital_PlayerId_player_0066cb94[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar2;
    }
  }
  ExceptionList = local_14;
  return;
}

