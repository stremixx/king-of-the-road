
void __fastcall FUN_00598450(int param_1)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 0x68) != 2) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x70) + 0x10);
    *puVar1 = *puVar1 | 3;
    FUN_005982c0(1);
  }
  return;
}

