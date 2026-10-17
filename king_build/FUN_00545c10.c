
undefined4 __thiscall FUN_00545c10(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_005863c0(param_2);
  if (iVar1 != 0) {
    return 1;
  }
  if (*param_2 != *(int *)(param_1 + 0x4a4)) {
    FUN_004e1e9c(s__Vehicle__receiveNetMessage___re_00678f2c);
  }
  switch(param_2[1]) {
  case 5:
    FUN_00545620(param_2 + 2);
    return 1;
  default:
    return 0;
  case 7:
    FUN_00545bb0(param_2 + 2);
    return 1;
  case 8:
    FUN_005454c0(param_2 + 2);
    return 1;
  case 9:
    FUN_005454f0(param_2 + 2);
    return 1;
  case 0xb:
    FUN_00545a30(param_2 + 2);
    return 1;
  }
}

