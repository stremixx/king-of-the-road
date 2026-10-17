
undefined4 * FUN_00463700(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int local_c;
  
  local_c = ((int)param_2 - param_1) / 0x90;
  if (local_c < 1) {
    return param_3;
  }
  piVar5 = param_3 + 0x1f;
  piVar7 = param_2 + 0x1f;
  do {
    param_2 = param_2 + -0x24;
    param_3 = param_3 + -0x24;
    piVar8 = piVar7 + -0x24;
    piVar6 = piVar5 + -0x24;
    *param_3 = *param_2;
    piVar5[-0x42] = piVar7[-0x42];
    piVar5[-0x41] = piVar7[-0x41];
    piVar5[-0x40] = piVar7[-0x40];
    piVar5[-0x3f] = piVar7[-0x3f];
    piVar9 = piVar7 + -0x3d;
    piVar10 = piVar5 + -0x3d;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar10 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar10 = piVar10 + 1;
    }
    piVar5[-0x35] = piVar7[-0x35];
    piVar5[-0x34] = piVar7[-0x34];
    piVar5[-0x33] = piVar7[-0x33];
    piVar5[-0x32] = piVar7[-0x32];
    piVar5[-0x31] = piVar7[-0x31];
    piVar5[-0x30] = piVar7[-0x30];
    piVar5[-0x2f] = piVar7[-0x2f];
    piVar5[-0x2e] = piVar7[-0x2e];
    piVar5[-0x2d] = piVar7[-0x2d];
    piVar5[-0x2c] = piVar7[-0x2c];
    piVar5[-0x2b] = piVar7[-0x2b];
    piVar5[-0x2a] = piVar7[-0x2a];
    piVar5[-0x29] = piVar7[-0x29];
    piVar5[-0x27] = piVar7[-0x27];
    piVar5[-0x26] = piVar7[-0x26];
    piVar9 = piVar5 + -0x25;
    if (piVar7 + -0x25 != piVar5 + -0x25) {
      iVar4 = piVar7[-0x25];
      iVar2 = *piVar9;
      uVar11 = *piVar8 - iVar4 >> 4;
      if ((uint)(piVar5[-0x23] - iVar2 >> 4) < uVar11) {
        iVar1 = FUN_00461de0(uVar11,iVar4,*piVar8);
        iVar4 = *piVar6;
        for (iVar2 = *piVar9; iVar2 != iVar4; iVar2 = iVar2 + 0x10) {
          FUN_00460d40(iVar2);
        }
        iVar4 = piVar5[-0x23] - *piVar9 >> 4;
        if (iVar4 != 0) {
          FUN_0044b440(*piVar9,iVar4 << 4);
        }
        *piVar9 = iVar1;
        piVar5[-0x23] = uVar11 * 0x10 + iVar1;
      }
      else {
        uVar3 = *piVar6 - iVar2 >> 4;
        if (uVar3 < uVar11) {
          FUN_0047c550(iVar4,uVar3 * 0x10 + iVar4,*piVar9,param_3,0);
          FUN_004662a0((*piVar6 - *piVar9 >> 4) * 0x10 + piVar7[-0x25],*piVar8,*piVar6,param_3);
        }
        else {
          iVar2 = FUN_0047c550(iVar4,*piVar8,iVar2,param_3,0);
          iVar4 = *piVar6;
          for (; iVar2 != iVar4; iVar2 = iVar2 + 0x10) {
            FUN_00460d40(iVar2);
          }
        }
      }
      piVar5[-0x24] = uVar11 * 0x10 + *piVar9;
    }
    piVar5[-0x22] = piVar7[-0x22];
    local_c = local_c + -1;
    piVar5[-0x21] = piVar7[-0x21];
    piVar5 = piVar6;
    piVar7 = piVar8;
  } while (local_c != 0);
  return param_3;
}

