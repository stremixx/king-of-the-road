
int __thiscall FUN_0058c8f0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x140c) <= *(int *)(param_1 + 0x1410)) {
    *(undefined4 *)(param_1 + 0x1410) = 0;
    return 0;
  }
  puVar2 = (undefined4 *)(param_1 + 0xf94 + *(int *)(param_1 + 0x1410) * 0x1c);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  iVar1 = *(int *)(param_1 + 0x1410) + 1;
  *(int *)(param_1 + 0x1410) = iVar1;
  return iVar1;
}

