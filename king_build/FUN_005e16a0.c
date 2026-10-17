
void __thiscall FUN_005e16a0(int param_1,short *param_2)

{
  if ((*(int *)(param_1 + 0x160) == 0) || (*param_2 != 0x100)) {
    if (*(int *)(param_1 + 0x14c) == 0) {
      (**(code **)(**(int **)(param_1 + 0xf8) + 0x34))(param_2);
    }
  }
  else if (*(int *)(param_1 + 0x14c) == 0) {
    (**(code **)(**(int **)(param_1 + 0xf8) + 0x38))(param_2);
    return;
  }
  return;
}

