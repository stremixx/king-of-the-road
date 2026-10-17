
undefined4 * __thiscall FUN_0045ac50(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  piVar5 = param_2 + 2;
  *param_1 = *param_2;
  piVar1 = param_1 + 2;
  param_1[1] = param_2[1];
  if (piVar5 != piVar1) {
    iVar3 = param_2[3];
    iVar4 = *piVar5;
    iVar2 = *piVar1;
    uVar6 = iVar3 - iVar4;
    if ((uint)(param_1[4] - iVar2) < uVar6) {
      iVar3 = FUN_00458d60(uVar6,iVar4,iVar3);
      iVar4 = param_1[4] - *piVar1;
      if (iVar4 != 0) {
        FUN_0044b440(*piVar1,iVar4);
      }
      *piVar1 = iVar3;
      param_1[4] = iVar3 + uVar6;
      param_1[3] = *piVar1 + uVar6;
      return param_1;
    }
    if (uVar6 <= (uint)(param_1[3] - iVar2)) {
      FUN_0061c980(iVar2,iVar4,iVar3 - iVar4);
      param_1[3] = *piVar1 + uVar6;
      return param_1;
    }
    FUN_0061c980(iVar2,iVar4,param_1[3] - iVar2);
    iVar3 = (*piVar5 - *piVar1) + param_1[3];
    FUN_0061c980(param_1[3],iVar3,param_2[3] - iVar3);
    param_1[3] = *piVar1 + uVar6;
  }
  return param_1;
}

