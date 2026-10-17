
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00555e90(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  if ((_DAT_0064b254 < *param_2) && (_DAT_0064b254 < *param_3)) {
    fVar1 = *param_3;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (fVar1 < *(float *)(param_1 + 0x1c)) {
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x1c) - fVar1;
    }
    fVar1 = fVar1 + *(float *)(param_1 + 0x20);
    fVar2 = *(float *)(param_1 + 0x14) / *param_2;
    fVar3 = *(float *)(param_1 + 0x10) / fVar1;
    if ((fVar2 < _DAT_0064b240) || (fVar4 = _DAT_0064b240, fVar3 < _DAT_0064b240)) {
      if (fVar3 <= fVar2) {
        uVar5 = 2;
        fVar4 = fVar3;
      }
      else {
        uVar5 = 1;
        fVar4 = fVar2;
      }
    }
    *(float *)(param_1 + 0x24) = fVar4 * *param_2;
    fVar1 = fVar4 * fVar1 - *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x18) = fVar1;
    if (*(float *)(param_1 + 0x14) < *(float *)(param_1 + 0x24)) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x14);
    }
    if (*(float *)(param_1 + 0x10) < fVar1) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x10);
    }
    *param_2 = *param_2 - *(float *)(param_1 + 0x24);
    *param_3 = *param_3 - *(float *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x28) = 0;
    return uVar5;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return 0;
}

