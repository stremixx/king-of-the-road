
void __fastcall FUN_004e16f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00645448;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_0064c820;
  local_4 = 0;
  FUN_00578960();
  DAT_00695c50 = 0;
  DAT_00695c54 = 0;
  DAT_00695c58 = 0;
  DAT_00695c5c = 0;
  DAT_00695c60 = 0;
  DAT_00695c64 = 0;
  local_4 = 0xffffffff;
  FUN_005c3060();
  ExceptionList = local_c;
  return;
}

