
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004d4660(int param_1,int param_2,double param_3,double param_4,double param_5,
                    double param_6,undefined4 param_7,double param_8,double param_9)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined4 auStack_94 [5];
  undefined4 uStack_80;
  undefined4 *puStack_7c;
  undefined4 *puStack_78;
  undefined4 *puStack_74;
  undefined4 *puStack_70;
  undefined4 *puStack_6c;
  undefined4 *puStack_68;
  undefined8 uStack_64;
  double *local_5c;
  double local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 local_28 [36];
  
  local_5c = (double *)param_1;
  uStack_64._4_4_ = 0x4d4679;
  uVar3 = FUN_0043f700();
  if ((((uVar3 & 0x4000) == 0) && (param_2 != 0)) && (_DAT_0064a6e0 < param_3)) {
    param_3 = 20.0;
  }
  local_5c = (double *)param_1;
  uStack_64._4_4_ = 0x4d46b3;
  uVar3 = FUN_0043f700();
  if ((uVar3 & 0x80) != 0) {
    local_5c = &local_48;
    uStack_64._4_4_ = 0x4d46c8;
    piVar4 = (int *)FUN_00568670();
    dVar1 = (*(double *)(*piVar4 + 0x1f8) - *(double *)(param_1 + 0x1f8)) * _DAT_0064a760;
    dVar1 = ABS(dVar1) * dVar1;
    dVar2 = _DAT_0064a6a8;
    if ((dVar1 < _DAT_0064a6a8) ||
       ((dVar2 = _DAT_0064a6d0, dVar1 <= _DAT_0064a6d0 && (dVar2 = dVar1, dVar1 < _DAT_0064a668))))
    {
      dVar2 = dVar2 * _DAT_0064a6d0;
    }
    param_3 = (dVar2 + _DAT_0064a660) * param_3;
    param_8 = (dVar2 + _DAT_0064a660) * param_8;
  }
  uVar3 = 0;
  local_30 = 0;
  uStack_2c = 0;
  local_40 = 0;
  uStack_3c = 0;
  local_38 = 0;
  uStack_34 = 0x40490000;
  if (_DAT_0064a5a8 < ABS(param_4)) {
    uVar3 = 2;
  }
  if (_DAT_0064c320 < ABS(param_6)) {
    uVar3 = uVar3 | 4;
  }
  local_48 = param_3 * _DAT_0064a6c0;
  local_5c = (double *)param_7;
  puStack_68 = &local_38;
  puStack_6c = &local_40;
  puStack_74 = &local_30;
  puStack_78 = &param_1;
  puStack_7c = (undefined4 *)0x4d47d4;
  puStack_70 = puStack_74;
  uStack_64 = local_48;
  FUN_0041d3f0();
  puStack_7c = &param_1;
  uStack_80 = 0x4d47e0;
  FUN_0041d3f0();
  puStack_7c = (undefined4 *)local_28;
  uStack_80 = 0x4d47ea;
  puVar5 = (undefined4 *)FUN_00437600();
  puVar8 = auStack_94;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  uVar6 = FUN_004cdcc0();
  if (((uVar6 != 0) || (param_5 < _DAT_0064a888)) || (uVar3 != 0)) {
    if (_DAT_0064a6c0 < param_3) {
      if ((uVar6 & 1) != 0) {
        local_48 = SQRT(ABS(_DAT_0064a6c0 / (double)CONCAT44(uStack_2c,local_30)));
        if (local_48 < _DAT_0064a688) {
          local_48 = 8.0;
        }
        if (local_48 < param_3) {
          param_3 = local_48;
        }
      }
      if (((uVar6 & 2) != 0) && ((double)CONCAT44(uStack_3c,local_40) < _DAT_0064c318)) {
        param_3 = param_3 / (ABS((double)CONCAT44(uStack_3c,local_40)) * _DAT_0064c310);
      }
      if (((uVar6 & 4) != 0) && ((double)CONCAT44(uStack_34,local_38) < _DAT_0064a928)) {
        param_3 = param_3 * (double)CONCAT44(uStack_34,local_38) * _DAT_0064a948 + _DAT_0064a660;
      }
      if ((param_5 < _DAT_0064a888) ||
         (dVar1 = (param_5 - _DAT_0064a888) * _DAT_0064a6c0,
         param_3 = (param_3 - _DAT_0064a6c0) * dVar1 * dVar1 + _DAT_0064a6c0,
         param_3 < _DAT_0064a6c0)) {
        param_3 = _DAT_0064a6c0;
      }
    }
    if ((uVar3 != 0) && (_DAT_0064a770 < param_3)) {
      param_3 = param_3 * _DAT_0064c308;
    }
  }
  else if (param_2 == 0) {
    param_3 = param_8;
  }
  local_5c = (double *)param_1;
  uStack_64._4_4_ = 0x4d4954;
  uVar3 = FUN_0043f700();
  if (((uVar3 & 0x1000000) != 0) && (_DAT_0064a6e0 < param_3)) {
    param_3 = 20.0;
  }
  if (_DAT_0064a668 < param_9) {
    if (param_9 < _DAT_0064a770) {
      return (float10)_DAT_0064a668;
    }
    fVar9 = SQRT(((float10)param_9 - (float10)_DAT_0064a770) * (float10)_DAT_0064a770);
    if (fVar9 < (float10)_DAT_0064a6c0) {
      fVar9 = (float10)_DAT_0064a6c0;
    }
    if (fVar9 < (float10)param_3) {
      return fVar9;
    }
  }
  return (float10)param_3;
}

