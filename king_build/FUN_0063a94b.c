
void FUN_0063a94b(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_00653664;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0063622b(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

