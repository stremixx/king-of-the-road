
void Unwind_006463fb(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0xac) == 0) {
    *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0xc0) = *(int *)(unaff_EBP + -0xac) + 0x2538;
  }
  FUN_0052a6e0();
  return;
}

