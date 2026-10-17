
void __thiscall FUN_00612cb0(int param_1,int param_2,undefined4 param_3)

{
  FUN_00612db0(param_2);
  *(undefined4 *)(param_2 + 0x68) = param_3;
  FUN_00612ce0(param_2);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

