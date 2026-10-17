
int __thiscall FUN_0058c870(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xe00);
  while( true ) {
    if (*(int *)(param_1 + 0xdf8) <= iVar2) {
      *(undefined4 *)(param_1 + 0xe00) = 0;
      return 0;
    }
    if (*(int *)(param_1 + 0xf28 + *(int *)(param_1 + 0xe00) * 4) != 0) break;
    iVar2 = *(int *)(param_1 + 0xe00) + 1;
    *(int *)(param_1 + 0xe00) = iVar2;
  }
  puVar1 = (undefined4 *)(param_1 + 0xef8 + *(int *)(param_1 + 0xe00) * 0xc);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  iVar2 = *(int *)(param_1 + 0xe00) + 1;
  *(int *)(param_1 + 0xe00) = iVar2;
  return iVar2;
}

