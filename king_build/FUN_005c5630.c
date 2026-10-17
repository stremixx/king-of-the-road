
undefined4 * __thiscall
FUN_005c5630(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 in_stack_0000004c;
  int in_stack_00000050;
  undefined4 auStack_58 [12];
  undefined4 uStack_28;
  undefined1 *puStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = in_stack_00000050;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648278;
  local_c = ExceptionList;
  puStack_24 = (undefined1 *)in_stack_00000050;
  auStack_58[0] = param_7;
  puVar3 = (undefined4 *)&stack0x0000001c;
  puVar4 = auStack_58 + 1;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  ExceptionList = &local_c;
  FUN_005a3bb0(param_2,param_3,param_4,param_5,param_6);
  local_4 = 0;
  *param_1 = &PTR_FUN_00650c24;
  param_1[0x40] = &PTR_LAB_00650bd8;
  if (iVar2 == 1) {
    puStack_24 = (undefined1 *)0x5c56af;
    param_3 = FUN_005eec70();
    puStack_24 = &stack0x0000001c;
    uStack_28 = 0x5c56c3;
    FUN_005f1c30();
  }
  puStack_24 = (undefined1 *)((-(uint)(iVar2 != 1) & 0xfffffffd) + 0x387);
  uStack_28 = in_stack_0000004c;
  puVar3 = (undefined4 *)&stack0x0000001c;
  puVar4 = auStack_58;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_005c5300(param_2,param_3,param_4,param_5,param_6,param_7);
  ExceptionList = local_c;
  return param_1;
}

