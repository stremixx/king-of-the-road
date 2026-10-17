
undefined4 * FUN_004a0430(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *local_18;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0064273f;
  local_c = ExceptionList;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 1;
  ExceptionList = &local_c;
  iVar1 = FUN_00491cd0(param_2,&local_18,param_3,s_internal_macro_expand_0066f9d4);
  if (iVar1 == 0) {
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
    if ((local_10 & 0x10000) != 0) {
      ExceptionList = local_c;
      return param_1;
    }
    if (local_18 == (int *)0x0) {
      ExceptionList = local_c;
      return param_1;
    }
    local_18[1] = local_18[1] + -1;
    iVar1 = local_18[1];
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if ((local_10 & 0x10000) != 0) {
      ExceptionList = local_c;
      return param_1;
    }
    if (local_18 == (int *)0x0) {
      ExceptionList = local_c;
      return param_1;
    }
    local_18[1] = local_18[1] + -1;
    iVar1 = local_18[1];
  }
  if ((iVar1 == 0) && (local_18 != (int *)0x0)) {
    local_4 = local_4 & 0xffffff00;
    (**(code **)(*local_18 + 0xc))(1);
  }
  ExceptionList = local_c;
  return param_1;
}

