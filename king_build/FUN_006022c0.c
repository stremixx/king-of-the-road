
undefined4 * __fastcall FUN_006022c0(undefined4 *param_1)

{
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006494e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_LAB_00651dd0;
  local_4 = 0;
  local_14 = 8;
  local_10 = param_1;
  FUN_0046e460(param_1[2],&local_14,&local_10);
  local_14 = 0;
  FUN_0046e460(param_1[2],&local_14,&local_10);
  param_1[6] = 8;
  ExceptionList = local_c;
  return param_1;
}

