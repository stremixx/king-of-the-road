
void __fastcall FUN_00630018(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1);
  if (*(int *)(iVar1 + 0x30) < 0) {
    FUN_0062fb80(iVar1 + 0x34);
  }
  iVar1 = FUN_0062fd0e();
  while (iVar1 != -1) {
    iVar1 = FUN_0061dcbc(iVar1);
    if (iVar1 == 0) goto LAB_00630076;
    iVar1 = FUN_0062fc89();
  }
  FUN_0062ffea(*(uint *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) | 1);
LAB_00630076:
  iVar1 = *(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1);
  if (*(int *)(iVar1 + 0x30) < 0) {
    FUN_0062fb8b(iVar1 + 0x34);
  }
  return;
}

