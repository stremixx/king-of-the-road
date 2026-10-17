
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004bafe0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644793;
  local_c = ExceptionList;
  if (_DAT_0064b248 < _DAT_00694fb4) {
    ExceptionList = &local_c;
    iVar1 = FUN_00578a50(0xb4,DAT_006f59f8,param_1);
    local_4 = 0;
    if (iVar1 != 0) {
      FUN_0059cbc0(DAT_00695184,param_2,param_3,&DAT_00694bb8,DAT_0069516c);
    }
  }
  ExceptionList = local_c;
  return;
}

