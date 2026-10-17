
void FUN_004acfc0(undefined4 *param_1,undefined1 *param_2,undefined4 param_3,undefined1 *param_4,
                 int param_5,undefined1 *param_6,int param_7,undefined4 param_8,int param_9,
                 undefined1 *param_10,undefined1 *param_11,undefined1 *param_12,int param_13)

{
  undefined1 uVar1;
  
  param_6 = param_4 + (int)param_6 +
                      (((param_9 - param_5 >> 2) * 0x200 - param_7) - (int)param_2) + -0x200;
  if ((int)param_6 < 1) {
    param_1[1] = param_11;
    param_1[3] = param_13;
    *param_1 = param_10;
    param_1[2] = param_12;
    return;
  }
  do {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_10 = uVar1;
    if (param_2 == param_4) {
      param_2 = *(undefined1 **)(param_5 + 4);
      param_5 = param_5 + 4;
      param_4 = param_2 + 0x200;
    }
    param_10 = param_10 + 1;
    if (param_10 == param_12) {
      param_10 = *(undefined1 **)(param_13 + 4);
      param_13 = param_13 + 4;
      param_12 = param_10 + 0x200;
      param_11 = param_10;
    }
    param_6 = param_6 + -1;
  } while (param_6 != (undefined1 *)0x0);
  param_1[1] = param_11;
  param_1[3] = param_13;
  *param_1 = param_10;
  param_1[2] = param_12;
  return;
}

