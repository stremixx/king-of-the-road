
undefined4 __thiscall FUN_005f8970(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x40) != 6) {
    if (*(int *)(param_1 + 0x40) != 7) {
      FUN_005e4d00(param_2);
      FUN_005f8260(param_2);
      FUN_005f8920(param_2);
      return 1;
    }
    FUN_005e4d00(param_2);
    uVar1 = FUN_005aa810(param_2);
    *(undefined4 *)(param_1 + 0x44) = uVar1;
  }
  FUN_005f8920(param_2);
  FUN_005f8260(param_2);
  return 1;
}

