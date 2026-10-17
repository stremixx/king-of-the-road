
undefined4 __thiscall FUN_005eda00(int param_1,int *param_2,uint *param_3)

{
  *param_3 = *param_3 & *(uint *)(param_1 + 0x10);
  (**(code **)(*param_2 + 0x14))();
  (**(code **)(**(int **)(param_1 + 0x14) + 0x28))();
  (**(code **)(*param_2 + 0x18))();
  return 1;
}

