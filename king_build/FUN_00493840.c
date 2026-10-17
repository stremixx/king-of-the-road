
undefined4 * FUN_00493840(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int *local_24;
  undefined4 local_20;
  uint local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0064109f;
  local_c = ExceptionList;
  local_24 = (int *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_4 = 1;
  ExceptionList = &local_c;
  iVar1 = FUN_00491cd0(param_2,&local_24,param_3,s_rational__0066f680);
  if (iVar1 == 0) {
    if ((char)local_1c == '\x06') {
      local_18 = (int *)0x0;
      local_14 = 0;
      local_10 = (void *)0x0;
      local_4._0_1_ = 2;
      if (local_24 == (int *)0x0) {
        piVar3 = (int *)0x0;
        uVar4 = 0;
        local_18 = (int *)0x0;
        local_10 = (void *)0x0;
      }
      else {
        iVar1 = (**(code **)*local_24)();
        if (iVar1 == 6) {
          local_18 = local_24;
          local_10 = (void *)local_1c;
          local_24[1] = local_24[1] + 1;
          piVar3 = local_24;
          uVar4 = local_1c;
        }
        else {
          uVar2 = (**(code **)(*local_24 + 4))(s_Number_0066ba60);
          FUN_004a5670(2,1,uVar2);
          piVar3 = (int *)0x0;
          uVar4 = 0;
        }
      }
      local_4 = CONCAT31(local_4._1_3_,3);
      if (piVar3 == (int *)0x0) {
        FUN_004a5470(0,1);
      }
      if ((uVar4 & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      uVar2 = FUN_004b0f40();
      FUN_00492320(param_1,0,uVar2);
      local_4._0_1_ = 1;
      if ((((uVar4 & 0x10000) == 0) && (piVar3 != (int *)0x0)) &&
         (iVar1 = piVar3[1], piVar3[1] = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*piVar3 + 0xc))(1);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (((local_1c & 0x10000) == 0) && (local_24 != (int *)0x0)) {
        local_24[1] = local_24[1] + -1;
        if ((local_24[1] == 0) && (local_24 != (int *)0x0)) {
          (**(code **)(*local_24 + 0xc))(1);
        }
      }
      ExceptionList = local_c;
      return param_1;
    }
    FUN_00492320(param_1,0,0);
    local_4 = local_4 & 0xffffff00;
    if (((local_1c & 0x10000) == 0) && (local_24 != (int *)0x0)) {
      local_24[1] = local_24[1] + -1;
      if ((local_24[1] == 0) && (local_24 != (int *)0x0)) {
        (**(code **)(*local_24 + 0xc))(1);
      }
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_4 = (uint)local_4._1_3_ << 8;
    if (((local_1c & 0x10000) == 0) && (local_24 != (int *)0x0)) {
      local_24[1] = local_24[1] + -1;
      if ((local_24[1] == 0) && (local_24 != (int *)0x0)) {
        (**(code **)(*local_24 + 0xc))(1);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

