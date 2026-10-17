
void FUN_006040b0(void)

{
  if (DAT_007230f4 != (int *)0x0) {
    (**(code **)(*DAT_007230f4 + 8))(DAT_007230f4);
  }
  if (DAT_007230f0 != (int *)0x0) {
    (**(code **)(*DAT_007230f0 + 8))(DAT_007230f0);
  }
  DAT_007230f0 = (int *)0x0;
  DAT_007230f4 = (int *)0x0;
  if (DAT_007230fc != (HMODULE)0x0) {
    FreeLibrary(DAT_007230fc);
  }
  DAT_00723100 = 0;
  DAT_007230fc = (HMODULE)0x0;
  return;
}

