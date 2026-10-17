
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004fea90(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  int local_4;
  
  iVar8 = 0;
  iVar5 = *(int *)(param_1 + 0xdd4);
  iVar7 = 0;
  iVar9 = 0;
  local_4 = 0;
  fVar1 = _DAT_0064b254;
  if (0 < iVar5) {
    piVar4 = (int *)(param_1 + 0x19d4);
    psVar6 = (short *)(param_1 + 0x19a4);
    do {
      if (piVar4[0x78] != 0) {
        iVar9 = iVar9 + 1;
        if (*psVar6 != 0) {
          iVar8 = iVar8 + 1;
        }
        if (*piVar4 != 0) {
          fVar1 = fVar1 + (float)piVar4[0x327];
          iVar7 = iVar7 + 1;
        }
      }
      psVar6 = psVar6 + 1;
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + -1;
      local_4 = iVar7;
    } while (iVar5 != 0);
  }
  fVar2 = *param_2;
  *(undefined4 *)(param_1 + 0x1cb8) = 0x3f800000;
  if ((*(int *)(param_1 + 0x1c1c) == 1) || (iVar8 == iVar9)) {
    fVar2 = *(float *)(param_1 + 0x29d8) * *(float *)(param_1 + 0x1c88) * _DAT_0064c2e8;
  }
  else if ((local_4 == iVar9) && (local_4 != 0)) {
    fVar1 = fVar1 / (float)local_4;
    fVar2 = _DAT_0064b240;
    if ((fVar1 <= _DAT_0064b240) && (fVar2 = fVar1, fVar1 < _DAT_0064b254)) {
      fVar2 = _DAT_0064b254;
    }
    fVar2 = ((_DAT_0064b240 - fVar2) + fVar2) * _DAT_0064c2e8 * *(float *)(param_1 + 0x29d8) *
            *(float *)(param_1 + 0x1c88);
  }
  else if (_DAT_0064b254 <= *param_2) {
    if (*param_2 < *(float *)(param_1 + 0x1c88) * (float)_DAT_0064a6d0) {
      fVar2 = *param_2 / *(float *)(param_1 + 0x1c88);
      fVar2 = fVar2 + fVar2;
      fVar3 = *(float *)(param_1 + 0x29d8) * *(float *)(param_1 + 0x1c88) * (_DAT_0064b240 - fVar2);
      fVar1 = *param_2;
      *(float *)(param_1 + 0x1cb8) = fVar2 + (_DAT_0064b240 - fVar2) * (float)_DAT_0064c0e0;
      fVar2 = fVar2 * fVar1 + fVar3 + fVar3;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1cb8) = 0x3e99999a;
    fVar2 = *(float *)(param_1 + 0x29d8) * *(float *)(param_1 + 0x1c88) * _DAT_0064c2e8;
  }
  param_2 = (float *)fVar2;
  fVar1 = *(float *)(param_1 + 0x1c88) * (float)_DAT_0064c328;
  if ((float)param_2 < fVar1) {
    param_2 = (float *)fVar1;
  }
  FUN_004ea55e(param_2,s_L>correct_tach_filterEngineTach_006737c6 + 2);
  fVar10 = (float10)FUN_004ea828();
  *(float *)(param_1 + 0x1c84) = (float)fVar10;
  return;
}

