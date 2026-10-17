
void __fastcall FUN_005942d0(int param_1)

{
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x24))();
    if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x18))(1);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

