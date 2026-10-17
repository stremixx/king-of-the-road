
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00426be0(int param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  float10 fVar4;
  uint uStack_b8;
  undefined1 local_94 [128];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063ce2b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00401870();
  FUN_004018b0();
  local_c = 0;
  cVar2 = FUN_00417560();
  if (cVar2 != '\0') {
    FUN_00426b90();
  }
  iVar1 = param_1;
  DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
  DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
  (&DAT_0068a928)[DAT_0068aa04] = (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
  fVar4 = (float10)FUN_00401000();
  *(double *)(iVar1 + 0x328) = (double)(fVar4 - (float10)*(double *)(iVar1 + 0x318));
  if (DAT_0068c0e8 == 0) {
    if ((DAT_0068c0c4 == 0) && (DAT_006898e0 != DAT_006898e4)) {
      *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
      __ftol();
      FUN_0041d3f0(&param_1);
      FUN_00477580();
      uStack_b8 = 0x40b38800;
    }
    else {
      *(undefined4 *)(param_1 + 0x218) = 0;
      uStack_b8 = 0;
    }
    *(double *)(param_1 + 0x88) =
         (double)((ulonglong)uStack_b8 << 0x20) + *(double *)(param_1 + 0x88);
    cVar2 = FUN_00417560();
    if ((cVar2 != '\0') && ((double)((ulonglong)uStack_b8 << 0x20) != _DAT_0064a668)) {
      __ftol();
      FUN_0040e1d0();
      FUN_0061c369();
      FUN_0056a570(local_94);
    }
    FUN_0041d3f0();
    FUN_004015a0();
  }
  if ((DAT_0068c0e8 == 1) || (DAT_0068c0e8 == 2)) {
    FUN_0041d3f0();
    FUN_004015a0();
  }
  if (*(int *)(param_1 + 100) == 5) {
    FUN_00417580();
  }
  cVar2 = FUN_00417560();
  if (cVar2 != '\0') {
    FUN_004257e0();
    *(undefined4 *)(param_1 + 0x20c) = 0;
    *(undefined4 *)(param_1 + 0x210) = 0;
    *(undefined4 *)(param_1 + 0x214) = 0xffffffff;
  }
  FUN_00419570();
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar3 = s_finishPlayer_PlayerId_player__0066c9e0;
  cVar2 = s_finishPlayer_PlayerId_player__0066c9e0[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar2 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
      cVar2 = *pcVar3;
    }
  }
  ExceptionList = local_14;
  return 0;
}

