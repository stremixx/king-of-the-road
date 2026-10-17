
void __thiscall
FUN_004dd880(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006452cb;
  local_c = ExceptionList;
  if (*param_1 != 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_00631d33(0x20);
    local_4 = 0;
    if (iVar1 != 0) {
      FUN_004dd920(*param_1);
    }
    local_4 = 0xffffffff;
    FUN_005fcee0(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  ExceptionList = local_c;
  return;
}

