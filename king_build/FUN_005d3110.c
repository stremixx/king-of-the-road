
void __thiscall FUN_005d3110(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == *(int *)(param_1 + 0xc)) {
    uVar1 = FUN_005d2730();
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  else {
    if (param_2 != *(int *)(param_1 + 8)) {
      FUN_005d1860();
      return;
    }
    uVar1 = FUN_005d2730();
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  *(undefined4 *)(*(int *)(param_2 + 8) + 4) = 0;
  return;
}

