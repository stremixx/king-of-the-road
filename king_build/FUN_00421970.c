
void FUN_00421970(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int aiStack_74 [6];
  undefined4 uStack_5c;
  undefined4 *puStack_58;
  uint *puStack_54;
  uint local_3c [2];
  undefined4 local_34;
  undefined4 local_30;
  char *local_2c;
  char *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ccc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar4 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar4 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  puStack_54 = (uint *)s_trimDealerPosition_PositionId___s_0066c850;
  puStack_58 = (undefined4 *)0x4219e5;
  FUN_004018b0();
  piVar2 = param_1;
  local_4 = 0;
  if ((*param_1 == -1) && (puStack_54 = (uint *)param_1[1], puStack_54 != (uint *)0xffffffff)) {
    puStack_58 = &param_1;
    uStack_5c = 0x421a0b;
    piVar3 = (int *)FUN_00421780();
    *piVar2 = *piVar3;
  }
  puStack_54 = local_3c;
  local_18 = 0xffffffff;
  local_14 = 0xffffffff;
  piVar3 = piVar2;
  piVar6 = aiStack_74;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar6 = piVar6 + 1;
  }
  local_3c[0] = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = s_UNDEFINED_MODULE_0066c638;
  local_28 = s_UNDEFINED_ROOM_0066c628;
  local_24 = 0;
  local_20 = 0;
  FUN_00438e50();
  if ((local_3c[0] & 8) != 0) {
    piVar2[6] = piVar2[6] | 1;
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar4 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar4 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar4 = s_trimDealerPosition_PositionId___s_0066c850;
  cVar1 = s_trimDealerPosition_PositionId___s_0066c850[0];
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

