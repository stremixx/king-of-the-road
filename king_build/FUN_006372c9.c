
undefined4 __thiscall FUN_006372c9(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = FUN_0063580b();
    if (iVar1 == 0) {
      param_3 = *(int *)(param_1 + 0x8c) + 0x20000;
    }
    else {
      param_3 = *(int *)(param_1 + 0x90) + 0x10000;
    }
    if (param_3 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_00639a37();
  if (*(int **)(iVar1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + 4) + 0x98))(param_3,1);
  }
  return 1;
}

