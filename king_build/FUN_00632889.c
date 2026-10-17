
void FUN_00632889(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = *(int *)(extraout_ECX + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0x1c))(extraout_ECX);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

