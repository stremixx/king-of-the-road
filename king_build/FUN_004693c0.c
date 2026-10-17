
undefined1 * FUN_004693c0(undefined1 *param_1,int param_2,undefined1 *param_3)

{
  if (param_2 == 0) {
    return param_1;
  }
  do {
    *param_1 = *param_3;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return param_1;
}

