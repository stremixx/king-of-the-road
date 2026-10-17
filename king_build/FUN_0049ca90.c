
undefined4 * FUN_0049ca90(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *local_3c;
  undefined4 local_38;
  uint local_34;
  int *local_30;
  undefined4 local_2c;
  uint local_28;
  int *local_24;
  uint local_1c;
  int *local_18;
  uint uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00642137;
  pvStack_c = ExceptionList;
  local_30 = (int *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_3c = (int *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_00491b70(param_2,&local_30,&local_3c,param_3,s_string_ref_0066f8a8);
  if (iVar1 != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_4._0_1_ = 1;
    if (((((local_34 & 0x10000) == 0) && (local_3c != (int *)0x0)) &&
        (local_3c[1] = local_3c[1] + -1, local_3c[1] == 0)) && (local_3c != (int *)0x0)) {
      (**(code **)(*local_3c + 0xc))(1);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if ((local_28 & 0x10000) != 0) {
      ExceptionList = pvStack_c;
      return param_1;
    }
    if (local_30 == (int *)0x0) {
      ExceptionList = pvStack_c;
      return param_1;
    }
    local_30[1] = local_30[1] + -1;
    if (local_30[1] != 0) {
      ExceptionList = pvStack_c;
      return param_1;
    }
    if (local_30 == (int *)0x0) {
      ExceptionList = pvStack_c;
      return param_1;
    }
    (**(code **)(*local_30 + 0xc))(1);
    ExceptionList = pvStack_c;
    return param_1;
  }
  if (((char)local_28 == '\x03') && ((char)local_34 == '\x06')) {
    FUN_004042a0();
    local_4._0_1_ = 3;
    if (local_30 == (int *)0x0) {
      local_24 = (int *)0x0;
      local_1c = 0;
    }
    else {
      iVar1 = (**(code **)*local_30)();
      if (iVar1 == 3) {
        local_24 = local_30;
        local_1c = local_28;
        local_30[1] = local_30[1] + 1;
      }
      else {
        uVar2 = (**(code **)(*local_30 + 4))(s_String_0066ba58);
        FUN_004a5670(2,1,uVar2);
      }
    }
    FUN_004042a0();
    local_4._0_1_ = 5;
    if (local_3c == (int *)0x0) {
      local_18 = (int *)0x0;
      uStack_10 = 0;
    }
    else {
      iVar1 = (**(code **)*local_3c)();
      if (iVar1 == 6) {
        local_18 = local_3c;
        uStack_10 = local_34;
        local_3c[1] = local_3c[1] + 1;
      }
      else {
        uVar2 = (**(code **)(*local_3c + 4))(s_Number_0066ba60);
        FUN_004a5670(2,1,uVar2);
      }
    }
    local_4 = CONCAT31(local_4._1_3_,6);
    if (local_18 == (int *)0x0) {
      FUN_004a5470(0,1);
    }
    if ((uStack_10 & 0x10000) != 0) {
      FUN_004a5470(4,1);
    }
    uVar3 = FUN_004b0f30();
    if (local_24 == (int *)0x0) {
      FUN_004a5470(0,1);
    }
    if ((local_1c & 0x10000) != 0) {
      FUN_004a5470(4,1);
    }
    if (uVar3 < (local_24[4] - local_24[3]) - 1U) {
      if (local_24 == (int *)0x0) {
        FUN_004a5470(0,1);
      }
      if ((local_1c & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      FUN_0049c310(param_1,0,(int)*(char *)(local_24[3] + uVar3));
      local_4._0_1_ = 4;
      FUN_00492340();
      local_4._0_1_ = 2;
      FUN_00492340();
      goto LAB_0049cd6a;
    }
    FUN_004a5be0(param_2,0x17,s_string_ref_0066f8a8);
    local_4._0_1_ = 4;
    FUN_00492340();
    local_4._0_1_ = 2;
    FUN_00492340();
  }
  else {
    FUN_004a5be0(param_2,10,s_string_ref_0066f8a8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_0049cd6a:
  local_4._0_1_ = 1;
  FUN_00492340();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return param_1;
}

