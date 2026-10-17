
void __thiscall FUN_006085e0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == *(int **)(param_1 + 0x38)) {
    piVar1 = *(int **)(param_1 + 0x20);
    if ((*piVar1 == 0) || (param_2 != *(int **)(*piVar1 + 4))) {
      if ((piVar1[1] == 0) || (param_2 != *(int **)(piVar1[1] + 4))) {
        iVar2 = *param_2;
      }
      else {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = piVar1[1];
    }
    *(int *)(param_1 + 0x38) = iVar2;
  }
  *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
  *(undefined4 *)(*(int *)(*(int *)param_2[2] + 0xc) + 0x48) = 0;
  *(undefined4 *)(*(int *)(*(int *)(param_2[2] + 4) + 0xc) + 0x48) = 0;
  if ((int *)param_2[3] != (int *)0x0) {
    *(undefined4 *)(*(int *)(*(int *)param_2[3] + 0xc) + 0x48) = 0;
    *(undefined4 *)(*(int *)(*(int *)(param_2[3] + 4) + 0xc) + 0x48) = 0;
  }
  FUN_00612db0(param_2);
  return;
}

