
void FUN_00427170(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *local_18;
  char *local_14;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ce68;
  local_c = ExceptionList;
  local_14 = s_clearPlayerFromMafia_PlayerId_pl_0066ca10;
  local_10 = &DAT_0071d768;
  ExceptionList = &local_c;
  FUN_00401870(s_START__0066b830);
  FUN_004018b0();
  local_4 = 0;
  local_18 = (int *)*DAT_0068a8f0;
  if (local_18 != DAT_0068a8f0) {
    do {
      iVar3 = FUN_0040a950();
      if ((iVar3 != 0) && (iVar3 = FUN_0040a950(), *(int *)(iVar3 + 0x54) == 6)) {
        FUN_0041d3f0(&local_18);
        iVar3 = FUN_0040a950();
        piVar2 = DAT_0068a8f0;
        if (*(int *)(iVar3 + 0x3c0) == param_1) {
          FUN_0041d3f0(&local_18);
          iVar3 = FUN_0040a950();
          *(int **)(iVar3 + 0x3c0) = piVar2;
        }
      }
      local_18 = (int *)*local_18;
    } while (local_18 != DAT_0068a8f0);
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar4 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar4 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar4 = s_clearPlayerFromMafia_PlayerId_pl_0066ca10;
  cVar1 = s_clearPlayerFromMafia_PlayerId_pl_0066ca10[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar4;
    }
  }
  ExceptionList = local_c;
  return;
}

