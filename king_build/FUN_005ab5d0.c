
void FUN_005ab5d0(float *param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float local_30 [5];
  float local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  fVar3 = (float10)fsin((float10)param_2);
  pfVar1 = local_30 + 2;
  iVar2 = 4;
  fVar4 = (float10)fcos((float10)param_2);
  do {
    pfVar1[-2] = 0.0;
    pfVar1[-1] = 0.0;
    *pfVar1 = 0.0;
    pfVar1 = pfVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_30[0] = 1.0;
  local_30[1] = 0.0;
  local_30[3] = 0.0;
  local_30[2] = 0.0;
  local_30[4] = (float)fVar4;
  local_18 = 0;
  local_1c = (float)fVar3;
  local_14 = (float)-fVar3;
  local_c = 0;
  local_10 = (float)fVar4;
  local_8 = 0;
  local_4 = 0;
  pfVar1 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

