
/* WARNING: Removing unreachable block (ram,0x00493370) */
/* WARNING: Removing unreachable block (ram,0x00493380) */
/* WARNING: Removing unreachable block (ram,0x004932ba) */
/* WARNING: Removing unreachable block (ram,0x004932ca) */
/* WARNING: Removing unreachable block (ram,0x004932ce) */
/* WARNING: Removing unreachable block (ram,0x00493384) */

undefined4 * FUN_00493220(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *local_18;
  undefined4 local_14;
  uint local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00640fb7;
  pvStack_c = ExceptionList;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_00491b70();
  if (iVar1 == 0) {
    FUN_00455dc0();
    FUN_00455dc0(&local_18);
    uVar2 = FUN_004928d0();
    FUN_00492320(param_1,0,uVar2);
    if ((local_10 & 0x10000) != 0) {
      ExceptionList = pvStack_c;
      return param_1;
    }
    if (local_18 == (int *)0x0) {
      ExceptionList = pvStack_c;
      return param_1;
    }
    local_18[1] = local_18[1] + -1;
    iVar1 = local_18[1];
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if ((local_10 & 0x10000) != 0) {
      ExceptionList = pvStack_c;
      return param_1;
    }
    if (local_18 == (int *)0x0) {
      ExceptionList = pvStack_c;
      return param_1;
    }
    local_18[1] = local_18[1] + -1;
    iVar1 = local_18[1];
  }
  if ((iVar1 == 0) && (local_18 != (int *)0x0)) {
    local_4 = (uint)local_4._1_3_ << 8;
    (**(code **)(*local_18 + 0xc))();
  }
  ExceptionList = pvStack_c;
  return param_1;
}

