
int __fastcall FUN_005bfda0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x134) /
              (*(int *)(*(int *)(param_1 + 0x10) + 0x14) + *(int *)(param_1 + 0x158)), -1 < iVar1))
  {
    return iVar1;
  }
  return 0;
}

