
void __thiscall FUN_00458af0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063edf8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  puVar5 = param_2 + 6;
  puVar6 = param_1 + 6;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  piVar1 = param_1 + 0x1e;
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  iVar4 = (int)(param_2[0x1f] - param_2[0x1e]) >> 4;
  *piVar1 = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0044b6e0(iVar4 << 4);
  }
  *piVar1 = iVar2;
  param_1[0x1f] = iVar2;
  param_1[0x20] = iVar4 * 0x10 + iVar2;
  local_c = 0;
  uVar3 = FUN_004662a0(param_2[0x1e],param_2[0x1f],iVar2,piVar1);
  param_1[0x1f] = uVar3;
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  ExceptionList = local_14;
  return;
}

