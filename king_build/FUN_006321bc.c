
void FUN_006321bc(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00635ed0();
  FUN_00635ed9(0xffffffff);
  if (*(int *)(unaff_EBP + 8) == 0) {
    iVar1 = FUN_0063a494();
    if ((iVar1 != 0) && (*(int **)(iVar1 + 0xcc) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar1 + 0xcc) + 0x58))();
      if (*(int **)(iVar1 + 0xcc) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 0xcc) + 4))(1);
      }
      *(undefined4 *)(iVar1 + 0xcc) = 0;
    }
  }
  if (DAT_0072cda4 != 0) {
    FUN_0063a3c4(*(undefined4 *)(unaff_EBP + 8),0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

