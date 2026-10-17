
undefined4 * __thiscall FUN_00415000(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 local_1c [2];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c6a8;
  local_c = ExceptionList;
  puVar1 = param_1 + 4;
  ExceptionList = &local_c;
  param_1[2] = 0;
  *param_1 = 0xffffffff;
  param_1[1] = param_2;
  param_1[3] = 0x3ff00000;
  local_1c[0] = 0;
  local_14 = 0;
  local_10 = 0x3ff00000;
  *puVar1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  pvVar2 = _malloc(0x130);
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)FUN_00458210(0x130);
  }
  *puVar1 = pvVar2;
  param_1[5] = pvVar2;
  param_1[6] = (int)pvVar2 + 0x130;
  local_4 = 1;
  uVar3 = FUN_004663a0(pvVar2,0x13,local_1c,puVar1);
  param_1[5] = uVar3;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  ExceptionList = local_c;
  return param_1;
}

