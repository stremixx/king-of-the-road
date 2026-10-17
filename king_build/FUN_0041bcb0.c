
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041bcb0(undefined4 param_1,double *param_2,double *param_3,double *param_4,int param_5,
                 int param_6)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  undefined4 extraout_var;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double local_18;
  double local_10;
  
  pdVar3 = param_3;
  pdVar2 = param_2;
  pdVar4 = param_2;
  pdVar5 = param_3;
  FUN_0041d3f0(&param_1);
  FUN_0041b9e0(extraout_var,pdVar4,pdVar5);
  if (param_6 != -1) {
    FUN_0041b900(param_6,pdVar2,pdVar3);
  }
  pdVar4 = &local_10;
  pdVar5 = &local_18;
  pdVar6 = pdVar4;
  FUN_0041d3f0(&param_1);
  FUN_0041bba0(pdVar4,pdVar5,pdVar6);
  *pdVar2 = *pdVar2 - local_18;
  dVar1 = *pdVar3;
  *pdVar3 = dVar1 - local_10;
  dVar1 = ((dVar1 - local_10) * *(double *)(param_5 + 0x10)) / *(double *)(param_5 + 0x18);
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

