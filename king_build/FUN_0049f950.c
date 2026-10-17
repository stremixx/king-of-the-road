
undefined4 * FUN_0049f950(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *local_24;
  undefined4 local_20;
  void *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642658;
  local_c = ExceptionList;
  if ((uint)((param_3[1] - *param_3) / 0xc) < 2) {
    ExceptionList = &local_c;
    if (*(int *)(param_2 + 0x48) == 0) {
      ExceptionList = &local_c;
      FUN_004a5470(0,1);
    }
    if ((*(uint *)(param_2 + 0x50) & 0x10000) != 0) {
      FUN_004a5470(4,1);
    }
    uVar2 = (**(code **)(**(int **)(param_2 + 0x48) + 0x20))();
    FUN_00492320(param_1,0,uVar2);
  }
  else {
    local_24 = (int *)0x0;
    local_20 = 0;
    local_1c = (void *)0x0;
    local_4 = 0;
    ExceptionList = &local_c;
    iVar1 = FUN_00491cd0(param_2,&local_24,param_3,s_char_ready__0066f9ac);
    if (iVar1 == 0) {
      if ((char)local_1c != '\v') {
        local_4 = 0xffffffff;
        if ((((uint)local_1c & 0x10000) == 0) && (local_24 != (int *)0x0)) {
          local_24[1] = local_24[1] + -1;
          if ((local_24[1] == 0) && (local_24 != (int *)0x0)) {
            (**(code **)(*local_24 + 0xc))(1);
          }
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        ExceptionList = local_c;
        return param_1;
      }
      local_18 = (int *)0x0;
      local_14 = 0;
      local_10 = (void *)0x0;
      local_4._0_1_ = 1;
      if (local_24 == (int *)0x0) {
        local_18 = (int *)0x0;
        local_10 = (void *)0x0;
      }
      else {
        iVar1 = (**(code **)*local_24)();
        if (iVar1 == 0xb) {
          local_18 = local_24;
          local_10 = local_1c;
          local_24[1] = local_24[1] + 1;
        }
        else {
          uVar2 = (**(code **)(*local_24 + 4))(&DAT_0066bb28);
          FUN_004a5670(2,1,uVar2);
        }
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      if (local_18 == (int *)0x0) {
        FUN_004a5470(0,1);
      }
      if (((uint)local_10 & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      uVar2 = (**(code **)(*local_18 + 0x20))();
      FUN_00492320(param_1,0,uVar2);
      local_4 = local_4 & 0xffffff00;
      FUN_00492340();
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    local_4 = 0xffffffff;
    if ((((uint)local_1c & 0x10000) == 0) && (local_24 != (int *)0x0)) {
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

