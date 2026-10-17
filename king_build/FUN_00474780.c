
void FUN_00474780(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 4;
  do {
    iVar3 = 3;
    puVar2 = param_2;
    do {
      puVar1 = (undefined4 *)*param_1;
      param_2 = puVar2 + 2;
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      iVar3 = iVar3 + -1;
      *param_1 = *param_1 + 8;
      puVar2 = param_2;
    } while (iVar3 != 0);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

