
void FUN_00435b70(int param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iStack_68;
  undefined4 auStack_64 [8];
  undefined4 uStack_44;
  char *pcStack_40;
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d7a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar2 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcStack_40 = s__advancePlayer_PlayerId_player__d_0066d39c;
  uStack_44 = 0x435be4;
  FUN_004018b0();
  pcStack_40 = (char *)0x1;
  uStack_44 = param_2;
  puVar3 = (undefined4 *)(param_1 + 0x28);
  puVar4 = auStack_64;
  for (iStack_68 = 8; iStack_68 != 0; iStack_68 = iStack_68 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2 = &iStack_68;
  local_4 = 0;
  FUN_0041d3f0(&param_1);
  pcStack_40 = (char *)FUN_0043bff0(local_2c);
  uStack_44 = 0x435c2e;
  FUN_00418950();
  uStack_44 = 0x435c35;
  FUN_004742e0();
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar2 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar2 = s__advancePlayer_PlayerId_player__d_0066d39c;
  cVar1 = s__advancePlayer_PlayerId_player__d_0066d39c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar2;
    }
  }
  ExceptionList = local_c;
  return;
}

