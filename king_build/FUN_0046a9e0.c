
void FUN_0046a9e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while( true ) {
    puVar2 = param_1 + -8;
    iVar1 = 8;
    puVar3 = puVar2;
    puVar4 = param_1;
    if (param_4 <= *(double *)(param_1 + -6)) break;
    for (; param_1 = puVar2, iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  puVar3 = &param_2;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

