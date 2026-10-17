
undefined4 __thiscall FUN_005bd0d0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (iVar1 == 0) {
    if (param_2 < param_1[0xb]) {
      return 0;
    }
    if (param_1[0xd] < param_2) {
      return 0;
    }
    if (param_3 < param_1[0xc]) {
      return 0;
    }
  }
  else {
    if (param_2 < param_1[0xb]) {
      return 0;
    }
    if (param_1[0xd] < param_2) {
      return 0;
    }
    if (param_3 < param_1[0xc]) {
      return 0;
    }
  }
  if (param_1[0xe] < param_3) {
    return 0;
  }
  return 1;
}

