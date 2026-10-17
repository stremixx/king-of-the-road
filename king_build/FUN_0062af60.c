
uint FUN_0062af60(byte *param_1,int param_2)

{
  if (param_1 != (byte *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      DAT_00688bf0 = DAT_00688bf0 >> 8 ^
                     *(uint *)(&DAT_00688bf4 + (DAT_00688bf0 & 0xff ^ (uint)*param_1) * 4);
      param_1 = param_1 + 1;
    }
    return ~DAT_00688bf0;
  }
  DAT_00688bf0 = 0xffffffff;
  return 0;
}

