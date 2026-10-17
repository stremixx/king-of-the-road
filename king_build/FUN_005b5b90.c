
undefined4 __thiscall FUN_005b5b90(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = param_2;
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_005b5b90(param_2);
  }
  return uVar1;
}

