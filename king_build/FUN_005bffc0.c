
int __fastcall FUN_005bffc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x128);
  iVar1 = 0;
  if (iVar2 != 0) {
    do {
      if (iVar2 == *(int *)(param_1 + 0x150)) {
        return iVar1;
      }
      iVar2 = *(int *)(iVar2 + 8);
      iVar1 = iVar1 + 1;
    } while (iVar2 != 0);
  }
  return iVar1;
}

