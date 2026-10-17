
void __thiscall FUN_005bb9d0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_2 < *(int *)(param_1 + 4)) && (-1 < param_2)) {
    puVar2 = (undefined4 *)(param_2 * 0x30 + *(int *)(param_1 + 8));
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}

