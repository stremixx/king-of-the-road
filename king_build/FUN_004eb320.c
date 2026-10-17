
void __thiscall FUN_004eb320(int param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    *(undefined2 *)(param_1 + 4) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 4) = 1;
  }
  if (param_3 != 0) {
    *(undefined2 *)(param_1 + 6) = 1;
    return;
  }
  *(undefined2 *)(param_1 + 6) = 0;
  return;
}

