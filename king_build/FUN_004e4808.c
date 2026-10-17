
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e4808(float param_1,float param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float local_58;
  uint uStack_48;
  float local_2c;
  float local_20;
  float local_1c;
  
  fVar3 = (float10)FUN_004e1080(param_3,param_3);
  local_20 = (param_1 * param_1) / (float)fVar3;
  if (_DAT_0064b240 < local_20) {
    local_20 = 1.0;
  }
  fVar3 = (float10)FUN_0061ed94((double)local_20);
  local_1c = (float)fVar3;
  if ((float10)_DAT_0064a660 < fVar3) {
    local_1c = 1.0;
  }
  local_1c = param_2 * local_1c;
  if (_DAT_0064b240 < local_1c) {
    local_1c = 1.0;
  }
  fVar3 = (float10)FUN_0061ea40((double)*param_3);
  fVar4 = (float10)FUN_0061ea40((double)param_3[1]);
  if ((float10)(double)fVar3 <= fVar4 * (float10)1.0) {
    fVar1 = *param_3;
    fVar2 = (float)_DAT_0064a6d0;
    fVar3 = (float10)FUN_0061ea40((double)param_3[1]);
    local_2c = (float)((float10)_DAT_0064a6d0 - (float10)(fVar1 * fVar2) / (fVar3 * (float10)1.0));
  }
  else {
    if (*param_3 <= (float)_DAT_0064a668) {
      uStack_48 = 0x3ff00000;
    }
    else {
      uStack_48 = 0;
    }
    local_2c = (float)(double)((ulonglong)uStack_48 << 0x20);
  }
  if (local_2c <= (float)_DAT_0064a6d0) {
    local_58 = _DAT_0064b240 - local_2c;
  }
  else {
    local_58 = local_2c;
  }
  *param_4 = (local_1c * local_2c) / local_58;
  *param_5 = ((_DAT_0064b240 - local_2c) * local_1c) / local_58;
  return;
}

