
undefined4 * FUN_004a0140(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  int **ppiVar2;
  int iVar3;
  int *local_30;
  int *local_28;
  int local_24;
  undefined4 local_20;
  uint local_1c;
  int *local_18;
  undefined4 local_14;
  uint local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0064270f;
  pvStack_c = ExceptionList;
  iVar3 = *param_3;
  local_1c = *(uint *)(iVar3 + 0x14);
  if ((local_1c & 0x10000) == 0) {
    local_20 = 0;
    local_24 = *(int *)(iVar3 + 0xc);
    if (local_24 == 0) {
      local_24 = 0;
      local_1c = 0;
      ExceptionList = &pvStack_c;
    }
    else {
      local_1c = *(uint *)(iVar3 + 0x14);
      ExceptionList = &pvStack_c;
      *(int *)(local_24 + 4) = *(int *)(local_24 + 4) + 1;
    }
  }
  else {
    local_24 = *(int *)(iVar3 + 0xc);
    local_20 = *(undefined4 *)(iVar3 + 0x10);
    ExceptionList = &pvStack_c;
  }
  local_4 = 1;
  bVar1 = (uint)((param_3[1] - *param_3) / 0xc) < 3;
  if (bVar1) {
    local_14 = 0;
    local_18 = (int *)0x0;
    local_10 = 0;
    ppiVar2 = &local_18;
  }
  else {
    ppiVar2 = (int **)(*param_3 + 0x18);
  }
  local_28 = ppiVar2[2];
  if (((uint)local_28 & 0x10000) == 0) {
    local_30 = *ppiVar2;
    if (local_30 == (int *)0x0) {
      local_30 = (int *)0x0;
      local_28 = (int *)0x0;
    }
    else {
      local_28 = ppiVar2[2];
      local_30[1] = local_30[1] + 1;
    }
  }
  else {
    local_30 = *ppiVar2;
  }
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  if ((((bVar1) && ((local_10 & 0x10000) == 0)) && (local_18 != (int *)0x0)) &&
     (iVar3 = local_18[1], local_18[1] = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)(*local_18 + 0xc))();
  }
  if ((char)local_28 == '\v') {
    if ((param_3[1] - *param_3) / 0xc == 3) {
      local_4._0_1_ = 3;
      if (local_30 != (int *)0x0) {
        iVar3 = (**(code **)*local_30)();
        if (iVar3 == 0xb) {
          local_30[1] = local_30[1] + 1;
        }
        else {
          (**(code **)(*local_30 + 4))();
          FUN_004a5670(2);
        }
      }
      local_4._0_1_ = 2;
      FUN_00455dc0(&local_24);
      FUN_004b8100(&local_18,param_2);
      if ((((local_10 & 0x10000) == 0) && (local_18 != (int *)0x0)) &&
         ((local_18[1] = local_18[1] + -1, local_18[1] == 0 && (local_18 != (int *)0x0)))) {
        (**(code **)(*local_18 + 0xc))();
      }
    }
    else {
      FUN_004a5be0();
    }
  }
  else {
    FUN_00455dc0();
    FUN_00455dc0(&local_24);
    FUN_004b8100(&local_18,param_2);
    if ((((local_10 & 0x10000) == 0) && (local_18 != (int *)0x0)) &&
       ((local_18[1] = local_18[1] + -1, local_18[1] == 0 && (local_18 != (int *)0x0)))) {
      (**(code **)(*local_18 + 0xc))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_4._0_1_ = 1;
  FUN_00492340();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return param_1;
}

