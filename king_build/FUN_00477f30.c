
void FUN_00477f30(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_stack_00000024;
  undefined4 auStack_34 [8];
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = in_stack_00000024;
  uStack_14 = 0x477f3f;
  FUN_00477f60();
  puVar2 = auStack_34;
  for (iVar1 = 10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar1 != 0;
      iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)register0x00000010;
    puVar2 = puVar2 + 1;
  }
  FUN_00477e10();
  return;
}

