
void __fastcall FUN_0062ff90(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1);
  if (*(int *)(iVar1 + 0x30) < 0) {
    FUN_0062fb8b(iVar1 + 0x34);
  }
  if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x34) < 0) {
    FUN_0062fb8b((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
  }
  return;
}

