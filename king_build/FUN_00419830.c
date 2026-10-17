
undefined4 FUN_00419830(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  char **ppcVar8;
  char *apcStack_5c [6];
  undefined1 **ppuStack_44;
  char *local_40;
  undefined1 *local_34;
  undefined1 *local_30;
  char *local_2c;
  undefined *local_28;
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c9a8;
  local_c = ExceptionList;
  local_40 = (char *)0x8;
  ppuStack_44 = (undefined1 **)s_START__0066b830;
  local_2c = s_cancelSellingOrHiring_PlayerId_p_0066c470;
  local_28 = &DAT_0071d768;
  apcStack_5c[5] = (char *)0x41986b;
  ExceptionList = &local_c;
  FUN_00401870();
  local_40 = s_cancelSellingOrHiring_PlayerId_p_0066c470;
  ppuStack_44 = (undefined1 **)0x41987a;
  FUN_004018b0();
  local_4 = 0;
  if (*(int *)(param_1 + 0x5c) == 9) {
    local_40 = (char *)0x8;
    ppuStack_44 = (undefined1 **)s_COMPL__0066b7ec;
    apcStack_5c[5] = (char *)0x41989d;
    FUN_00401870();
    local_40 = s_cancelSellingOrHiring_PlayerId_p_0066c470;
    ppuStack_44 = (undefined1 **)0x4198ac;
    FUN_004018b0();
    ExceptionList = local_c;
    return 0;
  }
  if (*(int *)(param_1 + 100) == 0x100) {
    local_34 = (undefined1 *)(apcStack_5c + 7);
    *(int *)(*(int *)(param_1 + 0x3cc) + 4) = *(int *)(*(int *)(param_1 + 0x3cc) + 4) + -1;
    local_40 = (char *)param_1;
    ppuStack_44 = (undefined1 **)0x4198e7;
    cVar4 = FUN_004164e0();
    if (cVar4 != '\0') {
      piVar1 = (int *)(*(int *)(param_1 + 0x3cc) + 0xc);
      *piVar1 = *piVar1 + -1;
    }
  }
  if (*(int *)(param_1 + 100) == 0x101) {
    local_34 = (undefined1 *)(apcStack_5c + 7);
    DAT_0068c0ac = DAT_0068c0ac + -1;
    local_40 = (char *)param_1;
    ppuStack_44 = (undefined1 **)0x419923;
    cVar4 = FUN_004164e0();
    if (cVar4 != '\0') {
      DAT_0068c0b4 = DAT_0068c0b4 + -1;
    }
  }
  iVar7 = param_1;
  local_40 = (char *)0x41993f;
  FUN_00447d40();
  *(undefined1 *)(iVar7 + 0x368) = 1;
  *(undefined4 *)(param_1 + 100) = 0;
  local_34 = (undefined1 *)(apcStack_5c + 7);
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffbbf;
  local_40 = (char *)param_1;
  ppuStack_44 = (undefined1 **)0x419973;
  FUN_00477e00();
  iVar3 = param_1;
  iVar7 = *(int *)(param_1 + 0x78);
  if (iVar7 != -1) {
    *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
    *(undefined4 *)
     (*(int *)(*(int *)(DAT_0068bbf8 + iVar7 * 4) + 0x1c) + 8 + *(int *)(param_1 + 0x7c) * 0x24) =
         DAT_0068a8f0;
    puVar2 = (uint *)(*(int *)(*(int *)(DAT_0068bbf8 + iVar7 * 4) + 0x1c) + 4 +
                     *(int *)(param_1 + 0x7c) * 0x24);
    *puVar2 = *puVar2 & 0xfffffffc;
    iVar7 = *(int *)(DAT_0068bbf8 + iVar7 * 4);
    *(int *)(iVar7 + 0x28) = *(int *)(iVar7 + 0x28) + -1;
  }
  *(undefined4 *)(param_1 + 0x3cc) = 0;
  if (*(int *)(param_1 + 0x5c) == 1) {
    ppuStack_44 = *(undefined1 ***)(param_1 + 0x18);
    local_40 = *(char **)(param_1 + 0x1c);
    apcStack_5c[5] = (char *)0x419a09;
    FUN_0044aa20();
    *(undefined1 *)(iVar3 + 0x368) = 1;
    local_40 = (char *)0x419a1c;
    FUN_00478120();
    if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
      pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
      *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
      *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
      DAT_0071d778 = DAT_0071d778 + 8;
    }
    local_40 = s_cancelSellingOrHiring_PlayerId_p_0066c470;
    ppuStack_44 = (undefined1 **)0x419a66;
    FUN_004018b0();
    ExceptionList = local_c;
    return 0;
  }
  puVar5 = (undefined4 *)(param_1 + 0x28);
  ppcVar8 = apcStack_5c;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppcVar8 = (char *)*puVar5;
    puVar5 = puVar5 + 1;
    ppcVar8 = ppcVar8 + 1;
  }
  FUN_00435cd0(local_24);
  iVar7 = FUN_00477850(param_1 + 8);
  if (iVar7 == 0) {
    if (*(int *)(param_1 + 0x5c) == 2) {
      local_34 = (undefined1 *)(apcStack_5c + 7);
      local_40 = (char *)param_1;
      ppuStack_44 = (undefined1 **)0x419abe;
      FUN_004186a0();
    }
    else {
      local_40 = local_24;
      ppuStack_44 = &local_34;
      apcStack_5c[5] = (char *)0x419ad2;
      puVar5 = (undefined4 *)FUN_004059b0();
      ppuStack_44 = (undefined1 **)*puVar5;
      apcStack_5c[5] = (char *)&param_1;
      local_30 = (undefined1 *)(apcStack_5c + 6);
      apcStack_5c[4] = (char *)0x419ae9;
      local_40 = (char *)ppuStack_44;
      FUN_0041d3f0();
      apcStack_5c[5] = (char *)0x419aee;
      FUN_0040a200();
    }
  }
  else {
    local_30 = (undefined1 *)(apcStack_5c + 7);
    local_40 = (char *)param_1;
    ppuStack_44 = (undefined1 **)0x419b05;
    FUN_00417dd0();
    *(undefined4 *)(param_1 + 100) = 4;
  }
  local_40 = (char *)0x40340000;
  ppuStack_44 = (undefined1 **)0x0;
  local_30 = (undefined1 *)(apcStack_5c + 5);
  apcStack_5c[4] = (char *)&param_1;
  apcStack_5c[3] = (char *)0x419b2b;
  FUN_0041d3f0();
  apcStack_5c[4] = (char *)0x419b30;
  FUN_00477cb0();
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar6 = s_cancelSellingOrHiring_PlayerId_p_0066c470;
  cVar4 = s_cancelSellingOrHiring_PlayerId_p_0066c470[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar4 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar4 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar4;
      cVar4 = *pcVar6;
    }
  }
  ExceptionList = local_c;
  return 0;
}

