
void __fastcall FUN_00491760(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14);
  uVar3 = 0;
  iVar2 = iVar1 >> 0x1f;
  if (iVar1 / 0x2c + iVar2 != iVar2) {
    iVar2 = 0;
    do {
      (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x14) + iVar2))();
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x2c;
    } while (uVar3 < (uint)((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) / 0x2c));
  }
  return;
}

