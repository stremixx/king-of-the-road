
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046ac50(int *param_1,int param_2)

{
  int iVar1;
  
  while( true ) {
    iVar1 = param_1[-1];
    if (*(double *)(param_2 + 0x1f8) - *(double *)(iVar1 + 0x1f8) == _DAT_0064a668) break;
    *param_1 = iVar1;
    param_1 = param_1 + -1;
  }
  *param_1 = param_2;
  return;
}

