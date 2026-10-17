
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004714a0(int param_1,double param_2,char param_3,double *param_4,double *param_5)

{
  double dVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00471440(param_1);
  dVar1 = (double)fVar2;
  if (((float10)_DAT_0064ab98 < fVar2) || (dVar1 < _DAT_0064a668)) {
    FUN_00401010(0,200,s__C__Nek_Vrappl_Gi_Htai_Ai_ordr_c_0066e8a7 + 1,
                 s__Id__ai_ordr_cpp_2001_9_10_18_14_0066e7c8,0xbb,s_Internal_error_09458_0066e908,
                 &DAT_0068c120,&DAT_0068c120);
  }
  if (param_5 != (double *)0x0) {
    *param_5 = dVar1;
  }
  fVar2 = (float10)*(double *)(param_1 + 0x40);
  if ((((param_3 != '\0') && (param_2 == _DAT_0064a668)) && ((float10)_DAT_0064a668 < fVar2)) &&
     (*(int *)(param_1 + 0x68) == 1)) {
    fVar2 = fVar2 * (float10)_DAT_0066e878;
  }
  if (param_4 != (double *)0x0) {
    *param_4 = (double)fVar2;
  }
  fVar2 = fVar2 - (float10)dVar1;
  if (fVar2 < (float10)_DAT_0064ab90) {
    FUN_00401010(0,200,s__C__Nek_Vrappl_Gi_Htai_Ai_ordr_c_0066e8a7 + 1,
                 s__Id__ai_ordr_cpp_2001_9_10_18_14_0066e7c8,0xc9,s_Internal_error_09459_0066e8f0,
                 &DAT_0068c120,&DAT_0068c120);
    fVar2 = (float10)(double)fVar2;
  }
  return fVar2;
}

