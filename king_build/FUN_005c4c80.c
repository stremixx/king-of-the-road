
undefined4 __thiscall FUN_005c4c80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float10 fVar2;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  double local_30;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006481e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006022c0();
  local_4 = 0;
  FUN_006022a0();
  local_4._0_1_ = 1;
  local_34 = 0;
  fVar2 = (float10)thunk_FUN_00603580();
  local_30 = (double)fVar2;
  local_4._0_1_ = 2;
  iVar1 = FUN_006006d0(&local_40);
  if ((iVar1 == 0) && (local_34 == *(int *)(param_1 + 0x19c))) {
    if (local_40 == 2) {
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_006022b0();
      local_4 = 0xffffffff;
      FUN_00602560();
      ExceptionList = local_c;
      return 2;
    }
    if (local_40 == 4) {
      FUN_00602850(local_3c,local_38);
      iVar1 = FUN_006029d0();
      while ((iVar1 == 0 && (iVar1 = FUN_006028c0(&local_48), iVar1 == 0))) {
        if ((local_48 == 0x78) &&
           ((iVar1 = FUN_00602bc0(&local_44,param_2,param_3), iVar1 == 0 && (local_44 == 0x3b6)))) {
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_006022b0();
          local_4 = 0xffffffff;
          FUN_00602560();
          ExceptionList = local_c;
          return 1;
        }
        iVar1 = FUN_006029e0();
      }
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_006022b0();
  local_4 = 0xffffffff;
  FUN_00602560();
  ExceptionList = local_c;
  return 0;
}

