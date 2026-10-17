
void FUN_00409000(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  if ((*(uint *)(iVar1 + 0x28) & 0x10000) != 0) {
    param_1[2] = *(uint *)(iVar1 + 0x28);
    *param_1 = *(int *)(iVar1 + 0x20);
    param_1[1] = *(int *)(iVar1 + 0x24);
    return;
  }
  param_1[1] = 0;
  iVar2 = *(int *)(iVar1 + 0x20);
  if (iVar2 != 0) {
    *param_1 = iVar2;
    param_1[2] = *(int *)(iVar1 + 0x28);
    *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
    return;
  }
  *param_1 = 0;
  param_1[2] = 0;
  return;
}

