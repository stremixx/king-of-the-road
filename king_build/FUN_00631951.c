
void FUN_00631951(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_006536b8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  RemoveAll(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

