
void __fastcall FUN_00516390(int param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_005d7cc0();
  *(undefined2 *)(param_1 + 0x170) = *(undefined2 *)(param_1 + 0x1a4);
  *(undefined2 *)(param_1 + 0x172) = *(undefined2 *)(param_1 + 0x1a6);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x198);
  iVar2 = *(int *)(*(int *)(param_1 + 0x178) + 0x120);
  uVar1 = *(uint *)(iVar2 + 0x11c);
  if (((byte)*(undefined4 *)(param_1 + 0x198) & 0xf0) == 0x10) {
    uVar1 = uVar1 | 2;
  }
  else {
    uVar1 = uVar1 & 0xfffffffd;
  }
  *(uint *)(iVar2 + 0x11c) = uVar1;
  iVar2 = FUN_005d2730();
  if (((byte)*(undefined4 *)(param_1 + 0x198) & 0xf0) == 0x20) {
    uVar1 = *(uint *)(iVar2 + 0x11c) | 2;
  }
  else {
    uVar1 = *(uint *)(iVar2 + 0x11c) & 0xfffffffd;
  }
  *(uint *)(iVar2 + 0x11c) = uVar1;
  iVar2 = FUN_005d2730();
  if (((byte)*(undefined4 *)(param_1 + 0x198) & 0xf0) == 0x30) {
    uVar1 = *(uint *)(iVar2 + 0x11c) | 2;
  }
  else {
    uVar1 = *(uint *)(iVar2 + 0x11c) & 0xfffffffd;
  }
  *(uint *)(iVar2 + 0x11c) = uVar1;
  iVar2 = FUN_005d2730();
  if (((byte)*(undefined4 *)(param_1 + 0x198) & 0xf0) == 0x40) {
    *(uint *)(iVar2 + 0x11c) = *(uint *)(iVar2 + 0x11c) | 2;
    return;
  }
  *(uint *)(iVar2 + 0x11c) = *(uint *)(iVar2 + 0x11c) & 0xfffffffd;
  return;
}

