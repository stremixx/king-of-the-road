
void __thiscall FUN_00607b80(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 != *(int *)(param_1 + 0x34)) goto LAB_00607bd8;
  piVar1 = *(int **)(param_1 + 0x24);
  if (*piVar1 == 0) {
LAB_00607baf:
    if (piVar1[1] == 0) {
LAB_00607bc6:
      if (*(int *)(param_2 + 4) != 0) {
        iVar2 = *(int *)(param_2 + 4) + -4;
        goto LAB_00607bd4;
      }
    }
    else {
      if (param_2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = param_2 + 4;
      }
      if (iVar2 != *(int *)(piVar1[1] + 8)) goto LAB_00607bc6;
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
    if (iVar2 != *(int *)(*piVar1 + 8)) goto LAB_00607baf;
    iVar2 = piVar1[1];
  }
LAB_00607bd4:
  *(int *)(param_1 + 0x34) = iVar2;
LAB_00607bd8:
  *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + -1;
  FUN_0060ed70(param_2);
  return;
}

