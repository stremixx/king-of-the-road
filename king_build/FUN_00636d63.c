
void FUN_00636d63(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00639a37();
  if (*(int **)(iVar1 + 4) == (int *)0x0) {
    FUN_00636c7c(param_1,param_2,param_3);
  }
  else {
    (**(code **)(**(int **)(iVar1 + 4) + 0x8c))(param_1,param_2,param_3);
  }
  return;
}

