
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041a8a0(int param_1)

{
  char cVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  double *pdVar8;
  undefined4 *puVar9;
  undefined4 auStack_9c [6];
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_68;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  char *pcStack_5c;
  undefined4 local_4c;
  undefined4 uStack_48;
  char *local_44;
  undefined *local_40;
  double local_3c;
  double local_34;
  double local_2c;
  double local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c9e8;
  local_c = ExceptionList;
  local_44 = s_updateAdvancementRegular_AI_Play_0066c508;
  local_40 = &DAT_0071d768;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar5 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcStack_5c = s_updateAdvancementRegular_AI_Play_0066c508;
  uStack_60 = 0x41a915;
  FUN_004018b0();
  iVar3 = param_1;
  local_4 = 0;
  pcStack_5c = (char *)param_1;
  uStack_60 = 0x41a927;
  iVar4 = FUN_00477850();
  dVar2 = _DAT_0064a668;
  if (iVar4 != 0) {
    pcStack_5c = (char *)iVar3;
    uStack_60 = 0x41a93f;
    iVar4 = FUN_00477850();
    puStack_64 = &param_1;
    uStack_60 = *(undefined4 *)(DAT_0068be20 + *(int *)(iVar4 + 0xc) * 4);
    uStack_68 = 0x41a956;
    FUN_00404d60();
    puVar7 = (undefined4 *)(iVar3 + 0x268);
    if ((*(byte *)(iVar3 + 0x58) & 1) == 0) {
      puVar7 = (undefined4 *)(iVar3 + 0x130);
    }
    iVar4 = *(int *)(DAT_0068be60 + param_1 * 4);
    pdVar8 = &local_3c;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pdVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      pdVar8 = (double *)((int)pdVar8 + 4);
    }
    local_3c = *(double *)(iVar4 + 0x30) - local_3c;
    local_1c = *(double *)(iVar4 + 0x38) - local_34;
    local_2c = *(double *)(iVar4 + 0x40) - local_2c;
    dVar2 = SQRT(local_2c * local_2c + local_3c * local_3c + local_1c * local_1c);
    if (_DAT_0064a690 < dVar2) {
      pcStack_5c = (char *)&local_4c;
      local_4c = 0;
      uStack_48 = 0;
      iStack_80 = param_1;
      uStack_84 = 0x41a9e9;
      FUN_0040a430();
      puVar7 = (undefined4 *)&stack0x00000008;
      puVar9 = auStack_9c;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      FUN_00486900(0);
      dVar2 = (double)CONCAT44(uStack_48,local_4c);
    }
  }
  *(double *)(iVar3 + 0x1f0) = -dVar2;
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar5 = s_updateAdvancementRegular_AI_Play_0066c508;
  cVar1 = s_updateAdvancementRegular_AI_Play_0066c508[0];
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

