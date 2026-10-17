
uint FUN_004e5315(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 param_6)

{
  uint uVar1;
  undefined1 local_d4 [52];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  
  FUN_005eebf0();
  uVar1 = FUN_004e4e9a(param_1,param_2,param_3,local_d4,param_6);
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    FUN_004e4f28(local_d4);
    *param_4 = local_a0;
    param_4[1] = local_9c;
    param_4[2] = local_98;
    *param_5 = local_94;
    param_5[1] = local_90;
    param_5[2] = local_8c;
  }
  return uVar1;
}

