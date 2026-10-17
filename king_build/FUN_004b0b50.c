
void FUN_004b0b50(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)param_2[1];
  iVar2 = *param_2;
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  if (((param_2[4] & 0x10000U) == 0) && (iVar3 = param_2[2], iVar3 != 0)) {
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
    piVar1 = (int *)param_2[2];
    if ((piVar1[1] == 0) && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0xc))(1);
    }
  }
  FUN_0044b440(param_2,0x14);
  *param_1 = iVar2;
  return;
}

