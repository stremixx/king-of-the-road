
void FUN_006046f0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_006039a0(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(param_2);
  }
  return;
}

