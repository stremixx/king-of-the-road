
void __fastcall FUN_004effa0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x2a50) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x2a54) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x2a58) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x2a5c) = *(undefined4 *)(param_1 + 0x9f0);
  *(undefined4 *)(param_1 + 0x2a60) = *(undefined4 *)(param_1 + 0x9f4);
  *(undefined4 *)(param_1 + 0x2a64) = *(undefined4 *)(param_1 + 0x9f8);
  *(undefined4 *)(param_1 + 0x2a68) = *(undefined4 *)(param_1 + 0xa20);
  *(undefined4 *)(param_1 + 0x2a6c) = *(undefined4 *)(param_1 + 0xa24);
  *(undefined4 *)(param_1 + 0x2a70) = *(undefined4 *)(param_1 + 0xa28);
  *(undefined4 *)(param_1 + 0x332c) = *(undefined4 *)(param_1 + 0xdc4);
  *(undefined4 *)(param_1 + 0x3328) = *(undefined4 *)(param_1 + 0xdc0);
  *(undefined4 *)(param_1 + 0x3330) = *(undefined4 *)(param_1 + 0xdc8);
  *(undefined4 *)(param_1 + 0x3338) = *(undefined4 *)(param_1 + 0xee0);
  *(undefined4 *)(param_1 + 0x333c) = *(undefined4 *)(param_1 + 0xee4);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    puVar1 = (undefined4 *)(param_1 + 0x3bb0);
    do {
      iVar2 = iVar2 + 1;
      *puVar1 = puVar1[-0x550];
      puVar1 = puVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xdd4));
  }
  return;
}

