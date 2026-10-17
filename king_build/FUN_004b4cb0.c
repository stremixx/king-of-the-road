
undefined4 *
FUN_004b4cb0(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,uint param_5)

{
  int *local_64;
  undefined4 local_60;
  uint local_5c;
  undefined1 auStack_50 [44];
  int local_24;
  int local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00643f9f;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if (((param_5 & 0x10000) == 0) && (ExceptionList = &pvStack_c, param_3 != (int *)0x0)) {
    ExceptionList = &pvStack_c;
    param_3[1] = param_3[1] + 1;
  }
  FUN_004b4ea0();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004b3ec0();
  if ((local_5c & 0x10000) == 0) {
    param_1[1] = 0;
    if (local_64 == (int *)0x0) {
      *param_1 = 0;
      param_1[2] = 0;
    }
    else {
      *param_1 = local_64;
      param_1[2] = local_5c;
      local_64[1] = local_64[1] + 1;
    }
  }
  else {
    param_1[2] = local_5c;
    *param_1 = local_64;
    param_1[1] = local_60;
  }
  if (((((local_5c & 0x10000) == 0) && (local_64 != (int *)0x0)) &&
      (local_64[1] = local_64[1] + -1, local_64[1] == 0)) && (local_64 != (int *)0x0)) {
    (**(code **)(*local_64 + 0xc))();
  }
  local_4._0_1_ = 4;
  if (local_1c != local_24) {
    FUN_0044b440();
  }
  local_4._0_1_ = 3;
  FUN_00492340();
  local_4._0_1_ = 5;
  FUN_004abfc0();
  FUN_004abfc0(auStack_50);
  FUN_004a2af0();
  local_4._0_1_ = 1;
  FUN_004a2010();
  local_4 = (uint)local_4._1_3_ << 8;
  if ((((param_5 & 0x10000) == 0) && (param_3 != (int *)0x0)) &&
     ((param_3[1] = param_3[1] + -1, param_3[1] == 0 && (param_3 != (int *)0x0)))) {
    (**(code **)(*param_3 + 0xc))();
  }
  ExceptionList = pvStack_c;
  return param_1;
}

