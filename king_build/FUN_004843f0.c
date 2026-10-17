
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004843f0(int *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  undefined4 *puVar7;
  double *pdVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  float10 fVar12;
  undefined4 auStack_188 [5];
  undefined4 uStack_174;
  undefined1 *puStack_170;
  int iStack_16c;
  double local_158;
  double local_150;
  double local_140;
  double local_128;
  undefined1 local_e8 [24];
  undefined1 local_d0 [24];
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [36];
  
  fVar12 = (float10)_DAT_0064a660;
  iVar9 = param_1[1];
  local_140 = _DAT_0064a660;
  iVar6 = *param_1;
  if (*param_1 != iVar9) {
    do {
      iVar10 = iVar6 + 0xc;
      if (iVar10 == iVar9) {
        return fVar12;
      }
      iStack_16c = *(int *)(iVar6 + 4);
      if (iStack_16c == 0) {
        return fVar12;
      }
      if (*(int *)(iVar6 + 0x10) == 0) {
        return fVar12;
      }
      if ((*(byte *)(iVar6 + 8) & 1) == 0) {
        puStack_170 = local_48;
        uStack_174 = 0x4844a8;
        puVar7 = (undefined4 *)FUN_0047ff40();
        puVar11 = auStack_188;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar11 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar11 = puVar11 + 1;
        }
        pdVar8 = (double *)FUN_00439180(local_b8);
        local_158 = *pdVar8;
        local_150 = pdVar8[1];
        dVar1 = pdVar8[2];
      }
      else {
        puStack_170 = local_88;
        uStack_174 = 0x484452;
        puVar7 = (undefined4 *)FUN_0047fe10();
        puVar11 = auStack_188;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar11 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar11 = puVar11 + 1;
        }
        pdVar8 = (double *)FUN_00439180(local_e8);
        local_158 = -*pdVar8;
        local_150 = -pdVar8[1];
        dVar1 = -pdVar8[2];
      }
      iStack_16c = *(undefined4 *)(iVar6 + 0x10);
      if ((*(byte *)(iVar6 + 0x14) & 1) == 0) {
        puStack_170 = local_28;
        uStack_174 = 0x48454d;
        puVar7 = (undefined4 *)FUN_0047fe10();
        puVar11 = auStack_188;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar11 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar11 = puVar11 + 1;
        }
        pdVar8 = (double *)FUN_00439180(local_a0);
        dVar2 = *pdVar8;
        local_128 = pdVar8[1];
        dVar3 = pdVar8[2];
      }
      else {
        puStack_170 = local_68;
        uStack_174 = 0x4844f2;
        puVar7 = (undefined4 *)FUN_0047ff40();
        puVar11 = auStack_188;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar11 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar11 = puVar11 + 1;
        }
        pdVar8 = (double *)FUN_00439180(local_d0);
        dVar2 = -*pdVar8;
        local_128 = -pdVar8[1];
        dVar3 = -pdVar8[2];
      }
      dVar5 = _DAT_0064a660 / SQRT(local_158 * local_158 + dVar1 * dVar1 + local_150 * local_150);
      dVar4 = _DAT_0064a660 / SQRT(dVar2 * dVar2 + dVar3 * dVar3 + local_128 * local_128);
      dVar1 = dVar2 * dVar4 * dVar5 * local_158 +
              local_150 * dVar5 * local_128 * dVar4 + dVar3 * dVar4 * dVar1 * dVar5;
      if (dVar1 < local_140) {
        local_140 = dVar1;
      }
      fVar12 = (float10)local_140;
      iVar9 = param_1[1];
      iVar6 = iVar10;
    } while (iVar10 != iVar9);
  }
  return fVar12;
}

