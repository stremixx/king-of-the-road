
void FUN_00478a30(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_2[1];
  iVar2 = *param_2;
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  FUN_00473230();
  FUN_0044b440(param_2,1000);
  *param_1 = iVar2;
  return;
}

