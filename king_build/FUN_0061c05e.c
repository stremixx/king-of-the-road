
void FUN_0061c05e(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_006535dc;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_006360f7();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00631b21();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00631b21();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

