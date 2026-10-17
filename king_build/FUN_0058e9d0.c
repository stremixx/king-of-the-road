
void __thiscall FUN_0058e9d0(int param_1,int param_2)

{
  if (((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) {
    if (param_2 != 3) {
      *(int *)(param_1 + 0xf88) = param_2;
      goto LAB_0058ea12;
    }
  }
  else if (param_2 != 3) goto LAB_0058ea12;
  if (*(int *)(param_1 + 0xf88) != 3) {
    *(undefined4 *)(param_1 + 0xf8c) = 3;
    *(undefined4 *)(param_1 + 0xf8c) = 0;
    return;
  }
LAB_0058ea12:
  *(undefined4 *)(param_1 + 0xf8c) = 0;
  return;
}

