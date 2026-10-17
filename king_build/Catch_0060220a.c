
void Catch_0060220a(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  for (iVar2 = *(int *)(unaff_EBP + 0x10); iVar2 != iVar1; iVar2 = iVar2 + 0x20) {
    FUN_00600ae0();
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

