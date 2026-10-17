
void __thiscall FUN_005982c0(int param_1,int param_2)

{
  uint *puVar1;
  
  if ((*(int *)(param_1 + 0x68) == 0) && (param_2 != 0)) {
    *(int *)(param_1 + 0x68) = param_2;
    if (*(int *)(param_1 + 0x70) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0x70) + 0x10);
      *puVar1 = *puVar1 | 3;
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_00595360();
      FUN_00598320(0);
      FUN_00598420(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x13c),
                   *(int *)(param_1 + 0x7c) + 0x10c);
    }
  }
  return;
}

