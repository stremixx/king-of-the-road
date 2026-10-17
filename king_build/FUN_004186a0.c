
void FUN_004186a0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char **ppcVar7;
  int iStack_5c;
  char *apcStack_58 [4];
  undefined1 **ppuStack_48;
  char *pcStack_44;
  char *pcStack_40;
  char *local_3c;
  undefined1 *local_30;
  char *local_2c;
  undefined *local_28;
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c908;
  local_c = ExceptionList;
  local_3c = (char *)0x8;
  pcStack_40 = s_START__0066b830;
  local_2c = s_sendForClosestOrder_PlayerId_pla_0066c304;
  local_28 = &DAT_0071d768;
  pcStack_44 = (char *)0x4186db;
  ExceptionList = &local_c;
  FUN_00401870();
  local_3c = s_sendForClosestOrder_PlayerId_pla_0066c304;
  pcStack_40 = (char *)0x4186ea;
  FUN_004018b0();
  local_4 = 0;
  if (*(int *)(param_1 + 0x5c) != 2) {
    puVar6 = (undefined4 *)(param_1 + 0x28);
    ppcVar7 = apcStack_58;
    for (iStack_5c = 8; iStack_5c != 0; iStack_5c = iStack_5c + -1) {
      *ppcVar7 = (char *)*puVar6;
      puVar6 = puVar6 + 1;
      ppcVar7 = ppcVar7 + 1;
    }
    local_30 = (undefined1 *)&iStack_5c;
    FUN_0041d3f0(&param_1);
    FUN_00417720();
    local_3c = (char *)0x8;
    pcStack_40 = s_COMPL__0066b7ec;
    pcStack_44 = (char *)0x418735;
    FUN_00401870();
    local_3c = s_sendForClosestOrder_PlayerId_pla_0066c304;
    pcStack_40 = (char *)0x418744;
    FUN_004018b0();
    ExceptionList = local_c;
    return;
  }
  local_3c = (char *)(param_1 + 8);
  pcStack_40 = (char *)0x41875e;
  iVar2 = FUN_00477850();
  local_30 = (undefined1 *)(apcStack_58 + 7);
  if (iVar2 == 0) {
    pcStack_40 = local_24;
    local_3c = (char *)param_1;
    pcStack_44 = (char *)0x418780;
    local_30 = (undefined1 *)(apcStack_58 + 7);
    pcStack_44 = (char *)FUN_0040b030();
    ppuStack_48 = &local_30;
    apcStack_58[3] = (char *)0x41878b;
    piVar3 = (int *)FUN_00404fd0();
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*(int *)(DAT_0068be20 + *piVar3 * 4) + 0x18);
    local_3c = *(char **)(param_1 + 0x80);
    pcStack_44 = (char *)&param_1;
    pcStack_40 = (char *)param_1;
    ppuStack_48 = (undefined1 **)0x4187c2;
    local_30 = (undefined1 *)(apcStack_58 + 6);
    FUN_0041d3f0();
    pcStack_44 = (char *)0x4187c7;
    uVar4 = FUN_00418300();
    local_3c = (char *)0x4187d5;
    iVar2 = FUN_00418950();
    *(undefined4 *)(iVar2 + 0x7c) = uVar4;
    if (*(int *)(param_1 + 0x84) == -1) {
      puVar6 = (undefined4 *)(param_1 + 0x28);
      ppcVar7 = apcStack_58;
      for (iStack_5c = 8; iStack_5c != 0; iStack_5c = iStack_5c + -1) {
        *ppcVar7 = (char *)*puVar6;
        puVar6 = puVar6 + 1;
        ppcVar7 = ppcVar7 + 1;
      }
      local_30 = (undefined1 *)&iStack_5c;
      FUN_0041d3f0(&param_1);
      FUN_00417720();
      if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
        pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
        *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
        *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
        DAT_0071d778 = DAT_0071d778 + 8;
      }
      local_3c = s_sendForClosestOrder_PlayerId_pla_0066c304;
      pcStack_40 = (char *)0x41885d;
      FUN_004018b0();
      ExceptionList = local_c;
      return;
    }
    pcStack_40 = *(char **)(param_1 + 0x80);
    local_30 = (undefined1 *)(apcStack_58 + 5);
    pcStack_44 = (char *)param_1;
    ppuStack_48 = (undefined1 **)&param_1;
    apcStack_58[3] = (char *)0x418887;
    local_3c = (char *)*(int *)(param_1 + 0x84);
    FUN_0041d3f0();
    ppuStack_48 = (undefined1 **)0x41888c;
    FUN_00417ff0();
    *(undefined4 *)(param_1 + 100) = 3;
  }
  else {
    local_3c = (char *)param_1;
    pcStack_40 = (char *)0x4188ad;
    FUN_00417dd0();
    *(undefined4 *)(param_1 + 100) = 4;
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar5 = s_sendForClosestOrder_PlayerId_pla_0066c304;
  cVar1 = s_sendForClosestOrder_PlayerId_pla_0066c304[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar5;
    }
  }
  ExceptionList = local_c;
  return;
}

