
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00484130(void)

{
  uint in_EAX;
  
  if (DAT_006f230c == 0) {
    return in_EAX & 0xffffff00;
  }
  if ((_DAT_0064a688 < *(double *)(DAT_006f230c + 0x58)) &&
     (*(double *)(DAT_006f230c + 0x58) < _DAT_0064ae08)) {
    return 1;
  }
  return 0;
}

