
undefined4 FUN_0062a000(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 4))(param_2,param_3);
    return uVar1;
  }
  return param_3;
}

