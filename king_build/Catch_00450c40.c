
void Catch_00450c40(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  for (iVar3 = iVar1; iVar3 != iVar2; iVar3 = iVar3 + 0x90) {
    FUN_00450d80();
  }
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_0044b440(iVar1,*(int *)(unaff_EBP + -0x14) * 0x90);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

