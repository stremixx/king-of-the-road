
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005b4620(int param_1,float *param_2)

{
  param_1 = *(int *)(param_1 + 0x2020) * 0x30 + param_1;
  if (*(float *)(param_1 + 0xca4) * *param_2 +
      *(float *)(param_1 + 0xca8) * param_2[1] + *(float *)(param_1 + 0xcac) * param_2[2] +
      param_2[3] <= (float)_DAT_0064a648) {
    return 0;
  }
  return 1;
}

