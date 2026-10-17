
void __thiscall FUN_004511d0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063e7f2;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffb0;
  local_20 = param_1[1];
  if (local_20 != param_1[2]) {
    local_8 = 0;
    local_1c = local_20;
    local_14 = &stack0xffffffb0;
    if (local_20 != 0) {
      local_14 = &stack0xffffffb0;
      FUN_00458570(local_20 + -0x24);
    }
    param_1[1] = param_1[1] + 0x24;
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    local_8 = 0xffffffff;
    FUN_0044dd30(param_3 + 3);
    local_8 = 1;
    FUN_00459680(param_3 + 6);
    local_8 = 2;
    FUN_00463940(param_2,param_1[1] + -0x48,param_1[1] + -0x24,param_2,0);
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    FUN_0044c100(local_38);
    FUN_0045ad30(local_2c);
    local_8 = 0xffffffff;
    FUN_00451450();
    FUN_004497b0();
    *unaff_FS_OFFSET = local_10;
    return;
  }
  local_1c = (local_20 - *param_1) / 0x24;
  if (local_1c == 0) {
    local_1c = 1;
  }
  else {
    local_1c = local_1c * 2;
    if (local_1c == 0) {
      local_20 = 0;
      local_14 = &stack0xffffffb0;
      goto LAB_00451314;
    }
  }
  local_20 = FUN_0044b6e0(local_1c * 0x24);
LAB_00451314:
  local_8 = 3;
  local_18 = local_20;
  iVar5 = FUN_00467130(*param_1,param_2,local_20,param_2);
  local_8._0_1_ = 4;
  if (iVar5 != 0) {
    local_20 = iVar5;
    FUN_00458570(param_3);
  }
  local_20 = iVar5 + 0x24;
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar6 = FUN_00467130(param_2,param_1[1],local_20,iVar5);
  iVar5 = param_1[1];
  iVar8 = *param_1;
  local_8 = 0xffffffff;
  for (; iVar8 != iVar5; iVar8 = iVar8 + 0x24) {
    FUN_00449a70();
    FUN_004497b0();
  }
  piVar4 = (int *)*param_1;
  iVar5 = (param_1[2] - (int)piVar4) / 0x24;
  if (iVar5 != 0) {
    uVar7 = iVar5 * 0x24;
    if (uVar7 < 0x81) {
      FUN_00401aa0();
      *piVar4 = *(int *)(&DAT_0068c120 + (uVar7 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar7 + 7 >> 3) * 4) = piVar4;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar4);
    }
  }
  *param_1 = local_18;
  param_1[1] = iVar6;
  param_1[2] = local_18 + local_1c * 0x24;
  *unaff_FS_OFFSET = local_10;
  return;
}

