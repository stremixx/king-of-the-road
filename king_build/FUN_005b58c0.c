
uint FUN_005b58c0(byte param_1,uint param_2,uint param_3)

{
  if (DAT_00701df4 == 2) {
    return ((uint)(param_1 & 0xf8) << 5 | param_2 & 0xfc) << 3 | (param_3 & 0xff) >> 3;
  }
  if (DAT_00701df4 != 3) {
    return 0;
  }
  return ((uint)(param_1 & 0xf8) << 5 | param_2 & 0xf8) << 2 | (param_3 & 0xff) >> 3;
}

