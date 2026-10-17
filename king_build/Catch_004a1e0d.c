
void Catch_004a1e0d(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  int *piVar6;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  piVar1 = *(int **)(unaff_EBP + 0xc);
  for (piVar6 = piVar1; piVar6 != piVar2; piVar6 = piVar6 + 3) {
    if (((piVar6[2] & 0x10000U) == 0) && (iVar3 = *piVar6, iVar3 != 0)) {
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
      piVar4 = (int *)*piVar6;
      if ((piVar4[1] == 0) && (piVar4 != (int *)0x0)) {
        (**(code **)(*piVar4 + 0xc))(1);
      }
    }
  }
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    uVar5 = *(int *)(unaff_EBP + -0x18) * 0xc;
    if (uVar5 < 0x81) {
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

