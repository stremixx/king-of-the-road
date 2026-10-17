
undefined4 __fastcall FUN_005f8d90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005eedb0();
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x24))();
    if (*(undefined4 **)(param_1 + 0x4c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x4c))(1);
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return 1;
}

