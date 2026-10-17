
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00433320(double param_1,double param_2,double param_3)

{
  double *pdVar1;
  double local_20 [2];
  double local_10;
  
  pdVar1 = local_20;
  local_20[0] = SQRT((param_1 - _DAT_0064a8d0) * (param_1 - _DAT_0064a8d0) +
                     (param_3 - _DAT_0064a778) * (param_3 - _DAT_0064a778) +
                     (param_2 - _DAT_0064a8c8) * (param_2 - _DAT_0064a8c8));
  local_10 = param_2 - _DAT_0064a8b8;
  if (SQRT((param_1 - _DAT_0064a8c0) * (param_1 - _DAT_0064a8c0) +
           (param_3 - _DAT_0064a6e0) * (param_3 - _DAT_0064a6e0) + local_10 * local_10) <=
      local_20[0]) {
    pdVar1 = &param_1;
  }
  return (float10)*pdVar1;
}

