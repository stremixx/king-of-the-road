
void FUN_006046c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_006039a0(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(param_2,param_3,param_4);
  }
  return;
}

