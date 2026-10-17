
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00428890(void)

{
  undefined4 uVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int ***pppiVar6;
  undefined4 *puVar7;
  int *piVar8;
  int aiStack_64 [4];
  undefined4 uStack_54;
  int ***pppiStack_50;
  char *pcStack_4c;
  int ***local_48;
  int ***local_34;
  int ***local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  char *local_1c;
  undefined *local_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063cf28;
  local_14 = ExceptionList;
  local_48 = (int ***)0x8;
  pcStack_4c = s_START__0066b830;
  local_1c = s_updateAdvancementsRegular___0066cb28;
  local_18 = &DAT_0071d768;
  pppiStack_50 = (int ***)0x4288d2;
  ExceptionList = &local_14;
  FUN_00401870();
  local_48 = (int ***)s_updateAdvancementsRegular___0066cb28;
  pcStack_4c = (char *)0x4288e1;
  FUN_004018b0();
  local_c = 0;
  if (DAT_006898e0 != DAT_006898e4) {
    local_48 = (int ***)&local_30;
    pcStack_4c = (char *)0x428906;
    FUN_00477c00();
    if ((local_30 != DAT_0068a8f0) && (local_30[0x19] != (int **)0x5)) {
      pppiVar6 = local_30 + 10;
      piVar8 = aiStack_64;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar8 = (int)*pppiVar6;
        pppiVar6 = pppiVar6 + 1;
        piVar8 = piVar8 + 1;
      }
      FUN_0041a8a0(local_30 + 2);
      local_48 = (int ***)*DAT_0068a8f0;
      if (local_48 != DAT_0068a8f0) {
        do {
          local_2c = (undefined1 *)&local_48;
          pcStack_4c = (char *)0x428962;
          local_34 = local_48;
          iVar4 = FUN_0040a950();
          local_2c = (undefined1 *)&pcStack_4c;
          pppiStack_50 = (int ***)&local_34;
          uStack_54 = 0x42897b;
          FUN_0041d3f0();
          pppiStack_50 = (int ***)0x428982;
          FUN_004042b0();
          pcStack_4c = (char *)0x428987;
          cVar2 = FUN_004171e0();
          if (cVar2 != '\0') {
            uStack_24 = *(undefined4 *)(iVar4 + 500);
            uVar1 = *(undefined4 *)(iVar4 + 0x1f0);
            puVar7 = (undefined4 *)(iVar4 + 0x20);
            piVar8 = aiStack_64;
            for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              piVar8 = piVar8 + 1;
            }
            local_28 = uVar1;
            FUN_0041a8a0(iVar4);
            if (_DAT_0064a660 <
                ABS(*(double *)(iVar4 + 0x1f0) - (double)CONCAT44(uStack_24,local_28))) {
              *(bool *)(iVar4 + 0x1f9) = *(char *)(iVar4 + 0x1f9) == '\0';
            }
          }
          local_48 = (int ***)*local_34;
        } while (local_48 != DAT_0068a8f0);
      }
      if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
        pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
        *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
        *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
        DAT_0071d778 = DAT_0071d778 + 8;
      }
      pcVar3 = s_updateAdvancementsRegular___0066cb28;
      if (DAT_0071d774 == 0) {
        ExceptionList = local_14;
        return;
      }
      if (s_updateAdvancementsRegular___0066cb28[0] == '\0') {
        ExceptionList = local_14;
        return;
      }
      do {
        if (DAT_0071d770 <= DAT_0071d778) {
          ExceptionList = local_14;
          return;
        }
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
        DAT_0071d778 = DAT_0071d778 + 1;
      } while (*pcVar3 != '\0');
      ExceptionList = local_14;
      return;
    }
  }
  local_48 = (int ***)0x8;
  pcStack_4c = s_COMPL__0066b7ec;
  pppiStack_50 = (int ***)0x428a9b;
  FUN_00401870();
  local_48 = (int ***)s_updateAdvancementsRegular___0066cb28;
  pcStack_4c = (char *)0x428aaa;
  FUN_004018b0();
  ExceptionList = local_14;
  return;
}

