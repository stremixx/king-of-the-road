
void FUN_00604750(void)

{
  if (0 < DAT_007230e8) {
    FUN_006043f0();
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_007230a8);
    DAT_007230e8 = DAT_007230e8 + -1;
  }
  return;
}

