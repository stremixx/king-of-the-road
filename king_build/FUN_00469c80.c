
void FUN_00469c80(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_c;
  
  local_c = (int)param_2 - (int)param_1;
  if (param_3 <= local_c >> 2) {
    piVar6 = param_1;
    do {
      piVar6 = piVar6 + param_3;
      if (param_1 != piVar6) {
        for (piVar4 = piVar6 + (1 - param_3); piVar4 != piVar6; piVar4 = piVar4 + 1) {
          iVar1 = *piVar4;
          if (*(int *)(iVar1 + 0x1c) < *(int *)(*param_1 + 0x1c)) {
            iVar3 = (int)piVar4 - (int)param_1 >> 2;
            if (0 < iVar3) {
              piVar2 = piVar4 + 1;
              do {
                piVar5 = (int *)((int)piVar4 + (-4 - (int)(piVar4 + 1)) + (int)piVar2);
                piVar2 = piVar2 + -1;
                iVar3 = iVar3 + -1;
                *piVar2 = *piVar5;
              } while (iVar3 != 0);
            }
            *param_1 = iVar1;
          }
          else {
            iVar3 = piVar4[-1];
            piVar2 = piVar4;
            piVar5 = piVar4;
            if (*(int *)(iVar1 + 0x1c) < *(int *)(iVar3 + 0x1c)) {
              do {
                piVar5 = piVar2 + -1;
                *piVar2 = iVar3;
                iVar3 = piVar2[-2];
                piVar2 = piVar5;
              } while (*(int *)(iVar1 + 0x1c) < *(int *)(iVar3 + 0x1c));
            }
            *piVar5 = iVar1;
          }
        }
      }
      param_1 = param_1 + param_3;
      local_c = local_c + param_3 * -4;
    } while (param_3 <= local_c >> 2);
  }
  piVar6 = param_1;
  if (param_1 != param_2) {
    while (piVar4 = piVar6 + 1, piVar4 != param_2) {
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x1c) < *(int *)(*param_1 + 0x1c)) {
        iVar3 = (int)piVar4 - (int)param_1 >> 2;
        if (0 < iVar3) {
          piVar2 = piVar6 + 2;
          do {
            piVar5 = (int *)((int)piVar4 + (-4 - (int)(piVar6 + 2)) + (int)piVar2);
            piVar2 = piVar2 + -1;
            iVar3 = iVar3 + -1;
            *piVar2 = *piVar5;
          } while (iVar3 != 0);
        }
        *param_1 = iVar1;
        piVar6 = piVar4;
      }
      else {
        iVar3 = *piVar6;
        piVar6 = piVar4;
        piVar2 = piVar4;
        if (*(int *)(iVar1 + 0x1c) < *(int *)(iVar3 + 0x1c)) {
          do {
            piVar2 = piVar6 + -1;
            *piVar6 = iVar3;
            iVar3 = piVar6[-2];
            piVar6 = piVar2;
          } while (*(int *)(iVar1 + 0x1c) < *(int *)(iVar3 + 0x1c));
        }
        *piVar2 = iVar1;
        piVar6 = piVar4;
      }
    }
  }
  return;
}

