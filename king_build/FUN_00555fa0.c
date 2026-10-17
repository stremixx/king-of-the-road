
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00555fa0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((_DAT_0064b254 < *param_2) && (_DAT_0064b254 < *param_3)) {
    if (*param_3 <= *(float *)(param_1 + 0x1c)) {
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) - *param_3;
      *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + *param_3;
      *param_3 = 0.0;
    }
    else {
      *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x20);
      *param_3 = *param_3 - *(float *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    fVar1 = (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x24)) / *param_2;
    fVar2 = (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x18)) / *param_3;
    if ((fVar1 < _DAT_0064b240) || (fVar3 = _DAT_0064b240, fVar2 < _DAT_0064b240)) {
      if (fVar2 <= fVar1) {
        uVar4 = 2;
        fVar3 = fVar2;
      }
      else {
        uVar4 = 1;
        fVar3 = fVar1;
      }
    }
    *(float *)(param_1 + 0x24) = fVar3 * *param_2 + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x18) = fVar3 * *param_3 + *(float *)(param_1 + 0x18);
    if (*(float *)(param_1 + 0x14) < *(float *)(param_1 + 0x24)) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x14);
    }
    if (*(float *)(param_1 + 0x10) < *(float *)(param_1 + 0x18)) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *param_2 = *param_2 - fVar3 * *param_2;
    *param_3 = *param_3 - fVar3 * *param_3;
    return uVar4;
  }
  return 0;
}

