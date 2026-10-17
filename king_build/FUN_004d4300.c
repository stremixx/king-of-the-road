
int FUN_004d4300(uint param_1)

{
  if ((int)param_1 < 4) {
    param_1 = param_1 + 1 & 0x80000001;
    if ((int)param_1 < 0) {
      return ((param_1 - 1 | 0xfffffffe) != 0xffffffff) - 1;
    }
  }
  else {
    param_1 = param_1 & 0x80000001;
    if ((int)param_1 < 0) {
      param_1 = (param_1 - 1 | 0xfffffffe) + 1;
    }
  }
  return (param_1 != 0) - 1;
}

