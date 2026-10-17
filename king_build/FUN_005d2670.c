
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d2670(double *param_1,double *param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)thunk_FUN_00603580();
  fVar1 = fVar1 * (float10)_DAT_0064a720 - (float10)*param_1;
  if (fVar1 < (float10)_DAT_0064b254) {
    fVar1 = (float10)_DAT_0064b254;
  }
  *param_2 = (double)(fVar1 + (float10)*param_2);
  *param_1 = (double)fVar1;
  return;
}

