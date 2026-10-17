
int __fastcall FUN_004b8250(int *param_1)

{
  if (*param_1 == 0) {
    FUN_004a5470(0,1);
  }
  if ((param_1[2] & 0x10000U) != 0) {
    FUN_004a5470(4,1);
  }
  return *param_1;
}

