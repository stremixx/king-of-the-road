
undefined4 * __thiscall FUN_005bee00(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  FUN_005bcc90(param_2,param_3);
  *param_1 = &PTR_FUN_00650828;
  if ((param_3 & 2) != 0) {
    param_1[7] = 0xffffffff;
    param_1[8] = param_1[8] | 0x100;
    return param_1;
  }
  if ((param_3 & 1) != 0) {
    param_1[8] = param_1[8] | 0x200;
  }
  param_1[7] = 0xffffffff;
  return param_1;
}

