
undefined4 __thiscall FUN_005f1330(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x34) <= param_2) {
    return 0;
  }
  *(int *)(param_3 + 0x2c) = param_1;
  *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + param_2 * 4);
  if (iVar1 == 0) {
    *(int *)(*(int *)(param_1 + 0x30) + param_2 * 4) = param_3;
    *(undefined4 *)(param_3 + 8) = 0;
    *(undefined4 *)(param_3 + 4) = 0;
    return 1;
  }
  *(int *)(param_3 + 8) = iVar1;
  *(undefined4 *)(param_3 + 4) = 0;
  *(int *)(iVar1 + 4) = param_3;
  *(int *)(*(int *)(param_1 + 0x30) + param_2 * 4) = param_3;
  return 1;
}

