
void FUN_0046cf10(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_stack_00000030;
  
  puVar2 = param_1;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  FUN_00458ab0(&stack0x00000010);
  FUN_0046be20(param_1,0,param_2 - (int)param_1 >> 5);
  return;
}

