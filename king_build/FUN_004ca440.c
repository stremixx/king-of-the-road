
undefined4 FUN_004ca440(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char local_100 [256];
  
  local_100[0] = '\0';
  uVar1 = FUN_004e5485(param_1,param_2,param_3,local_100);
  if (local_100[0] != '\0') {
    uVar1 = param_1;
  }
  return uVar1;
}

