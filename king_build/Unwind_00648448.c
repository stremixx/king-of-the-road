
void Unwind_00648448(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  else {
    *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -0x10) + 0x20;
  }
  thunk_FUN_005f10e0();
  return;
}

