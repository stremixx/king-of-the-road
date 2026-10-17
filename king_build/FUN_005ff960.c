
int * FUN_005ff960(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_c;
  
  local_c = ((int)param_2 - param_1) / 0x38;
  if (local_c < 1) {
    return param_3;
  }
  do {
    piVar7 = param_2 + -0xe;
    piVar4 = param_3 + -0xe;
    if (piVar7 != piVar4) {
      iVar2 = param_2[-0xd];
      iVar3 = *piVar7;
      iVar1 = *piVar4;
      uVar5 = iVar2 - iVar3;
      if ((uint)(param_3[-0xc] - iVar1) < uVar5) {
        iVar2 = FUN_00458d60(uVar5,iVar3,iVar2);
        iVar3 = param_3[-0xc] - *piVar4;
        if (iVar3 != 0) {
          FUN_0044b440(*piVar4,iVar3);
        }
        *piVar4 = iVar2;
        param_3[-0xc] = iVar2 + uVar5;
      }
      else if ((uint)(param_3[-0xd] - iVar1) < uVar5) {
        FUN_0061c980(iVar1,iVar3,param_3[-0xd] - iVar1);
        iVar2 = (*piVar7 - *piVar4) + param_3[-0xd];
        FUN_0061c980(param_3[-0xd],iVar2,param_2[-0xd] - iVar2);
      }
      else {
        FUN_0061c980(iVar1,iVar3,iVar2 - iVar3);
      }
      param_3[-0xd] = *piVar4 + uVar5;
    }
    piVar6 = param_2 + -10;
    piVar8 = param_3 + -10;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    param_3[-4] = param_2[-4];
    param_3[-3] = param_2[-3];
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    local_c = local_c + -1;
    param_3 = piVar4;
    param_2 = piVar7;
  } while (local_c != 0);
  return piVar4;
}

