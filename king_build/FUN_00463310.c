
void FUN_00463310(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000bc;
  int in_stack_000000c8;
  undefined4 local_44 [4];
  undefined4 local_34;
  
  if (in_stack_000000c8 == 0) {
    local_44[0] = in_stack_000000b8;
    local_44[1] = in_stack_000000bc;
    local_34 = 0;
  }
  else {
    puVar2 = &stack0x000000b8;
    puVar3 = local_44;
    for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  FUN_00461b40(&stack0x0000007c);
  FUN_00461b40(&stack0x00000040);
  FUN_00461b40(&stack0x00000004);
  FUN_00466970();
  return;
}

