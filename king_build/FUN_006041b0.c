
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_006041b0(void)

{
  if (DAT_0068335c == 0) {
    if (DAT_007230e8 != 0) {
      return 0;
    }
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_007230a8);
    _DAT_00683344 = 2;
    DAT_0068335c = FUN_00604200();
    DAT_007230e8 = DAT_007230e8 + 1;
    if (DAT_0068335c == 0) {
      _DAT_00683344 = 1;
    }
  }
  return DAT_0068335c;
}

