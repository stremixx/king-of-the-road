
void __thiscall FUN_005983d0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x68) != 0) {
    if (param_2 == 2) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      return;
    }
    if ((*(int *)(param_1 + 0x68) != 2) && (*(int **)(param_1 + 0x6c) != (int *)0x0)) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      (**(code **)(**(int **)(param_1 + 0x6c) + 0x20))();
      if (*(int *)(param_1 + 0x7c) != 0) {
        FUN_005d2ae0();
      }
    }
  }
  return;
}

