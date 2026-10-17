
void Catch_004676d8(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  if (*(int *)(unaff_EBP + 0x10) != iVar2) {
    iVar3 = *(int *)(unaff_EBP + 0x10) + 0x4c;
    do {
      FUN_004497b0();
      FUN_004497b0();
      FUN_004497b0();
      FUN_004497b0();
      iVar1 = iVar3 + 0x74;
      iVar3 = iVar3 + 0xc0;
    } while (iVar1 != iVar2);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

