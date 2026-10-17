
void FUN_00459b00(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_2[1];
  iVar2 = *param_2;
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  FUN_004057c0();
  FUN_0044b440(param_2,0x40);
  *param_1 = iVar2;
  return;
}

