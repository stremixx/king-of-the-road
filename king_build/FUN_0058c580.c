
int __thiscall FUN_0058c580(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 != 0) {
    if (3 < *(int *)(param_1 + 0xdf8)) {
      return 0;
    }
    puVar1 = (undefined4 *)(param_1 + 0xef8 + *(int *)(param_1 + 0xdf8) * 0xc);
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    *(undefined4 *)(param_1 + 0xf28 + *(int *)(param_1 + 0xdf8) * 4) = 1;
    iVar2 = *(int *)(param_1 + 0xdf8) + 1;
    *(int *)(param_1 + 0xdf8) = iVar2;
    return iVar2;
  }
  if (0x13 < *(int *)(param_1 + 0xdf4)) {
    return 0;
  }
  puVar1 = (undefined4 *)(param_1 + 0xe08 + *(int *)(param_1 + 0xdf4) * 0xc);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  *(undefined4 *)(param_1 + 0xf38 + *(int *)(param_1 + 0xdf4) * 4) = param_4;
  iVar2 = *(int *)(param_1 + 0xdf4) + 1;
  *(int *)(param_1 + 0xdf4) = iVar2;
  return iVar2;
}

