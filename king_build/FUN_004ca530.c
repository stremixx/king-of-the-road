
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004ca530(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = DAT_00701580 * *(float *)(DAT_006d0fd8 + 0x590) +
            DAT_00701584 * *(float *)(DAT_006d0fd8 + 0x59c) +
            DAT_00701588 * *(float *)(DAT_006d0fd8 + 0x5a8);
  local_8 = DAT_00701580 * *(float *)(DAT_006d0fd8 + 0x594) +
            DAT_00701584 * *(float *)(DAT_006d0fd8 + 0x5a0) +
            DAT_00701588 * *(float *)(DAT_006d0fd8 + 0x5ac);
  local_4 = DAT_00701580 * *(float *)(DAT_006d0fd8 + 0x598) +
            DAT_00701584 * *(float *)(DAT_006d0fd8 + 0x5a4) +
            DAT_00701588 * *(float *)(DAT_006d0fd8 + 0x5b0);
  local_24 = *param_1 -
             (DAT_007015b0 * *(float *)(DAT_006d0fd8 + 0x590) +
              DAT_007015b4 * *(float *)(DAT_006d0fd8 + 0x59c) +
              DAT_007015b8 * *(float *)(DAT_006d0fd8 + 0x5a8) + *(float *)(DAT_006d0fd8 + 0x5b4));
  local_20 = param_1[1] -
             (DAT_007015b0 * *(float *)(DAT_006d0fd8 + 0x594) +
              DAT_007015b4 * *(float *)(DAT_006d0fd8 + 0x5a0) +
              DAT_007015b8 * *(float *)(DAT_006d0fd8 + 0x5ac) + *(float *)(DAT_006d0fd8 + 0x5b8));
  local_1c = param_1[2] -
             (DAT_007015b0 * *(float *)(DAT_006d0fd8 + 0x598) +
              DAT_007015b4 * *(float *)(DAT_006d0fd8 + 0x5a4) +
              DAT_007015b8 * *(float *)(DAT_006d0fd8 + 0x5b0) + *(float *)(DAT_006d0fd8 + 0x5bc));
  local_18 = local_24;
  local_14 = local_20;
  local_10 = local_1c;
  fVar5 = (float10)FUN_005aabc0(&local_24);
  if (fVar5 <= (float10)_DAT_0064b240) {
    return (float10)_DAT_0064b240;
  }
  fVar3 = local_24 * local_c + local_20 * local_8 + local_1c * local_4;
  fVar1 = param_1[3];
  if ((_DAT_00670724 <= fVar3 + fVar1) && (fVar2 = param_1[3], fVar3 - fVar2 <= _DAT_0067071c)) {
    fVar4 = _DAT_0064b240 / (float)fVar5;
    if (_DAT_0064b240 <= fVar4 * param_1[3]) {
      return (float10)_DAT_0064b240;
    }
    fVar5 = (float10)FUN_0061e4b0();
    fVar5 = (float10)fcos(fVar5 + (float10)_DAT_00670728);
    fVar6 = (float10)fVar3 * (float10)fVar4;
    if (fVar3 <= _DAT_0064b254) {
      fVar6 = -fVar6;
    }
    if (fVar5 < fVar6) {
      if (fVar3 <= _DAT_0064b254) {
        fVar5 = (float10)(fVar3 + fVar1) / (float10)_DAT_00670724;
        if ((float10)_DAT_0064b240 < fVar5) {
          return (float10)_DAT_0064b240 - (float10)_DAT_0064b240;
        }
        if (fVar5 < (float10)_DAT_0064b254) {
          fVar5 = (float10)_DAT_0064b254;
        }
      }
      else {
        fVar5 = ((float10)(fVar3 - fVar2) - (float10)_DAT_00670720) /
                ((float10)_DAT_0067071c - (float10)_DAT_00670720);
        if ((float10)_DAT_0064b240 < fVar5) {
          return (float10)_DAT_0064b240 - (float10)_DAT_0064b240;
        }
        if (fVar5 < (float10)_DAT_0064b254) {
          return (float10)_DAT_0064b240 - (float10)_DAT_0064b254;
        }
      }
      return (float10)_DAT_0064b240 - fVar5;
    }
  }
  return (float10)_DAT_0064b928;
}

