
undefined4 * __thiscall FUN_004535e0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  puVar6 = param_2 + 4;
  puVar7 = param_1 + 4;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  piVar1 = param_2 + 0xd;
  piVar2 = param_1 + 0xd;
  param_1[0xc] = param_2[0xc];
  if (piVar1 != piVar2) {
    iVar4 = param_2[0xe];
    iVar5 = *piVar1;
    iVar3 = *piVar2;
    uVar8 = iVar4 - iVar5;
    if ((uint)(param_1[0xf] - iVar3) < uVar8) {
      iVar4 = FUN_00458d60(uVar8,iVar5,iVar4);
      iVar5 = param_1[0xf] - *piVar2;
      if (iVar5 != 0) {
        FUN_0044b440(*piVar2,iVar5);
      }
      *piVar2 = iVar4;
      param_1[0xf] = iVar4 + uVar8;
    }
    else if ((uint)(param_1[0xe] - iVar3) < uVar8) {
      FUN_0061c980(iVar3,iVar5,param_1[0xe] - iVar3);
      iVar4 = (*piVar1 - *piVar2) + param_1[0xe];
      FUN_0061c980(param_1[0xe],iVar4,param_2[0xe] - iVar4);
    }
    else {
      FUN_0061c980(iVar3,iVar5,iVar4 - iVar5);
    }
    param_1[0xe] = *piVar2 + uVar8;
  }
  piVar1 = param_2 + 0x10;
  piVar2 = param_1 + 0x10;
  if (piVar1 != piVar2) {
    iVar4 = param_2[0x11];
    iVar5 = *piVar1;
    iVar3 = *piVar2;
    uVar8 = iVar4 - iVar5;
    if ((uint)(param_1[0x12] - iVar3) < uVar8) {
      iVar4 = FUN_00458d60(uVar8,iVar5,iVar4);
      iVar5 = param_1[0x12] - *piVar2;
      if (iVar5 != 0) {
        FUN_0044b440(*piVar2,iVar5);
      }
      *piVar2 = iVar4;
      param_1[0x12] = iVar4 + uVar8;
    }
    else if ((uint)(param_1[0x11] - iVar3) < uVar8) {
      FUN_00407250(iVar5,(param_1[0x11] - iVar3) + iVar5,iVar3);
      FUN_00407250((param_1[0x11] - *piVar2) + *piVar1,param_2[0x11],param_1[0x11]);
    }
    else {
      FUN_0061c980(iVar3,iVar5,iVar4 - iVar5);
    }
    param_1[0x11] = *piVar2 + uVar8;
  }
  FUN_0044c100(param_2 + 0x13);
  FUN_0044c100(param_2 + 0x16);
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x2e);
  return param_1;
}

