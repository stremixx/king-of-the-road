
undefined4 * __thiscall
FUN_005a3810(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647ad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005a35d0(param_2,param_3,param_4);
  local_4 = 0;
  iVar2 = 4;
  puVar1 = param_1 + 0x11;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = &DAT_00701550;
  puVar3 = param_1 + 0xf;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar2 = 4;
  puVar1 = param_1 + 0x1d;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = &DAT_00701550;
  puVar3 = param_1 + 0x1b;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x2c] = 0;
  param_1[0xb] = param_6;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  *param_1 = &PTR_FUN_006502d4;
  param_1[0x2d] = 0;
  param_1[0x2b] = 0;
  param_1[0x29] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[10] = param_5;
  FUN_005a3940(param_4);
  param_1[0x34] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  ExceptionList = local_c;
  return param_1;
}

