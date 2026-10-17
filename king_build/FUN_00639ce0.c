
void FUN_00639ce0(void)

{
  code *pcVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_006525e0;
  pcVar1 = (code *)extraout_ECX[4];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0);
  }
  if ((HMODULE)extraout_ECX[2] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)extraout_ECX[2]);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

