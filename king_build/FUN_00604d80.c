
uint __fastcall FUN_00604d80(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1,param_1 + 0x2c);
  }
  return (uint)(*(int *)(param_1 + 0x2c) * 1000) / *(uint *)(param_1 + 0x30);
}

