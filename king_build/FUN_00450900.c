
void __thiscall FUN_00450900(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 local_98 [8];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined4 local_28;
  int local_20;
  int *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063e77c;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff44;
  local_20 = param_1[1];
  local_1c = param_1;
  if (local_20 != param_1[2]) {
    local_8 = 0;
    ExceptionList = &local_10;
    local_18 = local_20;
    local_14 = &stack0xffffff44;
    if (local_20 != 0) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffff44;
      FUN_00443830(local_20 + -0x90);
    }
    local_8 = 0xffffffff;
    param_1[1] = param_1[1] + 0x90;
    uVar1 = param_3[1];
    uVar2 = *param_3;
    uVar3 = param_3[2];
    uVar4 = param_3[4];
    uVar5 = param_3[3];
    uVar6 = param_3[0xe];
    uVar7 = param_3[0xf];
    puVar12 = param_3 + 6;
    puVar13 = local_98;
    for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    }
    local_70 = param_3[0x10];
    local_6c = param_3[0x11];
    local_64 = param_3[0x13];
    local_60 = param_3[0x14];
    local_68 = param_3[0x12];
    local_58 = param_3[0x16];
    local_54 = param_3[0x17];
    local_5c = param_3[0x15];
    local_4c = param_3[0x19];
    local_48 = param_3[0x1a];
    local_50 = param_3[0x18];
    local_3c = param_3[0x1d];
    local_40 = param_3[0x1c];
    local_78 = uVar6;
    local_74 = uVar7;
    FUN_00450c80(param_3 + 0x1e);
    local_28 = param_3[0x22];
    local_8 = 1;
    FUN_00463700(param_2,local_1c[1] + -0x120,local_1c[1] + -0x90,param_2,0);
    *param_2 = uVar2;
    param_2[1] = uVar1;
    param_2[2] = uVar3;
    param_2[3] = uVar5;
    param_2[4] = uVar4;
    puVar12 = local_98;
    puVar13 = param_2 + 6;
    for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    }
    param_2[0x10] = local_70;
    param_2[0xe] = local_78;
    param_2[0xf] = local_74;
    param_2[0x11] = local_6c;
    param_2[0x12] = local_68;
    param_2[0x13] = local_64;
    param_2[0x14] = local_60;
    param_2[0x16] = local_58;
    param_2[0x17] = local_54;
    param_2[0x15] = local_5c;
    param_2[0x1a] = local_48;
    param_2[0x18] = local_50;
    param_2[0x19] = local_4c;
    param_2[0x1c] = local_40;
    param_2[0x1d] = local_3c;
    FUN_00458c30(local_38);
    param_2[0x22] = local_28;
    FUN_004482f0();
    ExceptionList = local_10;
    return;
  }
  local_18 = (local_20 - *param_1) / 0x90;
  if (local_18 == 0) {
    local_18 = 1;
  }
  else {
    local_18 = local_18 * 2;
    if (local_18 == 0) {
      local_20 = 0;
      ExceptionList = &local_10;
      local_14 = &stack0xffffff44;
      goto LAB_00450b4b;
    }
  }
  ExceptionList = &local_10;
  local_20 = FUN_0044b6e0(local_18 * 0x90);
LAB_00450b4b:
  local_8 = 2;
  local_1c = (int *)local_20;
  iVar11 = FUN_00466f70(*param_1,param_2,local_20,param_2);
  local_1c = (int *)iVar11;
  FUN_00460d50(iVar11,param_3);
  local_1c = (int *)(iVar11 + 0x90);
  iVar9 = FUN_00466f70(param_2,param_1[1],local_1c,param_2);
  iVar11 = param_1[1];
  iVar14 = *param_1;
  local_8 = 0xffffffff;
  for (; iVar14 != iVar11; iVar14 = iVar14 + 0x90) {
    FUN_00450d80();
  }
  piVar8 = (int *)*param_1;
  iVar11 = (param_1[2] - (int)piVar8) / 0x90;
  if (iVar11 != 0) {
    uVar10 = iVar11 * 0x90;
    if (uVar10 < 0x81) {
      FUN_00401aa0();
      *piVar8 = *(int *)(&DAT_0068c120 + (uVar10 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar10 + 7 >> 3) * 4) = piVar8;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar8);
    }
  }
  *param_1 = local_20;
  param_1[1] = iVar9;
  param_1[2] = local_18 * 0x90 + local_20;
  ExceptionList = local_10;
  return;
}

