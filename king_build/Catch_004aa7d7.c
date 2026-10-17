
void Catch_004aa7d7(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int unaff_EBP;
  int *piVar4;
  
  piVar2 = *(int **)(unaff_EBP + -0x1c);
  piVar1 = *(int **)(unaff_EBP + -0x14);
  for (piVar4 = piVar1; piVar4 != piVar2; piVar4 = piVar4 + 0xb) {
    (**(code **)(*piVar4 + 4))(0);
  }
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    uVar3 = *(int *)(unaff_EBP + -0x18) * 0x2c;
    if (uVar3 < 0x81) {
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

