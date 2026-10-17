
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004715b0(int param_1,double param_2,char param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)*(double *)(param_1 + 0x40);
  if ((((param_3 != '\0') && (param_2 == _DAT_0064a668)) && ((float10)_DAT_0064a668 < fVar1)) &&
     (*(int *)(param_1 + 0x68) == 1)) {
    fVar1 = fVar1 * (float10)_DAT_0066e878;
  }
  return fVar1;
}

