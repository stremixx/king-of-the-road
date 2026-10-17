
void Unwind_00647b28(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0xc) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0x10) + 0x100;
  }
  FUN_005efea0();
  return;
}

