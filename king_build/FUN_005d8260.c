
undefined4 __thiscall FUN_005d8260(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x38))(param_2);
  if ((uVar1 & 0x8000) != 0) {
    if ((uVar1 & 0xffff7fff) != 0) {
      (**(code **)(**(int **)(param_1 + 0x38) + 0x3c))(uVar1 & 0xffff7fff);
    }
    return 1;
  }
  return 0;
}

