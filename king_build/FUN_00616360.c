
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00616360(undefined4 param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float *pfVar12;
  
  FUN_0061e481(param_1);
  pfVar12 = (float *)&DAT_007287b0;
  iVar9 = 0;
  do {
    do {
      iVar6 = _rand();
      fVar3 = (float)iVar6 * _DAT_0064b244;
      iVar6 = _rand();
      fVar2 = (float)iVar6 * _DAT_0064b244;
      iVar6 = _rand();
      fVar4 = (float)iVar6 * _DAT_0064b244;
      iVar6 = _rand();
      fVar5 = (float)iVar6 * _DAT_0064b244;
      iVar6 = _rand();
      fVar5 = fVar5 - (float)iVar6 * _DAT_0064b244;
      fVar2 = fVar2 - fVar4;
      iVar6 = _rand();
      fVar3 = (float)iVar6 * _DAT_0064b244 - fVar3;
      fVar4 = fVar2 * fVar2 + fVar5 * fVar5 + fVar3 * fVar3;
    } while (_DAT_0064b240 < fVar4);
    fVar4 = SQRT(fVar4);
    *pfVar12 = fVar5 / fVar4;
    pfVar12[1] = fVar2 / fVar4;
    pfVar12[2] = fVar3 / fVar4;
    iVar6 = _rand();
    *(uint *)((int)&DAT_0072a7d0 + iVar9) = (uint)(_DAT_0064b254 < (float)iVar6 * _DAT_0064b244);
    iVar6 = _rand();
    if ((float)iVar6 * _DAT_0064b244 <= _DAT_0064b248) {
      iVar6 = _rand();
      if ((float)iVar6 * _DAT_0064b244 <= _DAT_0064b248) {
        *(undefined4 *)((int)&DAT_00727fa4 + iVar9) = 3;
      }
      else {
        *(undefined4 *)((int)&DAT_00727fa4 + iVar9) = 2;
      }
    }
    else {
      iVar6 = _rand();
      if ((float)iVar6 * _DAT_0064b244 <= _DAT_0064b248) {
        *(undefined4 *)((int)&DAT_00727fa4 + iVar9) = 1;
      }
      else {
        *(undefined4 *)((int)&DAT_00727fa4 + iVar9) = 0;
      }
    }
    iVar6 = _rand();
    pfVar12 = pfVar12 + 3;
    *(float *)((int)&DAT_0072779c + iVar9) = (float)iVar6 * _DAT_0064b330 + _DAT_0064b324;
    iVar9 = iVar9 + 4;
  } while (pfVar12 < &DAT_007293b0);
  iVar9 = 0;
  piVar7 = &DAT_00729fc8;
  do {
    *piVar7 = iVar9;
    piVar7 = piVar7 + 1;
    iVar9 = iVar9 + 1;
  } while (piVar7 < &DAT_0072a3c8);
  puVar11 = &DAT_0072a3c8;
  do {
    uVar1 = *puVar11;
    uVar8 = _rand();
    uVar8 = uVar8 & 0x800000ff;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffff00) + 1;
    }
    *puVar11 = (&DAT_00729fc8)[uVar8];
    puVar11 = puVar11 + -2;
    (&DAT_00729fc8)[uVar8] = uVar1;
  } while (&DAT_00729fc8 < puVar11);
  iVar9 = 0;
  puVar11 = &DAT_007293b0;
  do {
    *(undefined4 *)((int)&DAT_0072a3c8 + iVar9) = *(undefined4 *)((int)&DAT_00729fc8 + iVar9);
    puVar10 = puVar11 + 3;
    *puVar11 = puVar11[-0x300];
    puVar11[1] = puVar11[-0x2ff];
    puVar11[2] = puVar11[-0x2fe];
    *(undefined4 *)((int)&DAT_0072abd0 + iVar9) = *(undefined4 *)((int)&DAT_0072a7d0 + iVar9);
    _DAT_007283a8 = *(undefined4 *)((int)&DAT_00727fa4 + iVar9);
    _DAT_00727ba0 = *(undefined4 *)((int)&DAT_0072779c + iVar9);
    iVar9 = iVar9 + 4;
    puVar11 = puVar10;
  } while (puVar10 < &DAT_00729fc8);
  return;
}

