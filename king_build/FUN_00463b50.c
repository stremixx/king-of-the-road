
int * FUN_00463b50(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar6;
  uint uVar7;
  int *piVar5;
  
  iVar2 = ((int)param_2 - param_1) / 0xc;
  piVar4 = param_2;
  param_2 = (int *)iVar2;
  if (iVar2 < 1) {
    return param_3;
  }
  do {
    piVar5 = piVar4 + -3;
    piVar6 = param_3 + -3;
    if (piVar5 != piVar6) {
      iVar2 = piVar4[-2];
      iVar3 = *piVar5;
      iVar1 = *piVar6;
      uVar7 = iVar2 - iVar3;
      if ((uint)(param_3[-1] - iVar1) < uVar7) {
        iVar2 = FUN_00458d60(uVar7,iVar3,iVar2);
        iVar3 = param_3[-1] - *piVar6;
        if (iVar3 != 0) {
          FUN_0044b440(*piVar6,iVar3);
        }
        *piVar6 = iVar2;
        param_3[-1] = iVar2 + uVar7;
      }
      else if ((uint)(param_3[-2] - iVar1) < uVar7) {
        FUN_0061c980(iVar1,iVar3,param_3[-2] - iVar1);
        iVar2 = (*piVar5 - *piVar6) + param_3[-2];
        FUN_0061c980(param_3[-2],iVar2,piVar4[-2] - iVar2);
      }
      else {
        FUN_0061c980(iVar1,iVar3,iVar2 - iVar3);
      }
      param_3[-2] = *piVar6 + uVar7;
    }
    param_2 = (int *)((int)param_2 + -1);
    piVar4 = piVar5;
    param_3 = piVar6;
  } while (param_2 != (int *)0x0);
  return piVar6;
}

