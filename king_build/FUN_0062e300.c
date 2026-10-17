
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062e300(void)

{
  ushort uVar1;
  
  if (DAT_0077d348 < 9) {
    if (DAT_0077d348 < 1) {
      _DAT_0077d344 = 0;
      DAT_0077d348 = 0;
      return;
    }
    (&DAT_007355ec)[DAT_007355e8] = DAT_0077d344;
  }
  else {
    if (DAT_007355e8 < 0x3ffe) {
      (&DAT_007355ec)[DAT_007355e8] = DAT_0077d344;
      uVar1 = (ushort)_DAT_0077d344 >> 8;
      _DAT_0077d344 = 0;
      (&DAT_007355ed)[DAT_007355e8] = (char)uVar1;
      DAT_007355e8 = DAT_007355e8 + 2;
      DAT_0077d348 = 0;
      return;
    }
    (&DAT_007355ec)[DAT_007355e8] = DAT_0077d344;
    DAT_007355e8 = DAT_007355e8 + 1;
    if (DAT_007355e8 == 0x4000) {
      FUN_0062b090();
    }
    (&DAT_007355ec)[DAT_007355e8] = DAT_0077d345;
  }
  DAT_007355e8 = DAT_007355e8 + 1;
  if (DAT_007355e8 == 0x4000) {
    FUN_0062b090();
  }
  _DAT_0077d344 = 0;
  DAT_0077d348 = 0;
  return;
}

