
int * FUN_00463490(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int local_c;
  
  local_c = ((int)param_2 - param_1) / 0x18;
  if (local_c < 1) {
    return param_3;
  }
  piVar6 = param_2 + 4;
  piVar8 = param_3 + 4;
  do {
    iVar10 = param_3[-6];
    param_3 = param_3 + -6;
    param_2 = param_2 + -6;
    piVar7 = piVar6 + -6;
    piVar9 = piVar8 + -6;
    if ((iVar10 != 0) && ((piVar8[-8] & 0x10000U) == 0)) {
      *(int *)(iVar10 + 4) = *(int *)(iVar10 + 4) + -1;
      piVar1 = (int *)*param_3;
      if (((piVar1[1] == 0) &&
          (((piVar1 != (int *)*param_2 || (piVar8[-8] != piVar6[-8])) || (piVar8[-9] != piVar6[-9]))
          )) && (piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0xc))(1);
      }
    }
    if ((piVar6[-8] & 0x10000U) == 0) {
      piVar8[-9] = 0;
      if (*param_2 == 0) {
        *param_3 = 0;
        piVar8[-8] = 0;
      }
      else {
        *param_3 = *param_2;
        piVar8[-8] = piVar6[-8];
        *(int *)(*param_3 + 4) = *(int *)(*param_3 + 4) + 1;
      }
    }
    else {
      piVar8[-8] = piVar6[-8];
      *param_3 = *param_2;
      piVar8[-9] = piVar6[-9];
    }
    piVar1 = piVar8 + -7;
    if (piVar6 + -7 != piVar8 + -7) {
      iVar10 = piVar6[-7];
      uVar2 = (*piVar7 - iVar10) / 0x18;
      iVar5 = *piVar1;
      if ((uint)((piVar8[-5] - iVar5) / 0x18) < uVar2) {
        iVar4 = FUN_00461b80(uVar2,iVar10,*piVar7);
        iVar5 = *piVar9;
        for (iVar10 = *piVar1; iVar10 != iVar5; iVar10 = iVar10 + 0x18) {
          FUN_0046c800(0);
        }
        iVar10 = (piVar8[-5] - *piVar1) / 0x18;
        if (iVar10 != 0) {
          FUN_0044b440(*piVar1,iVar10 * 0x18);
        }
        *piVar1 = iVar4;
        piVar8[-5] = iVar4 + uVar2 * 0x18;
      }
      else {
        uVar3 = (*piVar9 - iVar5) / 0x18;
        if (uVar3 < uVar2) {
          FUN_00466bc0(iVar10,iVar10 + uVar3 * 0x18,iVar5,param_2,0);
          FUN_004661a0(piVar6[-7] + ((*piVar9 - *piVar1) / 0x18) * 0x18,*piVar7,*piVar9,param_2);
        }
        else {
          iVar5 = FUN_00466bc0(iVar10,*piVar7,iVar5,param_2,0);
          iVar10 = *piVar9;
          for (; iVar5 != iVar10; iVar5 = iVar5 + 0x18) {
            FUN_0046c800(0);
          }
        }
      }
      piVar8[-6] = *piVar1 + uVar2 * 0x18;
    }
    local_c = local_c + -1;
    piVar6 = piVar7;
    piVar8 = piVar9;
  } while (local_c != 0);
  return param_3;
}

