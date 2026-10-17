
void __thiscall FUN_0048f7a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 == *(undefined4 **)(param_1 + 8)) {
    FUN_0048f7e0(puVar2,param_2);
    return;
  }
  if (puVar2 != (undefined4 *)0x0) {
    for (iVar1 = 0x91; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x244;
  return;
}

