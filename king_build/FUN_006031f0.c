
void __fastcall FUN_006031f0(undefined4 *param_1)

{
  int *piVar1;
  
  FUN_006031b0();
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[2] = 0;
  param_1[4] = 0;
  *param_1 = 0;
  return;
}

