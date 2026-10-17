
void Catch_004a4b6a(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 8);
  while (piVar6 = piVar1, piVar6 != (int *)0x0) {
    FUN_004a4c40(piVar6[3]);
    piVar1 = (int *)piVar6[2];
    piVar5 = piVar6 + 4;
    *(int **)(unaff_EBP + 8) = piVar5;
    uVar2 = piVar6[9];
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (((uVar2 & 0x10000) == 0) && (iVar3 = piVar6[7], iVar3 != 0)) {
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
      piVar4 = (int *)piVar6[7];
      if ((piVar4[1] == 0) && (piVar4 != (int *)0x0)) {
        (**(code **)(*piVar4 + 0xc))(1);
      }
    }
    uVar2 = piVar6[6];
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (((uVar2 & 0x10000) == 0) && (iVar3 = *piVar5, iVar3 != 0)) {
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
      piVar5 = (int *)*piVar5;
      if ((piVar5[1] == 0) && (piVar5 != (int *)0x0)) {
        (**(code **)(*piVar5 + 0xc))(1);
      }
    }
    FUN_00401aa0();
    *piVar6 = (int)DAT_0068c138;
    DAT_0068c164 = 0;
    DAT_0068c138 = piVar6;
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

