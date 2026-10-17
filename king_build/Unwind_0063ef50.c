
void Unwind_0063ef50(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x10) + 4;
  }
  FUN_00459e60();
  return;
}

