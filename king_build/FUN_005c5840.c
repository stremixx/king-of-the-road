
undefined4 * __thiscall
FUN_005c5840(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 auStack_50 [10];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648298;
  local_c = ExceptionList;
  uStack_20 = in_stack_00000050;
  puVar2 = (undefined4 *)&stack0x0000001c;
  puVar3 = auStack_50;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  ExceptionList = &local_c;
  FUN_005a3bb0(param_2,param_3,param_4,param_5,param_6,param_7);
  uStack_20 = in_stack_0000004c;
  uStack_24 = param_2;
  local_4 = 0;
  *param_1 = &PTR_FUN_00650c24;
  param_1[0x40] = &PTR_LAB_00650bd8;
  uStack_28 = 0x5c58be;
  FUN_005c5750();
  ExceptionList = local_c;
  return param_1;
}

