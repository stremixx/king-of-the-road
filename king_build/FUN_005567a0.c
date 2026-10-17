
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_005567a0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 1.0;
  local_4 = (float)*(int *)(param_1 + 0x5080);
  if (*(float *)(param_1 + 0x224) < (float)_DAT_0064a6d0) {
    if (_DAT_0064b254 <= *(float *)(param_1 + 0x224)) {
      local_4 = *(float *)(param_1 + 0x224) + *(float *)(param_1 + 0x224);
    }
    else {
      local_4 = 0.0;
    }
  }
  iVar10 = FUN_00549300();
  if (iVar10 != 0) {
    local_8 = 0.0;
  }
  fVar11 = (float10)local_4;
  if ((float10)local_8 < fVar11) {
    fVar11 = (float10)local_8;
  }
  iVar10 = *(int *)(param_1 + 0x2540);
  fVar12 = (float10)_DAT_0064a660 -
           ABS((float10)*(int *)(iVar10 + 4) / (float10)*(int *)(iVar10 + 8)) *
           (float10)_DAT_0064a5a8;
  fVar1 = (float)fVar12;
  if (fVar12 < fVar11) {
    fVar11 = (float10)fVar1;
  }
  fVar12 = (float10)_DAT_0064a660 -
           ABS((float10)*(int *)(iVar10 + 0x18) / (float10)*(int *)(iVar10 + 0x1c)) *
           (float10)_DAT_0064a6d0;
  fVar2 = (float)fVar12;
  if (fVar12 < fVar11) {
    fVar11 = (float10)fVar2;
  }
  fVar12 = (float10)_DAT_0064a660 -
           ABS((float10)*(int *)(iVar10 + 0x2c) / (float10)*(int *)(iVar10 + 0x30)) *
           (float10)_DAT_0064a6d0;
  fVar3 = (float)fVar12;
  if (fVar12 < fVar11) {
    fVar11 = (float10)fVar3;
  }
  fVar12 = (float10)_DAT_0064a660 -
           ABS((float10)*(int *)(iVar10 + 0x40) / (float10)*(int *)(iVar10 + 0x44)) *
           (float10)_DAT_0064a6d0;
  fVar4 = (float)fVar12;
  if (fVar12 < fVar11) {
    fVar11 = (float10)fVar4;
  }
  fVar12 = (float10)_DAT_0064a660 -
           ABS((float10)*(int *)(iVar10 + 0x54) / (float10)*(int *)(iVar10 + 0x58)) *
           (float10)_DAT_0064c308;
  fVar5 = (float)fVar12;
  if (fVar12 < fVar11) {
    fVar11 = (float10)fVar5;
  }
  fVar12 = (float10)_DAT_0064a660 -
           ABS((float10)*(int *)(iVar10 + 0x68) / (float10)*(int *)(iVar10 + 0x6c)) *
           (float10)_DAT_0064c308;
  fVar6 = (float)fVar12;
  if (fVar12 < fVar11) {
    fVar11 = (float10)fVar6;
  }
  fVar12 = (float10)_DAT_0064a660 -
           ABS((float10)*(int *)(iVar10 + 0x7c) / (float10)*(int *)(iVar10 + 0x80)) *
           (float10)_DAT_0064c0e0;
  fVar7 = (float)fVar12;
  if (fVar12 < fVar11) {
    fVar11 = (float10)fVar7;
  }
  fVar12 = (float10)_DAT_0064a660 -
           ABS((float10)*(int *)(iVar10 + 0x90) / (float10)*(int *)(iVar10 + 0x94)) *
           (float10)_DAT_0064c0e0;
  fVar8 = (float)fVar12;
  if (fVar12 < fVar11) {
    fVar11 = (float10)fVar8;
  }
  fVar12 = (float10)_DAT_0064a660 -
           ABS((float10)*(int *)(iVar10 + 0xa4) / (float10)*(int *)(iVar10 + 0xa8)) *
           (float10)_DAT_0064c0e0;
  fVar9 = (float)fVar12;
  if (fVar12 < fVar11) {
    fVar11 = (float10)fVar9;
  }
  fVar12 = ((float10)fVar9 + (float10)_DAT_0064b240) *
           (float10)((fVar8 + _DAT_0064b240) *
                     (fVar7 + _DAT_0064b240) *
                     (fVar6 + _DAT_0064b240) *
                     (fVar5 + _DAT_0064b240) *
                     (fVar4 + _DAT_0064b240) *
                     (fVar3 + _DAT_0064b240) *
                     (fVar2 + _DAT_0064b240) * (fVar1 + _DAT_0064b240) * (float)_DAT_0064a6d0 *
                     (float)_DAT_0064a6d0 * (float)_DAT_0064a6d0 * (float)_DAT_0064a6d0 *
                     (float)_DAT_0064a6d0 * (float)_DAT_0064a6d0 * (float)_DAT_0064a6d0 *
                    (float)_DAT_0064a6d0) * (float10)_DAT_0064a6d0;
  if (fVar12 < fVar11) {
    fVar11 = (float10)(float)fVar12;
  }
  if (fVar11 < (float10)_DAT_0064b254) {
    fVar11 = (float10)_DAT_0064b254;
  }
  return fVar11;
}

