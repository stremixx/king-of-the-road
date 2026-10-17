
void __thiscall FUN_0048fee0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + *(int *)(param_1 + 0x240) * 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + 1;
    return;
  }
  *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + 1;
  return;
}

