
int * __thiscall FUN_00452250(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 == param_1) {
    return param_1;
  }
  iVar2 = param_2[1];
  iVar3 = *param_2;
  iVar1 = *param_1;
  uVar5 = iVar2 - iVar3 >> 2;
  if ((uint)(param_1[2] - iVar1 >> 2) < uVar5) {
    iVar2 = FUN_0044acb0(uVar5,iVar3,iVar2);
    iVar3 = param_1[2] - *param_1 >> 2;
    if (iVar3 != 0) {
      FUN_0044b440(*param_1,iVar3 << 2);
    }
    param_1[2] = iVar2 + uVar5 * 4;
    *param_1 = iVar2;
    param_1[1] = iVar2 + uVar5 * 4;
    return param_1;
  }
  uVar4 = param_1[1] - iVar1 >> 2;
  if (uVar5 <= uVar4) {
    FUN_0061c980(iVar1,iVar3,(iVar2 - iVar3 >> 2) << 2);
    param_1[1] = *param_1 + uVar5 * 4;
    return param_1;
  }
  FUN_0061c980(iVar1,iVar3,((int)(uVar4 << 2) >> 2) << 2);
  iVar2 = *param_2 + (param_1[1] - *param_1 >> 2) * 4;
  FUN_0061c980(param_1[1],iVar2,(param_2[1] - iVar2 >> 2) << 2);
  param_1[1] = *param_1 + uVar5 * 4;
  return param_1;
}

