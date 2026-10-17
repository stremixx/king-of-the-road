
void Unwind_0063ae00(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x10) + 4;
  }
  FUN_00459e60();
  return;
}

