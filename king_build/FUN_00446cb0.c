
void FUN_00446cb0(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(DAT_0068be98 + param_1 * 4);
  piVar2 = *(int **)(iVar1 + 0x78);
  if (piVar2 != *(int **)(iVar1 + 0x7c)) {
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | param_2;
    } while (piVar2 != *(int **)(*(int *)(DAT_0068be98 + param_1 * 4) + 0x7c));
  }
  return;
}

