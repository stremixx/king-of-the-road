
undefined4 *
FUN_004b8100(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,uint param_5,
            int *param_6,undefined4 param_7,uint param_8)

{
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  undefined4 local_14;
  uint local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00644387;
  pvStack_c = ExceptionList;
  local_20 = param_2;
  local_4 = 2;
  local_1c = 0;
  ExceptionList = &pvStack_c;
  FUN_004b7000(&local_18,&param_3,&param_6,&local_20);
  if ((local_10 & 0x10000) == 0) {
    param_1[1] = 0;
    if (local_18 == (int *)0x0) {
      *param_1 = 0;
      param_1[2] = 0;
    }
    else {
      *param_1 = local_18;
      param_1[2] = local_10;
      local_18[1] = local_18[1] + 1;
    }
  }
  else {
    param_1[2] = local_10;
    *param_1 = local_18;
    param_1[1] = local_14;
  }
  if (((local_10 & 0x10000) == 0) && (local_18 != (int *)0x0)) {
    local_18[1] = local_18[1] + -1;
    if ((local_18[1] == 0) && (local_18 != (int *)0x0)) {
      (**(code **)(*local_18 + 0xc))(1);
    }
  }
  local_4._0_1_ = 1;
  if (((param_5 & 0x10000) == 0) && (param_3 != (int *)0x0)) {
    param_3[1] = param_3[1] + -1;
    if ((param_3[1] == 0) && (param_3 != (int *)0x0)) {
      (**(code **)(*param_3 + 0xc))(1);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (((param_8 & 0x10000) == 0) && (param_6 != (int *)0x0)) {
    param_6[1] = param_6[1] + -1;
    if ((param_6[1] == 0) && (param_6 != (int *)0x0)) {
      (**(code **)(*param_6 + 0xc))(1);
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

