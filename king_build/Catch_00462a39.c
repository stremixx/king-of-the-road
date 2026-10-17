
void Catch_00462a39(void)

{
  LONG LVar1;
  int iVar2;
  int unaff_EBP;
  int *piVar3;
  
  piVar3 = (int *)(unaff_EBP + -0xd8);
  iVar2 = 0x2e;
  do {
    if (*piVar3 != 0) {
      LVar1 = InterlockedDecrement((LONG *)(*piVar3 + 4));
      if (LVar1 == 0) {
        FUN_0044f150();
      }
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

