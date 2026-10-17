
undefined4 __thiscall FUN_00635e1b(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_1 == param_2) break;
    param_1 = *(int *)(param_1 + 0x10);
  }
  return 1;
}

