
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005a8c10(int param_1)

{
  uint *puVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  double dVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  double *pdVar11;
  bool bVar12;
  float10 fVar13;
  float10 fVar14;
  undefined4 uVar15;
  float local_40;
  float local_3c;
  float local_38;
  uint local_34;
  double local_30;
  undefined8 local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  iVar9 = *(int *)(*(int *)(param_1 + 0x50) + 0x1d8);
  local_34 = *(uint *)(&DAT_006fb998 + (&DAT_006fa338)[_DAT_0064c940 < _DAT_006fa348] * 4);
  if (((local_34 & 1) == 0) && (*(int *)(param_1 + 0x1f0) != 0)) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x1f0) + 0xa4);
    *puVar1 = *puVar1 & 0xffffffed;
  }
  if ((*(double *)(param_1 + 0x38) < _DAT_0064a888) || ((local_34 & 4) == 0)) {
    iVar7 = *(int *)(param_1 + 0x1f8);
    uVar8 = *(uint *)(iVar7 + 0x48) | 1;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x1f8);
    uVar8 = *(uint *)(iVar7 + 0x48) & 0xfffffffe;
  }
  *(uint *)(iVar7 + 0x48) = uVar8;
  DAT_00701520 = ((int)(char)~(byte)local_34 & 4U) >> 2;
  if (_DAT_00650680 <= *(double *)(param_1 + 0x48)) {
    _DAT_006fa340 = 1.0;
    DAT_006fa334 = DAT_006fa33c;
  }
  else {
    DAT_006fa33c = DAT_006fa334 + 1 & 0x80000003;
    if ((int)DAT_006fa33c < 0) {
      DAT_006fa33c = (DAT_006fa33c - 1 | 0xfffffffc) + 1;
    }
    _DAT_006fa340 = *(double *)(param_1 + 0x48) * _DAT_00650678;
  }
  FUN_005a8560((float)*(double *)(param_1 + 0x20),(float)*(double *)(param_1 + 0x48),
               (float)*(double *)(param_1 + 0x40),&local_20,&local_1c,&local_18,&DAT_00701200,0);
  pfVar2 = (float *)(param_1 + 0x210);
  pfVar3 = (float *)(param_1 + 0x20c);
  FUN_005a8560((float)*(double *)(param_1 + 0x20),(float)*(double *)(param_1 + 0x48),
               (float)*(double *)(param_1 + 0x40),param_1 + 0x208,pfVar3,pfVar2,&DAT_006f93b0,0);
  if ((*(byte *)(*(int *)(param_1 + 0x1f8) + 0x48) & 2) != 0) {
    uVar8 = __ftol();
    uVar8 = uVar8 & 0x80000001;
    bVar12 = uVar8 == 0;
    if ((int)uVar8 < 0) {
      bVar12 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar12) {
      *(undefined4 *)(param_1 + 0x208) = 0x3f666666;
      local_20 = 0.9;
      *pfVar3 = 1.0;
      local_1c = 1.0;
      *pfVar2 = 1.0;
      local_18 = 1.0;
    }
  }
  *(double *)(iVar9 + 0x30) = (double)*(float *)(param_1 + 0x208);
  *(double *)(iVar9 + 0x38) = (double)*pfVar3;
  fVar4 = *pfVar2;
  *(undefined4 *)(iVar9 + 0x48) = 8;
  *(double *)(iVar9 + 0x40) = (double)fVar4;
  fVar13 = (float10)FUN_005a8910();
  *(double *)(iVar9 + 0x10) = (double)fVar13;
  fVar13 = (float10)FUN_005a8910();
  *(double *)(iVar9 + 0x18) = (double)fVar13;
  fVar13 = (float10)FUN_005a8910();
  *(double *)(iVar9 + 0x20) = (double)(fVar13 * (float10)*(double *)(iVar9 + 0x10));
  if (*(int *)(param_1 + 0x1e0) != 0) {
    *(double *)(*(int *)(param_1 + 0x1e0) + 0x48) = (double)local_20;
    *(double *)(*(int *)(param_1 + 0x1e0) + 0x50) = (double)local_1c;
    *(double *)(*(int *)(param_1 + 0x1e0) + 0x58) = (double)local_18;
    *(double *)(*(int *)(param_1 + 0x1e0) + 0x38) = *(double *)(iVar9 + 0x18) * _DAT_0064e780;
    *(double *)(*(int *)(param_1 + 0x1e0) + 0x40) = *(double *)(iVar9 + 0x10) * _DAT_0064e780;
    *(undefined4 *)(*(int *)(param_1 + 0x1e0) + 0x60) = 8;
    fVar13 = (float10)*(double *)(param_1 + 0x40) + (float10)*(double *)(param_1 + 0x40);
    if ((float10)_DAT_0064a660 < fVar13) {
      fVar13 = (float10)_DAT_0064a660;
    }
    FUN_005a8560((float)*(double *)(param_1 + 0x20),(float)*(double *)(param_1 + 0x48),(float)fVar13
                 ,&local_40,&local_3c,&local_38,&DAT_006fa354,0);
    iVar9 = *(int *)(*(int *)(param_1 + 0x1e0) + 0x60);
    if (((-1 < iVar9) &&
        (piVar10 = *(int **)(*(int *)(*(int *)(param_1 + 0x50) + 0x1d4) + 100),
        piVar10 != (int *)0x0)) && (iVar7 = *piVar10, iVar7 != 0)) {
      uVar6 = __ftol();
      *(undefined1 *)(iVar7 + 0x18 + iVar9 * 3) = uVar6;
      uVar6 = __ftol();
      *(undefined1 *)(iVar9 * 3 + 0x19 + *piVar10) = uVar6;
      uVar6 = __ftol();
      *(undefined1 *)(iVar9 * 3 + 0x1a + *piVar10) = uVar6;
    }
  }
  if (*(int *)(param_1 + 0x200) != 0) {
    FUN_005a8560((float)*(double *)(param_1 + 0x20),(float)*(double *)(param_1 + 0x48),
                 (float)*(double *)(param_1 + 0x40),&local_40,&local_3c,&local_38,&DAT_00700f00,1);
    *(undefined4 *)(*(int *)(param_1 + 0x200) + 0x60) = 0x3f800000;
    *(float *)(*(int *)(param_1 + 0x200) + 0x6c) = local_40;
    *(float *)(*(int *)(param_1 + 0x200) + 0x70) = local_3c;
    *(float *)(*(int *)(param_1 + 0x200) + 0x74) = local_38;
    if ((float)_DAT_0064a590 <= local_40 + local_3c + local_38) {
      *(undefined4 *)(*(int *)(param_1 + 0x200) + 0x88) = 1;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x200) + 0x88) = 0;
    }
  }
  if (*(int *)(param_1 + 0x1e4) != 0) {
    FUN_005a8560((float)*(double *)(param_1 + 0x20),(float)*(double *)(param_1 + 0x48),
                 (float)*(double *)(param_1 + 0x40),&local_40,&local_3c,&local_38,&DAT_006f8c20,0);
    *(undefined4 *)(*(int *)(param_1 + 0x1e4) + 0x60) = 0x3f800000;
    *(float *)(*(int *)(param_1 + 0x1e4) + 0x6c) = local_40;
    *(float *)(*(int *)(param_1 + 0x1e4) + 0x70) = local_3c;
    *(float *)(*(int *)(param_1 + 0x1e4) + 0x74) = local_38;
  }
  if (*(int *)(param_1 + 0x1e8) != 0) {
    FUN_005a8560((float)*(double *)(param_1 + 0x20),(float)*(double *)(param_1 + 0x48),
                 (float)*(double *)(param_1 + 0x40),&local_40,&local_3c,&local_38,&DAT_00700c00,0);
    *(undefined4 *)(*(int *)(param_1 + 0x1e8) + 0x60) = 0x3f800000;
    *(float *)(*(int *)(param_1 + 0x1e8) + 0x6c) = local_40;
    *(float *)(*(int *)(param_1 + 0x1e8) + 0x70) = local_3c;
    *(float *)(*(int *)(param_1 + 0x1e8) + 0x74) = local_38;
  }
  if (*(int *)(param_1 + 0x204) != 0) {
    FUN_005a8560((float)*(double *)(param_1 + 0x20),(float)*(double *)(param_1 + 0x48),
                 (float)*(double *)(param_1 + 0x40),&local_40,&local_3c,&local_38,&DAT_006f90b0,0);
    *(undefined4 *)(*(int *)(param_1 + 0x204) + 0x60) = 0x3f800000;
    *(float *)(*(int *)(param_1 + 0x204) + 0x6c) = local_40;
    *(float *)(*(int *)(param_1 + 0x204) + 0x70) = local_3c;
    *(float *)(*(int *)(param_1 + 0x204) + 0x74) = local_38;
    if ((float)_DAT_0064a590 <= local_40 + local_3c + local_38) {
      *(undefined4 *)(*(int *)(param_1 + 0x204) + 0x88) = 1;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x204) + 0x88) = 0;
    }
  }
  iVar9 = *(int *)(param_1 + 0x200);
  if (iVar9 != 0) {
    if (((*(uint *)(param_1 + 0x23c) & 0x40) == 0) || ((*(uint *)(param_1 + 0x23c) & 0x100) == 0)) {
      *(undefined4 *)(iVar9 + 0x60) = 0x3f800000;
    }
    else {
      *(undefined4 *)(iVar9 + 0x60) = *(undefined4 *)(param_1 + 0x21c);
    }
  }
  iVar9 = *(int *)(param_1 + 500);
  if (iVar9 != 0) {
    if (((*(double *)(param_1 + 0x20) <= _DAT_0064a830) ||
        (_DAT_0064a830 <= *(double *)(param_1 + 0x38))) ||
       ((*(byte *)(param_1 + 0x23c) & 0x80) != 0)) {
      uVar8 = *(uint *)(iVar9 + 0x78) | 0x80;
    }
    else {
      uVar8 = *(uint *)(iVar9 + 0x78) & 0xffffff7f;
    }
    *(uint *)(iVar9 + 0x78) = uVar8;
    local_30 = *(double *)(param_1 + 0x48) * _DAT_00650670;
    dVar5 = *(double *)(param_1 + 0x30) * _DAT_00650668;
    local_28._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
    uVar15 = local_28._4_4_;
    local_28 = dVar5;
    FUN_005a5f30(local_30,SUB84(dVar5,0),uVar15,0);
    fVar13 = (float10)fcos((float10)local_28);
    fVar14 = (float10)fcos((float10)local_30);
    local_14 = (float)(fVar14 * fVar13);
    fVar14 = (float10)fsin((float10)local_30);
    *(float *)(param_1 + 0x22c) = local_14;
    local_10 = (float)(fVar14 * fVar13);
    fVar13 = (float10)fsin((float10)local_28);
    *(float *)(param_1 + 0x230) = local_10;
    local_c = (float)fVar13;
    *(float *)(param_1 + 0x234) = local_c;
  }
  *(uint *)(param_1 + 0x23c) = *(uint *)(param_1 + 0x23c) & 0xfffffe3f;
  if ((local_34 & 2) == 0) {
    if (*(int *)(param_1 + 500) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 500) + 0x78);
      *puVar1 = *puVar1 | 0x80;
    }
    *(uint *)(param_1 + 0x23c) = *(uint *)(param_1 + 0x23c) | 0x40;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + 0x1d8) + 0x4c) =
       *(undefined4 *)(param_1 + 0x240);
  iVar9 = *(int *)(param_1 + 0x200);
  iVar7 = *(int *)(param_1 + 0x204);
  fVar4 = *(float *)(param_1 + 0x210) * (float)_DAT_00650660 +
          *(float *)(param_1 + 0x208) * (float)_DAT_0064c0e0 +
          *(float *)(param_1 + 0x20c) * (float)_DAT_00650658 +
          *(float *)(iVar7 + 0x70) * (float)_DAT_00650658 +
          *(float *)(iVar7 + 0x74) * (float)_DAT_00650660 +
          *(float *)(iVar7 + 0x6c) * (float)_DAT_0064c0e0 +
          *(float *)(iVar9 + 0x70) * (float)_DAT_00650658 +
          *(float *)(iVar9 + 0x74) * (float)_DAT_00650660 +
          *(float *)(iVar9 + 0x6c) * (float)_DAT_0064c0e0;
  *(float *)(param_1 + 0x224) = fVar4;
  if (_DAT_0064b240 < fVar4) {
    *(undefined4 *)(param_1 + 0x224) = 0x3f800000;
  }
  FUN_005a9b00((double)*(float *)(param_1 + 0x224),(double)*(float *)(param_1 + 0x214));
  iVar9 = 0;
  piVar10 = (int *)(param_1 + 0xa0);
  pdVar11 = (double *)(param_1 + 0xe0);
  do {
    if (*piVar10 != 0) {
      if (iVar9 < 8) {
        if (((*pdVar11 < *(double *)(param_1 + 0x58)) && (*(double *)(param_1 + 0x58) < pdVar11[1]))
           || ((*pdVar11 - _DAT_00650650 < *(double *)(param_1 + 0x58) &&
               (*(double *)(param_1 + 0x58) < pdVar11[1] - _DAT_00650650)))) {
LAB_005a93e4:
          uVar15 = 1;
        }
        else {
          uVar15 = 0;
        }
      }
      else {
        if ((*pdVar11 < *(double *)(param_1 + 0x58)) ||
           (*(double *)(param_1 + 0x58) < *pdVar11 - _DAT_00650650)) goto LAB_005a93e4;
        uVar15 = 0;
      }
      FUN_005e10c0(*piVar10,uVar15);
    }
    iVar9 = iVar9 + 1;
    piVar10 = piVar10 + 1;
    pdVar11 = pdVar11 + 2;
    if (0xf < iVar9) {
      return;
    }
  } while( true );
}

