
undefined4 __thiscall FUN_005e0ff0(int param_1,int param_2)

{
  if (param_2 == 3) {
    *(undefined4 *)(param_1 + 0xbd0) = 1;
  }
  else if (param_2 == 4) {
    *(undefined4 *)(param_1 + 0xbdc) = 1;
  }
  else if ((param_2 < 3) || ((4 < param_2 && (param_2 != 0x1b)))) {
    return 0;
  }
  if (*(int **)(param_1 + 0xb28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb28) + 0x20))();
    FUN_005e3870(param_1);
  }
  return 1;
}

