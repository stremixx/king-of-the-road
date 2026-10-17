
void __thiscall FUN_004cc850(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x33f0) != 100) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x33f0) * 0x80 + 0x40 + param_1);
    for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)(param_1 + 0x3260 + *(int *)(param_1 + 0x33f0) * 4) = param_3;
    *(int *)(param_1 + 0x33f0) = *(int *)(param_1 + 0x33f0) + 1;
  }
  return;
}

