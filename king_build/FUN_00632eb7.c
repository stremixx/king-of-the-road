
void __thiscall FUN_00632eb7(int param_1,BOOL param_2)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    EnableWindow(*(HWND *)(param_1 + 0x1c),param_2);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x38) + 0xa8))(param_2);
  }
  return;
}

