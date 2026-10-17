
undefined4 * __thiscall
FUN_004ce100(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644d68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d27c0(s_TRFLights_00671988);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064ba48;
  param_1[8] = param_2;
  uVar1 = FUN_005ee8e0(0,param_3);
  param_1[10] = uVar1;
  uVar1 = FUN_005ee8e0(0,param_4);
  param_1[0xb] = uVar1;
  FUN_005d2c20(param_1);
  param_1[9] = 0;
  ExceptionList = local_c;
  return param_1;
}

