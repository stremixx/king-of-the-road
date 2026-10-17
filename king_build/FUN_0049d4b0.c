
undefined4 * FUN_0049d4b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *local_48;
  undefined4 local_44;
  uint local_40;
  int *local_3c;
  undefined4 local_38;
  uint local_34;
  int local_30 [2];
  uint local_28;
  int *local_24 [2];
  uint local_1c;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0064227f;
  local_c = ExceptionList;
  local_48 = (int *)0x0;
  local_44 = 0;
  local_40 = 0;
  local_4 = 1;
  ExceptionList = &local_c;
  iVar1 = FUN_00491cd0(param_2,&local_48,param_3,s_list_>vector_0066f8d4);
  if (iVar1 == 0) {
    if ((char)local_40 == '\x02') {
      FUN_004a2850(local_30,0,param_2);
      local_4._0_1_ = 3;
      if ((local_40 & 0x10000) == 0) {
        local_38 = 0;
        if (local_48 == (int *)0x0) {
          local_3c = (int *)0x0;
          local_34 = 0;
        }
        else {
          local_3c = local_48;
          local_34 = local_40;
          local_48[1] = local_48[1] + 1;
        }
      }
      else {
        local_34 = local_40;
        local_3c = local_48;
        local_38 = local_44;
      }
      while ((local_34 != 0 || (local_3c != (int *)0x0))) {
        if ((char)local_34 == '\x02') {
          uVar2 = FUN_00407e60(local_18,&local_3c);
          local_4 = CONCAT31(local_4._1_3_,5);
          if (local_30[0] == 0) {
            FUN_004a5470(0,1);
          }
          if ((local_28 & 0x10000) != 0) {
            FUN_004a5470(4,1);
          }
          FUN_004a17d0(uVar2);
          local_4._0_1_ = 3;
          FUN_00492340();
        }
        else {
          FUN_004a5be0(param_2,0x11,s_list_>vector_0066f8d4);
        }
        uVar2 = FUN_00409000(local_24,&local_3c);
        local_4._0_1_ = 4;
        FUN_0040c060(uVar2);
        local_4._0_1_ = 3;
        if (((local_1c & 0x10000) == 0) && (local_24[0] != (int *)0x0)) {
          local_24[0][1] = local_24[0][1] + -1;
          if ((local_24[0][1] == 0) && (local_24[0] != (int *)0x0)) {
            (**(code **)(*local_24[0] + 0xc))(1);
          }
        }
      }
      FUN_00455dc0(local_30);
      local_4._0_1_ = 2;
      FUN_00492340();
      local_4._0_1_ = 1;
      FUN_00492340();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00492340();
    }
    else {
      FUN_004a5be0(param_2,0x15,s_list_>vector_0066f8d4);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      local_4 = local_4 & 0xffffff00;
      if (((local_40 & 0x10000) == 0) && (local_48 != (int *)0x0)) {
        local_48[1] = local_48[1] + -1;
        if ((local_48[1] == 0) && (local_48 != (int *)0x0)) {
          (**(code **)(*local_48 + 0xc))(1);
        }
      }
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_4 = local_4 & 0xffffff00;
    if (((local_40 & 0x10000) == 0) && (local_48 != (int *)0x0)) {
      local_48[1] = local_48[1] + -1;
      if ((local_48[1] == 0) && (local_48 != (int *)0x0)) {
        (**(code **)(*local_48 + 0xc))(1);
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

