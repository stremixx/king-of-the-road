
int __thiscall FUN_005db0b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc0) + 1;
  iVar2 = iVar1 % 10;
  iVar1 = iVar1 / 10;
  if (iVar2 != *(int *)(param_1 + 0xc4)) {
    *(int *)(param_1 + 200 + *(int *)(param_1 + 0xc0) * 4) = param_2;
    *(int *)(param_1 + 0xc0) = iVar2;
    iVar1 = param_2;
  }
  return iVar1;
}

