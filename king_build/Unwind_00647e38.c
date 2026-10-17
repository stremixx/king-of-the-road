
void Unwind_00647e38(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -8) = 0;
  }
  else {
    *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -0x10) + 0x10;
  }
  FUN_005d9830();
  return;
}

