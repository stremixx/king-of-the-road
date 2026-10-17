
void Catch_0046648a(void)

{
  int *piVar1;
  int unaff_EBP;
  int *piVar2;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  for (piVar2 = *(int **)(unaff_EBP + 8); piVar2 != piVar1; piVar2 = piVar2 + 3) {
    FUN_004030a0(*piVar2,piVar2[1]);
    FUN_004664e0(*piVar2,piVar2[2] - *piVar2 >> 2);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

