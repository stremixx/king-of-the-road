
undefined4 * FUN_00460e90(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int local_c;
  
  local_c = (param_2 - (int)param_1) / 0x90;
  if (local_c < 1) {
    return param_3;
  }
  piVar5 = param_3 + 0x1f;
  piVar6 = param_1 + 0x1f;
  do {
    *param_3 = *param_1;
    piVar5[-0x1e] = piVar6[-0x1e];
    piVar5[-0x1d] = piVar6[-0x1d];
    piVar5[-0x1c] = piVar6[-0x1c];
    piVar5[-0x1b] = piVar6[-0x1b];
    piVar7 = piVar6 + -0x19;
    piVar8 = piVar5 + -0x19;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    }
    piVar7 = piVar5 + -1;
    piVar5[-0x11] = piVar6[-0x11];
    piVar5[-0x10] = piVar6[-0x10];
    piVar5[-0xf] = piVar6[-0xf];
    piVar5[-0xe] = piVar6[-0xe];
    piVar5[-0xd] = piVar6[-0xd];
    piVar5[-0xc] = piVar6[-0xc];
    piVar5[-0xb] = piVar6[-0xb];
    piVar5[-10] = piVar6[-10];
    piVar5[-9] = piVar6[-9];
    piVar5[-8] = piVar6[-8];
    piVar5[-7] = piVar6[-7];
    piVar5[-6] = piVar6[-6];
    piVar5[-5] = piVar6[-5];
    piVar5[-3] = piVar6[-3];
    piVar5[-2] = piVar6[-2];
    if (piVar6 + -1 != piVar5 + -1) {
      iVar4 = piVar6[-1];
      iVar2 = *piVar7;
      uVar9 = *piVar6 - iVar4 >> 4;
      if ((uint)(piVar5[1] - iVar2 >> 4) < uVar9) {
        iVar1 = FUN_00461de0(uVar9,iVar4,*piVar6);
        iVar4 = *piVar5;
        for (iVar2 = *piVar7; iVar2 != iVar4; iVar2 = iVar2 + 0x10) {
          FUN_00460d40(iVar2);
        }
        iVar4 = piVar5[1] - *piVar7 >> 4;
        if (iVar4 != 0) {
          FUN_0044b440(*piVar7,iVar4 << 4);
        }
        *piVar7 = iVar1;
        piVar5[1] = uVar9 * 0x10 + iVar1;
      }
      else {
        uVar3 = *piVar5 - iVar2 >> 4;
        if (uVar3 < uVar9) {
          FUN_0047c550(iVar4,uVar3 * 0x10 + iVar4,*piVar7,param_1,0);
          FUN_004662a0((*piVar5 - *piVar7 >> 4) * 0x10 + piVar6[-1],*piVar6,*piVar5,param_1);
        }
        else {
          iVar2 = FUN_0047c550(iVar4,*piVar6,iVar2,param_1,0);
          iVar4 = *piVar5;
          for (; iVar2 != iVar4; iVar2 = iVar2 + 0x10) {
            FUN_00460d40(iVar2);
          }
        }
      }
      *piVar5 = uVar9 * 0x10 + *piVar7;
    }
    piVar5[2] = piVar6[2];
    param_1 = param_1 + 0x24;
    piVar5[3] = piVar6[3];
    param_3 = param_3 + 0x24;
    piVar5 = piVar5 + 0x24;
    local_c = local_c + -1;
    piVar6 = piVar6 + 0x24;
  } while (local_c != 0);
  return param_3;
}

