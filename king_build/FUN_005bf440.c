
undefined4 * __thiscall
FUN_005bf440(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,int param_6)

{
  FUN_005bcc90(param_2,param_3);
  *param_1 = &PTR_FUN_0065085c;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  DAT_00701ea0 = param_4;
  param_1[4] = param_4;
  if (param_6 == 0) {
    param_6 = param_4;
  }
  DAT_00701ea4 = param_6;
  param_1[5] = param_6;
  param_1[0x4a] = param_5;
  return param_1;
}

