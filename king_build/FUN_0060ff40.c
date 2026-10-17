
void __fastcall FUN_0060ff40(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006497c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006520c8;
  local_4 = 0;
  if (param_1[0x1f] != 0) {
    FUN_00631d5c(param_1[0x1f]);
    param_1[0x1f] = 0;
  }
  if (param_1[0x23] != 0) {
    FUN_00631d5c(param_1[0x23]);
    param_1[0x23] = 0;
  }
  if (param_1[0x21] != 0) {
    FUN_00631d5c(param_1[0x21]);
    param_1[0x21] = 0;
  }
  iVar1 = param_1[0x32];
  if (iVar1 != 0) {
    FUN_004843e0();
    FUN_00631d5c(iVar1);
    param_1[0x32] = 0;
  }
  iVar1 = param_1[0x1c];
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_00631d5c(*(int *)(iVar1 + 0xc));
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
    FUN_00631d5c(iVar1);
    param_1[0x1c] = 0;
  }
  *param_1 = &PTR_FUN_00651e90;
  piVar2 = (int *)param_1[0xd];
  local_4 = 0xffffffff;
  for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xd]) {
    (**(code **)(*piVar2 + 0x2c))();
    (**(code **)(*piVar2 + 0x30))();
  }
  ExceptionList = local_c;
  return;
}

