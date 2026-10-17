
void __thiscall
FUN_004ba110(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064456b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00631d33(0xbc,param_1);
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_004dd200(DAT_00695184,param_2,param_3,param_4,param_5);
  }
  ExceptionList = local_c;
  return;
}

