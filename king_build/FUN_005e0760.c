
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005e0760(int param_1)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  double local_10;
  
  uVar1 = *(uint *)(param_1 + 0xbac);
  if (((uVar1 & 4) != 0) || ((uVar6 = uVar1 & 1, uVar6 != 0 && ((uVar1 & 2) != 0)))) {
    *(undefined4 *)(param_1 + 0xb48) = 0;
    *(undefined4 *)(param_1 + 0xb38) = 0;
    *(undefined4 *)(param_1 + 0xb40) = 0;
    *(undefined4 *)(param_1 + 0xb4c) = 0;
    *(undefined4 *)(param_1 + 0xb3c) = 0;
    *(undefined4 *)(param_1 + 0xb44) = 0;
    _DAT_00720174 = 0.0;
    _DAT_00720218 = 0.0;
    FUN_005e2770(*(int *)(DAT_007206b0 + 0x100) / 2,*(int *)(DAT_007206b0 + 0x104) / 2);
    *(uint *)(param_1 + 0xbac) = *(uint *)(param_1 + 0xbac) & 0xfffffffb;
    return;
  }
  iVar2 = *(int *)(param_1 + 0xba8);
  if (iVar2 != 1) {
    fVar7 = (float10)*(double *)(param_1 + 0xb48);
    local_10._0_4_ = (float)*(double *)(param_1 + 0xb48);
    if (uVar6 != 0) {
      if (fVar7 <= (float10)_DAT_0064b948) {
        if (fVar7 <= (float10)_DAT_0064b254) {
          fVar7 = (float10)FUN_0061d200();
          fVar7 = extraout_ST1 / fVar7;
          local_10._0_4_ = (float)fVar7;
          if (fVar7 <= (float10)_DAT_0064b928) goto LAB_005e0aa7;
        }
        fVar7 = (float10)_DAT_0064b240;
      }
      else {
        fVar7 = (float10)FUN_0061d200();
        fVar7 = fVar7 * (float10)local_10._0_4_;
      }
      local_10._0_4_ = (float)fVar7;
    }
LAB_005e0aa7:
    if ((uVar1 & 2) == 0) {
LAB_005e0ad0:
      if (fVar7 <= (float10)_DAT_0064baa0) {
        if (fVar7 < (float10)_DAT_00651550) {
          fVar7 = (float10)_DAT_00651550;
        }
      }
      else {
        fVar7 = (float10)_DAT_0064baa0;
      }
    }
    else {
      if (fVar7 < (float10)_DAT_00650378) {
        fVar7 = (float10)FUN_0061d200();
        fVar7 = fVar7 * (float10)local_10._0_4_;
        goto LAB_005e0ad0;
      }
      if ((float10)_DAT_0064b254 <= fVar7) {
        fVar7 = (float10)FUN_0061d200();
        fVar7 = extraout_ST1_00 / fVar7;
        if ((float10)_DAT_0064b240 <= fVar7) goto LAB_005e0ad0;
        fVar7 = (float10)_DAT_0064b928;
      }
      else {
        fVar7 = (float10)_DAT_0064b928;
      }
    }
    *(double *)(param_1 + 0xb48) = (double)fVar7;
    if ((uVar1 & 8) != 0) {
      fVar7 = -fVar7;
    }
    if (iVar2 != 2) {
      if (iVar2 != 0) {
        return;
      }
      fVar8 = (float10)*(double *)(param_1 + 0xb38) * (float10)*(double *)(param_1 + 0xb90) +
              (float10)*(double *)(param_1 + 0xb70);
      *(double *)(param_1 + 0xb70) = (double)fVar8;
      fVar9 = (float10)fsin(fVar8);
      fVar8 = (float10)fcos(fVar8);
      *(double *)(param_1 + 0xb60) =
           (double)(((float10)(double)fVar9 * (float10)*(double *)(param_1 + 0xb50) + fVar7 * fVar8)
                    * (float10)*(double *)(param_1 + 0xb90) + (float10)*(double *)(param_1 + 0xb60))
      ;
      *(double *)(param_1 + 0xb58) =
           (double)((fVar8 * (float10)*(double *)(param_1 + 0xb50) - fVar7 * (float10)(double)fVar9)
                    * (float10)*(double *)(param_1 + 0xb90) + (float10)*(double *)(param_1 + 0xb58))
      ;
      fVar7 = (float10)*(double *)(param_1 + 0xb40);
      goto LAB_005e0cbd;
    }
    fVar8 = (float10)_DAT_0064a668;
    local_10 = 1.0;
    if ((fVar7 < (float10)_DAT_0064b254) || ((float10)_DAT_0064b310 <= fVar7)) {
      if ((float10)_DAT_0064b310 < fVar7) {
        fVar9 = ((float10)_DAT_0064baa0 - (fVar7 - (float10)_DAT_0064b310)) * (float10)_DAT_0064e3a8
        ;
        goto LAB_005e0bb8;
      }
LAB_005e0be2:
      if ((float10)_DAT_0064b2e8 <= fVar7) goto LAB_005e0bf3;
    }
    else {
      fVar9 = fVar7 * (float10)_DAT_0064b8f8;
LAB_005e0bb8:
      local_10 = (double)fVar9;
      if (fVar7 <= (float10)_DAT_0064b310) goto LAB_005e0be2;
      if (fVar7 < (float10)_DAT_0064b2e8) {
        fVar8 = fVar7 * (float10)_DAT_0064b258;
        goto LAB_005e0be2;
      }
LAB_005e0bf3:
      fVar8 = (float10)_DAT_0064a660;
    }
    dVar3 = SQRT(local_10) * *(double *)(param_1 + 0xb38) * *(double *)(param_1 + 0xb90) +
            *(double *)(param_1 + 0xb70);
    *(double *)(param_1 + 0xb70) = dVar3;
    *(double *)(param_1 + 0xb78) =
         (double)((float10)*(double *)(param_1 + 0xb40) * (float10)*(double *)(param_1 + 0xb90) *
                  fVar8 * (float10)_DAT_0064c328 + (float10)*(double *)(param_1 + 0xb78));
    *(double *)(param_1 + 0xb80) =
         (double)((float10)*(double *)(param_1 + 0xb80) * (float10)_DAT_0064a798 +
                 fVar8 * (float10)*(double *)(param_1 + 0xb38) * (float10)_DAT_00651548 *
                 (float10)_DAT_0064c0e0);
    fVar8 = (float10)fcos((float10)dVar3);
    fVar9 = (float10)fcos((float10)*(double *)(param_1 + 0xb78));
    *(double *)(param_1 + 0xb60) =
         (double)(fVar7 * fVar9 * fVar8 * (float10)*(double *)(param_1 + 0xb90) +
                 (float10)*(double *)(param_1 + 0xb60));
    fVar8 = (float10)fsin((float10)dVar3);
    fVar9 = (float10)fcos((float10)*(double *)(param_1 + 0xb78));
    *(double *)(param_1 + 0xb58) =
         (double)(-(fVar7 * fVar9 * fVar8) * (float10)*(double *)(param_1 + 0xb90) +
                 (float10)*(double *)(param_1 + 0xb58));
    fVar8 = (float10)fsin(-(float10)*(double *)(param_1 + 0xb78));
    fVar7 = fVar7 * fVar8;
LAB_005e0cbd:
    *(double *)(param_1 + 0xb68) =
         (double)(fVar7 * (float10)*(double *)(param_1 + 0xb90) +
                 (float10)*(double *)(param_1 + 0xb68));
    return;
  }
  if (((DAT_007206e0 & 1) == 0) && (uVar6 != 0)) {
    _DAT_0071fd6c = (float)*(double *)(param_1 + 0xb70);
    _DAT_0071fce8 = (float)*(double *)(param_1 + 0xb78);
    _DAT_00720174 =
         (float)((float10)*(double *)(param_1 + 0xb38) + (float10)*(double *)(param_1 + 0xb38));
    _DAT_00720218 = (float)((float10)*(double *)(param_1 + 0xb40) * (float10)_DAT_0064a830);
  }
  if (((DAT_007206e0 & 2) == 0) && ((*(byte *)(param_1 + 0xbac) & 2) != 0)) {
    _DAT_00681968 =
         (float)(SQRT((float10)*(double *)(param_1 + 0xb68) * (float10)*(double *)(param_1 + 0xb68)
                      + (float10)*(double *)(param_1 + 0xb60) *
                        (float10)*(double *)(param_1 + 0xb60) +
                        (float10)*(double *)(param_1 + 0xb58) *
                        (float10)*(double *)(param_1 + 0xb58)) /
                (((float10)*(int *)(DAT_007206b0 + 0x104) * (float10)_DAT_0064a6d0 +
                 (float10)*(double *)(param_1 + 0xb40) * (float10)_DAT_0064a6e0) /
                 (float10)*(int *)(DAT_007206b0 + 0x104) + (float10)_DAT_0064c328));
  }
  if ((DAT_007206e0 & 1) == 0) {
LAB_005e0896:
    if ((*(byte *)(param_1 + 0xbac) & 1) == 0) {
      *(double *)(param_1 + 0xb70) =
           (double)(_DAT_00720174 * (float)*(double *)(param_1 + 0xb90) +
                   (float)*(double *)(param_1 + 0xb70));
      fVar4 = _DAT_00720218 * (float)*(double *)(param_1 + 0xb90) +
              (float)*(double *)(param_1 + 0xb78);
      *(double *)(param_1 + 0xb78) = (double)fVar4;
      uVar5 = DAT_0068194c;
      if ((float)(double)CONCAT44(DAT_0068194c,DAT_00681948) < fVar4) {
        *(undefined4 *)(param_1 + 0xb78) = DAT_00681948;
        *(undefined4 *)(param_1 + 0xb7c) = uVar5;
      }
      uVar5 = DAT_00681954;
      if (*(double *)(param_1 + 0xb78) < (double)CONCAT44(DAT_00681954,DAT_00681950)) {
        *(undefined4 *)(param_1 + 0xb78) = DAT_00681950;
        *(undefined4 *)(param_1 + 0xb7c) = uVar5;
      }
      goto LAB_005e0971;
    }
  }
  else if ((*(byte *)(param_1 + 0xbac) & 1) == 0) {
    _DAT_00720174 =
         (float)(((float10)*(double *)(param_1 + 0xb38) + (float10)*(double *)(param_1 + 0xb38)) -
                (float10)_DAT_007206e4);
    _DAT_00720218 =
         (float)((float10)*(double *)(param_1 + 0xb40) * (float10)_DAT_0064a830 -
                (float10)_DAT_007206e8);
    goto LAB_005e0896;
  }
  fVar7 = (float10)*(double *)(param_1 + 0xb38) + (float10)*(double *)(param_1 + 0xb38);
  *(double *)(param_1 + 0xb70) = (double)((fVar7 - (float10)_DAT_00720174) + (float10)_DAT_0071fd6c)
  ;
  *(double *)(param_1 + 0xb78) =
       (*(double *)(param_1 + 0xb40) * _DAT_0064a830 - (double)_DAT_00720218) +
       (double)_DAT_0071fce8;
  _DAT_007206e4 = (float)fVar7;
  _DAT_007206e8 = (float)((float10)*(double *)(param_1 + 0xb40) * (float10)_DAT_0064a830);
