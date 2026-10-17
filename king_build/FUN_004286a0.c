
/* WARNING: Type propagation algorithm not settling */

void FUN_004286a0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int local_24 [4];
  char *local_14;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063cf08;
  local_c = ExceptionList;
  local_14 = s_reportCompetitionState___0066cb0c;
  local_10 = &DAT_0071d768;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar3 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  FUN_004018b0(s_reportCompetitionState___0066cb0c);
  local_4 = 0;
  if (DAT_006898e0 == DAT_006898e4) {
    if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
      pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
      *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
      *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
      DAT_0071d778 = DAT_0071d778 + 8;
    }
    FUN_004018b0(s_reportCompetitionState___0066cb0c);
    ExceptionList = local_c;
    return;
  }
  FUN_00428310();
  local_24[1] = 0;
  local_24[2] = 0xffffffff;
  local_24[3] = 0x7fefffff;
  FUN_00428020(local_24 + 1,local_24 + 2);
  FUN_00477c00(local_24);
  if ((local_24[0] != DAT_0068a8f0) &&
     (*(int *)(local_24[0] + 0x210) != *(int *)(local_24[0] + 0x214))) {
    *(int *)(local_24[0] + 0x214) = *(int *)(local_24[0] + 0x210);
    iVar2 = *(int *)(local_24[0] + 0x210);
    if (iVar2 < 10) {
      if (iVar2 < 0) goto LAB_00428804;
    }
    else {
      iVar2 = 9;
    }
    FUN_00427fc0(iVar2);
  }
LAB_00428804:
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar3 = s_reportCompetitionState___0066cb0c;
  cVar1 = s_reportCompetitionState___0066cb0c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar3;
    }
  }
  ExceptionList = local_c;
  return;
}

