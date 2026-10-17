
int * __thiscall FUN_0044c100(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == param_1) {
    return param_1;
  }
  iVar2 = param_2[1];
  iVar3 = *param_2;
  iVar1 = *param_1;
  uVar4 = iVar2 - iVar3;
  if ((uint)(param_1[2] - iVar1) < uVar4) {
    iVar2 = FUN_00458d60(uVar4,iVar3,iVar2);
    iVar3 = param_1[2] - *param_1;
    if (iVar3 != 0) {
      FUN_0044b440(*param_1,iVar3);
    }
    *param_1 = iVar2;
    param_1[2] = iVar2 + uVar4;
    param_1[1] = *param_1 + uVar4;
    return param_1;
  }
  if (uVar4 <= (uint)(param_1[1] - iVar1)) {
    FUN_0061c980(iVar1,iVar3,iVar2 - iVar3);
    param_1[1] = *param_1 + uVar4;
    return param_1;
  }
  FUN_0061c980(iVar1,iVar3,param_1[1] - iVar1);
  iVar2 = (*param_2 - *param_1) + param_1[1];
  FUN_0061c980(param_1[1],iVar2,param_2[1] - iVar2);
  param_1[1] = *param_1 + uVar4;
  return param_1;
}

