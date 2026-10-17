
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004eafa0(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = _DAT_0064b240 - param_2 * *(float *)(param_1 + 0x18 + *(int *)(param_1 + 0x28) * 4);
  *(float *)(param_1 + 0x24) = fVar1;
  if (_DAT_0064b240 < fVar1) {
    *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  }
  if (*(float *)(param_1 + 0x24) < _DAT_0064b254) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

