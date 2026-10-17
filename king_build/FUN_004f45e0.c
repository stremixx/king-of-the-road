
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004f45e0(int param_1,float param_2,float param_3)

{
  double dVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (param_1 == 7) {
    fVar2 = ABS((float10)param_2);
    fVar3 = (float10)_DAT_0064a6c0 / (ABS((float10)param_3) + (float10)_DAT_0064a6c0);
    fVar3 = fVar2 + fVar3 * fVar3 * (float10)_DAT_0064a830;
    return (((fVar2 * fVar2) / (fVar3 * fVar3)) * (float10)_DAT_0064c340) /
           (fVar2 + (float10)_DAT_0064b2ec);
  }
  if (param_1 == 5) {
    fVar2 = ABS((float10)param_2);
    fVar3 = (fVar2 - (float10)_DAT_0064a5a8) * (float10)_DAT_0064c9d8;
    dVar1 = (double)(fVar2 + (float10)_DAT_0064a5a8);
    fVar4 = (float10)1.4426950408889634 * -(fVar3 * fVar3);
    fVar3 = ROUND(fVar4);
    fVar4 = (float10)f2xm1(fVar4 - fVar3);
    fVar3 = (float10)fscale((float10)1 + fVar4,fVar3);
    return ((fVar2 * fVar2) / ((fVar2 + (float10)_DAT_0064b3fc) * (float10)dVar1 * (float10)dVar1) +
           (fVar2 * fVar3 * (float10)_DAT_0064c9d0) / (fVar2 + (float10)_DAT_0064a5a8)) *
           (float10)_DAT_0064c2e8;
  }
  if (param_1 == 0) {
    fVar2 = (float10)fsin((float10)param_2);
    fVar2 = ABS(fVar2);
    return ((float10)_DAT_0064b240 - fVar2) * (float10)_DAT_006733a4 * fVar2 + fVar2;
  }
  if (param_1 != 1) {
    if (param_1 == 2) {
      fVar2 = (float10)fsin((float10)param_2);
      return ((float10)_DAT_0064b240 - (float10)_DAT_006733ac) * ABS(fVar2) + (float10)_DAT_006733ac
      ;
    }
    if (param_1 == 3) {
      fVar2 = (float10)fsin((float10)param_2);
      if (ABS(fVar2) <= (float10)_DAT_006733b0) {
        return ((float10)_DAT_0064b240 - (float10)_DAT_006733b4) *
               (ABS(fVar2) / (float10)_DAT_006733b0) + (float10)_DAT_006733b4;
      }
    }
    else {
      if (param_1 == 4) {
        fVar2 = (float10)fsin((float10)param_2);
        fVar2 = ABS(fVar2);
        if (fVar2 <= (float10)_DAT_006733b0) {
          fVar3 = ((float10)_DAT_0064b240 - (float10)_DAT_006733b4) *
                  (fVar2 / (float10)_DAT_006733b0) + (float10)_DAT_006733b4;
        }
        else {
          fVar3 = (float10)_DAT_0064b240;
        }
        return (float10)_DAT_006733b8 * fVar2 + fVar3;
      }
      if ((param_1 == 6) &&
         (fVar2 = (float10)fsin((float10)param_2), ABS(fVar2) <= (float10)_DAT_0064a5a8)) {
        return (float10)_DAT_0064b254;
      }
    }
    return (float10)_DAT_0064b240;
  }
  fVar2 = (float10)fsin((float10)param_2);
  fVar2 = ABS(fVar2);
  return ((float10)_DAT_0064b240 - fVar2) * ((float10)_DAT_006733ac + fVar2) *
         (float10)_DAT_006733a8 + fVar2;
}

