
int FUN_0063a4df(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  if (*extraout_ECX == 0) {
    FUN_0063a70e(0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*extraout_ECX == 0) {
      iVar1 = (**(code **)(unaff_EBP + 8))();
      *extraout_ECX = iVar1;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0063a77e(0x10);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *extraout_ECX;
}

