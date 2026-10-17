
void FUN_00404d70(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = param_2;
  FUN_00404d60(&param_2,param_2);
  if (param_2 != -1) {
    *param_1 = param_2;
    return;
  }
  piVar1 = *(int **)(iVar2 + 0x20);
  piVar3 = *(int **)(iVar2 + 0x1c);
  if (piVar3 != piVar1) {
    do {
      if (*piVar3 != -1) break;
      piVar3 = piVar3 + 4;
    } while (piVar3 != piVar1);
    if (piVar3 != piVar1) {
      *param_1 = *piVar3;
      return;
    }
  }
  *param_1 = -1;
  return;
}

