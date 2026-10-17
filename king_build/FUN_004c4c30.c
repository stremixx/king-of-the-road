
void __fastcall FUN_004c4c30(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = 0;
    do {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x20) + iVar1) + 0x24))();
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x8c;
    } while (uVar2 < *(uint *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  DAT_006951ac = 0;
  FUN_005d29a0(1);
  return;
}

