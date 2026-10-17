
undefined4 * FUN_004a0620(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *local_48;
  undefined4 local_44;
  uint local_40;
  int *local_3c;
  undefined4 local_38;
  uint local_34;
  int *local_30;
  uint local_28;
  int aiStack_24 [2];
  uint uStack_1c;
  int *local_18;
  uint uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0064279f;
  pvStack_c = ExceptionList;
  local_3c = (int *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_48 = (int *)0x0;
  local_44 = 0;
  local_40 = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_00491b70(param_2,&local_3c,&local_48,param_3,s_string_append_0066f9ec);
  if (iVar1 == 0) {
    if (((char)local_34 == '\x03') && ((char)local_40 == '\x03')) {
      FUN_004042a0();
      local_4._0_1_ = 3;
      if (local_3c == (int *)0x0) {
        local_30 = (int *)0x0;
        local_28 = 0;
      }
      else {
        iVar1 = (**(code **)*local_3c)();
        if (iVar1 == 3) {
          local_30 = local_3c;
          local_28 = local_34;
          local_3c[1] = local_3c[1] + 1;
        }
        else {
          uVar2 = (**(code **)(*local_3c + 4))(s_String_0066ba58);
          FUN_004a5670(2,1,uVar2);
        }
      }
      FUN_004042a0();
      local_4._0_1_ = 5;
      if (local_48 == (int *)0x0) {
        local_18 = (int *)0x0;
        uStack_10 = 0;
      }
      else {
        iVar1 = (**(code **)*local_48)();
        if (iVar1 == 3) {
          local_18 = local_48;
          uStack_10 = local_40;
          local_48[1] = local_48[1] + 1;
        }
        else {
          uVar2 = (**(code **)(*local_48 + 4))(s_String_0066ba58);
          FUN_004a5670(2,1,uVar2);
        }
      }
      local_4._0_1_ = 6;
      FUN_004a2550(aiStack_24,0);
      local_4 = CONCAT31(local_4._1_3_,7);
      if (local_30 == (int *)0x0) {
        FUN_004a5470(0,1);
      }
      if ((local_28 & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      iVar1 = local_30[4];
      if (local_30 == (int *)0x0) {
        FUN_004a5470(0,1);
      }
      if ((local_28 & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      iVar4 = local_30[3];
      if (aiStack_24[0] == 0) {
        FUN_004a5470(0,1);
      }
      if ((uStack_1c & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      uVar2 = *(undefined4 *)(aiStack_24[0] + 0x10);
      FUN_004b8250(uVar2,iVar4,iVar1);
      FUN_0044c1c0(uVar2,iVar4,iVar1);
      iVar1 = FUN_004b8250();
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + -1;
      iVar1 = FUN_004b8250();
      uVar2 = *(undefined4 *)(iVar1 + 0x10);
      iVar1 = FUN_004b8250();
      uVar5 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = FUN_004b8250();
      uVar3 = *(undefined4 *)(iVar1 + 0x10);
      FUN_004b8250(uVar3,uVar5,uVar2);
      FUN_0044c1c0(uVar3,uVar5,uVar2);
      FUN_00455dc0(aiStack_24);
      local_4._0_1_ = 6;
      FUN_00492340();
      local_4._0_1_ = 4;
      FUN_00492340();
      local_4._0_1_ = 2;
      FUN_00492340();
    }
    else {
      FUN_004a5be0(param_2,10,s_string_append_0066f9ec);
      FUN_004042a0();
    }
    local_4._0_1_ = 1;
    FUN_00492340();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00492340();
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
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