LAB_005e0971:
  fVar7 = SQRT((float10)*(double *)(param_1 + 0xb68) * (float10)*(double *)(param_1 + 0xb68) +
               (float10)*(double *)(param_1 + 0xb60) * (float10)*(double *)(param_1 + 0xb60) +
               (float10)*(double *)(param_1 + 0xb58) * (float10)*(double *)(param_1 + 0xb58));
  if ((*(uint *)(param_1 + 0xbac) & 2) != 0) {
    fVar7 = (((float10)*(int *)(DAT_007206b0 + 0x104) * (float10)_DAT_0064a6d0 +
             (float10)*(double *)(param_1 + 0xb40) * (float10)_DAT_0064a6e0) /
             (float10)*(int *)(DAT_007206b0 + 0x104) + (float10)_DAT_0064c328) *
            (float10)_DAT_00681968;
  }
  fVar8 = (float10)fcos((float10)*(double *)(param_1 + 0xb78));
  fVar9 = (float10)fsin((float10)*(double *)(param_1 + 0xb70));
  *(double *)(param_1 + 0xb58) = (double)(fVar7 * fVar9 * fVar8);
  fVar8 = (float10)fcos((float10)*(double *)(param_1 + 0xb78));
  fVar9 = (float10)fcos((float10)*(double *)(param_1 + 0xb70));
  *(double *)(param_1 + 0xb60) = (double)-(fVar7 * fVar9 * fVar8);
  fVar8 = (float10)fsin((float10)*(double *)(param_1 + 0xb78));
  *(double *)(param_1 + 0xb68) = (double)(fVar7 * fVar8);
  DAT_007206e0 = *(uint *)(param_1 + 0xbac);
  return;
}

