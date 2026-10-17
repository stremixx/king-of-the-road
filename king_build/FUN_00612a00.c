
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00612a00(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 4);
  if (iVar6 == 0) {
    *(int *)(param_1 + 4) = param_2;
  }
  else {
    fVar2 = *(float *)(param_2 + 0x1c);
    if (fVar2 == _DAT_0064b254) {
      if (param_2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(param_2 + 4);
      }
      *piVar3 = iVar6 + 4;
      piVar3[1] = *(int *)(iVar6 + 8);
      **(int **)(iVar6 + 8) = (int)piVar3;
      *(int **)(iVar6 + 8) = piVar3;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      return;
    }
    if (*(float *)(iVar6 + 0x1c) <= fVar2) {
      if (param_2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(param_2 + 4);
      }
      *piVar3 = iVar6 + 4;
      piVar3[1] = *(int *)(iVar6 + 8);
      **(int **)(iVar6 + 8) = (int)piVar3;
      *(int **)(iVar6 + 8) = piVar3;
      *(int *)(param_1 + 4) = param_2;
      uVar5 = *(int *)(param_1 + 8) + 1;
      *(uint *)(param_1 + 8) = uVar5;
      if (uVar5 < 500) {
        return;
      }
      FUN_0060ea70();
      return;
    }
    if (*(int *)(iVar6 + 8) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar6 + 8) + -4;
    }
    if (*(float *)(iVar4 + 0x1c) < fVar2) {
      if (*(int *)(iVar6 + 4) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iVar6 + 4) + -4;
      }
      fVar1 = *(float *)(iVar6 + 0x1c);
      while (fVar2 < fVar1) {
        if (*(int *)(iVar6 + 4) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(iVar6 + 4) + -4;
        }
        fVar1 = *(float *)(iVar6 + 0x1c);
      }
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar6 + 4;
      }
      if (param_2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(param_2 + 4);
      }
      *piVar3 = iVar6;
      piVar3[1] = *(int *)(iVar6 + 4);
      **(int **)(iVar6 + 4) = (int)piVar3;
      *(int **)(iVar6 + 4) = piVar3;
      uVar5 = *(int *)(param_1 + 8) + 1;
      *(uint *)(param_1 + 8) = uVar5;
      if (uVar5 < 500) {
        return;
      }
      FUN_0060ea70();
      return;
    }
    if (param_2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(param_2 + 4);
    }
    *piVar3 = iVar6 + 4;
    piVar3[1] = *(int *)(iVar6 + 8);
    **(int **)(iVar6 + 8) = (int)piVar3;
    *(int **)(iVar6 + 8) = piVar3;
  }
  uVar5 = *(int *)(param_1 + 8) + 1;
  *(uint *)(param_1 + 8) = uVar5;
  if (uVar5 < 500) {
    return;
  }
  FUN_0060ea70();
  return;
}

