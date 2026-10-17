
void FUN_004ad100(undefined4 *param_1,undefined1 *param_2,undefined4 param_3,int param_4,int param_5
                 ,undefined1 *param_6,undefined1 *param_7,undefined4 param_8,int param_9,
                 undefined1 *param_10,undefined1 *param_11,undefined1 *param_12,int param_13)

{
  param_2 = param_6 + (((param_9 - param_5 >> 2) * 0x200 - (int)param_7) - (int)param_2) + param_4 +
                      -0x200;
  if ((int)param_2 < 1) {
    param_1[3] = param_13;
    param_1[2] = param_12;
    *param_1 = param_10;
    param_1[1] = param_11;
    return;
  }
  do {
    if (param_6 == param_7) {
      param_7 = *(undefined1 **)(param_9 + -4);
      param_9 = param_9 + -4;
      param_6 = param_7 + 0x200;
    }
    param_6 = param_6 + -1;
    if (param_10 == param_11) {
      param_11 = *(undefined1 **)(param_13 + -4);
      param_13 = param_13 + -4;
      param_10 = param_11 + 0x200;
      param_12 = param_10;
    }
    param_10 = param_10 + -1;
    *param_10 = *param_6;
    param_2 = param_2 + -1;
  } while (param_2 != (undefined1 *)0x0);
  param_1[3] = param_13;
  param_1[2] = param_12;
  *param_1 = param_10;
  param_1[1] = param_11;
  return;
}

