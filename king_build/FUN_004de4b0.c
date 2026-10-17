
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004de4b0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_c;
  float local_8;
  
  if (DAT_006d0fd8 == 0) {
    return (float10)_DAT_0064b254;
  }
  fVar5 = (float10)FUN_004e2035();
  fVar1 = (float)((fVar5 - (float10)*(float *)(DAT_00695c10 + 0x13f0)) * (float10)_DAT_0064c66c);
  fVar6 = (float10)_DAT_0064b240;
  fVar2 = (float)((float10)*(double *)(DAT_00695c00 + 0xb90) * (float10)_DAT_0064a818);
  if (fVar1 < _DAT_0064b240) {
    fVar6 = (float10)fsin(((float10)fVar1 - (float10)_DAT_0064a6d0) * (float10)_DAT_0064a818);
    fVar6 = (fVar6 + (float10)_DAT_0064a660) * (float10)_DAT_0064a6d0;
  }
  if ((DAT_00695c74 != 0) && (ABS(_DAT_006d0af8) < (float)_DAT_0064a590)) {
    DAT_00695c74 = 0;
  }
  if (*(int *)(DAT_006d0fd8 + 0x574) < 0) {
    fVar1 = (float)((((float10)*(float *)(DAT_00695c10 + 0x1404) -
                     (float10)*(float *)(DAT_00695c10 + 0x1410)) * fVar6 +
                    (float10)*(float *)(DAT_00695c10 + 0x1410)) * (float10)_DAT_00671d88);
    local_c = fVar2 * (float)_DAT_0064a6d0 + _DAT_00695c70;
    if (fVar1 < local_c) goto LAB_004de757;
  }
  else {
    if (*(int *)(DAT_006d0fd8 + 0x574) < 1) {
      fVar1 = *(float *)(DAT_00695c10 + 0x13f4) * _DAT_0064c66c;
      if (_DAT_0064b240 < fVar1) {
        fVar1 = _DAT_0064b240;
      }
      fVar4 = *(float *)(DAT_00695c10 + 0x13f8) * _DAT_0064c66c;
      if (_DAT_0064b240 < fVar4) {
        fVar4 = _DAT_0064b240;
      }
      fVar1 = (_DAT_0064b240 - fVar1) +
              ((float)fVar5 - *(float *)(DAT_00695c10 + 0x1400)) * _DAT_0064c668;
      fVar4 = (_DAT_0064b240 - fVar4) +
              ((float)fVar5 - *(float *)(DAT_00695c10 + 0x13fc)) * _DAT_0064c668;
      if ((fVar4 <= _DAT_0064b240) || (fVar1 <= _DAT_0064b240)) {
        if (_DAT_0064b240 <= fVar1) {
          fVar5 = (float10)fsin(((float10)fVar4 - (float10)_DAT_0064a6d0) * (float10)_DAT_0064a818);
          local_c = (float)((float10)_DAT_00671d88 *
                           (((float10)*(float *)(DAT_00695c10 + 0x1410) -
                            (float10)*(float *)(DAT_00695c10 + 0x1404)) *
                            (fVar5 + (float10)_DAT_0064a660) * (float10)_DAT_0064a6d0 +
                           (float10)*(float *)(DAT_00695c10 + 0x1404)));
        }
        else {
          fVar5 = (float10)fsin(((float10)fVar1 - (float10)_DAT_0064a6d0) * (float10)_DAT_0064a818);
          local_c = (float)((float10)_DAT_00671d88 *
                           (((float10)*(float *)(DAT_00695c10 + 0x1410) -
                            (float10)*(float *)(DAT_00695c10 + 0x141c)) *
                            (fVar5 + (float10)_DAT_0064a660) * (float10)_DAT_0064a6d0 +
                           (float10)*(float *)(DAT_00695c10 + 0x141c)));
        }
      }
      else {
        local_c = _DAT_00671d88 * *(float *)(DAT_00695c10 + 0x1410);
      }
      goto LAB_004de757;
    }
    fVar1 = (float)((((float10)*(float *)(DAT_00695c10 + 0x141c) -
                     (float10)*(float *)(DAT_00695c10 + 0x1410)) * fVar6 +
                    (float10)*(float *)(DAT_00695c10 + 0x1410)) * (float10)_DAT_00671d88);
    local_c = _DAT_00695c70 - fVar2 * (float)_DAT_0064a6d0;
    if (local_c < fVar1) goto LAB_004de757;
  }
  local_c = fVar1;
LAB_004de757:
  if ((((DAT_006d0fd8 != 0) && (*(int *)(DAT_006d0fd8 + 0x268) != 0)) &&
      (iVar3 = *(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460), iVar3 != 0)) &&
     (DAT_00695bc0 != 0)) {
    local_8 = -*(float *)(iVar3 + 0x3368);
    if (local_8 <= _DAT_0064c664) {
      if (_DAT_0064c660 <= local_8) {
        local_8 = 0.0;
      }
      else {
        local_8 = local_8 + _DAT_0064c664;
      }
    }
    else {
      local_8 = local_8 - _DAT_0064c664;
    }
    FUN_004ea55e(local_8,s_makeWz_00671ed4);
    fVar5 = (float10)FUN_004ea828();
    fVar5 = fVar5 * (float10)*(float *)(*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460) + 0x3330)
            * (float10)_DAT_0064c658;
    if (fVar5 <= (float10)_DAT_0064c654) {
      if (fVar5 < (float10)_DAT_0064c650) {
        fVar5 = (float10)_DAT_0064c650;
      }
    }
    else {
      fVar5 = (float10)_DAT_0064c654;
    }
    local_c = (float)(fVar5 + (float10)local_c);
  }
  fVar1 = _DAT_00671d88 * *(float *)(DAT_00695c10 + 0x1404);
  if (fVar1 < local_c) {
    local_c = fVar1;
  }
  fVar1 = _DAT_00671d88 * *(float *)(DAT_00695c10 + 0x141c);
  if (local_c < fVar1) {
    local_c = fVar1;
  }
  fVar5 = (float10)local_c - (float10)_DAT_00695c70;
  fVar2 = fVar2 + fVar2;
  if (fVar5 <= (float10)fVar2) {
    if (fVar5 < (float10)-fVar2) {
      fVar5 = (float10)-fVar2;
    }
    fVar6 = (float10)_DAT_00695c70;
    _DAT_00695c70 = (float)(fVar5 + fVar6);
    return fVar5 + fVar6;
  }
  fVar5 = (float10)_DAT_00695c70;
  _DAT_00695c70 = (float)((float10)fVar2 + fVar5);
  return (float10)fVar2 + fVar5;
}

