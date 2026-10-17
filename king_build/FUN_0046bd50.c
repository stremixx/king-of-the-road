
int FUN_0046bd50(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar3 = param_2 - param_1 >> 2;
  if (iVar3 < 1) {
    return param_1;
  }
  do {
    iVar2 = iVar3 >> 1;
    iVar1 = param_1 + iVar2 * 4;
    fVar4 = (float10)FUN_00418960(param_3,param_4);
    fVar5 = (float10)FUN_00418960(iVar1,param_4);
    if (fVar5 <= (float10)(double)fVar4) {
      param_1 = iVar1 + 4;
      iVar2 = iVar3 + (-1 - iVar2);
    }
    iVar3 = iVar2;
  } while (0 < iVar2);
  return param_1;
}

