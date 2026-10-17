
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00466100(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  while( true ) {
    while (*(double *)(*param_1 + 0x1f8) - *(double *)(param_3 + 0x1f8) != _DAT_0064a668) {
      param_1 = param_1 + 1;
    }
    do {
      piVar1 = param_2 + -1;
      param_2 = param_2 + -1;
    } while (*(double *)(param_3 + 0x1f8) - *(double *)(*piVar1 + 0x1f8) != _DAT_0064a668);
    if (param_2 <= param_1) break;
    iVar2 = *param_1;
    *param_1 = *param_2;
    *param_2 = iVar2;
    param_1 = param_1 + 1;
  }
  return param_1;
}

