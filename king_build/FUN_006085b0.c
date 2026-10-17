
void __thiscall FUN_006085b0(int param_1,undefined4 *param_2,ushort *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x10) + (uint)*param_3 * 0x28);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

