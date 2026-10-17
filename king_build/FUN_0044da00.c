
void __thiscall FUN_0044da00(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [16];
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063e5b7;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff6c;
  local_20 = param_1[1];
  if (local_20 != param_1[2]) {
    local_8 = 0;
    local_1c = local_20;
    local_14 = &stack0xffffff6c;
    if (local_20 != 0) {
      local_14 = &stack0xffffff6c;
      FUN_0040c180(local_20 + -0x68);
    }
    param_1[1] = param_1[1] + 0x68;
    FUN_00455dc0(param_3);
    local_78 = *(undefined4 *)(param_3 + 0x10);
    local_74 = *(undefined4 *)(param_3 + 0x14);
    local_70 = *(undefined4 *)(param_3 + 0x18);
    local_6c = *(undefined4 *)(param_3 + 0x1c);
    local_68 = *(undefined4 *)(param_3 + 0x20);
    local_64 = *(undefined4 *)(param_3 + 0x24);
    local_60 = *(undefined4 *)(param_3 + 0x28);
    local_5c = *(undefined4 *)(param_3 + 0x2c);
    local_58 = *(undefined4 *)(param_3 + 0x30);
    local_50 = *(undefined4 *)(param_3 + 0x38);
    local_4c = *(undefined4 *)(param_3 + 0x3c);
    local_48 = *(undefined4 *)(param_3 + 0x40);
    local_44 = *(undefined4 *)(param_3 + 0x44);
    local_40 = *(undefined4 *)(param_3 + 0x48);
    local_38 = *(undefined4 *)(param_3 + 0x50);
    local_34 = *(undefined4 *)(param_3 + 0x54);
    local_8 = 1;
    FUN_0044dd30(param_3 + 0x58);
    local_8 = 2;
    FUN_00462500(param_2,param_1[1] + -0xd0,param_1[1] + -0x68,param_2,0);
    FUN_0040c060(local_88);
    *(undefined4 *)(param_2 + 0x10) = local_78;
    *(undefined4 *)(param_2 + 0x14) = local_74;
    *(undefined4 *)(param_2 + 0x18) = local_70;
    *(undefined4 *)(param_2 + 0x1c) = local_6c;
    *(undefined4 *)(param_2 + 0x20) = local_68;
    *(undefined4 *)(param_2 + 0x24) = local_64;
    *(undefined4 *)(param_2 + 0x28) = local_60;
    *(undefined4 *)(param_2 + 0x2c) = local_5c;
    *(undefined4 *)(param_2 + 0x30) = local_58;
    *(undefined4 *)(param_2 + 0x38) = local_50;
    *(undefined4 *)(param_2 + 0x3c) = local_4c;
    *(undefined4 *)(param_2 + 0x40) = local_48;
    *(undefined4 *)(param_2 + 0x44) = local_44;
    *(undefined4 *)(param_2 + 0x48) = local_40;
    *(undefined4 *)(param_2 + 0x50) = local_38;
    *(undefined4 *)(param_2 + 0x54) = local_34;
    FUN_0044c100(local_30);
    local_8 = 0xffffffff;
    FUN_004497b0();
    FUN_00492340();
    *unaff_FS_OFFSET = local_10;
    return;
  }
  local_1c = (local_20 - *param_1) / 0x68;
  if (local_1c == 0) {
    local_1c = 1;
  }
  else {
    local_1c = local_1c * 2;
    if (local_1c == 0) {
      local_20 = 0;
      local_14 = &stack0xffffff6c;
      goto LAB_0044dbeb;
    }
  }
  local_20 = FUN_0044b6e0(local_1c * 0x68);
LAB_0044dbeb:
  local_8 = 3;
  local_18 = local_20;
  iVar2 = FUN_00466500(*param_1,param_2,local_20,param_2);
  local_20 = iVar2;
  FUN_00460990(iVar2,param_3);
  local_20 = iVar2 + 0x68;
  iVar3 = FUN_00466500(param_2,param_1[1],local_20,param_2);
  iVar2 = param_1[1];
  iVar5 = *param_1;
  local_8 = 0xffffffff;
  for (; iVar5 != iVar2; iVar5 = iVar5 + 0x68) {
    FUN_004497b0();
    FUN_00492340();
  }
  piVar1 = (int *)*param_1;
  iVar2 = (param_1[2] - (int)piVar1) / 0x68;
  if (iVar2 != 0) {
    uVar4 = iVar2 * 0x68;
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
  param_1[2] = local_18 + local_1c * 0x68;
  *unaff_FS_OFFSET = local_10;
  return;
}

