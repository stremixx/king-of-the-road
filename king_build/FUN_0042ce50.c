
void FUN_0042ce50(void)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 auStack_a8 [4];
  undefined4 uStack_98;
  int **ppiStack_94;
  undefined1 *puStack_90;
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
  undefined4 local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063d108;
  local_14 = ExceptionList;
  local_88 = (int *)0x8;
  pcStack_8c = s_START__0066b830;
  local_6c = s_resetPlayerRooms___0066cd28;
  local_68 = &DAT_0071d768;
  puStack_90 = (undefined1 *)0x42ce92;
  ExceptionList = &local_14;
  FUN_00401870();
  local_88 = (int *)s_resetPlayerRooms___0066cd28;
  pcStack_8c = (char *)0x42cea1;
  FUN_004018b0();
  local_c = 0;
  local_74 = (int *)*DAT_0068a8f0;
  if (local_74 != DAT_0068a8f0) {
    do {
      local_88 = local_44;
      puStack_90 = local_64;
      local_70 = (undefined1 *)&puStack_90;
      ppiStack_94 = &local_74;
      local_44[0] = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = s_UNDEFINED_MODULE_0066c638;
      local_30 = s_UNDEFINED_ROOM_0066c628;
      local_2c = 0;
      local_28 = 0;
      local_20 = 0xffffffff;
      local_1c = 0xffffffff;
      uStack_98 = 0x42cf1a;
      pcStack_8c = puStack_90;
      FUN_0041d3f0();
      ppiStack_94 = (int **)0x42cf1f;
      FUN_0040a950();
      puStack_90 = (undefined1 *)0x42cf2c;
      puVar2 = (undefined4 *)FUN_00424010();
      puVar5 = auStack_a8;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_0042ca90();
      local_70 = (undefined1 *)&local_88;
      local_88 = local_74;
      pcStack_8c = (char *)0x42cf53;
      iVar4 = FUN_0040a950();
      *(undefined4 *)(iVar4 + 0x350) = local_1c;
      local_88 = local_74;
      pcStack_8c = (char *)0x42cf6e;
      local_70 = (undefined1 *)&local_88;
      iVar4 = FUN_0040a950();
      *(undefined4 *)(iVar4 + 0x34c) = local_20;
      local_74 = (int *)*local_74;
    } while (local_74 != DAT_0068a8f0);
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar3 = s_resetPlayerRooms___0066cd28;
  cVar1 = s_resetPlayerRooms___0066cd28[0];
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

