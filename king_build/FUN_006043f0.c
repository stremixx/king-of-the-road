
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006043f0(void)

{
  _DAT_00683344 = 2;
  if (DAT_007230f4 != (int *)0x0) {
    (**(code **)(*DAT_007230f4 + 8))(DAT_007230f4);
  }
  if (DAT_007230f0 != (int *)0x0) {
    (**(code **)(*DAT_007230f0 + 8))(DAT_007230f0);
  }
  DAT_007230f0 = (int *)0x0;
  DAT_007230f4 = (int *)0x0;
  return;
}

