
int __thiscall FUN_005d2ed0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = 0;
  if (iVar1 == 0) {
    return 0;
  }
  do {
    if (*(int *)(iVar1 + 0xc) == param_2) {
      iVar2 = iVar2 + 1;
    }
    iVar1 = FUN_005d2730();
  } while (iVar1 != 0);
  return iVar2;
}

