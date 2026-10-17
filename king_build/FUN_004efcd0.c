
void __fastcall FUN_004efcd0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_4;
  
  puVar3 = (undefined4 *)(param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0x8d0);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x900);
  puVar2 = (undefined4 *)(param_1 + 0x930);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x1a10) = *(undefined4 *)(param_1 + 0xf4);
  local_4 = 0;
  *(undefined4 *)(param_1 + 0xa08) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0xa0c) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0xa10) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0xc3c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc40) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xc44) = *(undefined4 *)(param_1 + 0x54);
  if (0 < *(int *)(param_1 + 0xdd4)) {
    puVar3 = (undefined4 *)(param_1 + 0x1018);
    puVar2 = (undefined4 *)(param_1 + 0xdf8);
    puVar4 = (undefined4 *)(param_1 + 0x17e4);
    do {
      puVar5 = puVar3 + -0x3c8;
      puVar6 = puVar3;
      for (iVar1 = 0x3e; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar3 = puVar3 + 0x3e;
      *puVar4 = puVar4[-0x5e0];
      puVar4[1] = puVar4[-0x5df];
      puVar4[2] = puVar4[-0x5de];
      *puVar2 = puVar2[-8];
      local_4 = local_4 + 1;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 3;
    } while (local_4 < *(int *)(param_1 + 0xdd4));
  }
  return;
}

