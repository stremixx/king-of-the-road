
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005fc3b0(undefined4 param_1,float param_2)

{
  float fVar1;
  float10 fVar2;
  float fVar3;
  
  if (DAT_00722a88 != 0) {
    fVar2 = (float10)FUN_006047b0(param_1);
    fVar3 = (float)(fVar2 * (float10)_DAT_00651da8);
    fVar1 = _DAT_0064b240;
    if ((param_2 <= _DAT_0064b240) && (fVar1 = param_2, param_2 < _DAT_0064b254)) {
      fVar1 = _DAT_0064b254;
    }
    FUN_00604770(fVar1 * (float)_DAT_0064ca48);
    return (float10)fVar3;
  }
  return (float10)param_2;
}

