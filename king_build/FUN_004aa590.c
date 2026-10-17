
void __thiscall FUN_004aa590(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined4 local_30;
  undefined1 local_2c [12];
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00643402;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa8;
  local_20 = param_1[1];
  if (local_20 != param_1[2]) {
    local_8 = 0;
    ExceptionList = &local_10;
    local_1c = local_20;
    local_14 = &stack0xffffffa8;
    if (local_20 != 0) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffa8;
      FUN_004aada0(local_20 + -0x2c);
    }
    param_1[1] = param_1[1] + 0x2c;
    FUN_00455dc0(param_3 + 4);
    local_8 = 1;
    FUN_004aaee0(param_3 + 0x10);
    local_30 = *(undefined4 *)(param_3 + 0x1c);
    FUN_00455dc0(param_3 + 0x20);
    local_8 = 2;
    FUN_004ab7e0(param_2,param_1[1] + -0x58,param_1[1] + -0x2c,param_2,0);
    FUN_0040c060(local_48);
    FUN_004ab250(local_3c);
    *(undefined4 *)(param_2 + 0x1c) = local_30;
    FUN_0040c060(local_2c);
    local_8 = 0xffffffff;
    FUN_004a73b0();
    ExceptionList = local_10;
    return;
  }
  local_1c = (local_20 - *param_1) / 0x2c;
  if (local_1c == 0) {
    local_1c = 1;
  }
  else {
    local_1c = local_1c * 2;
    if (local_1c == 0) {
      local_20 = 0;
      ExceptionList = &local_10;
      local_14 = &stack0xffffffa8;
      goto LAB_004aa6d6;
    }
  }
  ExceptionList = &local_10;
  local_20 = FUN_0044b6e0(local_1c * 0x2c);
LAB_004aa6d6:
  local_8 = 3;
  local_18 = local_20;
  iVar3 = FUN_004abcc0(*param_1,param_2,local_20,param_2);
  local_8._0_1_ = 4;
  if (iVar3 != 0) {
    local_20 = iVar3;
    FUN_004aada0(param_3);
  }
  local_20 = iVar3 + 0x2c;
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar3 = FUN_004abcc0(param_2,param_1[1],local_20,iVar3);
  piVar1 = (int *)param_1[1];
  piVar5 = (int *)*param_1;
  local_8 = 0xffffffff;
  for (; piVar5 != piVar1; piVar5 = piVar5 + 0xb) {
    (**(code **)(*piVar5 + 4))(0);
  }
  piVar1 = (int *)*param_1;
  iVar2 = (param_1[2] - (int)piVar1) / 0x2c;
  if (iVar2 != 0) {
    uVar4 = iVar2 * 0x2c;
    if (uVar4 < 0x81) {
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar1);
    }
  }
  param_1[1] = iVar3;
  *param_1 = local_18;
  param_1[2] = local_18 + local_1c * 0x2c;
  ExceptionList = local_10;
  return;
}

