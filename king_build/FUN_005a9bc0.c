
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005a9bc0(int *param_1,float param_2,float param_3)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = (float10)*(double *)(*param_1 + 0xb98);
  fVar1 = (float)*(double *)(*param_1 + 0xb98);
  fVar2 = (((float10)(param_2 - (float)((float10)((float)param_1[1] * _DAT_0064b310) * fVar2)) *
            (float10)(float)param_1[1] +
           (float10)(float)param_1[3] * -(fVar2 * (float10)((float)param_1[3] * _DAT_0064b310)) +
           (float10)(param_3 - (float)((float10)((float)param_1[2] * _DAT_0064b310) * fVar2)) *
           (float10)(float)param_1[2]) * (float10)_DAT_0064c8f8) /
          (float10)*(double *)(param_1 + 10);
  fVar3 = (((float10)(float)param_1[4] *
            ((float10)param_2 - (float10)(float)param_1[4] * (float10)_DAT_0064b310 * (float10)fVar1
            ) + -(float10)((float)param_1[6] * _DAT_0064b310 * fVar1) * (float10)(float)param_1[6] +
                (float10)(float)param_1[5] *
                ((float10)param_3 - (float10)((float)param_1[5] * _DAT_0064b310 * fVar1))) *
          (float10)_DAT_0064c8f8) / (float10)*(double *)(param_1 + 0xc);
  fVar4 = (float10)fsin(fVar3 * (float10)_DAT_0064a6d0);
  fVar4 = (float10)fsin(fVar4 * (float10)_DAT_0064c8f0 + fVar2);
  fVar2 = (float10)fsin(fVar2 * (float10)_DAT_0064a6d0);
  fVar2 = (float10)fsin(fVar2 * (float10)_DAT_0064c8f0 + fVar3);
  return fVar2 * (float10)*(double *)(param_1 + 0x12) + fVar4 * (float10)*(double *)(param_1 + 0x12)
  ;
}

