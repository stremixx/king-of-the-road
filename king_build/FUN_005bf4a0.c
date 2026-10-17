
undefined4 * __thiscall
FUN_005bf4a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,int param_10)

{
  FUN_005bcc90(param_2,param_3);
  *param_1 = &PTR_FUN_0065085c;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  DAT_00701ea0 = param_4;
  param_1[4] = param_4;
  if (param_10 == 0) {
    param_10 = param_4;
  }
  DAT_00701ea4 = param_10;
  param_1[5] = param_10;
  param_1[0x4a] = param_5;
  param_1[0xb] = param_6;
  param_1[0xd] = param_8;
  param_1[0xe] = param_9;
  param_1[0xc] = param_7;
  return param_1;
}

