
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bab30(undefined4 param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644726;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = _rand();
  if (_DAT_0064b240 - _DAT_00694fd8 < (float)iVar1 * _DAT_0064b244 + _DAT_0064b2f4) {
    iVar1 = _rand();
    if ((float)iVar1 * _DAT_0064b244 <= param_3) {
      iVar1 = FUN_00578a50(0xc0,DAT_006f59e0);
      local_4 = 1;
      if (iVar1 != 0) {
        FUN_0059a460(DAT_00695184,param_1,param_2,&DAT_00694b50,DAT_00695168,0x3fc00000);
      }
    }
    else {
      iVar1 = FUN_00578a50(0xc0,DAT_006f59dc);
      local_4 = 0;
      if (iVar1 != 0) {
        FUN_0059b5f0(DAT_00695184,param_1,param_2,&DAT_00694bb8,DAT_0069516c,0x3fc00000);
        ExceptionList = local_c;
        return;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

