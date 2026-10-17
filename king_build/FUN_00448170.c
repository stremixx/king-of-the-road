
void __thiscall FUN_00448170(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(param_1 + 8)) {
    FUN_00460bd0(iVar1,param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x18;
    return;
  }
  FUN_00450540(iVar1,param_2);
  return;
}

