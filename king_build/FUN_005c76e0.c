
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall
FUN_005c76e0(undefined4 param_1,float *param_2,float *param_3,float *param_4,float param_5,
            float param_6,float param_7,float param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = 1;
  fVar1 = param_8;
  if ((_DAT_0064b338 < param_8) && (iVar5 = __ftol(param_1), fVar1 = _DAT_0064b338, iVar5 < 1)) {
    return (float10)param_7 + (float10)param_8;
  }
  fVar4 = param_5 * _DAT_0064c484;
  do {
    fVar2 = fVar1 * *param_3 + *param_4;
    if (ABS(fVar2) <= fVar4) {
      *param_4 = fVar2;
      fVar2 = fVar1 * *param_2 + *param_3;
      *param_3 = fVar2;
      fVar3 = param_5 * *param_4 * _DAT_00650c7c;
      fVar2 = fVar2 * _DAT_0064b248;
    }
    else {
      fVar3 = fVar4;
      if (fVar2 <= _DAT_0064b254) {
        fVar3 = param_5 * _DAT_00650c80;
      }
      *param_4 = fVar3;
      fVar2 = fVar1 * *param_2 + *param_3;
      *param_3 = fVar2;
      fVar3 = param_5 * *param_4 * _DAT_00650c7c;
      fVar2 = fVar2 * _DAT_0064b340;
    }
    *param_2 = fVar3 - fVar2;
    if (DAT_00701518 == 0) {
      fVar2 = param_5 * param_5 * param_6 * _DAT_00650c74;
    }
    else {
      fVar2 = param_5 * *(float *)(DAT_00701518 + 0x214) * param_5 * param_6 * _DAT_00650c78;
    }
    iVar5 = iVar5 + -1;
    *param_2 = fVar2 + *param_2;
  } while (iVar5 != 0);
  return (float10)param_7 + (float10)param_8;
}

