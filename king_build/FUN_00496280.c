
int * FUN_00496280(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *local_48;
  undefined4 local_44;
  uint local_40;
  int *local_3c;
  undefined4 local_38;
  uint local_34;
  int *local_30;
  uint uStack_28;
  int *local_24;
  int local_20;
  uint local_1c;
  undefined1 local_18 [8];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00641487;
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
  iVar1 = FUN_00491b70(param_2,&local_3c,&local_48,param_3,s_quotent_0066f6b8);
  if (iVar1 == 0) {
    if (((char)local_34 == '\x06') && ((char)local_40 == '\x06')) {
      FUN_004042a0();
      local_4._0_1_ = 3;
      if (local_3c == (int *)0x0) {
        local_24 = (int *)0x0;
        local_1c = 0;
      }
      else {
        iVar1 = (**(code **)*local_3c)();
        if (iVar1 == 6) {
          local_24 = local_3c;
          local_1c = local_34;
          local_3c[1] = local_3c[1] + 1;
        }
        else {
          uVar2 = (**(code **)(*local_3c + 4))(s_Number_0066ba60);
          FUN_004a5670(2,1,uVar2);
        }
      }
      FUN_004042a0();
      local_4._0_1_ = 5;
      if (local_48 == (int *)0x0) {
        local_30 = (int *)0x0;
        uStack_28 = 0;
      }
      else {
        iVar1 = (**(code **)*local_48)();
        if (iVar1 == 6) {
          local_30 = local_48;
          uStack_28 = local_40;
          local_48[1] = local_48[1] + 1;
        }
        else {
          uVar2 = (**(code **)(*local_48 + 4))(s_Number_0066ba60);
          FUN_004a5670(2,1,uVar2);
        }
      }
      local_4._0_1_ = 6;
      piVar3 = (int *)FUN_004b1100(local_18,param_2,local_24,local_30);
      if ((piVar3[2] & 0x10000U) == 0) {
        param_1[1] = 0;
        if (*piVar3 == 0) {
          *param_1 = 0;
          param_1[2] = 0;
        }
        else {
          *param_1 = *piVar3;
          param_1[2] = piVar3[2];
          *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
        }
      }
      else {
        param_1[2] = piVar3[2];
        *param_1 = *piVar3;
        param_1[1] = piVar3[1];
      }
      FUN_00492340();
      local_4._0_1_ = 4;
      FUN_00492340();
      local_4._0_1_ = 2;
    }
    else {
      FUN_004a5cd0(param_2,0xf,s_Number_0066ba60,s_quotent_0066f6b8);
      uVar2 = FUN_004042a0();
      FUN_00455dc0(uVar2);
    }
    FUN_00492340();
    local_4._0_1_ = 1;
    FUN_00492340();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00492340();
  }
  else {
    FUN_004042a0();
    if ((local_1c & 0x10000) == 0) {
      param_1[1] = 0;
      if (local_24 == (int *)0x0) {
        *param_1 = 0;
        param_1[2] = 0;
      }
      else {
        *param_1 = (int)local_24;
        param_1[2] = local_1c;
        local_24[1] = local_24[1] + 1;
      }
    }
    else {
      param_1[2] = local_1c;
      *param_1 = (int)local_24;
      param_1[1] = local_20;
    }
    FUN_00492340();
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
        ExceptionList = pvStack_10;
        return param_1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

