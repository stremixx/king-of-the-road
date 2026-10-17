
undefined4 __thiscall FUN_005e4980(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    return 0;
  }
  if (400 < param_2 / 1000) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + (param_2 / 1000) * 4);
  if (iVar1 == 0) {
    return 0;
  }
  if (499 < param_2 % 1000) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + (param_2 % 1000) * 4);
}

