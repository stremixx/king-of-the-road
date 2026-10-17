
int * FUN_00457fb0(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  iVar7 = (param_2 - param_1) / 0x18;
  if (iVar7 < 1) {
    return param_3;
  }
  iVar4 = (int)param_3 - param_1;
  piVar9 = param_3 + 3;
  piVar8 = (int *)(param_1 + 0x10);
  param_1 = iVar7;
  do {
    iVar7 = *param_3;
    if ((iVar7 != 0) && ((piVar9[-1] & 0x10000U) == 0)) {
      *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + -1;
      piVar1 = (int *)*param_3;
      if (((piVar1[1] == 0) &&
          (((piVar1 != (int *)piVar8[-4] || (piVar9[-1] != piVar8[-2])) ||
           (piVar9[-2] != piVar8[-3])))) && (piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0xc))(1);
      }
    }
    if ((piVar8[-2] & 0x10000U) == 0) {
      piVar9[-2] = 0;
      iVar7 = piVar8[-4];
      if (iVar7 == 0) {
        *param_3 = 0;
        piVar9[-1] = 0;
      }
      else {
        *param_3 = iVar7;
        piVar9[-1] = piVar8[-2];
        *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
      }
    }
    else {
      piVar9[-1] = piVar8[-2];
      *param_3 = piVar8[-4];
      piVar9[-2] = piVar8[-3];
    }
    if (piVar8 + -1 != piVar9) {
      iVar7 = *piVar8;
      iVar6 = piVar8[-1];
      iVar5 = *piVar9;
      uVar2 = (iVar7 - iVar6) / 0x18;
      if ((uint)((piVar9[2] - iVar5) / 0x18) < uVar2) {
        iVar5 = FUN_00461b80(uVar2,iVar6,iVar7);
        iVar6 = *(int *)(iVar4 + (int)piVar8);
        for (iVar7 = *piVar9; iVar7 != iVar6; iVar7 = iVar7 + 0x18) {
          FUN_0046c390(iVar7);
        }
        iVar7 = (piVar9[2] - *piVar9) / 0x18;
        if (iVar7 != 0) {
          FUN_0044b440(*piVar9,iVar7 * 0x18);
        }
        *piVar9 = iVar5;
        piVar9[2] = iVar5 + uVar2 * 0x18;
      }
      else {
        uVar3 = (*(int *)(iVar4 + (int)piVar8) - iVar5) / 0x18;
        if (uVar3 < uVar2) {
          FUN_00466bc0(iVar6,iVar6 + uVar3 * 0x18,iVar5,iVar4,0);
          FUN_004661a0(piVar8[-1] + ((*(int *)(iVar4 + (int)piVar8) - *piVar9) / 0x18) * 0x18,
                       *piVar8,*(int *)(iVar4 + (int)piVar8),iVar4);
        }
        else {
          iVar6 = FUN_00466bc0(iVar6,iVar7,iVar5,iVar4,0);
          iVar7 = *(int *)(iVar4 + (int)piVar8);
          for (; iVar6 != iVar7; iVar6 = iVar6 + 0x18) {
            FUN_0046c390(iVar6);
          }
        }
      }
      piVar9[1] = *piVar9 + uVar2 * 0x18;
    }
    param_3 = param_3 + 6;
    piVar8 = piVar8 + 6;
    piVar9 = piVar9 + 6;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return param_3;
}

