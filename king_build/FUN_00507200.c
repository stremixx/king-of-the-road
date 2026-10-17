
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00507200(int param_1,undefined4 param_2,int *param_3,float *param_4,float *param_5,
                    float *param_6)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00506f90(param_1,param_2,param_3,param_4);
  *param_5 = (float)fVar1;
  if (fVar1 <= (float10)_DAT_0064b254) {
    return (float10)_DAT_0064b254;
  }
  fVar1 = (float10)(float)(&DAT_00696834)[param_1 * 0x25c] /
          ((fVar1 * (float10)(float)(&DAT_00696838)[param_1 * 0x25c] * (float10)_DAT_0064cab8) /
          ((float10)*param_4 / (float10)(float)(&DAT_006968d4)[param_1 * 0x25c]));
  *param_3 = *param_3 + -1;
  *param_6 = (float)((float10)(float)(&DAT_00696834)[param_1 * 0x25c] / fVar1);
  return fVar1;
}

