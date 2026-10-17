
undefined4 FUN_006334fd(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0x360) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_00633478(param_1);
    uVar1 = FUN_00633290(uVar1,param_1,param_2,param_3,param_4);
  }
  return uVar1;
}

