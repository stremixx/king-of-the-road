
undefined4 FUN_004ace40(undefined4 param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00643640;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_004acbb0();
  local_8 = 0;
  FUN_004abfc0();
  FUN_004abfc0(&stack0x00000010);
  FUN_004acc10(param_1);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

