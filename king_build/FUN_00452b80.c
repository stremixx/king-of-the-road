
void __thiscall FUN_00452b80(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_54 [12];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063e8ca;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff9c;
  local_20 = param_1[1];
  if (local_20 != param_1[2]) {
    local_8 = 0;
    local_1c = local_20;
    local_14 = &stack0xffffff9c;
    if (local_20 != 0) {
      local_14 = &stack0xffffff9c;
      FUN_004586d0(local_20 + -0x38);
    }
    local_8 = 0xffffffff;
    param_1[1] = param_1[1] + 0x38;
    uVar1 = *param_3;
    FUN_0044dd30(param_3 + 1);
    local_48 = param_3[4];
    local_44 = param_3[5];
    local_40 = param_3[6];
    local_3c = param_3[7];
    local_38 = param_3[8];
    local_30 = param_3[10];
    local_2c = param_3[0xb];
    local_28 = param_3[0xc];
    local_24 = param_3[0xd];
    local_8 = 1;
    FUN_00463c30(param_2,param_1[1] + -0x70,param_1[1] + -0x38,param_2,0);
    *param_2 = uVar1;
    FUN_0044c100(local_54);
    param_2[5] = local_44;
    param_2[4] = local_48;
    param_2[6] = local_40;
    param_2[8] = local_38;
    param_2[7] = local_3c;
    param_2[10] = local_30;
    param_2[0xc] = local_28;
    param_2[0xb] = local_2c;
    param_2[0xd] = local_24;
    FUN_004497b0();
    *unaff_FS_OFFSET = local_10;
    return;
  }
  local_1c = (local_20 - *param_1) / 0x38;
  if (local_1c == 0) {
    local_1c = 1;
  }
  else {
    local_1c = local_1c * 2;
    if (local_1c == 0) {
      local_20 = 0;
      local_14 = &stack0xffffff9c;
      goto LAB_00452cf7;
    }
  }
  local_20 = FUN_0044b6e0(local_1c * 0x38);
LAB_00452cf7:
  local_8 = 2;
  local_18 = local_20;
  iVar3 = FUN_004673f0(*param_1,param_2,local_20,param_2);
  local_8._0_1_ = 3;
  if (iVar3 != 0) {
    local_20 = iVar3;
    FUN_004586d0(param_3);
  }
  local_20 = iVar3 + 0x38;
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar4 = FUN_004673f0(param_2,param_1[1],local_20,iVar3);
  iVar3 = param_1[1];
  for (iVar6 = *param_1; iVar6 != iVar3; iVar6 = iVar6 + 0x38) {
    FUN_004497b0();
  }
  piVar2 = (int *)*param_1;
  iVar3 = (param_1[2] - (int)piVar2) / 0x38;
  if (iVar3 != 0) {
    uVar5 = iVar3 * 0x38;
    if (uVar5 < 0x81) {
      FUN_00401aa0();
      *piVar2 = *(int *)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4) = piVar2;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar2);
    }
  }
  param_1[1] = iVar4;
  *param_1 = local_18;
  param_1[2] = local_18 + local_1c * 0x38;
  *unaff_FS_OFFSET = local_10;
  return;
}

