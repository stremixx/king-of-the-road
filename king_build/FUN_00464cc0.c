
void FUN_00464cc0(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  while( true ) {
    iVar1 = *(int *)(*param_1 + 0x18);
    while (iVar1 < *(int *)(param_3 + 0x18)) {
      piVar2 = param_1 + 1;
      param_1 = param_1 + 1;
      iVar1 = *(int *)(*piVar2 + 0x18);
    }
    iVar1 = *(int *)(param_2[-1] + 0x18);
    piVar2 = param_2;
    while (param_2 = piVar2 + -1, *(int *)(param_3 + 0x18) < iVar1) {
      iVar1 = *(int *)(piVar2[-2] + 0x18);
      piVar2 = param_2;
    }
    if (param_2 <= param_1) break;
    iVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = iVar1;
    param_1 = param_1 + 1;
  }
  return;
}

