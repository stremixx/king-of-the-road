
undefined4 __thiscall FUN_006125e0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_2 < *(uint *)(param_1 + 0x10)) {
    uVar1 = *(uint *)(param_1 + 0x10) - 1;
    *(uint *)(param_1 + 0x10) = uVar1;
    if (param_2 != uVar1) {
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc) + uVar1 * 0x3c);
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0xc) + param_2 * 0x3c);
      for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    return 1;
  }
  return 0;
}

