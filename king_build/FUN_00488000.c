
double * __thiscall FUN_00488000(double *param_1,double *param_2)

{
  if (*param_2 < *param_1) {
    *param_1 = *param_2;
  }
  if (param_2[1] < param_1[1]) {
    param_1[1] = param_2[1];
  }
  if (param_2[2] < param_1[2]) {
    param_1[2] = param_2[2];
  }
  if (param_1[3] < *param_2) {
    param_1[3] = *param_2;
  }
  if (param_1[4] < param_2[1]) {
    param_1[4] = param_2[1];
  }
  if (param_1[5] < param_2[2]) {
    param_1[5] = param_2[2];
  }
  return param_1;
}

