
void FUN_0043e5b0(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063dbe8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00401870(s_START__0066b830,8);
  FUN_004018b0(s_setPlayerPositionV_RoomId_room__P_0066db28);
  local_4 = 0;
  if (((*(int *)(param_2 + 0x18) == *(int *)(param_2 + 0x1c)) && (param_1 != -1)) &&
     (iVar4 = *(int *)(DAT_0068c038 + param_1 * 4), *(int *)(iVar4 + 0x1c) != *(int *)(iVar4 + 0x20)
     )) {
    puVar2 = (undefined4 *)FUN_00436fd0(local_2c,param_1,param_3);
    iVar4 = 8;
    puVar5 = (undefined4 *)(param_2 + 0x330);
  }
  else {
    puVar2 = (undefined4 *)(param_2 + 0x28);
    puVar5 = (undefined4 *)(param_2 + 0x330);
    iVar4 = 8;
  }
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar3 = s_setPlayerPositionV_RoomId_room__P_0066db28;
  cVar1 = s_setPlayerPositionV_RoomId_room__P_0066db28[0];
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

