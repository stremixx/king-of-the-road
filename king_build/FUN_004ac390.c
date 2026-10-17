
int * __thiscall FUN_004ac390(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (*param_1 - param_1[1]) + param_2;
  if ((-1 < iVar4) && (iVar4 < 0x200)) {
    *param_1 = *param_1 + param_2;
    return param_1;
  }
  if (iVar4 < 1) {
    iVar3 = -1 - (-iVar4 - 1U >> 9);
  }
  else {
    iVar3 = (int)(iVar4 + (iVar4 >> 0x1f & 0x1ffU)) >> 9;
  }
  piVar1 = (int *)(param_1[3] + iVar3 * 4);
  param_1[3] = (int)piVar1;
  iVar2 = *piVar1;
  param_1[1] = iVar2;
  param_1[2] = iVar2 + 0x200;
  *param_1 = iVar4 + iVar3 * -0x200 + param_1[1];
  return param_1;
}

