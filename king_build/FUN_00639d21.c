
void FUN_00639d21(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_006525e8;
  iVar2 = DAT_0072cc6c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((iVar2 != 0) && (pcVar1 = *(code **)(iVar2 + 0x18), pcVar1 != (code *)0x0)) {
    (*pcVar1)(extraout_ECX);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

