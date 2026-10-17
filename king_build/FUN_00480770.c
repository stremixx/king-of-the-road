
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480770(double *param_1)

{
  float10 fVar1;
  
  if ((*(int *)param_1 != -1) || (*(int *)((int)param_1 + 4) != 0x7fefffff)) {
    fVar1 = (float10)FUN_00401000();
    *param_1 = (double)((fVar1 - (float10)_DAT_0068c628) + (float10)*param_1);
  }
  return;
}

