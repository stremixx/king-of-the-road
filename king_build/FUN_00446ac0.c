
void FUN_00446ac0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piStack_2c;
  int *local_28;
  int *local_1c;
  undefined1 *local_18;
  char *local_14;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e0f8;
  local_c = ExceptionList;
  local_14 = s_killDelayedPlayers___0066e3f0;
  local_10 = &DAT_0071d768;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar3 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  local_28 = (int *)s_killDelayedPlayers___0066e3f0;
  piStack_2c = (int *)0x446b34;
  FUN_004018b0();
  local_4 = 0;
LAB_00446b41:
  local_28 = (int *)*DAT_0068a8f0;
  if (local_28 == DAT_0068a8f0) {
LAB_00446bc1:
    if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
      pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
      *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
      *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
      DAT_0071d778 = DAT_0071d778 + 8;
    }
    pcVar3 = s_killDelayedPlayers___0066e3f0;
    cVar1 = s_killDelayedPlayers___0066e3f0[0];
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
  do {
    local_18 = (undefined1 *)&local_28;
    piStack_2c = (int *)0x446b5f;
    local_1c = local_28;
    iVar2 = FUN_0040a950();
    if (iVar2 != 0) {
      local_18 = (undefined1 *)&local_28;
      local_28 = local_1c;
      piStack_2c = (int *)0x446b78;
      iVar2 = FUN_0040a950();
      piStack_2c = *(int **)(iVar2 + 0x58);
      if (((uint)piStack_2c & 0x20000) != 0) break;
    }
    local_28 = (int *)*local_1c;
    if (local_28 == DAT_0068a8f0) goto LAB_00446bc1;
  } while( true );
  local_18 = (undefined1 *)&piStack_2c;
  local_28 = piStack_2c;
  FUN_0041d3f0(&local_1c);
  FUN_004042b0();
  piStack_2c = (int *)0x446bbc;
  FUN_00446670();
  goto LAB_00446b41;
}

