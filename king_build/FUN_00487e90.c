
void FUN_00487e90(undefined4 *param_1,double *param_2,double *param_3)

{
  int iVar1;
  double *pdVar2;
  double local_18;
  double local_10;
  double local_8;
  
  local_18 = param_2[1] * param_3[2] - param_2[2] * param_3[1];
  local_10 = param_2[2] * *param_3 - *param_2 * param_3[2];
  local_8 = param_3[1] * *param_2 - *param_3 * param_2[1];
  pdVar2 = &local_18;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    param_1 = param_1 + 1;
  }
  return;
}

