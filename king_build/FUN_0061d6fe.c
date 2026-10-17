
void FUN_0061d6fe(uint param_1)

{
  if ((0x68529f < param_1) && (param_1 < 0x685501)) {
    FUN_00623905(((int)(param_1 - 0x6852a0) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

