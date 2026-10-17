
void __thiscall FUN_005d2c60(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_005d2e40(param_2);
  if (param_2 == *(int *)(param_1 + 4)) {
    uVar1 = FUN_005d2730();
    *(undefined4 *)(param_1 + 4) = uVar1;
    if (*(int *)(param_2 + 8) != 0) {
      *(undefined4 *)(*(int *)(param_2 + 8) + 4) = 0;
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
    return;
  }
  FUN_005d1860();
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

