
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0057bed0(float param_1,undefined4 param_2,float *param_3)

{
  if (ABS(param_3[2]) <= (float)_DAT_0064b3e8) {
    return (float10)_DAT_0064f46c;
  }
  return -(((float10)param_1 * (float10)*param_3 + (float10)param_3[3] + (float10)param_3[1]) /
          (float10)param_3[2]);
}

