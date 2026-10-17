
undefined4 __thiscall FUN_005f89f0(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_005eee30(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_2 & 2) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    return 0;
  }
  (**(code **)*param_3)(param_1 + 0x30);
  return 1;
}

