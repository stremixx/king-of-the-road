
uint FUN_004666f0(char *param_1,char *param_2,char *param_3,char *param_4)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 == param_4) goto LAB_0046671f;
    if (*param_1 < *param_3) {
      return 0xffffffff;
    }
    if (*param_3 < *param_1) {
      return 1;
    }
    param_3 = param_3 + 1;
  }
  if (param_3 != param_4) {
    return 0xffffffff;
  }
LAB_0046671f:
  return (uint)(param_1 != param_2);
}

