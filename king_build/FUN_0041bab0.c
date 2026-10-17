
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041bab0(undefined4 param_1,double *param_2,double *param_3,double *param_4,int param_5)

{
  double dVar1;
  
  FUN_0041b970(param_1,param_2,param_3);
  dVar1 = (*param_3 * *(double *)(param_5 + 0x10)) / *(double *)(param_5 + 0x18);
  if (dVar1 < *param_2) {
    *param_2 = dVar1;
  }
  dVar1 = (*(double *)(param_5 + 0x18) * *param_2) / *(double *)(param_5 + 0x10);
  if (dVar1 < *param_3) {
    *param_3 = dVar1;
  }
  *param_2 = *param_2 * _DAT_0064a6e8;
  *param_3 = *param_3 * _DAT_0064a6e8;
  *param_4 = *param_2 / *(double *)(param_5 + 0x10);
  return;
}

