
uint FUN_006226af(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_0077d800;
  while( true ) {
    if (DAT_0077d800 + DAT_0077d7fc * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

