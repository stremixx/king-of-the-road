
undefined4 * __thiscall
FUN_0052d990(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_00646568;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0052d090(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  local_4 = 0;
  iVar2 = 4;
  puVar1 = param_1 + 0x382;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = &DAT_00701550;
  puVar3 = param_1 + 0x380;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_1 = &PTR_FUN_0064e188;
  param_1[0x40] = &PTR_LAB_0064e13c;
  param_1[0x5e] = &PTR_LAB_0064e138;
  FUN_0052dcc0(param_9);
  ExceptionList = local_c;
  return param_1;
}

