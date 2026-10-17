
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00607840(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float local_18;
  
  fVar5 = (float10)_DAT_0064b254;
  fVar1 = *(float *)(param_2 + 0x24) - *(float *)(param_1 + 8);
  fVar2 = *(float *)(param_2 + 0x20) - *(float *)(param_1 + 4);
  local_18 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) - *(float *)(param_2 + 0x28);
  if (local_18 <= _DAT_0064b254) {
LAB_006078cb:
    local_18 = 1000.0;
  }
  else if (_DAT_00651eec < local_18) {
LAB_006079b5:
    local_18 = _DAT_0064f3d0 / local_18;
  }
  else {
    if (local_18 < _DAT_0064b438) goto LAB_006078cb;
    fVar1 = *(float *)(param_2 + 0x20) - *(float *)(param_1 + 4);
    fVar2 = *(float *)(param_2 + 0x24) - *(float *)(param_1 + 8);
    fVar3 = -*(float *)(param_2 + 0x28);
    if ((fVar2 * *(float *)(param_1 + 0x3c) - fVar1 * *(float *)(param_1 + 0x40) < fVar3) ||
       (fVar2 * *(float *)(param_1 + 0x44) - fVar1 * *(float *)(param_1 + 0x48) < fVar3))
    goto LAB_006079b5;
    if (*(uint *)(param_2 + 0x18) < 8) {
      local_18 = _DAT_0064b440 / (local_18 + _DAT_0064b240);
    }
    else if ((local_18 < _DAT_00651ee8) ||
            ((fVar3 <= fVar2 * *(float *)(param_1 + 0x4c) - fVar1 * *(float *)(param_1 + 0x50) &&
             (fVar3 <= fVar2 * *(float *)(param_1 + 0x54) - fVar1 * *(float *)(param_1 + 0x58))))) {
      local_18 = *(float *)(param_2 + 0x14) / local_18 + _DAT_0064b738;
    }
    else {
      local_18 = (*(float *)(param_2 + 0x14) / local_18 + _DAT_0064b738) * _DAT_0064b248;
    }
  }
  if (param_3 == 0) goto LAB_00607aff;
  fVar1 = *(float *)(param_3 + 0x24) - *(float *)(param_1 + 8);
  fVar2 = *(float *)(param_3 + 0x20) - *(float *)(param_1 + 4);
  fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) - *(float *)(param_3 + 0x28);
  if (fVar1 <= _DAT_0064b254) {
LAB_00607a53:
    fVar5 = (float10)_DAT_0064c7a8;
  }
  else {
    if (fVar1 <= _DAT_00651eec) {
      if (fVar1 < _DAT_0064b438) goto LAB_00607a53;
      iVar4 = FUN_00607b20(*(float *)(param_1 + 4),*(float *)(param_1 + 8),
                           *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                           *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
      if (iVar4 != 0) {
        if (*(uint *)(param_3 + 0x18) < 8) {
          fVar5 = (float10)_DAT_0064b440 / ((float10)fVar1 + (float10)_DAT_0064b240);
        }
        else if (((float10)fVar1 < (float10)_DAT_00651ee8) ||
                (iVar4 = FUN_00607b20(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                                      *(undefined4 *)(param_1 + 0x4c),
                                      *(undefined4 *)(param_1 + 0x50),
                                      *(undefined4 *)(param_1 + 0x54),
                                      *(undefined4 *)(param_1 + 0x58)), iVar4 != 0)) {
          fVar5 = (float10)*(float *)(param_3 + 0x14) / (float10)fVar1 + (float10)_DAT_0064b738;
        }
        else {
          fVar5 = ((float10)*(float *)(param_3 + 0x14) / (float10)fVar1 + (float10)_DAT_0064b738) *
                  (float10)_DAT_0064b248;
        }
        goto LAB_00607aff;
      }
    }
    fVar5 = (float10)_DAT_0064f3d0 / (float10)fVar1;
  }
LAB_00607aff:
  if (fVar5 < (float10)local_18) {
    fVar5 = (float10)local_18;
  }
  return fVar5;
}

