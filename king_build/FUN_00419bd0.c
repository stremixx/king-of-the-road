
undefined4 FUN_00419bd0(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  
  FUN_00401870(s_START__0066b830);
  FUN_004018b0();
  if (*(int *)(param_1 + 0x5c) != 9) {
    FUN_00401870(s_COMPL__0066b7ec);
    FUN_004018b0();
    return 0;
  }
  if (*(int *)(param_1 + 100) == 0x100) {
    *(int *)(*(int *)(param_1 + 0x3cc) + 4) = *(int *)(*(int *)(param_1 + 0x3cc) + 4) + -1;
    cVar4 = FUN_004164e0();
    if (cVar4 != '\0') {
      piVar1 = (int *)(*(int *)(param_1 + 0x3cc) + 0xc);
      *piVar1 = *piVar1 + -1;
    }
  }
  if (*(int *)(param_1 + 100) == 0x101) {
    DAT_0068c0ac = DAT_0068c0ac + -1;
    cVar4 = FUN_004164e0();
    if (cVar4 != '\0') {
      DAT_0068c0b4 = DAT_0068c0b4 + -1;
    }
  }
  *(undefined4 *)(param_1 + 100) = 0;
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffbbf;
  iVar3 = *(int *)(param_1 + 0x78);
  if (iVar3 != -1) {
    *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
    *(undefined4 *)
     (*(int *)(*(int *)(DAT_0068bbf8 + iVar3 * 4) + 0x1c) + 8 + *(int *)(param_1 + 0x7c) * 0x24) =
         DAT_0068a8f0;
    puVar2 = (uint *)(*(int *)(*(int *)(DAT_0068bbf8 + iVar3 * 4) + 0x1c) + 4 +
                     *(int *)(param_1 + 0x7c) * 0x24);
    *puVar2 = *puVar2 & 0xfffffffc;
    piVar1 = (int *)(*(int *)(DAT_0068bbf8 + iVar3 * 4) + 0x28);
    *piVar1 = *piVar1 + -1;
  }
  *(undefined4 *)(param_1 + 0x3cc) = 0;
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar5 = s_cancelSellingDealer_PlayerId_pla_0066c498;
  cVar4 = s_cancelSellingDealer_PlayerId_pla_0066c498[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar4 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar4 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar4;
      cVar4 = *pcVar5;
    }
  }
  return 0;
}

