
void __thiscall FUN_0057d5a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x254);
  if (*(int *)(param_1 + 0x5a0) != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x730);
  }
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

