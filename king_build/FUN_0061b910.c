
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061b910(float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  float local_28 [4];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_28[0] = (*param_2 + *param_3) * _DAT_0064b248;
  local_28[1] = (param_2[1] + param_3[1]) * _DAT_0064b248;
  local_10 = param_3[6];
  local_28[3] = (param_2[3] + param_3[3]) * _DAT_0064b248;
  local_c = param_3[7];
  local_28[2] = (param_2[2] + param_3[2]) * _DAT_0064b248;
  local_14 = (param_2[5] + param_3[5]) * _DAT_0064b248;
  local_8 = param_3[8];
  local_18 = (param_2[4] + param_3[4]) * _DAT_0064b248;
  local_4 = param_3[9];
  pfVar2 = local_28;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

