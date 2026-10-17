
void __thiscall FUN_00450540(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_38 [12];
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063e72a;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffbc;
  local_20 = param_1[1];
  if (local_20 != param_1[2]) {
    local_8 = 0;
    local_1c = local_20;
    local_14 = &stack0xffffffbc;
    if (local_20 != 0) {
      local_14 = &stack0xffffffbc;
      FUN_0040cd00(local_20 + -0x18);
    }
    param_1[1] = param_1[1] + 0x18;
    FUN_00455dc0(param_3);
    local_8 = 1;
    FUN_004507f0(param_3 + 0xc);
    local_8 = 2;
    FUN_00463490(param_2,param_1[1] + -0x30,param_1[1] + -0x18,param_2,0);
    FUN_0040c060(local_38);
    FUN_0045aa70(&local_2c);
    local_8 = 3;
    for (; local_2c != local_28; local_2c = local_2c + 0x18) {
      FUN_0046c800(0);
    }
    FUN_0044a4b0();
    local_8 = 0xffffffff;
    FUN_00492340();
    *unaff_FS_OFFSET = local_10;
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
      local_14 = &stack0xffffffbc;
      goto LAB_0045067f;
    }
  }
  local_20 = FUN_0044b6e0(local_1c * 0x18);
LAB_0045067f:
  local_8 = 4;
  local_18 = local_20;
  iVar2 = FUN_00466dc0(*param_1,param_2,local_20,param_2);
  local_8._0_1_ = 5;
  if (iVar2 != 0) {
    local_20 = iVar2;
    FUN_0040cd00(param_3);
  }
  local_20 = iVar2 + 0x18;
  local_8 = CONCAT31(local_8._1_3_,4);
  iVar3 = FUN_00466dc0(param_2,param_1[1],local_20,iVar2);
  iVar2 = param_1[1];
  iVar5 = *param_1;
  local_8 = 0xffffffff;
  for (; iVar5 != iVar2; iVar5 = iVar5 + 0x18) {
    FUN_00447fe0();
    FUN_00492340();
  }
  piVar1 = (int *)*param_1;
  iVar2 = (param_1[2] - (int)piVar1) / 0x18;
  if (iVar2 != 0) {
    uVar4 = iVar2 * 0x18;
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
  *param_1 = local_18;
  param_1[1] = iVar3;
  param_1[2] = local_18 + local_1c * 0x18;
  *unaff_FS_OFFSET = local_10;
  return;
}

