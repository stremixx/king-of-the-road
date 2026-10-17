
int FUN_00470860(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_2 - param_1) / 0xc;
  if (iVar2 < 1) {
    return param_1;
  }
  do {
    iVar1 = iVar2 >> 1;
    if (*(uint *)(param_1 + 8 + iVar1 * 0xc) <= *(uint *)(param_3 + 8)) {
      param_1 = param_1 + iVar1 * 0xc + 0xc;
      iVar1 = iVar2 + (-1 - iVar1);
    }
    iVar2 = iVar1;
  } while (0 < iVar1);
  return param_1;
}

