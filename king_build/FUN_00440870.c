
undefined4 * FUN_00440870(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  char *local_24;
  undefined *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063dd48;
  local_c = ExceptionList;
  local_24 = s_getNameCoordinates_TownId_town__i_0066de40;
  local_20 = &DAT_0071d768;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar4 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar4 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  FUN_004018b0(s_getNameCoordinates_TownId_town__i_0066de40);
  local_4 = 0;
  FUN_00440670(&local_18,*(undefined4 *)(DAT_0068be20 + param_2 * 4));
  iVar5 = (param_3 * 3 + 0x12) * 4;
  piVar2 = (int *)(*(int *)(DAT_0068be20 + param_2 * 4) + iVar5);
  if (param_4 < (uint)(piVar2[1] - *piVar2 >> 2)) {
    puVar3 = (undefined4 *)
             FUN_00436540(&local_24,
                          *(undefined4 *)
                           (*(int *)(*(int *)(DAT_0068be20 + param_2 * 4) + iVar5) + param_4 * 4));
    local_18 = *puVar3;
    local_14 = puVar3[1];
    local_10 = puVar3[2];
  }
  *param_1 = local_18;
  param_1[1] = local_14;
  param_1[2] = local_10;
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar4 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar4 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar4 = s_getNameCoordinates_TownId_town__i_0066de40;
  cVar1 = s_getNameCoordinates_TownId_town__i_0066de40[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar4;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

