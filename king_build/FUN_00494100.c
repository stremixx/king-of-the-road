
undefined4 FUN_00494100(undefined4 param_1,undefined4 param_2,int *param_3)

{
  uint3 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *local_3c;
  undefined4 local_38;
  uint local_34;
  int *local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006411a7;
  local_c = ExceptionList;
  local_30 = (int *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_3c = (int *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_4._1_3_ = 0;
  uVar1 = local_4._1_3_;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  iVar4 = *param_3;
  if ((param_3[1] - iVar4) / 0xc == 1) {
    ExceptionList = &local_c;
    FUN_00492320(param_1,0,0xffffffff);
    local_4._0_1_ = 1;
    if (((((local_34 & 0x10000) == 0) && (local_3c != (int *)0x0)) &&
        (local_3c[1] = local_3c[1] + -1, local_3c[1] == 0)) && (local_3c != (int *)0x0)) {
      (**(code **)(*local_3c + 0xc))(1);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if ((((local_28 & 0x10000) == 0) && (local_30 != (int *)0x0)) &&
       ((local_30[1] = local_30[1] + -1, local_30[1] == 0 && (local_30 != (int *)0x0)))) {
      (**(code **)(*local_30 + 0xc))(1);
    }
    ExceptionList = local_c;
    return param_1;
  }
  local_34 = *(uint *)(iVar4 + 0x14);
  if ((local_34 & 0x10000) == 0) {
    local_38 = 0;
    local_3c = *(int **)(iVar4 + 0xc);
    if (local_3c == (int *)0x0) {
      local_3c = (int *)0x0;
      local_34 = 0;
      ExceptionList = &local_c;
    }
    else {
      local_34 = *(uint *)(iVar4 + 0x14);
      ExceptionList = &local_c;
      local_3c[1] = local_3c[1] + 1;
    }
  }
  else {
    local_3c = *(int **)(iVar4 + 0xc);
    local_38 = *(undefined4 *)(iVar4 + 0x10);
    ExceptionList = &local_c;
  }
  iVar4 = 2;
  local_4._1_3_ = uVar1;
  if ((param_3[1] - *param_3) / 0xc == 2) {
    FUN_00492320(param_1,0,0xffffffff);
    local_4._0_1_ = 1;
    if ((((local_34 & 0x10000) == 0) && (local_3c != (int *)0x0)) &&
       ((local_3c[1] = local_3c[1] + -1, local_3c[1] == 0 && (local_3c != (int *)0x0)))) {
      (**(code **)(*local_3c + 0xc))(1);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (((((local_28 & 0x10000) == 0) && (local_30 != (int *)0x0)) &&
        (local_30[1] = local_30[1] + -1, local_30[1] == 0)) && (local_30 != (int *)0x0)) {
      (**(code **)(*local_30 + 0xc))(1);
    }
    ExceptionList = local_c;
    return param_1;
  }
  if ((param_3[1] - *param_3) / 0xc != 2) {
    iVar3 = 0x18;
    do {
      FUN_0040c060(&local_3c);
      FUN_0040c060(*param_3 + iVar3);
      if (((char)local_28 != '\x06') || ((char)local_34 != '\x06')) {
        uVar5 = 0;
        goto LAB_004943ce;
      }
      FUN_00455640(&local_30);
      local_4._0_1_ = 3;
      FUN_00455640(&local_3c);
      local_4._0_1_ = 4;
      cVar2 = FUN_004b1060(local_18,local_24);
      if (cVar2 != '\0') {
        FUN_00492320(param_1,0,0);
        local_4._0_1_ = 3;
        FUN_00492340();
        local_4._0_1_ = 2;
        FUN_00492340();
        goto LAB_004943e3;
      }
      local_4._0_1_ = 3;
      FUN_00492340();
      local_4._0_1_ = 2;
      FUN_00492340();
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar4 != (param_3[1] - *param_3) / 0xc);
  }
  uVar5 = 0xffffffff;
LAB_004943ce:
  FUN_00492320(param_1,0,uVar5);
LAB_004943e3:
  local_4._0_1_ = 1;
  FUN_00492340();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00492340();
  ExceptionList = local_c;
  return param_1;
}

