
undefined4 __thiscall FUN_005f2c30(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return 0;
  }
  if ((param_2 & 4) == 0) {
    return 0;
  }
  uVar1 = 0;
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    if (*(code **)(param_1 + 0x34) != (code *)0x0) {
      uVar1 = (**(code **)(param_1 + 0x34))(param_2,param_3,param_1);
    }
    return uVar1;
  }
  if ((param_2 & 1) != 0) {
    return uVar1;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x34))(param_2 | 1,param_3);
  return uVar1;
}

