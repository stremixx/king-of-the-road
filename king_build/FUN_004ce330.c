
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ce330(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  float *pfVar10;
  uint uVar11;
  int iStack_2b4;
  float *pfStack_2b0;
  float local_29c;
  float local_298;
  undefined1 local_264 [48];
  undefined1 local_234 [48];
  undefined1 local_204 [8];
  int local_1fc;
  undefined4 local_144 [72];
  int local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00644d99;
  local_14 = ExceptionList;
  iVar5 = *param_1;
  if (iVar5 == 0xcc0) {
    pfStack_2b0 = (float *)param_2;
    iStack_2b4 = 0x4ce369;
    ExceptionList = &local_14;
    FUN_004ce310();
    ExceptionList = local_14;
    return;
  }
  if (iVar5 == 0x10) {
    puVar4 = local_144;
    local_29c = *(float *)param_1[3];
    iStack_2b4 = 0x13;
    do {
      puVar4[2] = 0;
      *puVar4 = 0;
      puVar4[3] = 0x3ff00000;
      puVar4 = puVar4 + 4;
      iStack_2b4 = iStack_2b4 + -1;
    } while (iStack_2b4 != 0);
    pfStack_2b0 = (float *)local_144;
    ExceptionList = &local_14;
    FUN_00568670(&iStack_2b4);
    FUN_004769d0();
    if (local_24 != 0) {
      local_29c = local_29c - _DAT_0064b240;
    }
    pfStack_2b0 = (float *)local_264;
    iStack_2b4 = 0x4ce3f0;
    iVar5 = FUN_0057d570();
    if (local_29c <= *(float *)(iVar5 + 0x2c)) {
      ExceptionList = local_14;
      return;
    }
    pfStack_2b0 = (float *)param_2;
    iStack_2b4 = 0x4ce408;
    FUN_004ce310();
    ExceptionList = local_14;
    return;
  }
  if (iVar5 != 0x1d) {
    return;
  }
  if (DAT_00695298 == 0) {
    return;
  }
  pfStack_2b0 = (float *)local_204;
  ExceptionList = &local_14;
  FUN_0041d3f0(param_2 + 0x509c);
  FUN_0043fd20();
  if ((local_1fc == 5) && (*(int *)(param_2 + 0x55a4) != 0)) {
    ExceptionList = local_14;
    return;
  }
  if (param_1[1] % 10 == 0) {
    local_29c = *(float *)(DAT_00695298 + 0x24);
  }
  else {
    local_29c = (float)(*(uint *)(DAT_00695298 + 0x24) ^ 1);
  }
  iVar5 = param_1[1] / 10;
  if ((iVar5 == 1) || (iVar5 == 3)) {
    local_29c = (float)((uint)local_29c ^ 1);
  }
  else if (iVar5 == 4) {
    local_29c = 1.4013e-45;
  }
  iVar5 = *param_1;
  pfStack_2b0 = (float *)0x4;
  iStack_2b4 = 0x4ce4d8;
  pfVar6 = (float *)FUN_00631d33();
  pfVar8 = (float *)param_1[3];
  local_c = 0;
  local_298 = 100.0;
  if (pfVar8 != (float *)0x0) {
    pfStack_2b0 = (float *)local_264;
    iStack_2b4 = 0x4ce512;
    iVar7 = FUN_0057d570();
    local_298 = *(float *)(iVar7 + 0x24) * *pfVar8 +
                *(float *)(iVar7 + 0x28) * pfVar8[1] + *(float *)(iVar7 + 0x2c) * pfVar8[2] +
                pfVar8[3];
    if (local_298 < _DAT_0064b254) {
      fVar1 = pfVar8[2];
      fVar2 = pfVar8[1];
      fVar3 = *pfVar8;
      pfStack_2b0 = (float *)local_234;
      iStack_2b4 = 0x4ce579;
      pfVar8 = (float *)FUN_0057d570();
      if ((float)_DAT_0064a668 <
          (DAT_00701580 * pfVar8[2] + DAT_00701584 * pfVar8[5] + DAT_00701588 * pfVar8[8]) * fVar1 +
          fVar2 * (DAT_00701580 * pfVar8[1] + DAT_00701584 * pfVar8[4] + DAT_00701588 * pfVar8[7]) +
          fVar3 * (DAT_00701580 * *pfVar8 + DAT_00701584 * pfVar8[3] + DAT_00701588 * pfVar8[6])) {
        local_298 = ABS(local_298);
        goto LAB_004ce60f;
      }
    }
    local_298 = -ABS(local_298);
  }
LAB_004ce60f:
  *pfVar6 = local_298;
  iVar7 = *(int *)(param_2 + 0x5574);
  if (iVar7 != 0) {
    pfStack_2b0 = *(float **)(iVar7 + 0xc);
    if (pfStack_2b0 != (float *)0x0) {
      iStack_2b4 = 0x4ce62c;
      FUN_00631d5c();
    }
    iStack_2b4 = 0x4ce635;
    pfStack_2b0 = (float *)iVar7;
    FUN_00631d5c();
  }
  *(undefined4 *)(param_2 + 0x5574) = *(undefined4 *)(param_2 + 0x5570);
  if (&stack0x00000000 == (undefined1 *)0x274) {
    *(undefined4 *)(param_2 + 0x5570) = 0;
  }
  else {
    pfStack_2b0 = (float *)0x10;
    iStack_2b4 = 0x4ce653;
    piVar9 = (int *)FUN_00631d33();
    local_c = CONCAT31(local_c._1_3_,1);
    if (piVar9 == (int *)0x0) {
      *(undefined4 *)(param_2 + 0x5570) = 0;
    }
    else {
      pfStack_2b0 = (float *)0x4;
      *piVar9 = iVar5;
      piVar9[1] = (int)local_29c;
      piVar9[2] = 1;
      iStack_2b4 = 0x4ce683;
      pfVar10 = (float *)FUN_00631d33();
      piVar9[3] = (int)pfVar10;
      pfVar8 = pfVar6;
      for (uVar11 = piVar9[2] & 0x3fffffff; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pfVar10 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar10 = pfVar10 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)pfVar10 = *(undefined1 *)pfVar8;
        pfVar8 = (float *)((int)pfVar8 + 1);
        pfVar10 = (float *)((int)pfVar10 + 1);
      }
      *(int **)(param_2 + 0x5570) = piVar9;
    }
  }
  if (pfVar6 != (float *)0x0) {
    iStack_2b4 = 0x4ce6cf;
    pfStack_2b0 = pfVar6;
    FUN_00631d5c();
  }
  ExceptionList = local_14;
  return;
}

