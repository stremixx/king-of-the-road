
void FUN_004ad080(undefined4 *param_1,undefined1 *param_2,int param_3,undefined1 *param_4,
                 undefined1 *param_5,undefined1 *param_6,int param_7)

{
  undefined1 uVar1;
  
  param_3 = param_3 - (int)param_2;
  if (param_3 < 1) {
    param_1[2] = param_6;
    param_1[1] = param_5;
    *param_1 = param_4;
    param_1[3] = param_7;
    return;
  }
  do {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_4 = uVar1;
    param_4 = param_4 + 1;
    if (param_4 == param_6) {
      param_4 = *(undefined1 **)(param_7 + 4);
      param_7 = param_7 + 4;
      param_6 = param_4 + 0x200;
      param_5 = param_4;
    }
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  param_1[2] = param_6;
  param_1[1] = param_5;
  *param_1 = param_4;
  param_1[3] = param_7;
  return;
}

