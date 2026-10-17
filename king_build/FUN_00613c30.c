
void __thiscall FUN_00613c30(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00649899;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x50) == 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_00631d33(0x34);
    local_4 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00619030(param_2,param_1);
    }
    *(undefined4 *)(param_1 + 0x50) = uVar2;
  }
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 0x54) != 0) {
    ExceptionList = local_c;
    return;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    ExceptionList = local_c;
    return;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    ExceptionList = local_c;
    return;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    ExceptionList = local_c;
    return;
  }
  if (*(int *)(param_1 + 100) != 0) {
    ExceptionList = local_c;
    return;
  }
  if (*(int *)(DAT_006cdbcc + 0x524) == 0) {
    iVar1 = FUN_00631d33(0x20);
    local_4 = 1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00616720(param_2,*(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30),&DAT_00684cfc
                           ,&DAT_006757d0);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    iVar1 = FUN_00631d33(0x20);
    local_4 = 2;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00616720(param_2,*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x40),
                           s_tree23_00684cf4,&DAT_006757d0);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    iVar1 = FUN_00631d33(0x20);
    local_4 = 3;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00616720(param_2,*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x40),
                           s_tree45_00684cec,&DAT_006757d0);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    iVar1 = FUN_00631d33(0x20);
    local_4 = 4;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00616720(param_2,*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x40),&DAT_00684ce8
                           ,&DAT_006757d0);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    iVar1 = FUN_00631d33(0x20);
    local_4 = 5;
    if (iVar1 != 0) {
      uVar2 = FUN_00616720(param_2,*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x40),&DAT_00684ce4
                           ,&DAT_006757d0);
      goto LAB_00613f3b;
    }
  }
  else {
    iVar1 = FUN_00631d33(0x20);
    local_4 = 6;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00616720(param_2,*(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30),&DAT_00684cfc
                           ,&DAT_006757cc);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    iVar1 = FUN_00631d33(0x20);
    local_4 = 7;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00616720(param_2,*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x40),
                           s_tree23_00684cf4,&DAT_006757cc);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    iVar1 = FUN_00631d33(0x20);
    local_4 = 8;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00616720(param_2,*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x40),
                           s_tree45_00684cec,&DAT_006757cc);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    iVar1 = FUN_00631d33(0x20);
    local_4 = 9;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00616720(param_2,*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x40),&DAT_00684ce8
                           ,&DAT_006757cc);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    iVar1 = FUN_00631d33(0x20);
    local_4 = 10;
    if (iVar1 != 0) {
      uVar2 = FUN_00616720(param_2,*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x40),&DAT_00684ce4
                           ,&DAT_006757cc);
      goto LAB_00613f3b;
    }
  }
  uVar2 = 0;
LAB_00613f3b:
  *(undefined4 *)(param_1 + 100) = uVar2;
  ExceptionList = local_c;
  return;
}

