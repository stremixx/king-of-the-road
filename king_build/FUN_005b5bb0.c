
void __thiscall FUN_005b5bb0(int param_1,short *param_2,short *param_3)

{
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_005b5bb0(param_2,param_3);
    *param_2 = *param_2 - *(short *)(param_1 + 100);
    *param_3 = *param_3 - *(short *)(param_1 + 0x68);
  }
  return;
}

