
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall
FUN_005614d0(int param_1,float param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar1 = param_3;
  if (_DAT_0067a1dc < param_3) {
    fVar1 = _DAT_0067a1dc;
  }
  fVar4 = (float10)fVar1;
  if (fVar4 < (float10)-_DAT_0067a1dc) {
    fVar4 = (float10)-_DAT_0067a1dc;
  }
  fVar4 = (float10)fsin(fVar4);
  *param_5 = (float)(fVar4 * (float10)_DAT_0067a1d8);
  fVar1 = *(float *)(param_1 + 100) * *param_4 +
          *(float *)(param_1 + 0x68) * param_4[1] + *(float *)(param_1 + 0x6c) * param_4[2];
  fVar2 = _DAT_0064b240;
  if (((fVar1 < _DAT_0064b254 != _DAT_0064b254 < *(float *)(param_1 + 0x80)) &&
      (fVar1 = ABS(fVar1), (float)_DAT_0064a6c0 <= fVar1)) &&
     (fVar2 = _DAT_0064b254, fVar1 < (float)_DAT_0064c0b0)) {
    fVar2 = (float)_DAT_0064a660 - (fVar1 - (float)_DAT_0064a6c0) * (float)_DAT_0064ecb0;
  }
  fVar3 = (_DAT_0067a1c8 - DAT_0067a1c0) * fVar2 + DAT_0067a1c0;
  fVar1 = (fVar2 * *(float *)(param_1 + 0x80) * param_2 * _DAT_0064c2e8 +
          param_2 * *(float *)(param_1 + 0x80) + param_3) * *(float *)(param_1 + 0xc9c);
  fVar4 = (float10)fVar3;
  if ((fVar1 <= fVar3) && (fVar4 = -fVar4, fVar4 <= (float10)fVar1)) {
    fVar4 = (float10)fVar1;
  }
  return fVar4;
}

