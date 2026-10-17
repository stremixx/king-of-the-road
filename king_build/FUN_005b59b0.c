
uint FUN_005b59b0(uint param_1)

{
  if (1 < (int)DAT_00701df4) {
    if ((int)DAT_00701df4 < 4) {
      return (param_1 & 0x1f) << 3;
    }
    if (DAT_00701df4 == 6) {
      return param_1 & 0xff;
    }
  }
  return DAT_00701df4 & 0xffffff00;
}

