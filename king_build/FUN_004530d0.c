
undefined4 * __thiscall FUN_004530d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_22;
  undefined1 local_21;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063e941;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  puVar3 = param_2 + 4;
  puVar4 = param_1 + 4;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0xc] = param_2[0xc];
  local_18 = param_1;
  FUN_0044a420(param_2[0xe] - param_2[0xd],&local_22);
  local_1c = param_2[0xe];
  local_20 = param_2[0xd];
  iVar2 = param_1[0xd];
  FUN_0061c980(iVar2,local_20,local_1c - local_20);
  puVar3 = local_18;
  param_1[0xe] = (iVar2 - local_20) + local_1c;
  local_c = 0;
  FUN_0044a420(param_2[0x11] - param_2[0x10],&local_21);
  uVar1 = FUN_00407250(param_2[0x10],param_2[0x11],puVar3[0x10]);
  puVar3[0x11] = uVar1;
  local_c._0_1_ = 1;
  FUN_0044dd30(param_2 + 0x13);
  local_c = CONCAT31(local_c._1_3_,2);
  FUN_0044dd30(param_2 + 0x16);
  puVar3[0x19] = param_2[0x19];
  puVar3[0x1a] = param_2[0x1a];
  puVar3[0x1b] = param_2[0x1b];
  puVar3[0x1c] = param_2[0x1c];
  puVar3[0x1e] = param_2[0x1e];
  puVar3[0x1f] = param_2[0x1f];
  puVar3[0x20] = param_2[0x20];
  puVar3[0x21] = param_2[0x21];
  puVar3[0x22] = param_2[0x22];
  puVar3[0x23] = param_2[0x23];
  puVar3[0x24] = param_2[0x24];
  puVar3[0x25] = param_2[0x25];
  puVar3[0x26] = param_2[0x26];
  puVar3[0x27] = param_2[0x27];
  puVar3[0x28] = param_2[0x28];
  puVar3[0x29] = param_2[0x29];
  puVar3[0x2a] = param_2[0x2a];
  puVar3[0x2b] = param_2[0x2b];
  puVar3[0x2c] = param_2[0x2c];
  puVar3[0x2d] = param_2[0x2d];
  *(undefined1 *)(puVar3 + 0x2e) = *(undefined1 *)(param_2 + 0x2e);
  puVar3[0x19] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1c] = 0;
  iVar2 = param_1[0xd];
  if (iVar2 != param_1[0xe]) {
    puVar3[0x19] = iVar2;
  }
  if (puVar3[0x10] != puVar3[0x11]) {
    puVar3[0x1a] = puVar3[0x10];
  }
  if (puVar3[0x13] != puVar3[0x14]) {
    puVar3[0x1b] = puVar3[0x13];
  }
  if (puVar3[0x16] != puVar3[0x17]) {
    puVar3[0x1c] = puVar3[0x16];
  }
  ExceptionList = local_14;
  return puVar3;
}

