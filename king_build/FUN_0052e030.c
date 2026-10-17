
void FUN_0052e030(int *param_1)

{
  int iVar1;
  
  for (iVar1 = DAT_006ee158; (iVar1 != 0 && (iVar1 + -4 != 0)); iVar1 = *(int *)(iVar1 + 4)) {
    if (*param_1 == *(int *)(iVar1 + 0x2544)) {
      FUN_0052deb0(iVar1 + -4,param_1[1],param_1 + 3);
      return;
    }
  }
  FUN_0052deb0(0,param_1[1],param_1 + 3);
  return;
}

