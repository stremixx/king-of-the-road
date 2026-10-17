
void FUN_0063014c(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_00654548;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((extraout_ECX[0x13] != 0) && (extraout_ECX[4] != 0)) {
    if ((code *)extraout_ECX[0x18] == (code *)0x0) {
      FUN_00631d5c(extraout_ECX[4]);
    }
    else {
      (*(code *)extraout_ECX[0x18])();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00630ace();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

