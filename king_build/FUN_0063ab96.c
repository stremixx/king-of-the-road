
void FUN_0063ab96(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_00652490;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_006369e5(extraout_ECX + 1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

