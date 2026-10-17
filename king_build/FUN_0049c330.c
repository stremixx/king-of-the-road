
undefined4 * FUN_0049c330(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *local_54;
  uint local_4c;
  int *local_48;
  uint local_40;
  undefined1 local_3c [12];
  int local_30;
  int local_2c;
  int local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  piVar1 = param_3;
  puStack_8 = &LAB_0064206f;
  local_c = ExceptionList;
  iVar5 = *param_3;
  local_4c = *(uint *)(iVar5 + 0x14);
  if ((local_4c & 0x10000) == 0) {
    local_54 = *(int **)(iVar5 + 0xc);
    if (local_54 == (int *)0x0) {
      local_54 = (int *)0x0;
      local_4c = 0;
      ExceptionList = &local_c;
    }
    else {
      local_4c = *(uint *)(iVar5 + 0x14);
      ExceptionList = &local_c;
      local_54[1] = local_54[1] + 1;
    }
  }
  else {
    local_54 = *(int **)(iVar5 + 0xc);
    ExceptionList = &local_c;
  }
  local_4 = 1;
  if ((char)local_4c != '\x06') {
    FUN_004a5a90(param_2,0x15);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_4 = local_4 & 0xffffff00;
    if (((local_4c & 0x10000) == 0) && (local_54 != (int *)0x0)) {
      local_54[1] = local_54[1] + -1;
      if ((local_54[1] == 0) && (local_54 != (int *)0x0)) {
        (**(code **)(*local_54 + 0xc))(1);
      }
    }
    ExceptionList = local_c;
    return param_1;
  }
  iVar5 = 2;
  FUN_004042a0();
  local_4._0_1_ = 2;
  if ((piVar1[1] - *piVar1) / 0xc != 2) {
    FUN_004a1ac0(*piVar1 + 0x18);
    local_4._0_1_ = 3;
    FUN_0049c660(&local_18);
    local_4._0_1_ = 2;
    FUN_00492340();
    iVar5 = 3;
  }
  if (iVar5 != (piVar1[1] - *piVar1) / 0xc) {
    FUN_004a5be0(param_2,0x21,s_make_string_0066f884);
  }
  FUN_004a2550(local_3c,0);
  FUN_004042a0();
  local_4._0_1_ = 5;
  if (local_54 == (int *)0x0) {
    local_48 = (int *)0x0;
    local_40 = 0;
  }
  else {
    iVar5 = (**(code **)*local_54)();
    if (iVar5 == 6) {
      local_48 = local_54;
      local_40 = local_4c;
      local_54[1] = local_54[1] + 1;
    }
    else {
      uVar2 = (**(code **)(*local_54 + 4))(s_Number_0066ba60);
      FUN_004a5670(2,1,uVar2);
    }
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = CONCAT31(local_4._1_3_,7);
  if (((local_30 != 0) || (local_28 != 0)) ||
     (param_2 = CONCAT31(param_2._1_3_,0x20), local_2c != 0)) {
    param_2 = CONCAT31(param_2._1_3_,(char)local_30);
  }
  if (local_48 == (int *)0x0) {
    FUN_004a5470(0,1);
  }
  if ((local_40 & 0x10000) != 0) {
    FUN_004a5470(4,1);
  }
  iVar5 = FUN_004b0f30();
  FUN_0044a420(iVar5 + 1,&param_3);
  local_4._0_1_ = 8;
  uStack_20 = FUN_004693c0(uStack_24,iVar5 + 1,&param_2);
  puVar6 = &uStack_24;
  local_4._0_1_ = 9;
  FUN_004b8250(puVar6);
  FUN_0044c100(puVar6);
  local_4._0_1_ = 7;
  FUN_004497b0();
  local_4._0_1_ = 6;
  FUN_00492340();
  iVar3 = FUN_004b8250();
  iVar5 = *(int *)(iVar3 + 0x10);
  iVar3 = *(int *)(iVar3 + 0xc);
  iVar4 = FUN_004b8250();
  *(undefined1 *)((*(int *)(iVar4 + 0xc) - iVar3) + -1 + iVar5) = 0;
  FUN_00455dc0(local_3c);
  local_4._0_1_ = 4;
  FUN_00492340();
  local_4._0_1_ = 2;
  FUN_00492340();
  local_4._0_1_ = 1;
  FUN_00492340();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00492340();
  ExceptionList = local_c;
  return param_1;
}

