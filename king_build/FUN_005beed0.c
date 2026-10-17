
undefined4 * __thiscall
FUN_005beed0(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  FUN_005bcc90(param_2,param_3);
  *param_1 = &PTR_FUN_00650828;
  if ((param_3 & 2) != 0) {
    param_1[7] = param_4;
    param_1[8] = param_1[8] | 0x100;
    return param_1;
  }
  if ((param_3 & 1) != 0) {
    param_1[7] = param_4;
    param_1[8] = param_1[8] | 0x200;
    return param_1;
  }
  param_1[7] = param_4;
  return param_1;
}

