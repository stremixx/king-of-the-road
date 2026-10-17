
void Catch_00463050(void)

{
  LONG LVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    LVar1 = InterlockedDecrement((LONG *)(*(int *)(unaff_EBP + 0xc) + 4));
    if (LVar1 == 0) {
      FUN_0044f150();
    }
  }
  if (*(int *)(unaff_EBP + 8) != 0) {
    LVar1 = InterlockedDecrement((LONG *)(*(int *)(unaff_EBP + 8) + 4));
    if (LVar1 == 0) {
      FUN_0044f150();
    }
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

