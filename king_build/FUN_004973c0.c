
int * FUN_004973c0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *local_30;
  undefined4 local_2c;
  uint local_28;
  int *local_24;
  undefined4 local_20;
  uint local_1c;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0064168f;
  local_c = ExceptionList;
  local_30 = (int *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_00491cd0(param_2,&local_30,param_3,s_truncate_0066f6fc);
  if (iVar1 == 0) {
    if ((char)local_28 != '\x06') {
      FUN_004a5cd0(param_2,0xf,s_Number_0066ba60,s_truncate_0066f6fc);
      FUN_004042a0();
      FUN_00455dc0(&local_24);
      FUN_00492340();
      if ((local_28 & 0x10000) != 0) {
        ExceptionList = local_c;
        return param_1;
      }
      if (local_30 == (int *)0x0) {
        ExceptionList = local_c;
        return param_1;
      }
      local_30[1] = local_30[1] + -1;
      iVar1 = local_30[1];
      goto joined_r0x004975a1;
    }
    FUN_004042a0();
    local_4._0_1_ = 2;
    if (local_30 == (int *)0x0) {
      local_24 = (int *)0x0;
      local_1c = 0;
    }
    else {
      iVar1 = (**(code **)*local_30)();
      if (iVar1 == 6) {
        local_24 = local_30;
        local_1c = local_28;
        local_30[1] = local_30[1] + 1;
      }
      else {
        uVar2 = (**(code **)(*local_30 + 4))(s_Number_0066ba60);
        FUN_004a5670(2,1,uVar2);
      }
    }
    local_4._0_1_ = 3;
    piVar3 = (int *)FUN_004b1100(local_18,param_2,local_24);
    if ((piVar3[2] & 0x10000U) == 0) {
      param_1[1] = 0;
      iVar1 = *piVar3;
      if (iVar1 == 0) {
        *param_1 = 0;
        param_1[2] = 0;
      }
      else {
        *param_1 = iVar1;
        param_1[2] = piVar3[2];
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      }
    }
    else {
      param_1[2] = piVar3[2];
      *param_1 = *piVar3;
      param_1[1] = piVar3[1];
    }
    FUN_00492340();
    local_4._0_1_ = 1;
  }
  else {
    local_24 = (int *)0x0;
    local_20 = 0;
    local_1c = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = 0;
  }
  FUN_00492340();
  if ((local_28 & 0x10000) != 0) {
    ExceptionList = local_c;
    return param_1;
  }
  if (local_30 == (int *)0x0) {
    ExceptionList = local_c;
    return param_1;
  }
  local_30[1] = local_30[1] + -1;
  iVar1 = local_30[1];
joined_r0x004975a1:
  if ((iVar1 == 0) && (local_30 != (int *)0x0)) {
    local_4 = (uint)local_4._1_3_ << 8;
    (**(code **)(*local_30 + 0xc))(1);
  }
  ExceptionList = local_c;
  return param_1;
}

