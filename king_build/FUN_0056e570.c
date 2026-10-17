
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056e570(void)

{
  int iVar1;
  
  iVar1 = DAT_006cd2d8;
  DAT_006f236c = 0;
  if (DAT_006cd2d8 != 0) {
    FUN_005a68a0();
    FUN_00631d5c(iVar1);
    DAT_006cd2d8 = 0;
  }
  if (DAT_006f23fc != 0) {
    iVar1 = *(int *)(DAT_006cdbcc + 0x54c);
    if (*(int *)(iVar1 + 0x1ef8) != 0) {
      FUN_0061c25a(*(int *)(iVar1 + 0x1ef8));
      *(undefined4 *)(iVar1 + 0x1ef8) = 0;
      *(undefined4 *)(iVar1 + 0x1f00) = 0;
    }
    DAT_006f23fc = 0;
  }
  iVar1 = DAT_006f2314;
  _DAT_006cd2dc = 0;
  _DAT_006cd2e4 = 0;
  _DAT_006cd2e0 = 0;
  DAT_006f2390 = 0;
  DAT_006f2394 = 0;
  DAT_006f2398 = 0;
  DAT_006f23f8 = 0;
  DAT_006f230c = 0;
  DAT_006f2310 = 0;
  if (DAT_006f2314 != 0) {
    FUN_00613f60();
    FUN_00631d5c(iVar1);
  }
  DAT_006f2314 = 0;
  return;
}

