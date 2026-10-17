
void __thiscall
FUN_005d9840(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648686;
  local_c = ExceptionList;
  piVar1 = *(int **)(DAT_007206b0 + 0xfc);
  if (piVar1 == param_1) {
    iVar2 = param_1[3];
    ExceptionList = &local_c;
    if (iVar2 != 0) {
      ExceptionList = &local_c;
      FUN_005b6140();
      FUN_00631d5c(iVar2);
    }
    iVar2 = FUN_00631d33(0x7c);
    local_4 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_005b6100(param_2,param_3,param_4,param_5);
    }
    local_4 = 0xffffffff;
    param_1[3] = iVar2;
    FUN_005b64b0(0,0);
    ExceptionList = local_c;
    return;
  }
  iVar2 = param_1[3];
  local_1c = *(int *)(iVar2 + 100);
  local_18 = *(int *)(iVar2 + 0x68);
  local_14 = *(uint *)(iVar2 + 0x6c);
  local_10 = *(uint *)(iVar2 + 0x70);
  if ((param_1[4] & 0x10U) == 0) {
    ExceptionList = &local_c;
    iVar2 = (**(code **)(*piVar1 + 0x14))();
    if (iVar2 <= local_1c) {
      iVar2 = local_14 - local_1c;
      local_14 = (**(code **)(*piVar1 + 0x14))();
      local_1c = local_14 - iVar2;
      if (local_1c < 0) goto LAB_005d9951;
    }
  }
  else if ((param_1[4] & 0x20U) == 0) {
    local_14 = local_14 - local_1c;
    ExceptionList = &local_c;
LAB_005d9951:
    local_1c = 0;
  }
  else {
    local_1c = 0;
    local_14 = (uint)*(ushort *)piVar1[3];
    ExceptionList = &local_c;
  }
  if ((param_1[4] & 0x40U) == 0) {
    iVar2 = (**(code **)(*piVar1 + 0x18))();
    if (local_18 < iVar2) goto LAB_005d99af;
    iVar2 = local_10 - local_18;
    local_10 = (**(code **)(*piVar1 + 0x18))();
    local_18 = local_10 - iVar2;
    if (-1 < local_18) goto LAB_005d99af;
  }
  else {
    if ((param_1[4] & 0x80U) != 0) {
      local_18 = 0;
      local_10 = (uint)*(ushort *)(piVar1[3] + 2);
      goto LAB_005d99af;
    }
    local_10 = local_10 - local_18;
  }
  local_18 = 0;
LAB_005d99af:
  iVar2 = param_1[3];
  if (iVar2 != 0) {
    FUN_005b6140();
    FUN_00631d5c(iVar2);
  }
  iVar2 = FUN_00631d33(0x7c);
  local_4 = 1;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_005b5be0(piVar1[3],&local_1c,param_5 & 0x4000);
  }
  param_1[3] = iVar2;
  ExceptionList = local_c;
  return;
}

