
undefined4 * FUN_0049dd30(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *local_48;
  undefined4 local_44;
  uint local_40;
  int *local_3c;
  undefined4 local_38;
  uint local_34;
  int *local_30;
  uint local_28;
  int *local_24;
  uint uStack_1c;
  int *local_18;
  undefined4 local_14;
  uint local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0064237f;
  pvStack_c = ExceptionList;
  local_3c = (int *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_48 = (int *)0x0;
  local_44 = 0;
  local_40 = 0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_00491990(param_2,&local_3c,&local_48,&local_18,param_3,s_vector_set_0066f908);
  if (iVar1 == 0) {
    if (((char)local_34 == '\n') && ((char)local_40 == '\x06')) {
      FUN_004042a0();
      local_4._0_1_ = 4;
      if (local_3c == (int *)0x0) {
        local_30 = (int *)0x0;
        local_28 = 0;
      }
      else {
        iVar1 = (**(code **)*local_3c)();
        if (iVar1 == 10) {
          local_30 = local_3c;
          local_28 = local_34;
          local_3c[1] = local_3c[1] + 1;
        }
        else {
          uVar2 = (**(code **)(*local_3c + 4))(s_Vector_0066f8e4);
          FUN_004a5670(2,1,uVar2);
        }
      }
      FUN_004042a0();
      local_4._0_1_ = 6;
      if (local_48 == (int *)0x0) {
        local_24 = (int *)0x0;
        uStack_1c = 0;
      }
      else {
        iVar1 = (**(code **)*local_48)();
        if (iVar1 == 6) {
          local_24 = local_48;
          uStack_1c = local_40;
          local_48[1] = local_48[1] + 1;
        }
        else {
          uVar2 = (**(code **)(*local_48 + 4))(s_Number_0066ba60);
          FUN_004a5670(2,1,uVar2);
        }
      }
      local_4 = CONCAT31(local_4._1_3_,7);
      if (local_24 == (int *)0x0) {
        FUN_004a5470(0,1);
      }
      if ((uStack_1c & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      uVar3 = FUN_004b0f30();
      if (local_30 == (int *)0x0) {
        FUN_004a5470(0,1);
      }
      if ((local_28 & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      if (uVar3 < (uint)((local_30[6] - local_30[5]) / 0xc)) {
        FUN_004b8250();
        FUN_0040c060(&local_18);
      }
      else {
        FUN_004a5be0(param_2,0x17,s_vector_set_0066f908);
      }
      local_4._0_1_ = 5;
      FUN_00492340();
      local_4._0_1_ = 3;
      FUN_00492340();
    }
    else {
      FUN_004a5be0(param_2,10,s_vector_set_0066f908);
    }
    FUN_004042a0();
    local_4._0_1_ = 2;
    FUN_00492340();
    local_4._0_1_ = 1;
    FUN_00492340();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00492340();
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_4._0_1_ = 2;
    if (((local_10 & 0x10000) == 0) && (local_18 != (int *)0x0)) {
      local_18[1] = local_18[1] + -1;
      if ((local_18[1] == 0) && (local_18 != (int *)0x0)) {
        (**(code **)(*local_18 + 0xc))(1);
      }
    }
    local_4._0_1_ = 1;
    if (((local_40 & 0x10000) == 0) && (local_48 != (int *)0x0)) {
      local_48[1] = local_48[1] + -1;
      if ((local_48[1] == 0) && (local_48 != (int *)0x0)) {
        (**(code **)(*local_48 + 0xc))(1);
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (((local_34 & 0x10000) == 0) && (local_3c != (int *)0x0)) {
      local_3c[1] = local_3c[1] + -1;
      if ((local_3c[1] == 0) && (local_3c != (int *)0x0)) {
        (**(code **)(*local_3c + 0xc))(1);
      }
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

