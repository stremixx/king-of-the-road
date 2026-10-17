
void __thiscall FUN_00605980(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 != *(int *)(param_1 + 0x28)) goto LAB_006059d8;
  piVar1 = *(int **)(param_1 + 0x20);
  if (*piVar1 == 0) {
LAB_006059af:
    if (piVar1[1] == 0) {
LAB_006059c6:
      if (*(int *)(param_2 + 4) != 0) {
        iVar2 = *(int *)(param_2 + 4) + -4;
        goto LAB_006059d4;
      }
    }
    else {
      if (param_2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = param_2 + 4;
      }
      if (iVar2 != *(int *)(piVar1[1] + 8)) goto LAB_006059c6;
    }
    iVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_2 + 4;
    }
    if (iVar2 != *(int *)(*piVar1 + 8)) goto LAB_006059af;
    iVar2 = piVar1[1];
  }
LAB_006059d4:
  *(int *)(param_1 + 0x28) = iVar2;
LAB_006059d8:
  *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + -1;
  FUN_0060ed70(param_2);
  return;
}

