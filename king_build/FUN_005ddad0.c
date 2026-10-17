
void __fastcall FUN_005ddad0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 < 0x16) {
    if (iVar1 == 0x15) {
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x224) = 1;
      (**(code **)(**(int **)(param_1 + 0x20) + 100))();
      FUN_005d29a0(1);
      return;
    }
    switch(iVar1) {
    case 0:
      (**(code **)(**(int **)(param_1 + 0x20) + 0xb8))();
      FUN_005d29a0(1);
      return;
    case 10:
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x224) = 0;
      (**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
      FUN_005d29a0(1);
      return;
    case 0xb:
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x224) = 1;
      (**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
      FUN_005d29a0(1);
      return;
    case 0x14:
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x224) = 0;
      (**(code **)(**(int **)(param_1 + 0x20) + 100))();
      FUN_005d29a0(1);
      return;
    }
  }
  else if (iVar1 < 0x29) {
    if (iVar1 == 0x28) {
      (**(code **)(**(int **)(param_1 + 0x20) + 0xac))();
      FUN_005d29a0(1);
      return;
    }
    if (iVar1 == 0x1e) {
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x224) = 0;
      (**(code **)(**(int **)(param_1 + 0x20) + 0x68))();
      FUN_005d29a0(1);
      return;
    }
    if (iVar1 == 0x1f) {
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x224) = 1;
      (**(code **)(**(int **)(param_1 + 0x20) + 0x68))();
      FUN_005d29a0(1);
      return;
    }
  }
  else if (iVar1 == 400) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0xb4))();
  }
  FUN_005d29a0(1);
  return;
}

