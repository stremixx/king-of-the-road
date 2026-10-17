
void __thiscall FUN_00612ce0(int param_1,int *param_2)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  uint uVar4;
  
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 == (int *)0x0) {
    *(int **)(param_1 + 4) = param_2;
  }
  else {
    fVar3 = (float)param_2[0x1a];
    if ((float)piVar2[0x1a] < fVar3) {
      if (fVar3 < *(float *)(piVar2[1] + 0x68)) {
        piVar2 = (int *)*piVar2;
        fVar1 = (float)piVar2[0x1a];
        while (fVar1 < fVar3) {
          piVar2 = (int *)*piVar2;
          fVar1 = (float)piVar2[0x1a];
        }
        *param_2 = (int)piVar2;
        param_2[1] = piVar2[1];
        *(int **)piVar2[1] = param_2;
        piVar2[1] = (int)param_2;
        uVar4 = *(int *)(param_1 + 8) + 1;
        *(uint *)(param_1 + 8) = uVar4;
        if (uVar4 < 200) {
          return;
        }
        FUN_00612bd0();
        return;
      }
      *param_2 = (int)piVar2;
      param_2[1] = piVar2[1];
      *(int **)piVar2[1] = param_2;
      piVar2[1] = (int)param_2;
    }
    else {
      *param_2 = (int)piVar2;
      param_2[1] = piVar2[1];
      *(int **)piVar2[1] = param_2;
      piVar2[1] = (int)param_2;
      *(int **)(param_1 + 4) = param_2;
    }
  }
  uVar4 = *(int *)(param_1 + 8) + 1;
  *(uint *)(param_1 + 8) = uVar4;
  if (uVar4 < 200) {
    return;
  }
  FUN_00612bd0();
  return;
}

