
void __thiscall FUN_0048eca0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + *(int *)(param_1 + 0xc0) * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
    return;
  }
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  return;
}

