
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046c090(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = param_2;
  while( true ) {
    iVar1 = iVar3 * 2;
    iVar2 = iVar1 + 2;
    if (param_3 <= iVar2) break;
    if (*(double *)(*(int *)(param_1 + iVar2 * 4) + 0x1f8) -
        *(double *)(*(int *)(param_1 + -4 + iVar2 * 4) + 0x1f8) != _DAT_0064a668) {
      iVar2 = iVar1 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    iVar3 = iVar2;
  }
  if (iVar2 == param_3) {
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + -4 + iVar2 * 4);
    iVar3 = iVar1 + 1;
  }
  uVar4 = param_5;
  FUN_0041d3f0(&param_4);
  FUN_0046d1a0(param_1,iVar3,param_2,iVar2,uVar4);
  return;
}

