
void __thiscall FUN_004aa2f0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(param_1 + 8)) {
    FUN_004ab690(iVar1,param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x2c;
    return;
  }
  FUN_004aa590(iVar1,param_2);
  return;
}

