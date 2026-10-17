
void __thiscall FUN_004a17d0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(param_1 + 8)) {
    FUN_00460920(iVar1,param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0xc;
    return;
  }
  FUN_0044c6b0(iVar1,param_2);
  return;
}

