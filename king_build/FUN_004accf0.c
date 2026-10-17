
undefined4 FUN_004accf0(undefined4 param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined1 auStack_64 [8];
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00643630;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffcc;
  local_18 = (undefined1 *)&uStack_54;
  local_44 = in_stack_00000030;
  local_40 = in_stack_00000034;
  local_3c = in_stack_00000038;
  local_38 = in_stack_0000003c;
  puStack_58 = &stack0x00000018;
  uStack_5c = 0x4acd41;
  FUN_004abfc0();
  local_18 = auStack_64;
  FUN_004abfc0(&stack0x00000008);
  FUN_004acc10(&local_28);
  local_18 = (undefined1 *)&local_44;
  local_8 = 0;
  local_44 = local_28;
  local_40 = local_24;
  local_3c = local_20;
  local_38 = local_1c;
  uStack_48 = in_stack_0000002c;
  uStack_4c = in_stack_00000028;
  uStack_50 = param_1;
  uStack_54 = 0x4acd92;
  FUN_004acbb0();
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

