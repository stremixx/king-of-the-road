
void __thiscall FUN_00556aa0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x5460) != 0) {
    FUN_0054bf30(param_2,param_3);
    FUN_004ff010();
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x10) + 0x8c))(param_2,param_3);
  return;
}

