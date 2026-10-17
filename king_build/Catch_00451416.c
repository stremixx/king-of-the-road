
void Catch_00451416(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  iVar1 = *(int *)(unaff_EBP + -0x14);
  for (iVar3 = iVar1; iVar3 != iVar2; iVar3 = iVar3 + 0x24) {
    FUN_00410d40();
  }
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_0044b440(iVar1,*(int *)(unaff_EBP + -0x18) * 0x24);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

