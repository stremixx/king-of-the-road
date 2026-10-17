
undefined4 * FUN_0049f7a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *local_24;
  undefined4 local_20;
  uint local_1c;
  int *local_18;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0064262f;
  local_c = ExceptionList;
  local_24 = (int *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_4 = 1;
  ExceptionList = &local_c;
  iVar1 = FUN_00491cd0(param_2,&local_24,param_3,s_eof_object__0066f9a0);
  if (iVar1 == 0) {
    if ((char)local_1c == '\b') {
      FUN_004a1ac0(&local_24);
      FUN_00492320(param_1,0,local_18 == (int *)0xffffffff);
      if (((((local_10 & 0x10000) == 0) && (local_18 != (int *)0x0)) &&
          (local_18[1] = local_18[1] + -1, local_18[1] == 0)) && (local_18 != (int *)0x0)) {
        (**(code **)(*local_18 + 0xc))(1);
      }
      local_4 = local_4 & 0xffffff00;
      if ((((local_1c & 0x10000) == 0) && (local_24 != (int *)0x0)) &&
         ((local_24[1] = local_24[1] + -1, local_24[1] == 0 && (local_24 != (int *)0x0)))) {
        (**(code **)(*local_24 + 0xc))(1);
      }
      ExceptionList = local_c;
      return param_1;
    }
    FUN_00492320(param_1,0,0xffffffff);
    if ((local_1c & 0x10000) != 0) {
      ExceptionList = local_c;
      return param_1;
    }
    if (local_24 == (int *)0x0) {
      ExceptionList = local_c;
      return param_1;
    }
    local_24[1] = local_24[1] + -1;
    iVar1 = local_24[1];
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if ((local_1c & 0x10000) != 0) {
      ExceptionList = local_c;
      return param_1;
    }
    if (local_24 == (int *)0x0) {
      ExceptionList = local_c;
      return param_1;
    }
    local_24[1] = local_24[1] + -1;
    iVar1 = local_24[1];
  }
  if ((iVar1 == 0) && (local_24 != (int *)0x0)) {
    local_4 = local_4 & 0xffffff00;
    (**(code **)(*local_24 + 0xc))(1);
  }
  ExceptionList = local_c;
  return param_1;
}

