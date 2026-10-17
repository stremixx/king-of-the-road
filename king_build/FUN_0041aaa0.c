
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0041aaa0(int param_1)

{
  double dVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  int local_38;
  undefined8 local_30;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063ca08;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00401870();
  FUN_004018b0();
  local_c = 0;
  fVar6 = (float10)FUN_004d5bb0();
  if ((float10)_DAT_0064a668 <= fVar6) {
    fVar7 = (float10)FUN_00401000();
    fVar8 = (float10)_DAT_0068c050;
    FUN_00401870();
    FUN_004018b0();
    ExceptionList = local_14;
    return (float10)(double)((fVar7 - fVar8) * (float10)(double)fVar6);
  }
  local_30 = 13.88888888888889;
  if (_DAT_0064a6d8 < (double)CONCAT44(DAT_0066b6a4,DAT_0066b6a0)) {
    local_30 = (double)CONCAT44(DAT_0066b6a4,DAT_0066b6a0);
  }
  if (*(int *)(param_1 + 0x54) == -1) {
    fVar8 = (float10)_DAT_0064a668;
  }
  else {
    fVar8 = (float10)FUN_004cd760();
  }
  local_30 = (double)(((float10)_DAT_0064a660 - fVar8 * (float10)_DAT_0064a6d0) * (float10)local_30)
  ;
  cVar3 = FUN_004171e0();
  if ((cVar3 == '\0') || ((*(uint *)(param_1 + 0x60) & 0x1000000) != 0)) goto LAB_0041ad19;
  FUN_0041d3f0(&param_1);
  cVar3 = FUN_00409ed0();
  dVar1 = ABS((double)fVar6) / _DAT_0066b708;
  if (cVar3 == '\0') {
    dVar2 = _DAT_0064a668;
    if ((_DAT_0064a668 <= dVar1) && (dVar2 = dVar1, _DAT_0064a660 < dVar1)) {
      dVar2 = _DAT_0064a660;
    }
    local_30 = (_DAT_0064a660 - _DAT_0066b6c0 * dVar2) * (double)CONCAT44(DAT_0066b6a4,DAT_0066b6a0)
    ;
    if ((DAT_0068c0e8 == 0) && (*(char *)(param_1 + 0x200) != '\0')) goto LAB_0041ace0;
  }
  else {
    dVar2 = _DAT_0064a668;
    if ((_DAT_0064a668 <= dVar1) && (dVar2 = dVar1, _DAT_0064a660 < dVar1)) {
      dVar2 = _DAT_0064a660;
    }
    local_30 = (_DAT_0066b6b8 * dVar2 + _DAT_0064a660) * (double)CONCAT44(DAT_0066b6a4,DAT_0066b6a0)
    ;
    if ((DAT_0068c0e8 == 0) && (*(char *)(param_1 + 0x200) == '\0')) {
LAB_0041ace0:
      FUN_00409f20();
    }
  }
  if (local_30 < (double)CONCAT44(DAT_0066b6cc,DAT_0066b6c8)) {
    local_30 = (double)CONCAT44(DAT_0066b6cc,DAT_0066b6c8);
  }
  *(char *)(param_1 + 0x200) = cVar3;
LAB_0041ad19:
  if (*(int *)(param_1 + 0x5c) == 5) {
    local_30 = _DAT_0066b718 * local_30;
  }
  if ((*(int *)(param_1 + 0x54) != -1) && (iVar4 = FUN_004d89a0(), iVar4 != 0)) {
    fVar8 = (float10)FUN_00401000();
    fVar6 = (float10)_DAT_0068c050;
    if ((float10)_DAT_0064a6c8 < fVar8 - fVar6) {
      local_38 = __ftol();
      local_38 = local_38 + -1;
      if (0 < local_38) {
        do {
          FUN_00488250();
          local_38 = local_38 + -1;
        } while (local_38 != 0);
      }
      fVar7 = (float10)FUN_00488250();
      local_30 = (double)(fVar7 * (float10)local_30);
      if (_DAT_0064a668 < *(double *)(param_1 + 0x3d8)) {
        dVar1 = SQRT(*(double *)(param_1 + 0x170) * *(double *)(param_1 + 0x170) +
                     *(double *)(param_1 + 0x168) * *(double *)(param_1 + 0x168) +
                     *(double *)(param_1 + 0x160) * *(double *)(param_1 + 0x160));
        dVar1 = ((dVar1 * dVar1 * _DAT_0064a6a8) / (*(double *)(param_1 + 0x3d8) + _DAT_0064a5a8)) *
                (double)(fVar8 - fVar6) + dVar1;
        if (dVar1 < local_30) {
          local_30 = dVar1;
        }
      }
    }
  }
  fVar8 = (float10)FUN_00401000();
  fVar6 = (float10)_DAT_0068c050;
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar5 = s_prescribeAdvance_PlayerId_player_0066c548;
  cVar3 = s_prescribeAdvance_PlayerId_player_0066c548[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar3 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar3;
      cVar3 = *pcVar5;
    }
  }
  ExceptionList = local_14;
  return (fVar8 - fVar6) * (float10)local_30;
}

