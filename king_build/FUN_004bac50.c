
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bac50(void)

{
  int iVar1;
  
  FUN_005c5bc0();
  FUN_004843e0();
  if (DAT_006f5330 != (undefined4 *)0x0) {
    (**(code **)*DAT_006f5330)(1);
    DAT_006f5330 = (undefined4 *)0x0;
  }
  if (DAT_006951b4 != (undefined4 *)0x0) {
    (**(code **)*DAT_006951b4)(1);
    DAT_006951b4 = (undefined4 *)0x0;
  }
  iVar1 = DAT_00695158;
  if (DAT_00695158 != 0) {
    FUN_004bcc30();
    FUN_00631d5c(iVar1);
    DAT_00695158 = 0;
  }
  _DAT_00695198 = 0;
  DAT_0069518c = 0;
  DAT_00695190 = 0;
  DAT_00695194 = 0;
  FUN_004c4800();
  FUN_004b8a20();
  FUN_004ccaa0();
  return;
}

