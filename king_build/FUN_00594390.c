
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00594390(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647376;
  local_c = ExceptionList;
  if (_DAT_0064b738 <= param_4) {
    if (param_4 <= _DAT_0064b240) {
      ExceptionList = &local_c;
      iVar1 = FUN_00631d33(0x20,param_1);
      local_4 = 1;
      if (iVar1 != 0) {
        FUN_005940f0(param_2,param_3,param_4,param_5,param_6);
      }
    }
    else {
      ExceptionList = &local_c;
      iVar1 = FUN_00631d33(0x20,param_1);
      local_4 = 0;
      if (iVar1 != 0) {
        FUN_005940f0(param_2,param_3,0x3f800000,param_5,param_6);
      }
    }
    FUN_00594260(DAT_006f5610);
  }
  ExceptionList = local_c;
  return;
}

