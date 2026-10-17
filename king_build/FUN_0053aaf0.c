
undefined4 __thiscall FUN_0053aaf0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x268) == 0) {
    return 0;
  }
  FUN_0052f190(DAT_006d0c8c,0x3ecccccd);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x268) + 0x50))(param_2);
  return uVar1;
}

