
undefined4 * __thiscall FUN_0061c0eb(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return param_1;
}

