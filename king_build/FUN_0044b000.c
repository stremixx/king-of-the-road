
int * FUN_0044b000(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0044b2b0(param_3);
  *piVar1 = param_2;
  piVar1[1] = *(int *)(param_2 + 4);
  **(int **)(param_2 + 4) = (int)piVar1;
  *(int **)(param_2 + 4) = piVar1;
  *param_1 = (int)piVar1;
  return param_1;
}

