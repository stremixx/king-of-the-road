
undefined4 __thiscall FUN_0058c7f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xe04) == 0) {
    uVar1 = FUN_0058c820(param_2);
    return uVar1;
  }
  if (*(int *)(param_1 + 0xe04) == 1) {
    uVar1 = FUN_0058c870(param_2);
    return uVar1;
  }
  return 0;
}

