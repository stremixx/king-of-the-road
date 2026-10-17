
int * FUN_00457bf0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *local_20;
  int local_14;
  int local_c;
  
  local_14 = (param_2 - param_1) / 0x90;
  local_20 = param_3;
  if (local_14 < 1) {
    return param_3;
  }
  piVar5 = (int *)(param_1 + 0x7c);
  param_1 = (int)param_3 - param_1;
  do {
    *local_20 = piVar5[-0x1f];
    local_20[1] = piVar5[-0x1e];
    local_20[2] = piVar5[-0x1d];
    local_20[3] = piVar5[-0x1c];
    local_20[4] = piVar5[-0x1b];
    piVar6 = piVar5 + -0x19;
    piVar7 = local_20 + 6;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    local_20[0xe] = piVar5[-0x11];
    local_20[0xf] = piVar5[-0x10];
    local_20[0x10] = piVar5[-0xf];
    local_20[0x11] = piVar5[-0xe];
    local_20[0x12] = piVar5[-0xd];
    local_20[0x13] = piVar5[-0xc];
    local_20[0x14] = piVar5[-0xb];
    local_20[0x15] = piVar5[-10];
    local_20[0x16] = piVar5[-9];
    local_20[0x17] = piVar5[-8];
    local_20[0x18] = piVar5[-7];
    local_20[0x19] = piVar5[-6];
    local_20[0x1a] = piVar5[-5];
    local_20[0x1c] = piVar5[-3];
    piVar6 = local_20 + 0x1e;
    local_20[0x1d] = piVar5[-2];
    if (piVar5 + -1 != piVar6) {
      iVar4 = piVar5[-1];
      uVar2 = *piVar5 - iVar4 >> 4;
      if ((uint)(local_20[0x20] - *piVar6 >> 4) < uVar2) {
        local_c = FUN_00461de0(uVar2,iVar4,*piVar5);
        iVar1 = *(int *)((int)piVar5 + param_1);
        for (iVar4 = *piVar6; iVar4 != iVar1; iVar4 = iVar4 + 0x10) {
          FUN_00460d40(iVar4);
        }
        iVar4 = local_20[0x20] - *piVar6 >> 4;
        if (iVar4 != 0) {
          FUN_0044b440(*piVar6,iVar4 << 4);
        }
        *piVar6 = local_c;
        local_20[0x20] = uVar2 * 0x10 + local_c;
      }
      else {
        uVar3 = *(int *)((int)piVar5 + param_1) - *piVar6 >> 4;
        if (uVar3 < uVar2) {
          FUN_0047c550(iVar4,uVar3 * 0x10 + iVar4,*piVar6,local_c,0);
          FUN_004662a0((*(int *)((int)piVar5 + param_1) - *piVar6 >> 4) * 0x10 + piVar5[-1],*piVar5,
                       *(int *)((int)piVar5 + param_1),local_c);
        }
        else {
          iVar4 = FUN_0047c550(iVar4,*piVar5,*piVar6,local_c,0);
          local_c = *(int *)((int)piVar5 + param_1);
          for (; iVar4 != local_c; iVar4 = iVar4 + 0x10) {
            FUN_00460d40(iVar4);
          }
        }
      }
      local_20[0x1f] = uVar2 * 0x10 + *piVar6;
    }
    piVar6 = local_20 + 0x24;
    local_20[0x21] = piVar5[2];
    local_20[0x22] = piVar5[3];
    piVar5 = piVar5 + 0x24;
    local_14 = local_14 + -1;
    local_20 = piVar6;
  } while (local_14 != 0);
  return piVar6;
}

