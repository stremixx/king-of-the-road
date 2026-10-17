
byte FUN_00628510(uint param_1)

{
  if (DAT_0077d7e0 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_0077d6e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}

