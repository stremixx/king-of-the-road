
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_005abf10(float *param_1,float *param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  local_18 = param_6 - param_3;
  local_14 = param_7 - param_4;
  local_10 = param_8 - param_5;
  pfVar4 = (float *)FUN_005aaad0(local_c,&local_18);
  fVar1 = pfVar4[1];
  fVar2 = pfVar4[2];
  fVar3 = fVar2 * param_1[2] + *param_1 * *pfVar4 + param_1[1] * fVar1;
  if (ABS(fVar3) < (float)_DAT_0064a738) {
    return 0;
  }
  fVar3 = -((param_5 * param_1[2] + *param_1 * param_3 + param_1[1] * param_4 + param_1[3]) / fVar3)
  ;
  *param_2 = *pfVar4 * fVar3 + param_3;
  param_2[1] = fVar1 * fVar3 + param_4;
  param_2[2] = fVar3 * fVar2 + param_5;
  if ((param_3 < *param_2) && (param_6 < *param_2)) {
    return 2;
  }
  if ((*param_2 < param_3) && (*param_2 < param_6)) {
    return 2;
  }
  if ((param_4 < param_2[1]) && (param_7 < param_2[1])) {
    return 2;
  }
  if ((param_2[1] < param_4) && (param_2[1] < param_7)) {
    return 2;
  }
  if ((param_5 < param_2[2]) && (param_8 < param_2[2])) {
    return 2;
  }
  if ((param_2[2] < param_5) && (param_2[2] < param_8)) {
    return 2;
  }
  if (((*param_2 == param_3) && (param_2[1] == param_4)) && (param_2[2] == param_5)) {
    return 2;
  }
  if (((*param_2 != param_6) || (param_2[1] != param_7)) || (uVar5 = 2, param_2[2] != param_8)) {
    uVar5 = 1;
  }
  return uVar5;
}

