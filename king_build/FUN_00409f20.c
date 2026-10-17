
void FUN_00409f20(undefined1 **param_1)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 extraout_ECX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iStack_54;
  undefined4 auStack_50 [5];
  undefined4 uStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined1 **local_30;
  undefined1 *local_24;
  undefined1 *local_20;
  char *local_1c;
  undefined *local_18;
  undefined1 *local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b658;
  local_c = ExceptionList;
  local_1c = s_retraceCompetitorRegular_PlayerI_0066bb88;
  local_18 = &DAT_0071d768;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar3 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  local_30 = (undefined1 **)s_retraceCompetitorRegular_PlayerI_0066bb88;
  uStack_34 = 0x409f94;
  FUN_004018b0();
  local_24 = (undefined1 *)&local_30;
  local_4 = 0;
  local_30 = param_1;
  uStack_34 = 0x409fae;
  cVar1 = FUN_004171e0();
  if ((cVar1 != '\0') && (param_1[0x19] != (undefined1 *)0x5)) {
    local_30 = local_14;
    puStack_38 = &param_1;
    local_24 = (undefined1 *)&uStack_34;
    uStack_3c = 0x409fdd;
    FUN_0041d3f0();
    puStack_38 = (undefined4 *)0x409fe2;
    cVar1 = FUN_00409ed0();
    uStack_34 = extraout_ECX;
    if ((cVar1 == '\0') ||
       (uStack_34 = CONCAT31((int3)((uint)extraout_ECX >> 8),*(char *)(param_1 + 0xd4)),
       *(char *)(param_1 + 0xd4) == '\0')) {
      local_30 = (undefined1 **)0x2;
      local_20 = (undefined1 *)&uStack_34;
      puStack_38 = &param_1;
      uStack_3c = 0x40a048;
      FUN_0041d3f0();
      puStack_38 = (undefined4 *)0x40a04d;
      FUN_004786d0();
    }
    else {
      local_30 = &local_24;
      uStack_34 = 0x40a001;
      piVar2 = (int *)FUN_00477c00();
      local_30 = (undefined1 **)0x2;
      puVar4 = (undefined4 *)(*piVar2 + 0x28);
      puVar5 = auStack_50;
      for (iStack_54 = 8; iStack_54 != 0; iStack_54 = iStack_54 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      local_20 = (undefined1 *)&iStack_54;
      FUN_0041d3f0(&param_1);
      FUN_00478300();
    }
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar3 = s_retraceCompetitorRegular_PlayerI_0066bb88;
  cVar1 = s_retraceCompetitorRegular_PlayerI_0066bb88[0];
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

