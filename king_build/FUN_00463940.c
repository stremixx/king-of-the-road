
undefined4 * FUN_00463940(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int local_8;
  
  local_8 = (param_2 - param_1) / 0x24;
  if (local_8 < 1) {
    return param_3;
  }
  piVar8 = param_3 + 4;
  piVar10 = (int *)(param_2 + 0x1c);
  do {
    puVar1 = (undefined4 *)(param_2 + -0x24);
    param_2 = param_2 + -0x24;
    param_3 = param_3 + -9;
    piVar11 = piVar10 + -9;
    piVar9 = piVar8 + -9;
    *param_3 = *puVar1;
    piVar8[-0xc] = piVar10[-0xf];
    piVar8[-0xb] = piVar10[-0xe];
    if (piVar10 + -0xd != piVar8 + -10) {
      iVar4 = piVar10[-0xc];
      iVar5 = piVar10[-0xd];
      iVar3 = piVar8[-10];
      piVar2 = piVar8 + -10;
      uVar7 = iVar4 - iVar5;
      if ((uint)(piVar8[-8] - iVar3) < uVar7) {
        iVar4 = FUN_00458d60(uVar7,iVar5,iVar4);
        iVar5 = piVar8[-8] - *piVar2;
        if (iVar5 != 0) {
          FUN_0044b440(*piVar2,iVar5);
        }
        *piVar2 = iVar4;
        piVar8[-8] = iVar4 + uVar7;
      }
      else if ((uint)(*piVar9 - iVar3) < uVar7) {
        FUN_0061c980(*piVar2,iVar5,*piVar9 - iVar3);
        iVar4 = (*piVar9 - *piVar2) + piVar10[-0xd];
        FUN_0061c980(*piVar9,iVar4,piVar10[-0xc] - iVar4);
      }
      else {
        FUN_0061c980(iVar3,iVar5,iVar4 - iVar5);
      }
      *piVar9 = uVar7 + *piVar2;
    }
    piVar2 = piVar8 + -7;
    if (piVar10 + -10 != piVar2) {
      iVar4 = piVar10[-10];
      iVar5 = *piVar2;
      uVar7 = *piVar11 - iVar4 >> 2;
      if ((uint)(piVar8[-5] - iVar5 >> 2) < uVar7) {
        iVar4 = FUN_00462030(uVar7,iVar4,*piVar11);
        iVar5 = piVar8[-5] - *piVar2 >> 2;
        if (iVar5 != 0) {
          FUN_0044b440(*piVar2,iVar5 * 4);
        }
        *piVar2 = iVar4;
        piVar8[-5] = iVar4 + uVar7 * 4;
      }
      else {
        uVar6 = piVar8[-6] - iVar5 >> 2;
        if (uVar6 < uVar7) {
          FUN_0046b1d0(iVar4,iVar4 + uVar6 * 4,iVar5,param_3,0);
          FUN_0046b5a0(piVar10[-10] + (piVar8[-6] - *piVar2 >> 2) * 4,*piVar11,piVar8[-6],param_3);
        }
        else {
          FUN_0046b1d0(iVar4,*piVar11,iVar5,param_3,0);
        }
      }
      piVar8[-6] = *piVar2 + uVar7 * 4;
    }
    local_8 = local_8 + -1;
    piVar8 = piVar9;
    piVar10 = piVar11;
  } while (local_8 != 0);
  return param_3;
}

