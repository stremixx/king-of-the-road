
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall
FUN_004ea3e8(float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  
  if (param_3 <= _DAT_0064b254) {
    FUN_004e1e9c(s_Filter_____time0<_0_00673294);
  }
  param_1[5] = param_2;
  param_1[6] = param_4;
  fVar1 = (float)__ftol();
  param_1[7] = fVar1;
  *param_1 = param_3;
  param_1[1] = _DAT_0064b240 / *param_1;
  fVar1 = (float)FUN_00631d33((int)param_1[7] << 2);
  param_1[2] = fVar1;
  fVar1 = (float)FUN_00631d33((int)param_1[7] << 2);
  param_1[3] = fVar1;
  param_1[4] = param_5;
  FUN_004ea4ef();
  return param_1;
}

