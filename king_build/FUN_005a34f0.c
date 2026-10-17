
undefined4 * __thiscall
FUN_005a34f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647a98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d27c0(s_anmkey_0067d820);
  param_1[10] = param_4;
  param_1[0xc] = param_5;
  local_4 = 0;
  *param_1 = &PTR_FUN_00650290;
  param_1[0xd] = param_6;
  param_1[8] = param_2;
  uVar1 = FUN_005ee8e0(0,param_3);
  param_1[9] = uVar1;
  FUN_005d2c20(param_1);
  ExceptionList = local_c;
  return param_1;
}

