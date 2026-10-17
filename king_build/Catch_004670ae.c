
void Catch_004670ae(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  for (iVar2 = *(int *)(unaff_EBP + 0x10); iVar2 != iVar1; iVar2 = iVar2 + 0x90) {
    FUN_004482f0();
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

