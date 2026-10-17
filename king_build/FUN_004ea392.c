
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004ea392(undefined4 param_1,float param_2)

{
  float10 fVar1;
  
  if (((float)_DAT_0064a648 < param_2) || (param_2 <= _DAT_0064b928)) {
    fVar1 = (float10)_DAT_0064b254;
  }
  else {
    fVar1 = (float10)FUN_0061ee54((double)(param_2 * (float)_DAT_0064c928),param_1);
    fVar1 = (fVar1 + (float10)_DAT_0064a660) * (float10)_DAT_0064a6d0;
  }
  return fVar1;
}

