
undefined4 FUN_00488a30(undefined8 *param_1,undefined4 param_2)

{
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  FUN_0061d8bf(&local_38,8,1,param_2);
  local_30 = local_38;
  uStack_2c = local_34;
  FUN_0061d8bf(&local_38,8,1,param_2);
  local_28 = local_38;
  uStack_24 = local_34;
  FUN_0061d8bf(&local_38,8,1,param_2);
  *param_1 = CONCAT44(uStack_2c,local_30);
  param_1[1] = CONCAT44(uStack_24,local_28);
  param_1[2] = CONCAT44(local_34,local_38);
  return 0;
}

