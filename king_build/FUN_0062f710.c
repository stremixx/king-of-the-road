
int FUN_0062f710(void)

{
  int iVar1;
  uint uVar2;
  int local_4;
  
  DAT_007355e8 = 0;
  DAT_0077d358 = 0;
  DAT_0077d354 = 0;
  uVar2 = 0;
  DAT_0077d35c = 0;
  iVar1 = FUN_0062f620(&local_4);
  if (iVar1 == 0) {
    while( true ) {
      if (uVar2 < DAT_0077d35c) {
        uVar2 = DAT_0077d35c;
      }
      if (local_4 != 0) break;
      DAT_0077d35c = 0;
      iVar1 = FUN_0062f620(&local_4);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    if (7 < DAT_0077d358) {
      uVar2 = DAT_0077d358 >> 3;
      do {
        DAT_0077d358 = DAT_0077d358 - 8;
        DAT_007355e4 = DAT_007355e4 + -1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    FUN_0062b0d0();
    iVar1 = 0;
  }
  return iVar1;
}

