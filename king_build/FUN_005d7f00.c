
void __fastcall FUN_005d7f00(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006485b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00651158;
  iVar1 = param_1[3];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_005b6140();
    FUN_00631d5c(iVar1);
  }
  FUN_00631d5c(param_1[0xc]);
  *param_1 = &PTR_LAB_0064c80c;
  ExceptionList = local_c;
  return;
}

