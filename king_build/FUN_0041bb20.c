
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041bb20(undefined4 param_1,double *param_2,double *param_3,double *param_4,int param_5)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  undefined4 extraout_var;
  double *pdVar4;
  double *pdVar5;
  
  pdVar3 = param_3;
  pdVar2 = param_2;
  pdVar4 = param_2;
  pdVar5 = param_3;
  FUN_0041d3f0(&param_1);
  FUN_0041b9e0(extraout_var,pdVar4,pdVar5);
  dVar1 = (*pdVar3 * *(double *)(param_5 + 0x10)) / *(double *)(param_5 + 0x18);
  if (dVar1 < *pdVar2) {
    *pdVar2 = dVar1;
  }
  dVar1 = (*(double *)(param_5 + 0x18) * *pdVar2) / *(double *)(param_5 + 0x10);
  if (dVar1 < *pdVar3) {
    *pdVar3 = dVar1;
  }
  *pdVar2 = *pdVar2 * _DAT_0064a6e8;
  *pdVar3 = *pdVar3 * _DAT_0064a6e8;
  *param_4 = *pdVar2 / *(double *)(param_5 + 0x10);
  return;
}

