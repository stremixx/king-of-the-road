
void __thiscall FUN_00488250(double *param_1,double param_2)

{
  double dVar1;
  
  dVar1 = param_1[4];
  param_1[4] = param_1[3];
  param_1[3] = param_2 * *param_1 + dVar1 * param_1[2] + param_1[3] * param_1[1];
  return;
}

