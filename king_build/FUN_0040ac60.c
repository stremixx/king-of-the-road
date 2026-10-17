
void FUN_0040ac60(int param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  float10 fVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b6b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar4 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar4 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  FUN_004018b0();
  local_4 = 0;
  uVar1 = *(uint *)(param_1 + 0x60);
  if ((uVar1 & 0x4000) != 0) {
    *(uint *)(param_1 + 0x60) = uVar1 & 0xffffbfff;
    if ((uVar1 & 0x100) == 0) {
      fVar5 = (float10)FUN_00401000();
      *(double *)(param_1 + 0x328) = (double)(fVar5 - (float10)*(double *)(param_1 + 0x318));
    }
    cVar2 = FUN_004171e0();
    if (cVar2 != '\0') {
      DAT_0068c0c4 = DAT_0068c0c4 + 1;
      FUN_00417430();
      uVar3 = FUN_0040e1d0(s_COMPETITOR_ARRIVED_0066bc78);
      FUN_00483da0(uVar3);
    }
    *(undefined1 *)(param_1 + 0x368) = 1;
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar4 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar4 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar4 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar4 = s_finishRacingPlayer_PlayerId_play_0066bc8c;
  cVar2 = s_finishRacingPlayer_PlayerId_play_0066bc8c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar2 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
      cVar2 = *pcVar4;
    }
  }
  ExceptionList = local_c;
  return;
}

