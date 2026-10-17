
void FUN_00466f70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0063f6c9;
  local_10 = ExceptionList;
  uStack_7 = 0;
  puVar1 = param_3;
  ExceptionList = &local_10;
  for (puVar4 = param_1; puVar4 != param_2; puVar4 = puVar4 + 0x24) {
    local_8 = 1;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar4;
      puVar1[1] = puVar4[1];
      puVar1[2] = puVar4[2];
      puVar1[3] = puVar4[3];
      puVar1[4] = puVar4[4];
      puVar5 = puVar4 + 6;
      puVar6 = puVar1 + 6;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar1[0xe] = puVar4[0xe];
      puVar1[0xf] = puVar4[0xf];
      puVar1[0x10] = puVar4[0x10];
      puVar1[0x11] = puVar4[0x11];
      puVar1[0x12] = puVar4[0x12];
      puVar1[0x13] = puVar4[0x13];
      puVar1[0x14] = puVar4[0x14];
      puVar1[0x15] = puVar4[0x15];
      puVar1[0x16] = puVar4[0x16];
      puVar1[0x17] = puVar4[0x17];
      puVar1[0x18] = puVar4[0x18];
      puVar1[0x19] = puVar4[0x19];
      puVar1[0x1a] = puVar4[0x1a];
      puVar1[0x1c] = puVar4[0x1c];
      puVar1[0x1d] = puVar4[0x1d];
      param_1 = (undefined4 *)CONCAT13(param_3._3_1_,param_1._0_3_);
      FUN_004670f0((int)(puVar4[0x1f] - puVar4[0x1e]) >> 4,(int)&param_1 + 3);
      local_8 = 2;
      uVar2 = FUN_004662a0(puVar4[0x1e],puVar4[0x1f],puVar1[0x1e],param_3);
      puVar1[0x1f] = uVar2;
      puVar1[0x21] = puVar4[0x21];
      puVar1[0x22] = puVar4[0x22];
    }
    puVar1 = puVar1 + 0x24;
  }
  ExceptionList = local_10;
  return;
}

