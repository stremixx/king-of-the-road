
void FUN_00469c20(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *param_2;
  if (*(int *)(iVar1 + 0x1c) < *(int *)(*param_1 + 0x1c)) {
    iVar3 = (int)param_2 - (int)param_1 >> 2;
    if (0 < iVar3) {
      piVar2 = param_2 + 1;
      do {
        piVar4 = (int *)((int)param_2 + (-4 - (int)(param_2 + 1)) + (int)piVar2);
        piVar2 = piVar2 + -1;
        iVar3 = iVar3 + -1;
        *piVar2 = *piVar4;
      } while (iVar3 != 0);
    }
    *param_1 = iVar1;
    return;
  }
  iVar3 = param_2[-1];
  piVar2 = param_2 + -1;
  piVar4 = param_2;
  if (*(int *)(iVar1 + 0x1c) < *(int *)(iVar3 + 0x1c)) {
    do {
      param_2 = piVar2;
      *piVar4 = iVar3;
      iVar3 = param_2[-1];
      piVar2 = param_2 + -1;
      piVar4 = param_2;
    } while (*(int *)(iVar1 + 0x1c) < *(int *)(iVar3 + 0x1c));
  }
  *param_2 = iVar1;
  return;
}

