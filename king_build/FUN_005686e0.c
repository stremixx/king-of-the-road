
char FUN_005686e0(void)

{
  if (((byte)*(undefined4 *)(DAT_006cdbd0 + 0x198) & 0xf) == 1) {
    return '\x01';
  }
  return (*(int *)(DAT_006cdbd0 + 0x1a0) != 3) + '\x02';
}

