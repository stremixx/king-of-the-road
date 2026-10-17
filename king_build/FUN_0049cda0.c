
undefined4 * FUN_0049cda0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *local_54;
  undefined4 local_50;
  uint local_4c;
  int *local_48;
  undefined4 local_44;
  uint local_40;
  int *local_3c;
  undefined4 local_38;
  uint local_34;
  int *local_30;
  uint uStack_28;
  int *local_24;
  uint local_1c;
  undefined1 uStack_18;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006421a7;
  pvStack_c = ExceptionList;
  local_48 = (int *)0x0;
  local_44 = 0;
  local_40 = 0;
  local_54 = (int *)0x0;
  local_50 = 0;
  local_4c = 0;
  local_3c = (int *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_00491990(param_2,&local_48,&local_54,&local_3c,param_3,s_string_set__0066f8b4);
  if (iVar1 == 0) {
    if ((((char)local_40 == '\x03') && ((char)local_4c == '\x06')) && ((char)local_34 == '\b')) {
      FUN_004042a0();
      local_4._0_1_ = 4;
      if (local_48 == (int *)0x0) {
        local_24 = (int *)0x0;
        local_1c = 0;
      }
      else {
        iVar1 = (**(code **)*local_48)();
        if (iVar1 == 3) {
          local_24 = local_48;
          local_1c = local_40;
          local_48[1] = local_48[1] + 1;
        }
        else {
          uVar2 = (**(code **)(*local_48 + 4))(s_String_0066ba58);
          FUN_004a5670(2,1,uVar2);
        }
      }
      FUN_004042a0();
      local_4._0_1_ = 6;
      if (local_54 == (int *)0x0) {
        local_30 = (int *)0x0;
        uStack_28 = 0;
      }
      else {
        iVar1 = (**(code **)*local_54)();
        if (iVar1 == 6) {
          local_30 = local_54;
          uStack_28 = local_4c;
          local_54[1] = local_54[1] + 1;
        }
        else {
          uVar2 = (**(code **)(*local_54 + 4))(s_Number_0066ba60);
          FUN_004a5670(2,1,uVar2);
        }
      }
      local_4._0_1_ = 7;
      FUN_004a1ac0(&local_3c);
      local_4 = CONCAT31(local_4._1_3_,8);
      if (local_30 == (int *)0x0) {
        FUN_004a5470(0,1);
      }
      if ((uStack_28 & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      uVar3 = FUN_004b0f30();
      iVar1 = FUN_004b8250();
      if (uVar3 < (*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) - 1U) {
        iVar1 = FUN_004b8250();
        *(undefined1 *)(*(int *)(iVar1 + 0xc) + uVar3) = uStack_18;
      }
      else {
        FUN_004a5be0(param_2,0x17,s_string_set__0066f8b4);
      }
      local_4._0_1_ = 7;
      FUN_00492340();
      local_4._0_1_ = 5;
      FUN_00492340();
      local_4._0_1_ = 3;
      FUN_00492340();
    }
    else {
      FUN_004a5be0(param_2,10,s_string_set__0066f8b4);
    }
    local_4._0_1_ = 2;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
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
    if (((local_34 & 0x10000) == 0) && (local_3c != (int *)0x0)) {
      local_3c[1] = local_3c[1] + -1;
      if ((local_3c[1] == 0) && (local_3c != (int *)0x0)) {
        (**(code **)(*local_3c + 0xc))(1);
      }
    }
    local_4._0_1_ = 1;
    if (((local_4c & 0x10000) == 0) && (local_54 != (int *)0x0)) {
      local_54[1] = local_54[1] + -1;
      if ((local_54[1] == 0) && (local_54 != (int *)0x0)) {
        (**(code **)(*local_54 + 0xc))(1);
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (((local_40 & 0x10000) == 0) && (local_48 != (int *)0x0)) {
      local_48[1] = local_48[1] + -1;
      if ((local_48[1] == 0) && (local_48 != (int *)0x0)) {
        (**(code **)(*local_48 + 0xc))(1);
        ExceptionList = pvStack_10;
        return param_1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

