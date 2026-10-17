
void __thiscall FUN_0060ed70(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    if (param_2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_2 + 4;
    }
    if (*(int *)(iVar2 + 4) == iVar3) {
      if (param_2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_2 + 4;
      }
      if (*(int *)(iVar2 + 8) == iVar3) {
        if (iVar2 == param_2) {
          *param_1 = 0;
        }
        else {
          *(int *)(iVar2 + 8) = iVar2 + 4;
          *(int *)(*param_1 + 4) = iVar2 + 4;
        }
        if (param_2 != 0) {
          *(int *)(param_2 + 8) = param_2 + 4;
          *(int *)(param_2 + 4) = param_2 + 4;
          return;
        }
        goto LAB_0060ee7c;
      }
    }
  }
  iVar3 = param_1[1];
  if (iVar3 != 0) {
    if (param_2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_2 + 4;
    }
    if (*(int *)(iVar3 + 4) == iVar4) {
      if (param_2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_2 + 4;
      }
      if (*(int *)(iVar3 + 8) == iVar4) {
        if (iVar3 == param_2) {
          param_1[1] = 0;
        }
        else {
          *(int *)(iVar3 + 8) = iVar3 + 4;
          *(int *)(param_1[1] + 4) = iVar3 + 4;
        }
        if (param_2 != 0) {
          *(int *)(param_2 + 8) = param_2 + 4;
          *(int *)(param_2 + 4) = param_2 + 4;
          return;
        }
        goto LAB_0060ee7c;
      }
    }
  }
  if (iVar2 == param_2) {
    if (*(int *)(param_2 + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + 4) + -4;
    }
    *param_1 = iVar2;
  }
  if (iVar3 == param_2) {
    if (*(int *)(param_2 + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + 4) + -4;
    }
    param_1[1] = iVar2;
  }
  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(param_2 + 4);
  }
  *(int *)(*piVar1 + 4) = piVar1[1];
  *(int *)piVar1[1] = *piVar1;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = param_2 + 4;
    *(int *)(param_2 + 4) = param_2 + 4;
    return;
  }
LAB_0060ee7c:
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  return;
}

