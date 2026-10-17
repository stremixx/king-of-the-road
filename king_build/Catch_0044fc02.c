
void Catch_0044fc02(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBP;
  uint uVar5;
  
  iVar4 = *(int *)(unaff_EBP + -0x2c);
  uVar5 = 0;
  if (*(int *)(unaff_EBP + -0x28) - iVar4 >> 2 != 0) {
    do {
      iVar1 = *(int *)(iVar4 + uVar5 * 4);
      while (iVar1 != 0) {
        piVar2 = *(int **)(iVar4 + uVar5 * 4);
        uVar3 = *piVar2;
        if (piVar2[1] != 0) {
          FUN_0044b580();
        }
        FUN_00401aa0();
        *piVar2 = (int)DAT_0068c128;
        DAT_0068c164 = 0;
        DAT_0068c128 = piVar2;
        *(undefined4 *)(*(int *)(unaff_EBP + -0x2c) + uVar5 * 4) = uVar3;
        iVar4 = *(int *)(unaff_EBP + -0x2c);
        iVar1 = *(int *)(iVar4 + uVar5 * 4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(*(int *)(unaff_EBP + -0x28) - iVar4 >> 2));
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

