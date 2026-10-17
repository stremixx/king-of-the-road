
void FUN_0042c470(void)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d088;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00401870(s_START__0066b830);
  FUN_004018b0();
  local_4 = 0;
  piVar4 = DAT_006898d0;
  if (DAT_006898d0 != DAT_006898d4) {
    do {
      if (*(char *)(*piVar4 + 0x1c) == '\0') {
        if ((*(char *)(*piVar4 + 0xf0) != '\0') && (cVar2 = FUN_0042b630(), cVar2 != '\0')) {
          FUN_0042bc70(*piVar4);
          piVar5 = *(int **)(*piVar4 + 0xdc);
          if (piVar5 != *(int **)(*piVar4 + 0xe0)) {
            do {
              if (((*(char *)(*piVar5 + 0x1c) != '\0') && (cVar2 = FUN_0042b630(), cVar2 == '\0'))
                 && (iVar1 = *(int *)(*piVar5 + 0x7c), FUN_0042bc70(*piVar5), iVar1 != DAT_0068a8f0)
                 ) {
                FUN_0042c410();
              }
              piVar5 = piVar5 + 1;
            } while (piVar5 != *(int **)(*piVar4 + 0xe0));
          }
        }
      }
      else {
        cVar2 = FUN_0042b5a0();
        if ((cVar2 != '\0') &&
           (iVar1 = *(int *)(*piVar4 + 0x7c), FUN_0042bc70(*piVar4), iVar1 != DAT_0068a8f0)) {
          FUN_0042c410();
        }
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != DAT_006898d4);
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar3 = s_updateAmbushes___0066ccb4;
  cVar2 = s_updateAmbushes___0066ccb4[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar2 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
      cVar2 = *pcVar3;
    }
  }
  ExceptionList = local_c;
  return;
}

