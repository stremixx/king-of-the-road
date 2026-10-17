
undefined4 * __thiscall
FUN_0058ae20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647278;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0057c740(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_11,param_12);
  puVar1 = param_1 + 0x382;
  local_4 = 0;
  iVar2 = 0x14;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = param_1 + 0x3be;
  iVar2 = 4;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 0x14;
  do {
    FUN_0058abf0();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 0x14;
  do {
    FUN_0058abf0();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x508] = 0;
  param_1[0x509] = 0;
  param_1[0x50a] = 0;
  param_1[0x50b] = 0;
  param_1[0x50c] = 0;
  param_1[0x50d] = 0;
  param_1[0x50e] = 0;
  param_1[0x50f] = 0;
  param_1[0x510] = 0;
  iVar2 = 0x14;
  do {
    FUN_005eebf0();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *param_1 = &PTR_FUN_0064f708;
  param_1[0x40] = &PTR_LAB_0064f6bc;
  param_1[0x5e] = &PTR_LAB_0064f6b8;
  FUN_0058afc0(param_9,param_10);
  ExceptionList = local_c;
  return param_1;
}

