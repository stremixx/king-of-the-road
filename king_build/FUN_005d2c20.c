
void __thiscall FUN_005d2c20(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_005d2520(s_TaskManager__add_Task_t__used_tw_0067eb94,0);
  }
  *(int *)(param_2 + 0xc) = param_1;
  if (*(int *)(param_1 + 4) == 0) {
    *(int *)(param_1 + 4) = param_2;
    return;
  }
  FUN_005d1840(*(int *)(param_1 + 4));
  return;
}

