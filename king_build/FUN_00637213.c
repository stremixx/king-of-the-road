
undefined4 __fastcall FUN_00637213(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0x68) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x68) + 0x70))();
    if (iVar1 != 0) {
      return 1;
    }
  }
  uVar2 = FUN_006333b8();
  return uVar2;
}

