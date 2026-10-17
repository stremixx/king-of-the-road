
undefined4 * FUN_0049bae0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *local_3c;
  undefined4 local_38;
  uint local_34;
  int *local_30;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00641f3f;
  local_c = ExceptionList;
  local_30 = (int *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_3c = (int *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_00491b70(param_2,&local_30,&local_3c,param_3,s_char<___0066f854);
  if (iVar1 == 0) {
    if (((char)local_28 != '\b') || ((char)local_34 != '\b')) {
      FUN_00492320(param_1,0,0);
      local_4._0_1_ = 1;
      FUN_00492340();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00492340();
      ExceptionList = local_c;
      return param_1;
    }
    FUN_004a1ac0(&local_30);
    local_4._0_1_ = 3;
    FUN_004a1ac0(&local_3c);
    FUN_00492320(param_1,0,local_18 <= local_24);
    FUN_00492340();
    local_4._0_1_ = 2;
    FUN_00492340();
    if (((local_34 & 0x10000) != 0) || (local_3c == (int *)0x0)) goto LAB_0049bba7;
    local_3c[1] = local_3c[1] + -1;
    iVar1 = local_3c[1];
  }
  else {
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = 0;
    FUN_00492340();
    if (((local_34 & 0x10000) != 0) || (local_3c == (int *)0x0)) goto LAB_0049bba7;
    local_3c[1] = local_3c[1] + -1;
    iVar1 = local_3c[1];
  }
  if ((iVar1 == 0) && (local_3c != (int *)0x0)) {
    local_4._0_1_ = 1;
    (**(code **)(*local_3c + 0xc))(1);
  }
LAB_0049bba7:
  local_4 = (uint)local_4._1_3_ << 8;
  if (((((local_28 & 0x10000) == 0) && (local_30 != (int *)0x0)) &&
      (local_30[1] = local_30[1] + -1, local_30[1] == 0)) && (local_30 != (int *)0x0)) {
    (**(code **)(*local_30 + 0xc))(1);
    ExceptionList = pvStack_10;
    return param_1;
  }
  ExceptionList = local_c;
  return param_1;
}

