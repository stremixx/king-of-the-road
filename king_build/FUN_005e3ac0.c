
void __fastcall FUN_005e3ac0(int param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x54))
            (*(undefined4 *)(param_1 + 0x14),2,*(undefined4 *)(param_1 + 0x18));
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x70))();
  if (iVar1 != 0) {
    FUN_005e4a10(*(undefined4 *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

