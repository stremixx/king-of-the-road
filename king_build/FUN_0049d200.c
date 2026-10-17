
undefined4 * FUN_0049d200(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *local_3c;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  uint local_28;
  int *local_24;
  uint local_1c;
  undefined1 auStack_18 [8];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  uVar1 = param_2;
  puStack_8 = &LAB_00642227;
  local_c = ExceptionList;
  iVar2 = *param_3;
  local_34 = *(uint *)(iVar2 + 0x14);
  if ((local_34 & 0x10000) == 0) {
    local_3c = *(int **)(iVar2 + 0xc);
    if (local_3c == (int *)0x0) {
      local_3c = (int *)0x0;
      local_34 = 0;
      ExceptionList = &local_c;
    }
    else {
      local_34 = *(uint *)(iVar2 + 0x14);
      ExceptionList = &local_c;
      local_3c[1] = local_3c[1] + 1;
    }
  }
  else {
    local_3c = *(int **)(iVar2 + 0xc);
    ExceptionList = &local_c;
  }
  local_4 = 1;
  if ((char)local_34 == '\x06') {
    iVar4 = 2;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    iVar2 = *param_3;
    local_4._0_1_ = 2;
    local_4._1_3_ = 0;
    if ((param_3[1] - iVar2) / 0xc != 2) {
      local_28 = *(uint *)(iVar2 + 0x20);
      if ((local_28 & 0x10000) == 0) {
        local_2c = 0;
        local_30 = *(int *)(iVar2 + 0x18);
        if (local_30 == 0) {
          local_30 = 0;
          local_28 = 0;
        }
        else {
          local_28 = *(uint *)(iVar2 + 0x20);
          *(int *)(local_30 + 4) = *(int *)(local_30 + 4) + 1;
        }
      }
      else {
        local_30 = *(int *)(iVar2 + 0x18);
        local_2c = *(undefined4 *)(iVar2 + 0x1c);
      }
      iVar4 = 3;
    }
    if (iVar4 != (param_3[1] - *param_3) / 0xc) {
      FUN_004a5be0(param_2,0x21,s_make_vector_0066f8c8);
    }
    FUN_004042a0();
    local_4._0_1_ = 3;
    if (local_3c == (int *)0x0) {
      local_24 = (int *)0x0;
      local_1c = 0;
    }
    else {
      iVar2 = (**(code **)*local_3c)();
      if (iVar2 == 6) {
        local_24 = local_3c;
        local_1c = local_34;
        local_3c[1] = local_3c[1] + 1;
      }
      else {
        uVar3 = (**(code **)(*local_3c + 4))(s_Number_0066ba60);
        FUN_004a5670(2,1,uVar3);
      }
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    if (local_24 == (int *)0x0) {
      FUN_004a5470(0,1);
    }
    if ((local_1c & 0x10000) != 0) {
      FUN_004a5470(4,1);
    }
    param_2 = FUN_004b0f30();
    FUN_004a2720(auStack_18,0,uVar1,&param_2,&local_30);
    FUN_00455dc0(auStack_18);
    FUN_00492340();
    local_4._0_1_ = 2;
    FUN_00492340();
    local_4._0_1_ = 1;
    FUN_00492340();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00492340();
  }
  else {
    FUN_004a5a90(param_2,0x15);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_4 = local_4 & 0xffffff00;
    if (((local_34 & 0x10000) == 0) && (local_3c != (int *)0x0)) {
      local_3c[1] = local_3c[1] + -1;
      if ((local_3c[1] == 0) && (local_3c != (int *)0x0)) {
        (**(code **)(*local_3c + 0xc))(1);
        ExceptionList = pvStack_10;
        return param_1;
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

