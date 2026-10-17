
undefined4 __thiscall FUN_0058c950(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_3 < *(int *)(param_1 + 0x140c)) && (-1 < param_3)) {
    puVar2 = (undefined4 *)(param_1 + 0xf94 + param_3 * 0x1c);
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    return 1;
  }
  return 0;
}

