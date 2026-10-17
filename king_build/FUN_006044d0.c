
void FUN_006044d0(void)

{
  int iVar1;
  
  if (DAT_007230c4 != 0) {
    FUN_00604540();
    FUN_00604530();
    if (DAT_007230c4 != 0) {
      iVar1 = DAT_007230c4 + -4;
      FUN_0061ccb5(DAT_007230c4,0x18,*(undefined4 *)(DAT_007230c4 + -4),&LAB_006044c0);
      FUN_00631d5c(iVar1);
      DAT_007230c4 = 0;
      return;
    }
  }
  DAT_007230c4 = 0;
  return;
}

