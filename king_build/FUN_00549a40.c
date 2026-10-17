
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00549a40(float param_1)

{
  if (param_1 < _DAT_0064b310) {
    return (float10)_DAT_0064b328;
  }
  if (_DAT_0064b31c < param_1) {
    return (float10)_DAT_0064b240;
  }
  return ((float10)param_1 - (float10)_DAT_0064b310) * (float10)_DAT_0064c9a0 +
         (float10)_DAT_0064c0e0;
}

