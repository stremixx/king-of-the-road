
void FUN_00639610(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_0061f6cc();
  iVar1 = FUN_00631d33(0x3c,extraout_ECX);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_0063304a();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

