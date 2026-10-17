
void __fastcall thunk_FUN_005c09a0(int *param_1)

{
  FUN_005c1b50();
  if (param_1[1] != 0) {
    FUN_00631d5c(param_1[1]);
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    FUN_00631d5c(*param_1);
    *param_1 = 0;
  }
  if (param_1[0x226] != 0) {
    FUN_00631d5c(param_1[0x226]);
    param_1[0x226] = 0;
  }
  if (param_1[0x227] != 0) {
    FUN_00631d5c(param_1[0x227]);
    param_1[0x227] = 0;
  }
  if ((HANDLE)param_1[9] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[9]);
    param_1[9] = 0;
  }
  if ((HANDLE)param_1[10] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[10]);
    param_1[10] = 0;
  }
  if (param_1[0x220] != 0) {
    ICSendMessage(param_1[0x220],0x400e,0,0);
    ICClose(param_1[0x220]);
    param_1[0x220] = 0;
  }
  param_1[0x228] = 0;
  DAT_0071f818 = 0;
  FUN_005c2600();
  return;
}

