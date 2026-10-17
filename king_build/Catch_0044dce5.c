
void Catch_0044dce5(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  iVar1 = *(int *)(unaff_EBP + -0x14);
  for (iVar3 = iVar1; iVar3 != iVar2; iVar3 = iVar3 + 0x68) {
    FUN_0040c100();
  }
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_0044b440(iVar1,*(int *)(unaff_EBP + -0x18) * 0x68);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

