
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00466050(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  iVar3 = *param_3;
  if (*(double *)(iVar1 + 0x1f8) - *(double *)(iVar2 + 0x1f8) == _DAT_0064a668) {
    if (*(double *)(iVar1 + 0x1f8) - *(double *)(iVar3 + 0x1f8) != _DAT_0064a668) {
      return param_1;
    }
    if (*(double *)(iVar2 + 0x1f8) - *(double *)(iVar3 + 0x1f8) != _DAT_0064a668) {
      return param_3;
    }
  }
  else if (*(double *)(iVar2 + 0x1f8) - *(double *)(iVar3 + 0x1f8) == _DAT_0064a668) {
    if (*(double *)(iVar1 + 0x1f8) - *(double *)(iVar3 + 0x1f8) == _DAT_0064a668) {
      return param_1;
    }
    return param_3;
  }
  return param_2;
}

