
void FUN_0045c320(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  if ((int)((int)param_2 - (int)param_1 & 0xfffffffcU) < 0x41) {
    piVar6 = param_1;
    if (param_1 != param_2) {
      while (piVar3 = piVar6 + 1, piVar3 != param_2) {
        iVar2 = *piVar3;
        if (*(int *)(iVar2 + 0x18) < *(int *)(*param_1 + 0x18)) {
          iVar5 = (int)piVar3 - (int)param_1 >> 2;
          if (0 < iVar5) {
            piVar4 = piVar6 + 2;
            do {
              piVar1 = (int *)((int)piVar3 + (-4 - (int)(piVar6 + 2)) + (int)piVar4);
              piVar4 = piVar4 + -1;
              iVar5 = iVar5 + -1;
              *piVar4 = *piVar1;
            } while (iVar5 != 0);
          }
          *param_1 = iVar2;
          piVar6 = piVar3;
        }
        else {
          iVar5 = *piVar6;
          piVar6 = piVar3;
          piVar4 = piVar3;
          if (*(int *)(iVar2 + 0x18) < *(int *)(iVar5 + 0x18)) {
            do {
              piVar4 = piVar6 + -1;
              *piVar6 = iVar5;
              iVar5 = piVar6[-2];
              piVar6 = piVar4;
            } while (*(int *)(iVar2 + 0x18) < *(int *)(iVar5 + 0x18));
          }
          *piVar4 = iVar2;
          piVar6 = piVar3;
        }
      }
    }
  }
  else {
    if ((param_1 != param_1 + 0x10) && (piVar6 = param_1 + 1, piVar6 != param_1 + 0x10)) {
      do {
        iVar2 = *piVar6;
        if (*(int *)(iVar2 + 0x18) < *(int *)(*param_1 + 0x18)) {
          iVar5 = (int)piVar6 - (int)param_1 >> 2;
          if (0 < iVar5) {
            piVar3 = piVar6 + 1;
            do {
              piVar4 = (int *)((int)piVar6 + (-4 - (int)(piVar6 + 1)) + (int)piVar3);
              piVar3 = piVar3 + -1;
              iVar5 = iVar5 + -1;
              *piVar3 = *piVar4;
            } while (iVar5 != 0);
          }
          *param_1 = iVar2;
        }
        else {
          iVar5 = piVar6[-1];
          piVar3 = piVar6;
          piVar4 = piVar6;
          if (*(int *)(iVar2 + 0x18) < *(int *)(iVar5 + 0x18)) {
            do {
              piVar4 = piVar3 + -1;
              *piVar3 = iVar5;
              iVar5 = piVar3[-2];
              piVar3 = piVar4;
            } while (*(int *)(iVar2 + 0x18) < *(int *)(iVar5 + 0x18));
          }
          *piVar4 = iVar2;
        }
        piVar6 = piVar6 + 1;
      } while (piVar6 != param_1 + 0x10);
    }
    param_1 = param_1 + 0x10;
    if (param_1 != param_2) {
      do {
        iVar2 = *param_1;
        iVar5 = param_1[-1];
        piVar6 = param_1;
        piVar3 = param_1;
        if (*(int *)(iVar2 + 0x18) < *(int *)(iVar5 + 0x18)) {
          do {
            piVar3 = piVar6 + -1;
            *piVar6 = iVar5;
            iVar5 = piVar6[-2];
            piVar6 = piVar3;
          } while (*(int *)(iVar2 + 0x18) < *(int *)(iVar5 + 0x18));
        }
        param_1 = param_1 + 1;
        *piVar3 = iVar2;
      } while (param_1 != param_2);
      return;
    }
  }
  return;
}

