
void __fastcall FUN_005bb9a0(int param_1)

{
  int *piVar1;
  
  FUN_00631d5c(*(undefined4 *)(param_1 + 0x1c));
  FUN_00631d5c(*(undefined4 *)(param_1 + 0xc));
  piVar1 = *(int **)(param_1 + 0x24);
  if ((piVar1 != (int *)0x0) && (DAT_0071f864 != 0)) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}

