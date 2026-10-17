
void __thiscall FUN_004502d0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_30 [16];
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063e6da;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_20 = param_1[1];
  if (local_20 != param_1[2]) {
    local_8 = 0;
    ExceptionList = &local_10;
    local_1c = local_20;
    local_14 = &stack0xffffffbc;
    if (local_20 != 0) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffbc;
      FUN_00458260(local_20 + -0x18);
    }
    param_1[1] = param_1[1] + 0x18;
    uVar1 = *param_3;
    uVar2 = param_3[1];
    local_8 = 0xffffffff;
    FUN_0044dd30(param_3 + 2);
    local_8 = 1;
    FUN_00463390(param_2,param_1[1] + -0x30,param_1[1] + -0x18,param_2,0);
    *param_2 = uVar1;
    param_2[1] = uVar2;
    FUN_0044c100(local_30);
    local_8 = 0xffffffff;
    FUN_0044a450();
    ExceptionList = local_10;
    return;
  }
  local_1c = (local_20 - *param_1) / 0x18;
  if (local_1c == 0) {
    local_1c = 1;
  }
  else {
    local_1c = local_1c * 2;
    if (local_1c == 0) {
      local_20 = 0;
      ExceptionList = &local_10;
      local_14 = &stack0xffffffbc;
      goto LAB_004503e2;
    }
  }
  ExceptionList = &local_10;
  local_20 = FUN_0044b6e0(local_1c * 0x18);
LAB_004503e2:
  local_8 = 2;
  local_18 = local_20;
  iVar4 = FUN_00466cc0(*param_1,param_2,local_20,param_2);
  local_8._0_1_ = 3;
  if (iVar4 != 0) {
    local_20 = iVar4;
    FUN_00458260(param_3);
  }
  local_20 = iVar4 + 0x18;
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar5 = FUN_00466cc0(param_2,param_1[1],local_20,iVar4);
  iVar4 = param_1[1];
  for (iVar7 = *param_1; iVar7 != iVar4; iVar7 = iVar7 + 0x18) {
    FUN_004497b0();
  }
  piVar3 = (int *)*param_1;
  iVar4 = (param_1[2] - (int)piVar3) / 0x18;
  if (iVar4 != 0) {
    uVar6 = iVar4 * 0x18;
    if (uVar6 < 0x81) {
      FUN_00401aa0();
      *piVar3 = *(int *)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4) = piVar3;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar3);
    }
  }
  *param_1 = local_18;
  param_1[1] = iVar5;
  param_1[2] = local_18 + local_1c * 0x18;
  ExceptionList = local_10;
  return;
}

