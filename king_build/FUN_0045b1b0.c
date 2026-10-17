
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045b1b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,double *param_4)

{
  while ((param_2 != param_3 &&
         (_DAT_0064a5a8 <=
          SQRT((*param_4 - *(double *)(param_2 + 4)) * (*param_4 - *(double *)(param_2 + 4)) +
               (param_4[2] - *(double *)(param_2 + 8)) * (param_4[2] - *(double *)(param_2 + 8)) +
               (param_4[1] - *(double *)(param_2 + 6)) * (param_4[1] - *(double *)(param_2 + 6))))))
  {
    param_2 = (undefined4 *)*param_2;
  }
  *param_1 = param_2;
  return;
}

