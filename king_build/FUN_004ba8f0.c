
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ba8f0(undefined4 param_1,undefined4 *param_2,float param_3)

{
  float fVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006446ec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = _rand();
  fVar1 = (float)iVar2 * _DAT_0064b244;
  if ((_DAT_0064b240 - _DAT_00694fd8 < fVar1 + _DAT_0064b2f4) && (_DAT_0064b2f0 <= param_3)) {
    if (_DAT_0064b2f8 <= param_3) {
      local_10 = (float)param_2[2] * _DAT_0064b24c;
      local_14 = param_2[1];
      local_18 = *param_2;
      if (_DAT_0064b248 < fVar1) {
        iVar2 = FUN_00578a50(0xd4,DAT_006f59e8);
        local_4 = 2;
        if (iVar2 == 0) {
          ExceptionList = local_c;
          return;
        }
        FUN_0059aae0(DAT_00695184,param_1,&local_18,&DAT_006938f8,DAT_00695170,0x3f000000,0x3f400000
                    );
        ExceptionList = local_c;
        return;
      }
      iVar2 = FUN_00578a50(0xc0,DAT_006f59e0);
      local_4 = 3;
    }
    else {
      if ((param_3 - _DAT_0064b2f0) * _DAT_0064b2fc < fVar1) {
        iVar2 = FUN_00578a50(0xc0,DAT_006f59dc);
        local_4 = 0;
        if (iVar2 == 0) {
          ExceptionList = local_c;
          return;
        }
        FUN_0059b5f0(DAT_00695184,param_1,param_2,&DAT_00694bb8,DAT_0069516c,0x3fc00000);
        ExceptionList = local_c;
        return;
      }
      iVar2 = FUN_00578a50(0xc0,DAT_006f59e0);
      local_4 = 1;
    }
    if (iVar2 != 0) {
      FUN_0059a460(DAT_00695184,param_1,param_2,&DAT_00694b50,DAT_00695168,0x3fc00000);
    }
  }
  ExceptionList = local_c;
  return;
}

