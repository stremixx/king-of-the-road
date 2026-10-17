
void FUN_0046c030(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint extraout_ECX;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar2 = param_2 - param_1 & 0xfffffffc;
  if (7 < (int)uVar2) {
    iVar1 = param_2 - param_1 >> 2;
    iVar3 = (iVar1 + -2) / 2;
    iVar4 = param_1 + iVar3 * 4;
    while( true ) {
      uVar5 = param_3;
      FUN_0041d3f0(iVar4);
      FUN_0046c090(param_1,iVar3,iVar1,uVar2,uVar5);
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      iVar4 = iVar4 + -4;
      uVar2 = extraout_ECX;
    }
  }
  return;
}

