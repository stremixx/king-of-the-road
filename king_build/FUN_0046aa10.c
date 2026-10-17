
void FUN_0046aa10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 double param_5,double param_6,double param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 *puVar4;
  double *pdVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  double *pdVar11;
  undefined4 **ppuVar12;
  int *piVar13;
  float10 fVar14;
  undefined4 *puStack_a8;
  int iStack_a4;
  double local_a0;
  double local_98;
  undefined8 local_90;
  undefined4 *local_7c;
  undefined4 *local_78;
  double local_68;
  double local_60;
  double local_58;
  undefined1 local_50 [24];
  undefined1 local_38 [24];
  undefined1 local_20 [28];
  
  puVar10 = &param_5;
  pdVar5 = &local_68;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pdVar5 = *(undefined4 *)puVar10;
    puVar10 = (undefined8 *)((int)puVar10 + 4);
    pdVar5 = (double *)((int)pdVar5 + 4);
  }
  uVar8 = (int)param_2 - (int)param_1 & 0xfffffffc;
  puVar4 = param_2;
  if (7 < (int)uVar8) {
    local_78 = (undefined4 *)((int)param_2 - (int)param_1 >> 2);
    iVar7 = ((int)local_78 + -2) / 2;
    local_7c = param_1 + iVar7;
    while( true ) {
      pdVar5 = &local_68;
      pdVar11 = &local_a0;
      for (iStack_a4 = 6; iStack_a4 != 0; iStack_a4 = iStack_a4 + -1) {
        *(undefined4 *)pdVar11 = *(undefined4 *)pdVar5;
        pdVar5 = (double *)((int)pdVar5 + 4);
        pdVar11 = (double *)((int)pdVar11 + 4);
      }
      puStack_a8 = local_7c;
      FUN_0041d3f0();
      puStack_a8 = local_78;
      FUN_0046cfd0(param_1,iVar7);
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      local_7c = local_7c + -1;
    }
  }
  for (; puVar4 < param_3; puVar4 = puVar4 + 1) {
    local_90 = (double)CONCAT44(*param_1,0x46aab4);
    FUN_004042b0();
    local_90 = (double)CONCAT44(*puVar4,0x46aac4);
    FUN_004042b0();
    puVar9 = local_78 + 10;
    ppuVar12 = &puStack_a8;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppuVar12 = (undefined4 *)*puVar9;
      puVar9 = puVar9 + 1;
      ppuVar12 = ppuVar12 + 1;
    }
    pdVar5 = (double *)FUN_00435cd0(local_50);
    local_90 = param_7 - pdVar5[2];
    local_98 = param_6 - pdVar5[1];
    local_a0 = param_5 - *pdVar5;
    iStack_a4 = 0x46ab0f;
    FUN_00405ea0();
    dVar2 = local_68 * local_68;
    dVar3 = local_60 * local_60;
    dVar1 = local_58 * local_58;
    puVar9 = local_7c + 10;
    ppuVar12 = &puStack_a8;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppuVar12 = (undefined4 *)*puVar9;
      puVar9 = puVar9 + 1;
      ppuVar12 = ppuVar12 + 1;
    }
    uVar6 = FUN_00435cd0(local_38);
    uVar6 = FUN_0045be30(local_20,&param_5,uVar6);
    fVar14 = (float10)FUN_004577a0(uVar6);
    if ((float10)SQRT(dVar1 + dVar3 + dVar2) < fVar14) {
      local_90 = (double)((ulonglong)local_90 & 0xffffffff);
      puVar10 = &param_5;
      piVar13 = &iStack_a4;
      for (puStack_a8 = (undefined4 *)0x6; puStack_a8 != (undefined4 *)0x0;
          puStack_a8 = (undefined4 *)((int)puStack_a8 + -1)) {
        *piVar13 = *(undefined4 *)puVar10;
        puVar10 = (undefined8 *)((int)puVar10 + 4);
        piVar13 = piVar13 + 1;
      }
      FUN_0041d3f0(puVar4);
      FUN_0046bec0(param_1,param_2,puVar4);
    }
  }
  puVar10 = &param_5;
  pdVar5 = &local_68;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pdVar5 = *(undefined4 *)puVar10;
    puVar10 = (undefined8 *)((int)puVar10 + 4);
    pdVar5 = (double *)((int)pdVar5 + 4);
  }
  while (4 < (int)uVar8) {
    local_90 = (double)((ulonglong)local_90 & 0xffffffff);
    param_2 = param_2 + -1;
    pdVar5 = &local_68;
    piVar13 = &iStack_a4;
    for (puStack_a8 = (undefined4 *)0x6; puStack_a8 != (undefined4 *)0x0;
        puStack_a8 = (undefined4 *)((int)puStack_a8 + -1)) {
      *piVar13 = *(undefined4 *)pdVar5;
      pdVar5 = (double *)((int)pdVar5 + 4);
      piVar13 = piVar13 + 1;
    }
    FUN_0041d3f0(param_2);
    FUN_0046bec0(param_1,param_2,param_2);
    uVar8 = (int)param_2 - (int)param_1 & 0xfffffffc;
  }
  return;
}

