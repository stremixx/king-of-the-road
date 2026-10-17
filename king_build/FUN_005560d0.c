
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005560d0(int param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  
  if (_DAT_0064b254 < param_2) {
    if (_DAT_0064b240 < param_2) {
      param_2 = 1.0;
    }
    *param_3 = param_2 * *(float *)(param_1 + 0x24);
    *param_4 = param_2 * *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) - *param_3;
    fVar1 = *(float *)(param_1 + 0x18) - *param_4;
    *(float *)(param_1 + 0x18) = fVar1;
    if (fVar1 < *(float *)(param_1 + 0x1c)) {
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x1c) - fVar1;
    }
  }
  return;
}

