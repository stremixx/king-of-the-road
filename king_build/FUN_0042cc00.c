
void FUN_0042cc00(void)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  int ***pppiVar5;
  int **appiStack_a8 [6];
  int **ppiStack_90;
  char *pcStack_8c;
  int *local_88;
  int *local_74;
  undefined1 *local_70;
  char *local_6c;
  undefined *local_68;
  undefined1 local_64 [32];
  int local_44 [2];
  undefined4 local_3c;
  undefined4 local_38;
  char *local_34;
  char *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_20;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063d0e8;
  local_14 = ExceptionList;
  local_88 = (int *)0x8;
  pcStack_8c = s_START__0066b830;
  local_6c = s_updatePlayerRooms___0066cd14;
  local_68 = &DAT_0071d768;
  ppiStack_90 = (int **)0x42cc42;
  ExceptionList = &local_14;
  FUN_00401870();
  local_88 = (int *)s_updatePlayerRooms___0066cd14;
  pcStack_8c = (char *)0x42cc51;
  FUN_004018b0();
  local_c = 0;
  local_74 = (int *)*DAT_0068a8f0;
  if (local_74 != DAT_0068a8f0) {
    do {
      local_88 = local_44;
      ppiStack_90 = (int **)local_64;
      local_70 = (undefined1 *)(appiStack_a8 + 6);
      appiStack_a8[5] = &local_74;
      local_44[0] = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = s_UNDEFINED_MODULE_0066c638;
      local_30 = s_UNDEFINED_ROOM_0066c628;
      local_2c = 0;
      local_28 = 0;
      local_20 = -1;
      local_1c = -1;
      appiStack_a8[4] = (int **)0x42ccca;
      pcStack_8c = (char *)ppiStack_90;
      FUN_0041d3f0();
      appiStack_a8[5] = (int **)0x42cccf;
      FUN_0040a950();
      ppiStack_90 = (int **)0x42ccdc;
      puVar2 = (undefined4 *)FUN_00424010();
      pppiVar5 = appiStack_a8;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pppiVar5 = (int **)*puVar2;
        puVar2 = puVar2 + 1;
        pppiVar5 = pppiVar5 + 1;
      }
      FUN_0042ca90();
      local_70 = (undefined1 *)&local_88;
      local_88 = local_74;
      pcStack_8c = (char *)0x42cd03;
      iVar4 = FUN_0040a950();
      iVar4 = *(int *)(iVar4 + 0x350);
      if (local_1c == iVar4) {
        local_70 = (undefined1 *)&local_88;
        local_88 = local_74;
        pcStack_8c = (char *)0x42cd26;
        iVar4 = FUN_0040a950();
        iVar4 = *(int *)(iVar4 + 0x34c);
        if (local_20 != iVar4) goto LAB_0042cd37;
      }
      else {
LAB_0042cd37:
        local_88 = (int *)0x0;
        pcStack_8c = (char *)0x5;
        appiStack_a8[4] = &local_74;
        local_70 = (undefined1 *)(appiStack_a8 + 5);
        appiStack_a8[3] = (int **)0x42cd53;
        appiStack_a8[5] = (int **)iVar4;
        ppiStack_90 = (int **)iVar4;
        FUN_0041d3f0();
        appiStack_a8[4] = (int **)0x42cd5a;
        FUN_004042b0();
        appiStack_a8[5] = (int **)0x42cd5f;
        FUN_004015a0();
      }
      local_70 = (undefined1 *)&local_88;
      local_88 = local_74;
      pcStack_8c = (char *)0x42cd74;
      iVar4 = FUN_0040a950();
      *(int *)(iVar4 + 0x350) = local_1c;
      local_88 = local_74;
      pcStack_8c = (char *)0x42cd8f;
      local_70 = (undefined1 *)&local_88;
      iVar4 = FUN_0040a950();
      *(int *)(iVar4 + 0x34c) = local_20;
      local_74 = (int *)*local_74;
    } while (local_74 != DAT_0068a8f0);
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar3 = s_updatePlayerRooms___0066cd14;
  cVar1 = s_updatePlayerRooms___0066cd14[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar3;
    }
  }
  ExceptionList = local_14;
  return;
}

