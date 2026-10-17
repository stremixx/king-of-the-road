
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00611780(int param_1,float param_2,float param_3,float param_4,float *param_5,float *param_6,
            float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  local_24 = *param_5;
  local_20 = param_5[1];
  local_1c = param_5[2] * _DAT_0064b2e8;
  pfVar5 = (float *)FUN_005aaad0(local_c,&local_24);
  local_24 = *pfVar5;
  local_18 = *(float *)(param_1 + 4) - param_2;
  local_20 = pfVar5[1];
  local_14 = *(float *)(param_1 + 8) - param_3;
  local_1c = pfVar5[2];
  local_10 = *(float *)(param_1 + 0xc) - param_4;
  pfVar5 = (float *)FUN_005aaad0(local_c,&local_18);
  fVar1 = pfVar5[1];
  fVar2 = local_24 * *pfVar5 + local_1c * pfVar5[2] + local_20 * fVar1;
  local_30 = (local_24 + local_24) * fVar2 - *pfVar5;
  fVar3 = (local_1c + local_1c) * fVar2 - pfVar5[2];
  fVar4 = _DAT_0064f3d0;
  if ((((float)_DAT_0064a738 <= ABS(fVar3)) && (fVar4 = _DAT_0064b240, fVar3 <= _DAT_0064b240)) &&
     (fVar4 = fVar3, fVar3 < _DAT_0064b928)) {
    fVar4 = _DAT_0064b928;
  }
  if (_DAT_0064b928 <= local_30) {
    if (_DAT_0064b240 < local_30) {
      local_30 = 1.0;
    }
  }
  else {
    local_30 = -1.0;
  }
  *param_6 = (local_30 * _DAT_0065210c) / ABS(fVar4) + _DAT_0064b248;
  *param_7 = (((local_20 + local_20) * fVar2 - fVar1) * _DAT_0065210c) / ABS(fVar4) + _DAT_0064b248;
  return;
}

