
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ba360(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006445cc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = _rand();
  if ((float)iVar1 * _DAT_0064b244 + _DAT_0064b2f4 <= _DAT_0064b240 - _DAT_00694fbc) {
    ExceptionList = local_c;
    return;
  }
  iVar1 = _rand();
  if (_DAT_0064b2f0 <= (float)iVar1 * _DAT_0064b244) {
    if ((float)iVar1 * _DAT_0064b244 < _DAT_0064b24c) {
      iVar1 = FUN_00578a50(0xc4,DAT_006f5a14);
      local_4 = 2;
      if (iVar1 == 0) {
        ExceptionList = local_c;
        return;
      }
      FUN_0059e760(DAT_00695184,param_1,param_2,0x3e800000,&DAT_00694b50,1);
      ExceptionList = local_c;
      return;
    }
    iVar1 = FUN_00578a50(0xc4,DAT_006f5a14);
    local_4 = 3;
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return;
    }
    _rand();
    uVar2 = 1;
    iVar1 = __ftol(1);
    iVar1 = FUN_0059e760(DAT_00695184,param_1,param_2,0x3e800000,&DAT_00694868 + iVar1,uVar2);
  }
  else {
    iVar1 = FUN_00578a50(0xc4,DAT_006f5a14);
    local_4 = 0;
    if (iVar1 != 0) {
      FUN_0059e760(DAT_00695184,param_1,param_2,0x3e800000,&DAT_006938f8,1);
    }
    local_4 = 0xffffffff;
    iVar1 = FUN_00578a50(0xc4,DAT_006f5a14);
    local_4 = 1;
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return;
    }
    iVar1 = FUN_0059e760(DAT_00695184,param_1,param_2,0x3e800000,&DAT_00694b50,1);
  }
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc0) = 0;
  }
  ExceptionList = local_c;
  return;
}

