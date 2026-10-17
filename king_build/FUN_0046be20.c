
void FUN_0046be20(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 in_stack_00000030;
  
  iVar6 = param_2;
  while( true ) {
    iVar2 = iVar6 * 2;
    iVar3 = iVar2 + 2;
    if (param_3 <= iVar3) break;
    iVar1 = iVar3 * 0x20 + param_1;
    if (*(double *)(iVar1 + -0x18) < *(double *)(iVar1 + 8)) {
      iVar3 = iVar2 + 1;
    }
    puVar4 = (undefined4 *)(iVar3 * 0x20 + param_1);
    puVar5 = (undefined4 *)(iVar6 * 0x20 + param_1);
    for (iVar2 = 8; iVar6 = iVar3, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if (iVar3 == param_3) {
    puVar4 = (undefined4 *)(iVar3 * 0x20 + -0x20 + param_1);
    puVar5 = (undefined4 *)(iVar6 * 0x20 + param_1);
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar6 = iVar2 + 1;
  }
  FUN_00458ab0(&stack0x00000010);
  FUN_0046ce70(param_1,iVar6,param_2);
  return;
}

