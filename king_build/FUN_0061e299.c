
int FUN_0061e299(int param_1)

{
  bool bVar1;
  
  if (DAT_0072d1c4 == 0) {
    if ((0x60 < param_1) && (param_1 < 0x7b)) {
      return param_1 + -0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_0077d7e8);
    bVar1 = DAT_0077d7e4 != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_0077d7e8);
      FUN_006238a4(0x13);
    }
    param_1 = FUN_0061e308(param_1);
    if (bVar1) {
      FUN_00623905(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_0077d7e8);
    }
  }
  return param_1;
}

