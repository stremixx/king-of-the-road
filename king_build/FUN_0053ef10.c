
int __fastcall FUN_0053ef10(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_4;
  
  local_4 = 8;
  puVar1 = (undefined4 *)(param_1 + 0x110);
  do {
    FUN_004011e0(puVar1,0xc,4,FUN_004042a0);
    local_4 = local_4 + -1;
    puVar3 = &DAT_00701550;
    puVar4 = puVar1;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar1 = puVar1 + 0xc;
  } while (local_4 != 0);
  iVar2 = 4;
  do {
    FUN_004042a0();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = &DAT_00701550;
  puVar3 = (undefined4 *)(param_1 + 0x290);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004011e0((undefined4 *)(param_1 + 0x2c0),0xc,4,FUN_004042a0);
  puVar1 = &DAT_00701550;
  puVar3 = (undefined4 *)(param_1 + 0x2c0);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004011e0((undefined4 *)(param_1 + 0x2f0),0xc,4,FUN_004042a0);
  puVar1 = &DAT_00701550;
  puVar3 = (undefined4 *)(param_1 + 0x2f0);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  local_4 = 4;
  do {
    FUN_004042a0();
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  puVar1 = &DAT_00701550;
  puVar3 = (undefined4 *)(param_1 + 0x33c);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004011e0((undefined4 *)(param_1 + 0x36c),0xc,4,FUN_004042a0);
  puVar1 = &DAT_00701550;
  puVar3 = (undefined4 *)(param_1 + 0x36c);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004011e0((undefined4 *)(param_1 + 0x39c),0xc,4,FUN_004042a0);
  puVar1 = &DAT_00701550;
  puVar3 = (undefined4 *)(param_1 + 0x39c);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)(param_1 + 0x434);
  iVar2 = 3;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(param_1 + 0x458);
  iVar2 = 3;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x480) = 0;
  *(undefined4 *)(param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x488) = 0;
  *(undefined4 *)(param_1 + 0x48c) = 0;
  *(undefined4 *)(param_1 + 0x490) = 0;
  FUN_004011e0((undefined4 *)(param_1 + 0x4ac),0xc,4,FUN_004042a0);
  puVar1 = &DAT_00701550;
  puVar3 = (undefined4 *)(param_1 + 0x4ac);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004011e0((undefined4 *)(param_1 + 0x4dc),0xc,4,FUN_004042a0);
  puVar1 = &DAT_00701550;
  puVar3 = (undefined4 *)(param_1 + 0x4dc);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004011e0((undefined4 *)(param_1 + 0x50c),0xc,4,FUN_004042a0);
  puVar1 = &DAT_00701550;
  puVar3 = (undefined4 *)(param_1 + 0x50c);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004011e0((undefined4 *)(param_1 + 0x53c),0xc,4,FUN_004042a0);
  puVar1 = &DAT_00701550;
  puVar3 = (undefined4 *)(param_1 + 0x53c);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004011e0((undefined4 *)(param_1 + 0x56c),0xc,4,FUN_004042a0);
  puVar1 = &DAT_00701550;
  puVar3 = (undefined4 *)(param_1 + 0x56c);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004011e0((undefined4 *)(param_1 + 0x59c),0xc,4,FUN_004042a0);
  puVar1 = &DAT_00701550;
  puVar3 = (undefined4 *)(param_1 + 0x59c);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  *(undefined4 *)(param_1 + 0x3cc) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x3f0);
  iVar2 = 6;
  do {
    puVar1[-6] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1;
}

