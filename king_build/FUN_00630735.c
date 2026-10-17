
void FUN_00630735(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_006545b0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((int)extraout_ECX[0xc] < 0) {
    FUN_0062fb80(extraout_ECX + 0xd);
  }
  if (extraout_ECX[0x14] == 0) {
    FUN_00630934();
  }
  else {
    FUN_0063078c();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00630ace();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

