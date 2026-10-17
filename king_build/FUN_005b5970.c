
uint FUN_005b5970(uint param_1)

{
  if (DAT_00701df4 == 2) {
    return param_1 >> 3 & 0xfc;
  }
  if (DAT_00701df4 != 3) {
    if (DAT_00701df4 - 6U != 0) {
      return DAT_00701df4 - 6U & 0xffffff00;
    }
    return param_1 >> 8 & 0xff;
  }
  return param_1 >> 2 & 0xf8;
}

