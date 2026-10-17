
void FUN_00411a70(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = param_2[2];
  dVar2 = param_3[2];
  dVar3 = param_2[1];
  dVar4 = param_3[1];
  *param_1 = *param_2 + *param_3;
  param_1[1] = dVar4 + dVar3;
  param_1[2] = dVar2 + dVar1;
  return;
}

