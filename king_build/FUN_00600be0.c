
undefined4 FUN_00600be0(void)

{
  if ((uint)(DAT_00722cc4 - DAT_00722cc0 >> 5) <= DAT_00722d4c) {
    return 0xffffffff;
  }
  FUN_00600a20(DAT_00722d4c * 0x20 + DAT_00722cc0);
  DAT_00722d4c = DAT_00722d4c + 1;
  return 0;
}

