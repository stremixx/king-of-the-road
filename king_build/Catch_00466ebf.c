
void Catch_00466ebf(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int unaff_EBP;
  int *piVar5;
  
  piVar5 = *(int **)(unaff_EBP + 0x10);
  *(int **)(unaff_EBP + 0x10) = piVar5;
  if (piVar5 != *(int **)(unaff_EBP + -0x14)) {
    do {
      iVar1 = piVar5[4];
      iVar2 = piVar5[3];
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00466f50(iVar2,iVar1);
      FUN_0044a4b0();
      uVar3 = piVar5[2];
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (((uVar3 & 0x10000) == 0) && (iVar1 = *piVar5, iVar1 != 0)) {
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
        piVar4 = (int *)*piVar5;
        if ((piVar4[1] == 0) && (piVar4 != (int *)0x0)) {
          (**(code **)(*piVar4 + 0xc))(1);
        }
      }
      piVar5 = piVar5 + 6;
      *(int **)(unaff_EBP + 0x10) = piVar5;
    } while (piVar5 != *(int **)(unaff_EBP + -0x14));
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

