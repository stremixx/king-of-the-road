
undefined4 * __thiscall FUN_00453310(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063e971;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_14;
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  puVar4 = param_2 + 4;
  puVar5 = param_1 + 4;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = 0;
  param_1[0xc] = param_2[0xc];
  iVar3 = param_2[0xe] - param_2[0xd];
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (iVar3 != 0) {
    iVar2 = FUN_0044b6e0(iVar3);
  }
  param_1[0xd] = iVar2;
  param_1[0xe] = iVar2;
  param_1[0xf] = iVar2 + iVar3;
  iVar3 = param_2[0xe];
  iVar1 = param_2[0xd];
  FUN_0061c980(iVar2,iVar1,iVar3 - iVar1);
  param_1[0xe] = (iVar2 - iVar1) + iVar3;
  iVar3 = 0;
  local_c = 0;
  iVar2 = param_2[0x11] - param_2[0x10];
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_0044b6e0(iVar2);
  }
  param_1[0x10] = iVar3;
  param_1[0x11] = iVar3;
  param_1[0x12] = iVar3 + iVar2;
  iVar2 = param_2[0x11];
  iVar1 = param_2[0x10];
  FUN_0061c980(iVar3,iVar1,iVar2 - iVar1);
  param_1[0x11] = (iVar3 - iVar1) + iVar2;
  iVar2 = param_2[0x14] - param_2[0x13];
  iVar3 = 0;
  local_c._0_1_ = 1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_0044b6e0(iVar2);
  }
  param_1[0x13] = iVar3;
  param_1[0x14] = iVar3;
  param_1[0x15] = iVar2 + iVar3;
  iVar2 = param_2[0x14];
  iVar1 = param_2[0x13];
  FUN_0061c980(iVar3,iVar1,iVar2 - iVar1);
  param_1[0x14] = (iVar3 - iVar1) + iVar2;
  iVar2 = param_2[0x17] - param_2[0x16];
  iVar3 = 0;
  local_c = CONCAT31(local_c._1_3_,2);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_0044b6e0(iVar2);
  }
  param_1[0x16] = iVar3;
  param_1[0x17] = iVar3;
  param_1[0x18] = iVar3 + iVar2;
  iVar2 = param_2[0x17];
  iVar1 = param_2[0x16];
  FUN_0061c980(iVar3,iVar1,iVar2 - iVar1);
  param_1[0x17] = (iVar3 - iVar1) + iVar2;
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x2e);
  *unaff_FS_OFFSET = local_14;
  return param_1;
}

