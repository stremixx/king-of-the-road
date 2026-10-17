
void __fastcall FUN_0061afe0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00649938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0065237c;
  piVar1 = (int *)param_1[0x2740];
  local_4 = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      FUN_0061ccb5(iVar2,0x10,0x10201,FUN_004030a0);
      FUN_00631d5c(iVar2);
      *piVar1 = 0;
    }
    iVar2 = piVar1[1];
    if (iVar2 != 0) {
      FUN_0061ccb5(iVar2,0x10,0x10201,FUN_004030a0);
      FUN_00631d5c(iVar2);
      piVar1[1] = 0;
    }
    iVar2 = piVar1[2];
    if (iVar2 != 0) {
      FUN_0061ccb5(iVar2,0x10,0x10201,FUN_004030a0);
      FUN_00631d5c(iVar2);
      piVar1[2] = 0;
    }
    FUN_00631d5c(piVar1);
    param_1[0x2740] = 0;
  }
  *param_1 = &PTR_LAB_00652398;
  ExceptionList = local_c;
  return;
}

