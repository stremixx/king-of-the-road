
void __thiscall FUN_004ac180(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *unaff_FS_OFFSET;
  int in_stack_00000014;
  undefined4 **in_stack_00000018;
  undefined4 *puStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 *local_6c;
  undefined4 local_5c [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006435e0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff98;
  uVar3 = (int)in_stack_00000018 - in_stack_00000014;
  local_18 = param_1;
  if (param_2 == *(int *)(param_1 + 8)) {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
    local_14 = &stack0xffffff98;
    if (uVar2 < uVar3) {
      local_6c = (undefined4 *)(uVar3 - uVar2);
      local_70 = 0x4ac1d2;
      local_14 = &stack0xffffff98;
      FUN_004aca00();
    }
    local_4c = *(undefined4 *)(param_1 + 8);
    local_44 = *(undefined4 *)(param_1 + 0x10);
    local_48 = *(undefined4 *)(param_1 + 0xc);
    local_40 = *(undefined4 *)(param_1 + 0x14);
    local_6c = (undefined4 *)-uVar3;
    local_70 = 0x4ac1f4;
    local_6c = (undefined4 *)FUN_004ac390();
    local_70 = 0x4ac1fd;
    FUN_004abfc0();
    local_1c = (undefined1 *)&local_78;
    local_8 = 0;
    local_78 = local_2c;
    local_74 = local_28;
    local_70 = local_24;
    local_6c = (undefined4 *)local_20;
    puStack_84 = &local_4c;
    iStack_7c = (int)in_stack_00000018;
    iStack_80 = in_stack_00000014;
    FUN_004acbb0();
    *(undefined4 *)(param_1 + 8) = local_2c;
    *(undefined4 *)(param_1 + 0xc) = local_28;
    *(undefined4 *)(param_1 + 0x10) = local_24;
    *(undefined4 *)(param_1 + 0x14) = local_20;
    *unaff_FS_OFFSET = local_10;
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 0x18);
  if (param_2 == *(int *)(param_1 + 0x18)) {
    uVar2 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) - 1;
    local_14 = &stack0xffffff98;
    if (uVar2 < uVar3) {
      local_6c = (undefined4 *)(uVar3 - uVar2);
      local_70 = 0x4ac2ad;
      local_14 = &stack0xffffff98;
      FUN_004acae0();
    }
    local_70 = 0x4ac2b6;
    local_6c = puVar1;
    FUN_004abfc0();
    local_70 = 0x4ac2bf;
    local_6c = (undefined4 *)uVar3;
    local_6c = (undefined4 *)FUN_004ac390();
    local_70 = 0x4ac2c8;
    FUN_004abfc0();
    local_78 = *puVar1;
    local_1c = (undefined1 *)&local_78;
    local_8 = 2;
    local_74 = *(undefined4 *)(param_1 + 0x1c);
    local_70 = *(undefined4 *)(param_1 + 0x20);
    local_6c = *(undefined4 **)(param_1 + 0x24);
    puStack_84 = local_5c;
    iStack_7c = (int)in_stack_00000018;
    iStack_80 = in_stack_00000014;
    FUN_004acbb0();
    *puVar1 = local_3c;
    *(undefined4 *)(param_1 + 0x1c) = local_38;
    *(undefined4 *)(param_1 + 0x20) = local_34;
    *(undefined4 *)(param_1 + 0x24) = local_30;
    *unaff_FS_OFFSET = local_10;
    return;
  }
  local_70 = (int)in_stack_00000018;
  local_74 = in_stack_00000014;
  in_stack_00000018 = &puStack_84;
  local_6c = (undefined4 *)uVar3;
  FUN_004abfc0(&param_2);
  FUN_004ac4a0();
  *unaff_FS_OFFSET = local_10;
  return;
}

