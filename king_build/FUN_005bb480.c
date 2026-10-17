
void __fastcall FUN_005bb480(undefined4 *param_1)

{
  int *piVar1;
  
  if ((param_1[4] != 0) && ((*(byte *)(param_1 + 7) & 4) == 0)) {
    FUN_00631d5c(param_1[4]);
    param_1[4] = 0;
  }
  FUN_00631d5c(*param_1);
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}

