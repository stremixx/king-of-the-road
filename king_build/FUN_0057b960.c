
undefined4 * __thiscall FUN_0057b960(undefined4 *param_1,int param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006470a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005eed00(s_Shadow_0067bf8c,0x18);
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_0064f420;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_4 = 0;
  FUN_00578ea0();
  *param_1 = &PTR_FUN_0064f3d4;
  param_1[0x15] = param_3;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (*(int **)(param_2 + 0x20c) != (int *)0x0) {
    (**(code **)(**(int **)(param_2 + 0x20c) + 0x14))(0,param_1);
  }
  FUN_00579090();
  ExceptionList = local_c;
  return param_1;
}

