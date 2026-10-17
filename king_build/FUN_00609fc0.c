
void FUN_00609fc0(float *param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float local_40 [4];
  float local_30;
  float local_2c;
  
  fVar3 = (float10)fcos((float10)param_2);
  fVar4 = (float10)fsin((float10)param_2);
  FUN_00609f70(local_40);
  local_30 = (float)fVar4;
  local_40[0] = (float)fVar3;
  local_40[1] = -(float)fVar4;
  local_2c = (float)fVar3;
  pfVar2 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

