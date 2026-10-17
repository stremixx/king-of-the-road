
undefined4 __thiscall FUN_005606e0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < *(int *)(param_1 + 3000)) {
    *(int *)(param_1 + 3000) = *(int *)(param_1 + 3000) - param_2;
  }
  if (*(char *)(param_1 + 2000 + *(int *)(param_1 + 3000)) != '\0') {
    FUN_004e1e9c(s__Way__PullNode_0067a1f8);
    iVar1 = *(int *)(param_1 + 3000) + 1;
    *(int *)(param_1 + 3000) = iVar1;
    return CONCAT22((short)((uint)iVar1 >> 0x10),*(undefined2 *)(param_1 + iVar1 * 2));
  }
  return CONCAT22((short)((uint)*(int *)(param_1 + 3000) >> 0x10),
                  *(undefined2 *)(param_1 + *(int *)(param_1 + 3000) * 2));
}

