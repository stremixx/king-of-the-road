
undefined4 FUN_00629fe0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = (**(code **)*param_1)(param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

