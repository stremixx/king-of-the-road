
void __thiscall FUN_0041cf20(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + param_3 * 0x18);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

