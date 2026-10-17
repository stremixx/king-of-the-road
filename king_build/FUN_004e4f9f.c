
uint __thiscall
FUN_004e4f9f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = FUN_004e4b8c(param_2,param_3,param_4,param_5,param_1);
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    FUN_004e4f28(param_5);
  }
  return uVar1;
}

