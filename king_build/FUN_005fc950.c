
undefined4 __fastcall FUN_005fc950(int *param_1)

{
  if (DAT_00722a88 != 0) {
    if ((param_1[6] & 2U) == 0) {
      return 1;
    }
    if ((param_1[6] & 1U) != 0) {
      return 1;
    }
    if (*param_1 != 0) {
      FUN_005e8ef0(param_1,*param_1);
      param_1[6] = param_1[6] | 1;
      return 1;
    }
    if (param_1[4] != 0) {
      FUN_005e8ff0(param_1,param_1[4],param_1[5]);
      param_1[6] = param_1[6] | 1;
      return 1;
    }
  }
  return 0;
}

