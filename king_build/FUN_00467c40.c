
void FUN_00467c40(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = param_1;
  if (param_1 != param_2) {
    while (piVar2 = piVar2 + 1, piVar2 != param_2) {
      iVar1 = *piVar2;
      if (*(int *)(iVar1 + 0x1c) < *(int *)(*param_1 + 0x1c)) {
        iVar4 = (int)piVar2 - (int)param_1 >> 2;
        if (0 < iVar4) {
          piVar3 = piVar2 + 1;
          do {
            piVar5 = (int *)((int)piVar2 + (-4 - (int)(piVar2 + 1)) + (int)piVar3);
            piVar3 = piVar3 + -1;
            iVar4 = iVar4 + -1;
            *piVar3 = *piVar5;
          } while (iVar4 != 0);
        }
        *param_1 = iVar1;
      }
      else {
        iVar4 = piVar2[-1];
        piVar3 = piVar2;
        piVar5 = piVar2;
        if (*(int *)(iVar1 + 0x1c) < *(int *)(iVar4 + 0x1c)) {
          do {
            piVar5 = piVar3 + -1;
            *piVar3 = iVar4;
            iVar4 = piVar3[-2];
            piVar3 = piVar5;
          } while (*(int *)(iVar1 + 0x1c) < *(int *)(iVar4 + 0x1c));
        }
        *piVar5 = iVar1;
      }
    }
  }
  return;
}

