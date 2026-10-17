
undefined4 FUN_004e5485(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 local_d4 [104];
  undefined4 local_6c;
  undefined1 local_58 [84];
  
  uVar2 = param_1;
  if (*param_4 == '\0') {
    FUN_005eebf0();
    uVar1 = FUN_004e53b2(param_1,param_2,param_3,local_d4);
    uVar2 = local_6c;
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) == 0) {
        *param_4 = '\0';
        uVar2 = param_1;
      }
      else {
        FUN_0061e950(param_4,local_58);
        uVar2 = param_1;
      }
    }
  }
  return uVar2;
}

