
undefined4 FUN_00437300(undefined4 param_1,float param_2,float param_3,float param_4)

{
  char cVar1;
  char *pcVar2;
  double local_24;
  double local_1c;
  double local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063d868;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar2 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar2 = s_getPositionId_vrVector__v__0066d538;
  cVar1 = s_getPositionId_vrVector__v__0066d538[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar2;
    }
  }
  local_24 = (double)param_2;
  local_1c = (double)param_3;
  local_14 = (double)param_4;
  local_4 = 0;
  FUN_004369e0(param_1,&local_24);
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar2 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar2 = s_getPositionId_vrVector__v__0066d538;
  cVar1 = s_getPositionId_vrVector__v__0066d538[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar2;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

