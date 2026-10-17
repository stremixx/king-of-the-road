
void __thiscall FUN_005d1840(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 4) = param_2;
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = param_1;
  }
  *(int *)(param_2 + 8) = param_1;
  return;
}

