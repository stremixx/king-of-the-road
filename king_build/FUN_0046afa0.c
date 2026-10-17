
void FUN_0046afa0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

