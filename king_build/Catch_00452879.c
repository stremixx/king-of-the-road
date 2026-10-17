
void Catch_00452879(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  
  iVar2 = *(int *)(unaff_EBP + -0x20);
  iVar1 = *(int *)(unaff_EBP + -0x18);
  for (iVar3 = iVar1; iVar3 != iVar2; iVar3 = iVar3 + 0xc) {
    FUN_004497b0();
  }
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_0044b440(iVar1,*(int *)(unaff_EBP + -0x1c) * 0xc);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

