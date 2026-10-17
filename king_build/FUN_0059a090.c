
undefined4 __thiscall FUN_0059a090(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x48))();
  iVar1 = FUN_005b4670(param_1 + 5);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_005eee30(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_005b26c0(param_1[0xd],param_1[0xe],param_1[0xf],param_1[0x10]);
  return 1;
}

