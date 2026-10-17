
void __thiscall FUN_004bace0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644743;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00578a50(0xb0,DAT_006f59ec,param_1);
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_0059bb40(DAT_00695184,param_2,param_3,0x3f800000,&DAT_00694b50,DAT_00695168);
  }
  ExceptionList = local_c;
  return;
}

