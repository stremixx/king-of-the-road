
void FUN_00461410(undefined4 *param_1,undefined4 *param_2)

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
  
  puStack_10 = &LAB_0063f452;
  local_14 = ExceptionList;
  local_18 = param_1;
  local_c = 0;
  if (param_1 != (undefined4 *)0x0) {
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
    FUN_0044a420(param_2[0xe] - param_2[0xd],&local_22);
    local_1c = param_2[0xe];
    local_20 = param_2[0xd];
    iVar2 = param_1[0xd];
    FUN_0061c980(iVar2,local_20,local_1c - local_20);
    param_1[0xe] = (iVar2 - local_20) + local_1c;
    local_c._0_1_ = 1;
    FUN_0044a420(param_2[0x11] - param_2[0x10],&local_21);
    uVar1 = FUN_00407250(param_2[0x10],param_2[0x11],param_1[0x10]);
    param_1[0x11] = uVar1;
    local_c._0_1_ = 2;
    FUN_0044dd30(param_2 + 0x13);
    local_c = CONCAT31(local_c._1_3_,3);
    FUN_0044dd30(param_2 + 0x16);
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
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    iVar2 = param_1[0xd];
    if (iVar2 != param_1[0xe]) {
      param_1[0x19] = iVar2;
    }
    if (param_1[0x10] != param_1[0x11]) {
      param_1[0x1a] = param_1[0x10];
    }
    if (param_1[0x13] != param_1[0x14]) {
      param_1[0x1b] = param_1[0x13];
    }
    if (param_1[0x16] != param_1[0x17]) {
      param_1[0x1c] = param_1[0x16];
    }
  }
  ExceptionList = local_14;
  return;
}

