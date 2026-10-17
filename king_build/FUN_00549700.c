
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00549700(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)*(float *)(*(int *)(param_1 + 0x14) + 8);
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0xc);
  if (iVar1 == 1) {
    *param_2 = (float)((fVar2 * (float10)_DAT_0064c308) / (fVar2 + (float10)_DAT_0064b310) +
                      (float10)_DAT_0064a830);
    *param_3 = (float)((fVar2 * (float10)_DAT_0064ba68) / (fVar2 + (float10)_DAT_0064b31c) +
                      (float10)_DAT_0064c308);
    return (float10)*param_2;
  }
  if (iVar1 == 2) {
    *param_2 = (float)((fVar2 * (float10)_DAT_0064a888) / (fVar2 + (float10)_DAT_0064b310) +
                      (float10)_DAT_0064a830);
    *param_3 = (float)((fVar2 * (float10)_DAT_0064ba68) / (fVar2 + (float10)_DAT_0064b31c) +
                      (float10)_DAT_0064c308);
    return (float10)*param_2;
  }
  if (iVar1 == 4) {
    fVar3 = (float10)_DAT_0064b928;
    *param_3 = 0.0;
    *param_2 = 1.0;
    fVar3 = (float10)1.4426950408889634 * fVar2 * fVar2 * fVar3;
    fVar2 = ROUND(fVar3);
    fVar3 = (float10)f2xm1(fVar3 - fVar2);
    fVar2 = (float10)fscale((float10)1 + fVar3,fVar2);
    return fVar2;
  }
  if (iVar1 == 3) {
    fVar3 = (float10)_DAT_0064e734;
    *param_2 = 1.0;
    *param_3 = 1.0;
    fVar3 = (float10)1.4426950408889634 * fVar2 * fVar3;
    fVar2 = ROUND(fVar3);
    fVar3 = (float10)f2xm1(fVar3 - fVar2);
    fVar2 = (float10)fscale((float10)1 + fVar3,fVar2);
    return fVar2;
  }
  fVar2 = (float10)_DAT_0064b254;
  *param_2 = 0.0;
  *param_3 = 0.0;
  return fVar2;
}

