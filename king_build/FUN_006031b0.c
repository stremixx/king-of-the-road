
undefined4 __fastcall FUN_006031b0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return uVar2;
}

