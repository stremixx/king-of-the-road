
void Catch_004aca8c(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  int iVar3;
  
  if (1 < *(uint *)(unaff_EBP + 8)) {
    iVar1 = *(int *)(unaff_EBP + -0x14);
    iVar2 = 4;
    iVar3 = *(uint *)(unaff_EBP + 8) - 1;
    do {
      FUN_0061c888(*(undefined4 *)(*(int *)(iVar1 + 0x14) - iVar2));
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

