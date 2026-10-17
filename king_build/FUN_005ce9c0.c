
undefined4 __thiscall FUN_005ce9c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar1 = FUN_005f2d40(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_005b06d0(*(undefined4 *)(param_1 + 0x7c),0,0,0);
  FUN_005ceaa0();
  return 1;
}

