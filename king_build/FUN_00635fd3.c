
undefined4 * FUN_00635fd3(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  CMap<>(10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  CMap<>(4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *extraout_ECX = &PTR_FUN_006535dc;
  FUN_00631ab1(7,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0xf] = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x10] = *(undefined4 *)(unaff_EBP + 0xc);
  extraout_ECX[0x11] = *(undefined4 *)(unaff_EBP + 0x10);
  return extraout_ECX;
}

