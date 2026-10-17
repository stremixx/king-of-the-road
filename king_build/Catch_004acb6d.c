
void Catch_004acb6d(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBP;
  uint uVar3;
  
  uVar1 = *(uint *)(unaff_EBP + 8);
  uVar3 = 1;
  if (1 < uVar1) {
    iVar2 = *(int *)(unaff_EBP + -0x14);
    do {
      FUN_0061c888(*(undefined4 *)(*(int *)(iVar2 + 0x24) + uVar3 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

