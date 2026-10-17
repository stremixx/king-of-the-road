
void Catch_004abf40(void)

{
  int *piVar1;
  int unaff_EBP;
  int *piVar2;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  for (piVar2 = *(int **)(unaff_EBP + 0x10); piVar2 != piVar1; piVar2 = piVar2 + 0xb) {
    (**(code **)(*piVar2 + 4))(0);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

