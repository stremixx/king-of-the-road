
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00541c60(float *param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  
  fVar3 = (float10)_DAT_0064b254;
  iVar2 = 9;
  pfVar1 = param_1;
  do {
    fVar3 = fVar3 + ABS((float10)*(float *)((param_2 - (int)param_1) + (int)pfVar1)) *
                    (float10)*pfVar1;
    pfVar1 = pfVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pfVar1 = (float *)(param_2 + 0x38);
  param_1 = param_1 + 9;
  iVar2 = 0x1b;
  do {
    fVar3 = fVar3 + ABS((float10)*pfVar1) * (float10)*param_1;
    pfVar1 = pfVar1 + 1;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return fVar3;
}

