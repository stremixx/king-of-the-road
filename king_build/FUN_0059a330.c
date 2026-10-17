
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0059a330(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  
  fVar1 = (_DAT_0064b240 -
          (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x54)) / *(float *)(param_1 + 0x50)) *
          _DAT_0064b24c;
  if (_DAT_0064b24c < fVar1) {
    fVar1 = _DAT_0064b24c;
  }
  *(float *)(*(int *)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x58) * 4) + 0x58) = fVar1;
  FUN_0059a090(param_2,param_3);
  return;
}

