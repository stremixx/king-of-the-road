
undefined4 *
FUN_00468d10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,double param_4,
            double param_5,double param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  double *pdVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float10 fVar12;
  float10 fVar13;
  undefined4 auStack_c8 [2];
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  int local_98;
  int local_94;
  double local_88;
  double local_80;
  double local_78;
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  undefined4 local_28 [9];
  
  local_b0 = (double)CONCAT44(*param_2,0x468d32);
  FUN_004042b0();
  local_b0 = (double)CONCAT44(*param_1,0x468d45);
  FUN_004042b0();
  puVar10 = (undefined4 *)(local_94 + 0x28);
  puVar11 = auStack_c8;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  uVar7 = FUN_00435cd0(&local_88);
  pdVar8 = (double *)FUN_0045be30(local_40,&param_4,uVar7);
  dVar1 = *pdVar8;
  dVar2 = *pdVar8;
  dVar3 = pdVar8[1];
  dVar4 = pdVar8[1];
  dVar5 = pdVar8[2];
  dVar6 = pdVar8[2];
  puVar10 = (undefined4 *)(local_98 + 0x28);
  puVar11 = auStack_c8;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  uVar7 = FUN_00435cd0(local_70);
  uVar7 = FUN_0045be30(local_58,&param_4,uVar7);
  fVar12 = (float10)FUN_004577a0(uVar7);
  if (fVar12 <= (float10)SQRT(dVar2 * dVar1 + dVar4 * dVar3 + dVar6 * dVar5)) {
    local_b0 = (double)CONCAT44(*param_3,0x468f94);
    FUN_004042b0();
    local_b0 = (double)CONCAT44(*param_1,0x468fa7);
    FUN_004042b0();
    puVar10 = (undefined4 *)(local_98 + 0x28);
    puVar11 = auStack_c8;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    pdVar8 = (double *)FUN_00435cd0(local_58);
    local_b0 = param_6 - pdVar8[2];
    local_b8 = param_5 - pdVar8[1];
    local_c0 = param_4 - *pdVar8;
    auStack_c8[1] = 0x468ff2;
    FUN_00405ea0();
    puVar10 = (undefined4 *)(local_94 + 0x28);
    puVar11 = local_28;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    local_b0 = (double)CONCAT44(&local_88,0x469011);
    fVar12 = (float10)FUN_004577a0();
    puVar10 = local_28;
    puVar11 = auStack_c8;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    uVar7 = FUN_00435cd0(local_70);
    uVar7 = FUN_0045be30(local_40,&param_4,uVar7);
    fVar13 = (float10)FUN_004577a0(uVar7);
    if ((float10)(double)fVar12 < fVar13) {
      return param_1;
    }
    local_b0 = (double)CONCAT44(*param_3,0x469075);
    FUN_004042b0();
    local_b0 = (double)CONCAT44(*param_2,0x469085);
    FUN_004042b0();
    puVar10 = (undefined4 *)(local_98 + 0x28);
    puVar11 = auStack_c8;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    pdVar8 = (double *)FUN_00435cd0(local_58);
    local_b0 = param_6 - pdVar8[2];
    local_b8 = param_5 - pdVar8[1];
    local_c0 = param_4 - *pdVar8;
    auStack_c8[1] = 0x4690d0;
    FUN_00405ea0();
    puVar10 = (undefined4 *)(local_94 + 0x28);
    puVar11 = auStack_c8;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    uVar7 = FUN_00435cd0(local_70);
    uVar7 = FUN_0045be30(local_40,&param_4,uVar7);
    fVar12 = (float10)FUN_004577a0(uVar7);
    if ((float10)SQRT(local_78 * local_78 + local_80 * local_80 + local_88 * local_88) < fVar12) {
      return param_3;
    }
  }
  else {
    local_b0 = (double)CONCAT44(*param_3,0x468df7);
    FUN_004042b0();
    local_b0 = (double)CONCAT44(*param_2,0x468e07);
    FUN_004042b0();
    puVar10 = (undefined4 *)(local_98 + 0x28);
    puVar11 = auStack_c8;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    uVar7 = FUN_00435cd0(local_58);
    pdVar8 = (double *)FUN_0045be30(local_70,&param_4,uVar7);
    dVar1 = *pdVar8;
    dVar2 = *pdVar8;
    dVar3 = pdVar8[1];
    dVar4 = pdVar8[1];
    dVar5 = pdVar8[2];
    dVar6 = pdVar8[2];
    puVar10 = (undefined4 *)(local_94 + 0x28);
    puVar11 = auStack_c8;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    uVar7 = FUN_00435cd0(local_40);
    uVar7 = FUN_0045be30(&local_88,&param_4,uVar7);
    fVar12 = (float10)FUN_004577a0(uVar7);
    if (fVar12 <= (float10)SQRT(dVar2 * dVar1 + dVar4 * dVar3 + dVar6 * dVar5)) {
      local_b0 = (double)CONCAT44(*param_3,0x468eb9);
      FUN_004042b0();
      local_b0 = (double)CONCAT44(*param_1,0x468ecc);
      FUN_004042b0();
      puVar10 = (undefined4 *)(local_98 + 0x28);
      puVar11 = auStack_c8;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      pdVar8 = (double *)FUN_00435cd0(local_58);
      local_b0 = param_6 - pdVar8[2];
      local_b8 = param_5 - pdVar8[1];
      local_c0 = param_4 - *pdVar8;
      auStack_c8[1] = 0x468f17;
      FUN_00405ea0();
      puVar10 = (undefined4 *)(local_94 + 0x28);
      puVar11 = local_28;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      local_b0 = (double)CONCAT44(&local_88,0x468f36);
      fVar12 = (float10)FUN_004577a0();
      puVar10 = local_28;
      puVar11 = auStack_c8;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      uVar7 = FUN_00435cd0(local_70);
      uVar7 = FUN_0045be30(local_40,&param_4,uVar7);
      fVar13 = (float10)FUN_004577a0(uVar7);
      param_2 = param_3;
      if (fVar13 <= (float10)(double)fVar12) {
        return param_1;
      }
    }
  }
  return param_2;
}

