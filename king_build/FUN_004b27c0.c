
void __thiscall FUN_004b27c0(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_1[1];
  iVar4 = param_1[3];
  iVar5 = param_1[2];
  iVar2 = (*param_1 - iVar3 >> 2) + param_3;
  if ((iVar2 < 0) || (0x7f < iVar2)) {
    if (iVar2 < 1) {
      iVar1 = -1 - (-iVar2 - 1U >> 7);
    }
    else {
      iVar1 = (int)(iVar2 + (iVar2 >> 0x1f & 0x7fU)) >> 7;
    }
    iVar3 = *(int *)(iVar4 + iVar1 * 4);
    iVar4 = iVar4 + iVar1 * 4;
    iVar5 = iVar3 + 0x200;
    iVar2 = iVar3 + (iVar2 + iVar1 * -0x80) * 4;
  }
  else {
    iVar2 = *param_1 + param_3 * 4;
  }
  param_2[2] = iVar5;
  param_2[3] = iVar4;
  *param_2 = iVar2;
  param_2[1] = iVar3;
  return;
}

