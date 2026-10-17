
int __thiscall FUN_004eb360(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (4 < *(int *)(param_1 + 0xc0)) {
    return 0;
  }
  puVar1 = (undefined4 *)(param_1 + 0x104 + *(int *)(param_1 + 0xc0) * 0xc);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  puVar1 = (undefined4 *)(param_1 + 0x140 + *(int *)(param_1 + 0xc0) * 0xc);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  puVar1 = (undefined4 *)(param_1 + 200 + *(int *)(param_1 + 0xc0) * 0xc);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  iVar2 = *(int *)(param_1 + 0xc0);
  *(int *)(param_1 + 0xc0) = iVar2 + 1;
  return iVar2;
}

