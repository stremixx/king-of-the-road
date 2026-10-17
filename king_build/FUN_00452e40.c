
void __thiscall FUN_00452e40(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_e0 [192];
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063e90d;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff14;
  local_1c = param_1[1];
  if (local_1c != param_1[2]) {
    local_8 = 0;
    local_18 = local_1c;
    local_14 = &stack0xffffff14;
    if (local_1c != 0) {
      local_14 = &stack0xffffff14;
      FUN_004530d0(local_1c + -0xc0);
    }
    local_8 = 0xffffffff;
    param_1[1] = param_1[1] + 0xc0;
    FUN_00453310(param_3);
    FUN_004427d0();
    local_8 = 1;
    FUN_00463d70(param_2,param_1[1] + -0x180,param_1[1] + -0xc0,param_2,0);
    FUN_004535e0(local_e0);
    FUN_004427d0();
    FUN_00418590();
    *unaff_FS_OFFSET = local_10;
    return;
  }
  local_18 = (local_1c - *param_1) / 0xc0;
  if (local_18 == 0) {
    local_18 = 1;
  }
  else {
    local_18 = local_18 * 2;
    if (local_18 == 0) {
      local_20 = 0;
      local_14 = &stack0xffffff14;
      goto LAB_00452f5e;
    }
  }
  local_20 = FUN_0044b6e0(local_18 * 0xc0);
LAB_00452f5e:
  local_8 = 2;
  local_1c = local_20;
  iVar2 = FUN_00467530(*param_1,param_2,local_20,param_2);
  local_8._0_1_ = 3;
  if (iVar2 != 0) {
    local_1c = iVar2;
    FUN_004530d0(param_3);
  }
  local_1c = iVar2 + 0xc0;
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar3 = FUN_00467530(param_2,param_1[1],local_1c,iVar2);
  iVar2 = param_1[1];
  for (iVar5 = *param_1; iVar5 != iVar2; iVar5 = iVar5 + 0xc0) {
    FUN_00418590();
  }
  piVar1 = (int *)*param_1;
  iVar2 = (param_1[2] - (int)piVar1) / 0xc0;
  if (iVar2 != 0) {
    uVar4 = iVar2 * 0xc0;
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
  *param_1 = local_20;
  param_1[1] = iVar3;
  param_1[2] = local_18 * 0xc0 + local_20;
  *unaff_FS_OFFSET = local_10;
  return;
}

