
void __thiscall FUN_00588ae0(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 8))) {
    *(int *)(param_1 + 4) = param_2;
    *(float *)(param_1 + 0xc) = (float)param_2 / (float)*(int *)(param_1 + 8);
  }
  return;
}

