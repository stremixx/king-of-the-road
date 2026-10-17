
undefined4 * __thiscall
FUN_005a4e80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00647c78;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_005d2890(param_3,s_wipers_0067d88c);
  param_1[0x1f] = param_4;
  param_1[0x20] = param_5;
  param_1[0x21] = param_6;
  param_1[0x22] = param_7;
  param_1[0x23] = param_8;
  param_1[0x1c] = 0x4d12d84a;
  param_1[0x14] = 0x55555555;
  param_1[0x16] = 0x47ae147b;
  param_1[0x12] = 0;
  local_c = 0;
  *param_1 = &PTR_FUN_006504e4;
  param_1[8] = param_2;
  param_1[0x24] = param_9;
  param_1[0x29] = 0;
  param_1[0x1d] = 0x3ff921fb;
  param_1[0x1e] = 1;
  param_1[0x15] = 0x3fd55555;
  param_1[0x17] = 0x3ff07ae1;
  param_1[0x13] = 0x3ff00000;
  param_1[0x18] = 200;
  param_1[0x19] = 100;
  param_1[0x2a] = 0;
  FUN_005d2c20(param_1);
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0x27] = 0;
  param_1[0x2d] = 0;
  param_1[0x26] = 0;
  param_1[0x2f] = 0;
  param_1[0x1a] = 0x1e;
  param_1[0x1b] = 0x61;
  ExceptionList = local_14;
  return param_1;
}

