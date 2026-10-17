
void Unwind_0063f550(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + 0xc) + 4;
  }
  FUN_00459e60();
  return;
}

