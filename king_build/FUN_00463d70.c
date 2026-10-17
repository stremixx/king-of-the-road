
undefined4 * FUN_00463d70(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int local_c;
  
  local_c = ((int)param_2 - param_1) / 0xc0;
  if (0 < local_c) {
    piVar2 = param_2 + 0xd;
    piVar6 = param_3 + 0xe;
    do {
      param_2 = param_2 + -0x30;
      param_3 = param_3 + -0x30;
      piVar3 = piVar2 + -0x30;
      piVar7 = piVar6 + -0x30;
      *param_3 = *param_2;
      piVar6[-0x3c] = piVar2[-0x3b];
      piVar6[-0x3b] = piVar2[-0x3a];
      piVar8 = piVar2 + -0x39;
      piVar10 = piVar6 + -0x3a;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar10 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar10 = piVar10 + 1;
      }
      piVar6[-0x32] = piVar2[-0x31];
      if (piVar3 != piVar6 + -0x31) {
        iVar4 = piVar2[-0x2f];
        iVar5 = *piVar3;
        iVar1 = piVar6[-0x31];
        piVar8 = piVar6 + -0x31;
        uVar9 = iVar4 - iVar5;
        if ((uint)(piVar6[-0x2f] - iVar1) < uVar9) {
          iVar4 = FUN_00458d60(uVar9,iVar5,iVar4);
          iVar5 = piVar6[-0x2f] - *piVar8;
          if (iVar5 != 0) {
            FUN_0044b440(*piVar8,iVar5);
          }
          *piVar8 = iVar4;
          piVar6[-0x2f] = iVar4 + uVar9;
        }
        else if ((uint)(*piVar7 - iVar1) < uVar9) {
          FUN_00407250(iVar5,iVar5 + (*piVar7 - iVar1),iVar1);
          FUN_00407250((*piVar7 - *piVar8) + *piVar3,piVar2[-0x2f],*piVar7);
        }
        else {
          FUN_00407250(iVar5,iVar4,iVar1);
        }
        *piVar7 = uVar9 + *piVar8;
      }
      FUN_0044c100(piVar2 + -0x2d);
      FUN_0044c100(piVar2 + -0x2a);
      FUN_0044c100(piVar2 + -0x27);
      piVar6[-0x25] = piVar2[-0x24];
      piVar6[-0x24] = piVar2[-0x23];
      piVar6[-0x23] = piVar2[-0x22];
      piVar6[-0x22] = piVar2[-0x21];
      piVar6[-0x20] = piVar2[-0x1f];
      piVar6[-0x1f] = piVar2[-0x1e];
      piVar6[-0x1e] = piVar2[-0x1d];
      piVar6[-0x1d] = piVar2[-0x1c];
      piVar6[-0x1c] = piVar2[-0x1b];
      piVar6[-0x1b] = piVar2[-0x1a];
      piVar6[-0x1a] = piVar2[-0x19];
      piVar6[-0x19] = piVar2[-0x18];
      piVar6[-0x18] = piVar2[-0x17];
      piVar6[-0x17] = piVar2[-0x16];
      piVar6[-0x16] = piVar2[-0x15];
      piVar6[-0x15] = piVar2[-0x14];
      piVar6[-0x14] = piVar2[-0x13];
      piVar6[-0x13] = piVar2[-0x12];
      piVar6[-0x12] = piVar2[-0x11];
      piVar6[-0x11] = piVar2[-0x10];
      *(char *)(piVar6 + -0x10) = (char)piVar2[-0xf];
      piVar6[-0x25] = 0;
      piVar6[-0x24] = 0;
      piVar6[-0x23] = 0;
      piVar6[-0x22] = 0;
      if (piVar6[-0x31] != *piVar7) {
        piVar6[-0x25] = piVar6[-0x31];
      }
      if (piVar6[-0x2e] != piVar6[-0x2d]) {
        piVar6[-0x24] = piVar6[-0x2e];
      }
      if (piVar6[-0x2b] != piVar6[-0x2a]) {
        piVar6[-0x23] = piVar6[-0x2b];
      }
      if (piVar6[-0x28] != piVar6[-0x27]) {
        piVar6[-0x22] = piVar6[-0x28];
      }
      local_c = local_c + -1;
      piVar2 = piVar3;
      piVar6 = piVar7;
    } while (local_c != 0);
  }
  return param_3;
}

