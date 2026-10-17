
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ba570(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644619;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = _rand();
  if ((float)iVar1 * _DAT_0064b244 + _DAT_0064b2f4 <= _DAT_0064b240 - _DAT_00694fd4) {
    ExceptionList = local_c;
    return;
  }
  if (param_7 == 0) {
    iVar1 = FUN_00578a50(0xc0,DAT_006f59e0);
    local_4 = 0;
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return;
    }
    puVar2 = &DAT_00694b50;
    uVar3 = DAT_00695168;
  }
  else if (param_7 == 1) {
    iVar1 = FUN_00578a50(0xc0,DAT_006f59e0);
    local_4 = 1;
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return;
    }
    puVar2 = &DAT_00694bb8;
    uVar3 = DAT_0069516c;
  }
  else {
    if (param_7 != 2) {
      ExceptionList = local_c;
      return;
    }
    iVar1 = FUN_00578a50(0xc0,DAT_006f59e0);
    local_4 = 2;
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return;
    }
    puVar2 = &DAT_006938f8;
    uVar3 = DAT_00695170;
  }
  FUN_0059a590(DAT_00695184,param_1,param_2,param_3,param_4,puVar2,uVar3,param_6,param_5);
  ExceptionList = local_c;
  return;
}

