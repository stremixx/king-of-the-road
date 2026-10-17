
void __fastcall FUN_0060ea70(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_c;
  
  iVar4 = param_1[1];
  param_1[2] = 0;
  if (iVar4 == 0) {
    return;
  }
  iVar5 = *param_1;
  if (iVar5 == 0) {
    param_1[1] = 0;
    *param_1 = iVar4;
    return;
  }
  if (*(int *)(iVar5 + 8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar5 + 8) + -4;
  }
  if (*(int *)(iVar4 + 8) == 0) {
    local_c = 0;
  }
  else {
    local_c = *(int *)(iVar4 + 8) + -4;
  }
  do {
    if (*(float *)(iVar4 + 0x1c) < *(float *)(iVar5 + 0x1c)) {
      do {
        if (iVar5 == iVar3) {
          if (*param_1 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *param_1 + 4;
          }
          if (local_c == 0) goto LAB_0060eba2;
          piVar6 = (int *)(local_c + 4);
          goto LAB_0060eba4;
        }
        if (*(int *)(iVar5 + 4) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iVar5 + 4) + -4;
        }
      } while (*(float *)(iVar4 + 0x1c) < *(float *)(iVar5 + 0x1c));
    }
    iVar2 = iVar4;
    if (*(float *)(iVar5 + 0x1c) <= *(float *)(iVar4 + 0x1c)) {
      do {
        if (iVar2 == local_c) {
          if (iVar5 == *param_1) {
            *param_1 = iVar4;
          }
          if (iVar5 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 + 4;
          }
          if (local_c == 0) {
LAB_0060eba2:
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)(local_c + 4);
          }
LAB_0060eba4:
          if (iVar4 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = iVar4 + 4;
          }
          *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar5 + 4);
          *piVar6 = iVar5;
          **(int **)(iVar5 + 4) = iVar4;
          *(int **)(iVar5 + 4) = piVar6;
          param_1[1] = 0;
          return;
        }
        if (*(int *)(iVar2 + 4) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + 4) + -4;
        }
      } while (*(float *)(iVar5 + 0x1c) <= *(float *)(iVar2 + 0x1c));
    }
    if (iVar5 == *param_1) {
      *param_1 = iVar4;
    }
    if (iVar5 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar5 + 4;
    }
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 4;
    }
    piVar6 = *(int **)(iVar2 + 8);
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar1 + 4);
    *piVar6 = iVar1;
    **(int **)(iVar1 + 4) = iVar4;
    *(int **)(iVar1 + 4) = piVar6;
    iVar4 = iVar2;
  } while( true );
}

