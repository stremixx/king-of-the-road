
byte FUN_00541e70(int param_1)

{
  if (param_1 < DAT_006cd294) {
    return 0;
  }
  if (param_1 < DAT_006cd298) {
    return 1;
  }
  if (param_1 < DAT_006cd29c) {
    return 2;
  }
  if (param_1 < DAT_006cd2a0) {
    return 3;
  }
  if (param_1 < DAT_006cd2a4) {
    return 4;
  }
  return (DAT_006cd2a8 <= param_1) - 1U & 5;
}

