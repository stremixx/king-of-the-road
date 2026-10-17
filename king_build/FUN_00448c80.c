
void __thiscall FUN_00448c80(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(param_1 + 8)) {
    FUN_004611f0(iVar1,param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0xc;
    return;
  }
  FUN_004525d0(iVar1,param_2);
  return;
}

