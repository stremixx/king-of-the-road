
int FUN_0047f990(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_2 - param_1) / 0x28;
  if (iVar2 < 1) {
    return param_1;
  }
  do {
    iVar1 = iVar2 >> 1;
    if (*(int *)(param_1 + 0x20 + iVar1 * 0x28) <= *(int *)(param_3 + 0x20)) {
      param_1 = param_1 + iVar1 * 0x28 + 0x28;
      iVar1 = iVar2 + (-1 - iVar1);
    }
    iVar2 = iVar1;
  } while (0 < iVar1);
  return param_1;
}

