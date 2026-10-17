
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00612f20(undefined4 param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  float *pfVar11;
  float *pfVar12;
  undefined4 *puVar13;
  float *pfVar14;
  
  FUN_0061e481(param_1);
  pfVar11 = (float *)&DAT_00726f50;
  pfVar14 = (float *)&DAT_00724f30;
  do {
    do {
      iVar7 = _rand();
      fVar3 = (float)iVar7 * _DAT_0064b244;
      iVar7 = _rand();
      fVar2 = (float)iVar7 * _DAT_0064b244;
      iVar7 = _rand();
      fVar4 = (float)iVar7 * _DAT_0064b244;
      iVar7 = _rand();
      fVar5 = (float)iVar7 * _DAT_0064b244;
      iVar7 = _rand();
      fVar5 = fVar5 - (float)iVar7 * _DAT_0064b244;
      fVar2 = fVar2 - fVar4;
      iVar7 = _rand();
      fVar3 = (float)iVar7 * _DAT_0064b244 - fVar3;
      fVar4 = fVar5 * fVar5 + fVar2 * fVar2 + fVar3 * fVar3;
    } while (_DAT_0064b240 < fVar4);
    fVar4 = SQRT(fVar4);
    iVar7 = _rand();
    pfVar12 = pfVar11 + 1;
    fVar6 = _DAT_00652210 * (float)iVar7 * _DAT_0064b244;
    *pfVar11 = fVar6 + fVar6;
    *pfVar14 = fVar5 / fVar4;
    pfVar14[1] = fVar2 / fVar4;
    pfVar14[2] = fVar3 / fVar4;
    pfVar11 = pfVar12;
    pfVar14 = pfVar14 + 3;
  } while ((int)pfVar12 < 0x727350);
  iVar7 = 0;
  piVar8 = &DAT_00726748;
  do {
    *piVar8 = iVar7;
    piVar8 = piVar8 + 1;
    iVar7 = iVar7 + 1;
  } while ((int)piVar8 < 0x726b48);
  puVar13 = &DAT_00726b48;
  do {
    uVar1 = *puVar13;
    uVar9 = _rand();
    uVar9 = uVar9 & 0x800000ff;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xffffff00) + 1;
    }
    *puVar13 = (&DAT_00726748)[uVar9];
    puVar13 = puVar13 + -2;
    (&DAT_00726748)[uVar9] = uVar1;
  } while (0x726748 < (int)puVar13);
  iVar7 = 0;
  puVar13 = &DAT_00725b30;
  do {
    *(undefined4 *)((int)&DAT_00726b48 + iVar7) = *(undefined4 *)((int)&DAT_00726748 + iVar7);
    puVar10 = puVar13 + 3;
    *puVar13 = puVar13[-0x300];
    puVar13[1] = puVar13[-0x2ff];
    puVar13[2] = puVar13[-0x2fe];
    *(undefined4 *)((int)&DAT_00727350 + iVar7) = *(undefined4 *)((int)&DAT_00726f50 + iVar7);
    iVar7 = iVar7 + 4;
    puVar13 = puVar10;
  } while ((int)puVar10 < 0x726748);
  return;
}

