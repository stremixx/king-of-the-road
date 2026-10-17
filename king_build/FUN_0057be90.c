
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0057be90(float param_1,float param_2,float param_3,float param_4,float param_5,
                    float param_6)

{
  if (ABS(param_5) <= (float)_DAT_0064b3e8) {
    return (float10)_DAT_0064f46c;
  }
  return -(((float10)param_4 * (float10)param_2 + (float10)param_3 * (float10)param_1 +
           (float10)param_6) / (float10)param_5);
}

