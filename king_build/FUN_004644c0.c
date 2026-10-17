
int * FUN_004644c0(int *param_1,int *param_2,int *param_3,double param_4,double param_5,
                  double param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 auStack_c0 [2];
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_88;
  double local_80;
  double local_78;
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  undefined4 local_28 [9];
  
  puVar7 = (undefined4 *)(*param_1 + 0x28);
  puVar8 = auStack_c0;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  pdVar4 = (double *)FUN_00435cd0(local_70);
  local_a8 = param_6 - pdVar4[2];
  local_b0 = param_5 - pdVar4[1];
  local_b8 = param_4 - *pdVar4;
  auStack_c0[1] = 0x46451b;
  FUN_00405ea0();
  dVar3 = local_80 * local_80;
  dVar1 = local_78 * local_78;
  dVar2 = local_88 * local_88;
  puVar7 = (undefined4 *)(*param_2 + 0x28);
  puVar8 = auStack_c0;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  uVar5 = FUN_00435cd0(local_40);
  uVar5 = FUN_0045be30(local_58,&param_4,uVar5);
  fVar9 = (float10)FUN_004577a0(uVar5);
  if (fVar9 <= (float10)SQRT(dVar2 + dVar1 + dVar3)) {
    puVar7 = (undefined4 *)(*param_1 + 0x28);
    puVar8 = auStack_c0;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    pdVar4 = (double *)FUN_00435cd0(local_58);
    local_a8 = param_6 - pdVar4[2];
    local_b0 = param_5 - pdVar4[1];
    local_b8 = param_4 - *pdVar4;
    auStack_c0[1] = 0x464747;
    FUN_00405ea0();
    puVar7 = (undefined4 *)(*param_3 + 0x28);
    puVar8 = local_28;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    local_a8 = (double)CONCAT44(&local_88,0x464764);
    fVar9 = (float10)FUN_004577a0();
    puVar7 = local_28;
    puVar8 = auStack_c0;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar5 = FUN_00435cd0(local_40);
    uVar5 = FUN_0045be30(local_70,&param_4,uVar5);
    fVar10 = (float10)FUN_004577a0(uVar5);
    if ((float10)(double)fVar9 < fVar10) {
      return param_1;
    }
    puVar7 = (undefined4 *)(*param_3 + 0x28);
    puVar8 = local_28;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar7 = (undefined4 *)(*param_2 + 0x28);
    puVar8 = auStack_c0;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar5 = FUN_00435cd0(local_58);
    uVar5 = FUN_0045be30(local_40,&param_4,uVar5);
    fVar9 = (float10)FUN_004577a0(uVar5);
    puVar7 = local_28;
    puVar8 = auStack_c0;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar5 = FUN_00435cd0(local_70);
    uVar5 = FUN_0045be30(&local_88,&param_4,uVar5);
    fVar10 = (float10)FUN_004577a0(uVar5);
    if ((float10)(double)fVar9 < fVar10) {
      return param_3;
    }
  }
  else {
    puVar7 = (undefined4 *)(*param_2 + 0x28);
    puVar8 = auStack_c0;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    pdVar4 = (double *)FUN_00435cd0(local_58);
    local_a8 = param_6 - pdVar4[2];
    local_b0 = param_5 - pdVar4[1];
    local_b8 = param_4 - *pdVar4;
    auStack_c0[1] = 0x4645d5;
    FUN_00405ea0();
    puVar7 = (undefined4 *)(*param_3 + 0x28);
    puVar8 = auStack_c0;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar5 = FUN_00435cd0(local_40);
    uVar5 = FUN_0045be30(local_70,&param_4,uVar5);
    fVar9 = (float10)FUN_004577a0(uVar5);
    if (fVar9 <= (float10)SQRT(local_88 * local_88 + local_78 * local_78 + local_80 * local_80)) {
      puVar7 = (undefined4 *)(*param_1 + 0x28);
      puVar8 = auStack_c0;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      pdVar4 = (double *)FUN_00435cd0(local_58);
      local_a8 = param_6 - pdVar4[2];
      local_b0 = param_5 - pdVar4[1];
      local_b8 = param_4 - *pdVar4;
      auStack_c0[1] = 0x46468c;
      FUN_00405ea0();
      puVar7 = (undefined4 *)(*param_3 + 0x28);
      puVar8 = local_28;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      local_a8 = (double)CONCAT44(&local_88,0x4646a9);
      fVar9 = (float10)FUN_004577a0();
      puVar7 = local_28;
      puVar8 = auStack_c0;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      uVar5 = FUN_00435cd0(local_40);
      uVar5 = FUN_0045be30(local_70,&param_4,uVar5);
      fVar10 = (float10)FUN_004577a0(uVar5);
      if (fVar10 <= (float10)(double)fVar9) {
        return param_1;
      }
      return param_3;
    }
  }
  return param_2;
}

