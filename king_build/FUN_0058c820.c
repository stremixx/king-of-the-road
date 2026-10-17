
int __thiscall FUN_0058c820(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xdf4) <= *(int *)(param_1 + 0xdfc)) {
    *(undefined4 *)(param_1 + 0xdfc) = 0;
    return 0;
  }
  puVar1 = (undefined4 *)(param_1 + 0xe08 + *(int *)(param_1 + 0xdfc) * 0xc);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  iVar2 = *(int *)(param_1 + 0xdfc) + 1;
  *(int *)(param_1 + 0xdfc) = iVar2;
  return iVar2;
}

