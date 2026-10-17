
void FUN_0046bdc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0x3f < (int)(param_2 - param_1 & 0xffffffe0U)) {
    iVar1 = param_2 - param_1 >> 5;
    iVar2 = (iVar1 + -2) / 2;
    iVar3 = iVar2 * 0x20 + param_1;
    while( true ) {
      FUN_00458ab0(iVar3);
      FUN_0046be20(param_1,iVar2,iVar1);
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + -0x20;
    }
  }
  return;
}

