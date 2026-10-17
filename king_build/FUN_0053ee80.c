
int FUN_0053ee80(int param_1)

{
  int iVar1;
  int iVar2;
  
  for (iVar1 = DAT_006ee158; (iVar1 != 0 && (iVar2 = iVar1 + -4, iVar2 != 0));
      iVar1 = *(int *)(iVar1 + 4)) {
    if (iVar2 == param_1) {
      return iVar2;
    }
  }
  return 0;
}

