
int FUN_0047f890(int param_1,int param_2,double *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 - param_1 >> 3;
  if (iVar2 < 1) {
    return param_1;
  }
  do {
    iVar1 = iVar2 >> 1;
    if (*param_3 < *(double *)(param_1 + iVar1 * 8)) {
      param_1 = param_1 + 8 + iVar1 * 8;
      iVar1 = iVar2 + (-1 - iVar1);
    }
    iVar2 = iVar1;
  } while (0 < iVar1);
  return param_1;
}

