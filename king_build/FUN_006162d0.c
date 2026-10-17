
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006162d0(int param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x28) * _DAT_0064b248;
  if ((((*(float *)(param_1 + 0x1c) - fVar1 <= *param_2) &&
       (*param_2 <= (fVar1 + *(float *)(param_1 + 0x1c)) - _DAT_0064b3f4)) &&
      (fVar1 = *(float *)(param_1 + 0x2c) * _DAT_0064b248,
      *(float *)(param_1 + 0x20) - fVar1 <= param_2[1])) &&
     (param_2[1] <= (fVar1 + *(float *)(param_1 + 0x20)) - _DAT_0064b3f4)) {
    return 1;
  }
  return 0;
}

