
void Catch_0045b7f8(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  iVar1 = *(int *)(unaff_EBP + -0x18);
  for (iVar3 = iVar1; iVar3 != iVar2; iVar3 = iVar3 + 0x638) {
    FUN_00458980();
  }
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_0044b440(iVar1,*(int *)(unaff_EBP + -0x14) * 0x638);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

