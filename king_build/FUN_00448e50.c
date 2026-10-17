
void __thiscall FUN_00448e50(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(param_1 + 8)) {
    FUN_004612e0(iVar1,param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x38;
    return;
  }
  FUN_00452b80(iVar1,param_2);
  return;
}

