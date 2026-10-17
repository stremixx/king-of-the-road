
undefined4 __thiscall FUN_006378d6(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_006333b8();
  if ((iVar1 != -1) && (iVar1 = (**(code **)(*param_1 + 0xdc))(param_2,param_3), iVar1 != 0)) {
    PostMessageA((HWND)param_1[7],0x362,0xe001,0);
    (**(code **)(*param_1 + 200))(1);
    return 0;
  }
  return 0xffffffff;
}

