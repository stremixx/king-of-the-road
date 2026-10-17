
void Unwind_0064686b(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0xd8) == 0) {
    *(undefined4 *)(unaff_EBP + -0xfc) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0xfc) = *(int *)(unaff_EBP + -0xd8) + 0x10;
  }
  FUN_0058af70();
  return;
}

