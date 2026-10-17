
int * __fastcall FUN_0062fac0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x34) < 0) {
    FUN_0062fb80((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1);
  if (*(int *)(iVar2 + 0x30) < 0) {
    FUN_0062fb80(iVar2 + 0x34);
  }
  iVar2 = (**(code **)(**(int **)(*(int *)(*param_1 + 4) + 4 + (int)param_1) + 4))();
  if (iVar2 == -1) {
    puVar1 = (uint *)(*(int *)(*param_1 + 4) + 8 + (int)param_1);
    *puVar1 = *puVar1 | 2;
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1);
  if (*(int *)(iVar2 + 0x30) < 0) {
    FUN_0062fb8b(iVar2 + 0x34);
  }
  if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x34) < 0) {
    FUN_0062fb8b((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
  }
  return param_1;
}

