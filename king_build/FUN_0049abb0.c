
undefined4 * FUN_0049abb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *local_30;
  undefined4 local_2c;
  uint local_28;
  int *local_24;
  undefined4 local_20;
  uint local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00641d57;
  pvStack_c = ExceptionList;
  local_30 = (int *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_24 = (int *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_00491b70(param_2,&local_30,&local_24,param_3,s_set_cdr__0066f800);
  if (iVar1 == 0) {
    if ((char)local_28 == '\x02') {
      FUN_004042a0();
      local_4._0_1_ = 3;
      if (local_30 == (int *)0x0) {
        local_18 = (int *)0x0;
        local_10 = (void *)0x0;
      }
      else {
        iVar1 = (**(code **)*local_30)();
        if (iVar1 == 2) {
          local_18 = local_30;
          local_10 = (void *)local_28;
          local_30[1] = local_30[1] + 1;
        }
        else {
          uVar2 = (**(code **)(*local_30 + 4))(&DAT_0066bb08);
          FUN_004a5670(2,1,uVar2);
        }
      }
      local_4 = CONCAT31(local_4._1_3_,4);
      if (local_18 == (int *)0x0) {
        FUN_004a5470(0,1);
      }
      if (((uint)local_10 & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      FUN_0040c060(&local_24);
      local_4._0_1_ = 2;
      FUN_00492340();
    }
    else {
      FUN_004a5cd0(param_2,0xf,&DAT_0066bb08,s_set_cdr__0066f800);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_4._0_1_ = 1;
    if (((local_1c & 0x10000) == 0) && (local_24 != (int *)0x0)) {
      local_24[1] = local_24[1] + -1;
      if ((local_24[1] == 0) && (local_24 != (int *)0x0)) {
        (**(code **)(*local_24 + 0xc))(1);
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00492340();
  }
  else {
    local_18 = (int *)0x0;
    local_14 = 0;
    local_10 = (void *)0x0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = 0;
    FUN_00492340();
    local_4._0_1_ = 1;
    if (((local_1c & 0x10000) == 0) && (local_24 != (int *)0x0)) {
      local_24[1] = local_24[1] + -1;
      if ((local_24[1] == 0) && (local_24 != (int *)0x0)) {
        (**(code **)(*local_24 + 0xc))(1);
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (((local_28 & 0x10000) == 0) && (local_30 != (int *)0x0)) {
      local_30[1] = local_30[1] + -1;
      if ((local_30[1] == 0) && (local_30 != (int *)0x0)) {
        (**(code **)(*local_30 + 0xc))(1);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

