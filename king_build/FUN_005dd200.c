
void __fastcall FUN_005dd200(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_006488e0;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00651300;
  iVar1 = param_1[0x79];
  local_4 = 4;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
    iVar1 = *(int *)(iVar1 + 0x10);
    while (iVar1 == 0) {
      Sleep(10);
      iVar1 = *(int *)(param_1[0x79] + 0x10);
    }
    FUN_005e3ac0();
  }
  FUN_005df800();
  if ((undefined4 *)param_1[0x3d2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x3d2])(1);
  }
  if (param_1[0xa0] != 0) {
    FUN_00631d5c(param_1[0xa0]);
  }
  iVar1 = param_1[0x2cc];
  if (iVar1 != 0) {
    FUN_005bb9a0();
    FUN_00631d5c(iVar1);
  }
  local_4._0_1_ = 3;
  FUN_005b8bd0();
  local_4._0_1_ = 2;
  FUN_005d2c10();
  param_1[0x2a8] = &PTR_LAB_0064c80c;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005e44c0();
  local_4 = 0xffffffff;
  FUN_005d9e50();
  ExceptionList = pvStack_c;
  return;
}

