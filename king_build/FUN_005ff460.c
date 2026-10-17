
void __thiscall FUN_005ff460(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 local_58 [16];
  undefined4 local_48 [6];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0064938a;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff9c;
  local_20 = param_1[1];
  if (local_20 != param_1[2]) {
    local_8 = 0;
    ExceptionList = &local_10;
    local_1c = local_20;
    local_14 = &stack0xffffff9c;
    if (local_20 != 0) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffff9c;
      FUN_005ff730(local_20 + -0x38);
    }
    param_1[1] = param_1[1] + 0x38;
    local_8 = 0xffffffff;
    FUN_0044dd30(param_3);
    local_2c = *(undefined4 *)(param_3 + 0x2c);
    puVar5 = (undefined4 *)(param_3 + 0x10);
    puVar7 = local_48;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    local_30 = *(undefined4 *)(param_3 + 0x28);
    local_24 = *(undefined4 *)(param_3 + 0x34);
    local_28 = *(undefined4 *)(param_3 + 0x30);
    local_8 = 1;
    FUN_005ff960(param_2,param_1[1] + -0x70,param_1[1] + -0x38,param_3,0);
    FUN_0044c100(local_58);
    *(undefined4 *)(param_2 + 0x30) = local_28;
    puVar5 = local_48;
    puVar7 = (undefined4 *)(param_2 + 0x10);
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_2 + 0x28) = local_30;
    *(undefined4 *)(param_2 + 0x34) = local_24;
    *(undefined4 *)(param_2 + 0x2c) = local_2c;
    FUN_0044a450();
    ExceptionList = local_10;
    return;
  }
  local_1c = (local_20 - *param_1) / 0x38;
  if (local_1c == 0) {
    local_1c = 1;
  }
  else {
    local_1c = local_1c * 2;
    if (local_1c == 0) {
      local_18 = 0;
      ExceptionList = &local_10;
      local_14 = &stack0xffffff9c;
      goto LAB_005ff5b5;
    }
  }
  ExceptionList = &local_10;
  local_18 = FUN_0044b6e0(local_1c * 0x38);
LAB_005ff5b5:
  local_8 = 2;
  local_20 = local_18;
  iVar4 = FUN_005ffa90(*param_1,param_2,local_18,param_3);
  local_8._0_1_ = 3;
  if (iVar4 != 0) {
    local_20 = iVar4;
    FUN_005ff730(param_3);
  }
  local_20 = iVar4 + 0x38;
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar2 = FUN_005ffa90(param_2,param_1[1],local_20,param_3);
  iVar4 = param_1[1];
  for (iVar6 = *param_1; iVar6 != iVar4; iVar6 = iVar6 + 0x38) {
    FUN_004497b0();
  }
  piVar1 = (int *)*param_1;
  iVar4 = (param_1[2] - (int)piVar1) / 0x38;
  if (iVar4 != 0) {
    uVar3 = iVar4 * 0x38;
    if (uVar3 < 0x81) {
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar1);
    }
  }
  param_1[1] = iVar2;
  *param_1 = local_18;
  param_1[2] = local_18 + local_1c * 0x38;
  ExceptionList = local_10;
  return;
}

