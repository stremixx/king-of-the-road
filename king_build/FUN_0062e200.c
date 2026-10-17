
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062e200(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  
  iVar4 = DAT_0077d348;
  bVar3 = (byte)DAT_0077d348;
  if (0x10 - param_2 < DAT_0077d348) {
    _DAT_0077d344 = _DAT_0077d344 | (ushort)(param_1 << (bVar3 & 0x1f));
    (&DAT_007355ec)[DAT_007355e8] = (char)_DAT_0077d344;
    iVar2 = DAT_007355e8 + 1;
    if (DAT_007355e8 < 0x3ffe) {
      puVar1 = &DAT_007355ed + DAT_007355e8;
      DAT_007355e8 = DAT_007355e8 + 2;
      *puVar1 = (char)(_DAT_0077d344 >> 8);
    }
    else {
      DAT_007355e8 = iVar2;
      if (iVar2 == 0x4000) {
        FUN_0062b090();
        iVar4 = DAT_0077d348;
      }
      iVar2 = DAT_007355e8 + 1;
      (&DAT_007355ec)[DAT_007355e8] = (char)(_DAT_0077d344 >> 8);
      DAT_007355e8 = iVar2;
      if (iVar2 == 0x4000) {
        FUN_0062b090();
        iVar4 = DAT_0077d348;
      }
    }
    DAT_0077d348 = iVar4 + -0x10 + param_2;
    _DAT_0077d344 = (ushort)param_1 >> (0x10U - (char)iVar4 & 0x1f);
    return;
  }
  DAT_0077d348 = DAT_0077d348 + param_2;
  _DAT_0077d344 = _DAT_0077d344 | (ushort)(param_1 << (bVar3 & 0x1f));
  return;
}

