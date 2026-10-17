
void FUN_00631b21(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0065360c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  RemoveAll(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

