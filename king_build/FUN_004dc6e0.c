
undefined4 * __thiscall
FUN_004dc6e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645248;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d27c0(s_BenzoNotify_00671c98);
  local_4 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = param_6;
  param_1[10] = param_3;
  param_1[8] = param_4;
  *param_1 = &PTR_FUN_0064c520;
  param_1[9] = param_5;
  param_1[0xb] = param_2;
  FUN_005d2c20(param_1);
  FUN_005d2a80(1);
  ExceptionList = local_c;
  return param_1;
}

