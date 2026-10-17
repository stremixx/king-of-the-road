
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00568c60(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00615be0(param_2 + 0x13,param_2 + 0x16,*param_2,param_2 + 0xd,param_2 + 0x10);
  if (iVar1 != 0) {
    if ((DAT_006f1c70 & 1) == 0) {
      DAT_006f1c70 = DAT_006f1c70 | 1;
      DAT_006f1c64 = 0;
      FUN_0061c439(&LAB_00568d40);
    }
    _DAT_006f1c58 = 1;
    _DAT_006f1c5c = 10;
    _DAT_006f1c60 = 0;
    DAT_006f1c64 = 0;
    param_2[0x19] = &DAT_006f1c58;
    if ((DAT_006f1c70 & 2) == 0) {
      DAT_006f1c70 = DAT_006f1c70 | 2;
      _DAT_006f20b0 = 0;
      FUN_0061c439(&LAB_00568d30);
    }
    _DAT_006f20b0 = 8;
    _DAT_006f20b8 = DAT_006f2314;
    param_2[0x1b] = &DAT_006f20b0;
    return 1;
  }
  return 0;
}

