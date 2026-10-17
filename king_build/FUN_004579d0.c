
undefined4 FUN_004579d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *in_stack_00000084;
  undefined4 *in_stack_00000088;
  int in_stack_0000008c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063ed48;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00458af0(&stack0x0000000c);
  uVar3 = FUN_004607f0(param_1,param_2);
  puVar2 = in_stack_00000088;
  local_4 = 0xffffffff;
  puVar1 = in_stack_00000084;
  for (puVar5 = in_stack_00000084; in_stack_00000084 = puVar1, puVar5 != puVar2; puVar5 = puVar5 + 4
      ) {
    FUN_00460d40();
    puVar1 = in_stack_00000084;
  }
  iVar4 = in_stack_0000008c - (int)puVar1 >> 4;
  if (iVar4 != 0) {
    if (0x80 < (uint)(iVar4 * 0x10)) {
      FUN_00457ad0();
      ExceptionList = pvStack_c;
      return uVar3;
    }
    iVar4 = FUN_0044b6d0();
    FUN_0044b910();
    *puVar1 = *(undefined4 *)(&DAT_0068c124 + iVar4 * 4);
    *(undefined4 **)(&DAT_0068c124 + iVar4 * 4) = puVar1;
    FUN_0044ba20();
  }
  ExceptionList = pvStack_c;
  return uVar3;
}

