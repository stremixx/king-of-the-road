
void FUN_00463260(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  int in_stack_00000058;
  undefined4 local_44 [4];
  undefined4 local_34;
  
  if (in_stack_00000058 == 0) {
    local_44[0] = in_stack_00000048;
    local_44[1] = in_stack_0000004c;
    local_34 = 0;
  }
  else {
    puVar2 = &stack0x00000048;
    puVar3 = local_44;
    for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  FUN_00461b40(&stack0x0000000c);
  FUN_00466740(param_1,param_2);
  return;
}

