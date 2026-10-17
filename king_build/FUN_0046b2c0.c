
void FUN_0046b2c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_2 - param_1) / 0xc;
  if (1 < iVar1) {
    iVar2 = (iVar1 + -2) / 2;
    iVar3 = param_1 + iVar2 * 0xc;
    while( true ) {
      FUN_0044dd30(iVar3);
      FUN_0046b330(param_1,iVar2,iVar1);
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + -0xc;
    }
  }
  return;
}

