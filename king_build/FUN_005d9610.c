
undefined4 * __thiscall
FUN_005d9610(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648663;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d7dc0(param_2,param_3,*(uint *)(DAT_007206b0 + 0x10c) & 0x4000);
  local_4 = 0;
  *param_1 = &PTR_FUN_0065128c;
  param_1[0x82] = 0;
  iVar1 = FUN_00631d33(0x51f0);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005ecfa0(param_1[3]);
  }
  param_1[0x74] = uVar2;
  param_1[0x76] = param_5;
  param_1[0x80] = 0;
  param_1[0x7c] = 0;
  param_1[0x7e] = 0;
  param_1[4] = param_1[4] | 3;
  param_1[0x75] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x79] = 0;
  param_1[0x81] = 0;
  param_1[0x7d] = 0;
  param_1[0x7f] = 0;
  param_1[0x7a] = param_4;
  ExceptionList = local_c;
  return param_1;
}

