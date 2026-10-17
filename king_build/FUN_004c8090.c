
void __thiscall FUN_004c8090(int param_1,undefined4 param_2)

{
  if (99 < *(uint *)(param_1 + 400)) {
    FUN_005d2250(s_Reflection_stack_overflow_00671880,0);
    return;
  }
  *(undefined4 *)(param_1 + *(uint *)(param_1 + 400) * 4) = param_2;
  *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
  return;
}

