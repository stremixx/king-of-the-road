
void __fastcall FUN_00576a00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1);
    *param_1 = 0;
  }
  return;
}

