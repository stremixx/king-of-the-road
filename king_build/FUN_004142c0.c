
void FUN_004142c0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  undefined4 local_4;
  
  iVar7 = DAT_0068be24;
  iVar11 = DAT_0068be20;
  if (DAT_0068be20 != DAT_0068be24) {
    iVar9 = 0;
    uVar12 = DAT_0068be24 - DAT_0068be20;
    for (iVar4 = (int)uVar12 >> 2; iVar4 != 1; iVar4 = iVar4 >> 1) {
      iVar9 = iVar9 + 1;
    }
    FUN_0045c0e0(DAT_0068be20,DAT_0068be24,0,iVar9 * 2);
    if ((int)(uVar12 & 0xfffffffc) < 0x41) {
      FUN_00464a70(iVar11,iVar7);
    }
    else {
      FUN_00464a70(iVar11,iVar11 + 0x40);
      FUN_00467960(iVar11 + 0x40,iVar7,0);
    }
  }
  iVar7 = DAT_0068bbfc;
  iVar11 = DAT_0068bbf8;
  if (DAT_0068bbf8 != DAT_0068bbfc) {
    iVar9 = 0;
    uVar12 = DAT_0068bbfc - DAT_0068bbf8;
    for (iVar4 = (int)uVar12 >> 2; iVar4 != 1; iVar4 = iVar4 >> 1) {
      iVar9 = iVar9 + 1;
    }
    iVar9 = iVar9 * 2;
    iVar4 = DAT_0068bbfc;
    while (0x40 < (int)(uVar12 & 0xfffffffc)) {
      if (iVar9 == 0) {
        FUN_00464af0(iVar11,iVar4,iVar4,local_4);
        break;
      }
      iVar9 = iVar9 + -1;
      puVar5 = (undefined4 *)
               FUN_00464c80(iVar11,iVar11 + ((iVar4 - iVar11 >> 2) - (iVar4 - iVar11 >> 0x1f) >> 1)
                                            * 4,iVar4 + -4,local_4,local_4);
      iVar6 = FUN_00464cc0(iVar11,iVar4,*puVar5);
      FUN_0045c200(iVar6,iVar4,0,iVar9,local_4);
      iVar4 = iVar6;
      uVar12 = iVar6 - iVar11;
    }
    FUN_0045c320(iVar11,iVar7,local_4);
  }
  piVar3 = DAT_0068bb4c;
  piVar2 = DAT_0068bb48;
  if (DAT_0068bb48 != DAT_0068bb4c) {
    iVar11 = 0;
    for (iVar7 = (int)DAT_0068bb4c - (int)DAT_0068bb48 >> 2; iVar7 != 1; iVar7 = iVar7 >> 1) {
      iVar11 = iVar11 + 1;
    }
    iVar11 = iVar11 * 2;
    uVar10 = (int)DAT_0068bb4c - (int)DAT_0068bb48 & 0xfffffffc;
    piVar1 = DAT_0068bb4c;
    uVar12 = uVar10;
    while (0x40 < (int)uVar12) {
      if (iVar11 == 0) {
        FUN_004679b0(piVar2,piVar1,piVar1,0,piVar3);
        break;
      }
      iVar11 = iVar11 + -1;
      piVar8 = (int *)FUN_00464d10(piVar2,piVar2 + (((int)piVar1 - (int)piVar2 >> 2) -
                                                    ((int)piVar1 - (int)piVar2 >> 0x1f) >> 1),
                                   piVar1 + -1,piVar3);
      iVar7 = *piVar8;
      piVar8 = piVar2;
      piVar13 = piVar1;
      while( true ) {
        iVar9 = *(int *)(*piVar8 + 0x148);
        while (iVar9 < *(int *)(iVar7 + 0x148)) {
          piVar14 = piVar8 + 1;
          piVar8 = piVar8 + 1;
          iVar9 = *(int *)(*piVar14 + 0x148);
        }
        iVar9 = *(int *)(piVar13[-1] + 0x148);
        piVar14 = piVar13;
        while (piVar13 = piVar14 + -1, *(int *)(iVar7 + 0x148) < iVar9) {
          iVar9 = *(int *)(piVar14[-2] + 0x148);
          piVar14 = piVar13;
        }
        if (piVar13 <= piVar8) break;
        FUN_0046ce20(piVar8,piVar13);
        piVar8 = piVar8 + 1;
      }
      FUN_0045c460(piVar8,piVar1,0,iVar11,piVar3);
      piVar1 = piVar8;
      uVar12 = (int)piVar8 - (int)piVar2 & 0xfffffffc;
    }
    if (0x40 < (int)uVar10) {
      piVar1 = piVar2 + 0x10;
      piVar8 = piVar2;
      if (piVar2 != piVar1) {
        while (piVar8 = piVar8 + 1, piVar8 != piVar1) {
          FUN_00467b80(piVar2,piVar8,0,piVar3);
        }
      }
      FUN_00467bf0(piVar1,piVar3,0,piVar3);
      return;
    }
    FUN_00464d60(piVar2,piVar3,piVar3);
  }
  return;
}

