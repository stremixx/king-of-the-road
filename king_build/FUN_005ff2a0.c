
undefined4 FUN_005ff2a0(undefined4 param_1,undefined4 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00722aa0);
  DAT_00682bb0 = param_1;
  DAT_00682bb4 = param_2;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00722aa0);
  return 0;
}

