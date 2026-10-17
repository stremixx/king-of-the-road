
void FUN_004273b0(void)

{
  char cVar1;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063ce88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar2 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar2 = s_clearPlayerFromTail_PlayerId_pla_0066ca38;
  cVar1 = s_clearPlayerFromTail_PlayerId_pla_0066ca38[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar2;
    }
  }
  local_4 = 0;
  FUN_00427170();
  FUN_00427300();
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar2 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar2 = s_clearPlayerFromTail_PlayerId_pla_0066ca38;
  cVar1 = s_clearPlayerFromTail_PlayerId_pla_0066ca38[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar2;
    }
  }
  ExceptionList = local_c;
  return;
}

