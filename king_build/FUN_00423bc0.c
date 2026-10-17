
void FUN_00423bc0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int **ppiVar5;
  int *apiStack_3c [3];
  undefined4 **local_30;
  undefined4 **local_2c;
  undefined4 **ppuStack_28;
  undefined4 *puStack_24;
  undefined4 *local_20;
  undefined4 *local_c;
  undefined4 *local_8;
  undefined1 local_4 [4];
  
  puVar1 = local_8;
  if (DAT_0068c0e8 == 0) {
    iVar3 = 0;
    do {
      if (DAT_0068c0b0 <= DAT_0068c0ac) {
        return;
      }
      local_20 = &DAT_0068a928;
      puStack_24 = puVar1;
      local_2c = apiStack_3c + 5;
      ppuStack_28 = (undefined4 **)DAT_0068c0b0;
      iVar3 = iVar3 + 1;
      local_30 = (undefined4 **)0x423c00;
      FUN_004896a0();
      local_30 = apiStack_3c + 4;
      apiStack_3c[2] = (int *)0x423c0c;
      FUN_004af790();
      local_30 = &local_8;
      apiStack_3c[2] = (int *)0x423c16;
      FUN_0045e030();
      if (local_8 == DAT_0068a8f0) {
        local_c = DAT_0068a8f0;
      }
      else {
        local_20 = local_8;
        puStack_24 = (undefined4 *)0x423c3d;
        FUN_004042b0();
      }
      if (local_c == DAT_0068a8f0) {
        return;
      }
      puVar4 = local_c + 10;
      ppiVar5 = apiStack_3c;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *ppiVar5 = (int *)*puVar4;
        puVar4 = puVar4 + 1;
        ppiVar5 = ppiVar5 + 1;
      }
      FUN_0041d3f0(&local_c);
      FUN_00478740(iVar2);
      local_20 = local_c;
      puStack_24 = (undefined4 *)0x423c80;
      FUN_00419100();
      ppuStack_28 = &local_c;
      local_20 = (undefined4 *)0x0;
      local_2c = (undefined4 **)0x423c92;
      FUN_0041d3f0();
      ppuStack_28 = (undefined4 **)local_4;
      local_2c = (undefined4 **)0x423c9c;
      FUN_0040a590();
      puStack_24 = (undefined4 *)0x423ca6;
      iVar2 = FUN_00423ce0();
      puStack_24 = (undefined4 *)(iVar2 + 0x30);
      local_2c = &local_c;
      local_30 = (undefined4 **)0x423cb7;
      FUN_0041d3f0();
      local_2c = (undefined4 **)0x423cbc;
      FUN_0043e6f0();
      local_2c = (undefined4 **)0x68;
      local_30 = (undefined4 **)0x423cc3;
      FUN_004012c0();
    } while (iVar3 < 100);
  }
  return;
}

