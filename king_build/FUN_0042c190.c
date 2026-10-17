
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042c190(void)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  undefined1 local_28 [4];
  uint local_24;
  undefined4 uStack_20;
  uint local_1c;
  undefined4 uStack_18;
  char *local_14;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d068;
  local_c = ExceptionList;
  local_14 = s_markAmbushes___0066cca4;
  local_10 = &DAT_0071d768;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar4 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar4 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  FUN_004018b0(s_markAmbushes___0066cca4);
  local_4 = 0;
  piVar6 = DAT_006898d0;
  if (DAT_006898d0 != DAT_006898d4) {
    do {
      *(undefined1 *)(*piVar6 + 0xf0) = 0;
      if (*(int *)(*piVar6 + 0x24) == 2) {
        uStack_20 = 0;
        DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
        DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
        (&DAT_0068a928)[DAT_0068aa04] =
             (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
        local_24 = (uint)(&DAT_0068a928)[DAT_0068aa04] % 1000000;
        uVar5 = local_24;
LAB_0042c34b:
        if (_DAT_0064a868 <= (double)uVar5) {
LAB_0042c35f:
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
        *(undefined1 *)(*piVar6 + 0xf0) = uVar2;
      }
      else if (*(int *)(*piVar6 + 0x24) == 1) {
        piVar3 = (int *)FUN_00477c00(local_28);
        if ((_DAT_0064a668 < *(double *)(*piVar3 + 0xe0)) || (*(char *)(*piVar3 + 0xc9) != '\0')) {
          cVar1 = FUN_00429900();
          if (cVar1 != '\0') {
            uStack_18 = 0;
            DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
            DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
            (&DAT_0068a928)[DAT_0068aa04] =
                 (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
            local_1c = (uint)(&DAT_0068a928)[DAT_0068aa04] % 1000000;
            uVar5 = local_1c;
            goto LAB_0042c34b;
          }
          goto LAB_0042c35f;
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != DAT_006898d4);
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar4 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar4 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar4 = s_markAmbushes___0066cca4;
  cVar1 = s_markAmbushes___0066cca4[0];
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

