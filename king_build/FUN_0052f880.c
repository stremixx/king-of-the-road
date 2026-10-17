
undefined4 * __fastcall FUN_0052f880(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646648;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005922f0(&DAT_006d103c);
  *param_1 = &PTR_FUN_0064e2dc;
  local_4 = 0;
  FUN_0052f500();
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_0064e2d8;
  ExceptionList = local_c;
  return param_1;
}

