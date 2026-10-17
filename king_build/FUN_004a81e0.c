
undefined4 * __thiscall FUN_004a81e0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = param_2[1] + 1;
    uVar1 = (**(code **)*param_2)();
    param_1[2] = uVar1 & 0xff;
  }
  return param_1;
}

