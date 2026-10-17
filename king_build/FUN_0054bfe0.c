
void __thiscall FUN_0054bfe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00580910(param_2,param_3);
  if (*(int *)(param_1 + 0x5454) != 0) {
    FUN_00561420(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x5450) != 0) && (*(int *)(param_1 + 0x2a9c) == 1)) {
    if (*(int *)(param_1 + 0x37c) != 0) {
      FUN_004f0ac0(1,param_2,param_3);
      return;
    }
    if (*(int *)(*(int *)(param_1 + 0x5450) + 0x3344) != 0) {
      FUN_004f0840(*(undefined4 *)(param_1 + 800),param_1 + 500);
    }
  }
  return;
}

