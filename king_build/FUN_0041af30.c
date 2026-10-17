
undefined4 FUN_0041af30(int param_1)

{
  double *pdVar1;
  char cVar2;
  char *pcVar3;
  float10 fVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ca28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00401870();
  FUN_004018b0();
  local_4 = 0;
  if ((((*(int *)(param_1 + 100) == 0x100) && (cVar2 = FUN_004164e0(), cVar2 != '\0')) &&
      (pdVar1 = (double *)(param_1 + 0x70), fVar4 = (float10)FUN_00401000(),
      (float10)*pdVar1 <= fVar4)) &&
     (*(int *)(*(int *)(param_1 + 0x3cc) + 8) <= *(int *)(*(int *)(param_1 + 0x3cc) + 0xc))) {
    FUN_00419830();
  }
  if (((*(int *)(param_1 + 100) == 0x101) && (cVar2 = FUN_004164e0(), cVar2 != '\0')) &&
     ((pdVar1 = (double *)(param_1 + 0x70), fVar4 = (float10)FUN_00401000(),
      (float10)*pdVar1 <= fVar4 && (DAT_0068c0b0 <= DAT_0068c0b4)))) {
    FUN_00419830();
  }
  cVar2 = FUN_004164e0();
  if (((cVar2 != '\0') && (*(int *)(param_1 + 100) != 0x101)) &&
     ((*(int *)(param_1 + 100) != 0x100 &&
      ((DAT_0066b68c != '\0' ||
       ((cVar2 = FUN_004164e0(), cVar2 != '\0' &&
        (pdVar1 = (double *)(param_1 + 0x70), fVar4 = (float10)FUN_00401000(),
        (float10)*pdVar1 <= fVar4)))))))) {
    FUN_00477e00();
  }
  if (((*(uint *)(param_1 + 0x60) & 0x8000000) != 0) &&
     (pdVar1 = (double *)(param_1 + 0x70), fVar4 = (float10)FUN_00401000(),
     (float10)*pdVar1 <= fVar4)) {
    FUN_00477e00();
  }
  if (((*(byte *)(param_1 + 0x60) & 1) == 0) && (cVar2 = FUN_004164e0(), cVar2 == '\0')) {
    FUN_0041aaa0();
    FUN_0041d3f0();
    FUN_00435b70();
    FUN_0041d3f0(&param_1);
    FUN_004015a0();
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar3 = s_processMove_PlayerId_player__0066c56c;
  cVar2 = s_processMove_PlayerId_player__0066c56c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar2 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
      cVar2 = *pcVar3;
    }
  }
  ExceptionList = local_c;
  return 0;
}

