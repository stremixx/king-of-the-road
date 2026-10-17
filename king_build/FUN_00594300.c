
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00594300(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (param_2 - *(float *)(param_1 + 0x1c)) / *(float *)(param_1 + 8);
  if (_DAT_0064b240 < fVar1) {
    return 0;
  }
  *(float *)(*(int *)(param_1 + 0x18) + 0x60) = _DAT_0064b240 - fVar1;
  return 1;
}

