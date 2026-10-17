
undefined4 __thiscall FUN_00576a20(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  *param_2 = 0x38;
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 == (int *)0x0) {
    return 0x80070015;
  }
  uVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,param_2,param_3);
  return uVar2;
}

