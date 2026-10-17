
undefined4 * FUN_0049fb90(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *local_48;
  undefined4 local_44;
  uint local_40;
  int *local_3c;
  uint local_34;
  int *local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006426a0;
  local_c = ExceptionList;
  iVar2 = param_3[1];
  iVar1 = *param_3;
  if ((uint)((iVar2 - iVar1) / 0xc) < 2) {
    ExceptionList = &local_c;
    FUN_004a5be0(param_2,0x21,s_write_char_0066f9b8);
  }
  else if (*(char *)(iVar1 + 0x14) == '\b') {
    if ((iVar2 - iVar1) / 0xc == 2) {
      ExceptionList = &local_c;
      FUN_004a1ac0(iVar1 + 0xc);
      local_4 = 0;
      if (*(int *)(param_2 + 0x54) == 0) {
        FUN_004a5470(0,1);
      }
      if ((*(uint *)(param_2 + 0x5c) & 0x10000) != 0) {
        FUN_004a5470(4,1);
      }
      (**(code **)(**(int **)(param_2 + 0x54) + 0x1c))(local_24);
      local_4 = 0xffffffff;
      FUN_00492340();
    }
    else if ((iVar2 - iVar1) / 0xc == 3) {
      local_30 = (int *)0x0;
      local_2c = 0;
      local_28 = 0;
      local_48 = (int *)0x0;
      local_44 = 0;
      local_40 = 0;
      local_4._0_1_ = 2;
      local_4._1_3_ = 0;
      ExceptionList = &local_c;
      iVar2 = FUN_00491b70(param_2,&local_30,&local_48,param_3,s_write_char_0066f9b8);
      if (iVar2 != 0) {
        local_4 = CONCAT31(local_4._1_3_,1);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        if (((local_40 & 0x10000) == 0) && (local_48 != (int *)0x0)) {
          local_48[1] = local_48[1] + -1;
          if ((local_48[1] == 0) && (local_48 != (int *)0x0)) {
            (**(code **)(*local_48 + 0xc))(1);
          }
        }
        local_4 = 0xffffffff;
        if (((local_28 & 0x10000) == 0) && (local_30 != (int *)0x0)) {
          local_30[1] = local_30[1] + -1;
          if ((local_30[1] == 0) && (local_30 != (int *)0x0)) {
            (**(code **)(*local_30 + 0xc))(1);
          }
        }
        ExceptionList = local_c;
        return param_1;
      }
      if ((char)local_40 == '\v') {
        FUN_004a1ac0(&local_30);
        FUN_004042a0();
        local_4._0_1_ = 4;
        if (local_48 == (int *)0x0) {
          local_3c = (int *)0x0;
          local_34 = 0;
        }
        else {
          iVar2 = (**(code **)*local_48)();
          if (iVar2 == 0xb) {
            local_3c = local_48;
            local_34 = local_40;
            local_48[1] = local_48[1] + 1;
          }
          else {
            uVar3 = (**(code **)(*local_48 + 4))(&DAT_0066bb28);
            FUN_004a5670(2,1,uVar3);
          }
        }
        local_4 = CONCAT31(local_4._1_3_,5);
        if (local_3c == (int *)0x0) {
          FUN_004a5470(0,1);
        }
        if ((local_34 & 0x10000) != 0) {
          FUN_004a5470(4,1);
        }
        (**(code **)(*local_3c + 0x1c))(local_18);
        local_4._0_1_ = 3;
        FUN_00492340();
        local_4._0_1_ = 2;
        FUN_00492340();
      }
      else {
        FUN_004a5cd0(param_2,0xf,&DAT_0066bb28,s_write_char_0066f9b8);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      if (((local_40 & 0x10000) == 0) && (local_48 != (int *)0x0)) {
        local_48[1] = local_48[1] + -1;
        if ((local_48[1] == 0) && (local_48 != (int *)0x0)) {
          (**(code **)(*local_48 + 0xc))(1);
        }
      }
      local_4 = 0xffffffff;
      FUN_00492340();
    }
    else {
      ExceptionList = &local_c;
      FUN_004a5be0(param_2,0x21,s_write_char_0066f9b8);
    }
  }
  else {
    ExceptionList = &local_c;
    FUN_004a5cd0(param_2,0xf,&DAT_0066f650,s_write_char_0066f9b8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ExceptionList = local_c;
  return param_1;
}

