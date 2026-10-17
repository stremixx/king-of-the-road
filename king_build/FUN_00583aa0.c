
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00583aa0(undefined4 param_1,int param_2,float *param_3,float *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined1 local_30 [36];
  float local_c;
  float local_8;
  float local_4;
  
  uVar5 = FUN_0057d5d0();
  FUN_0057d570(local_30);
  local_60 = local_c;
  local_5c = local_8;
  local_58 = local_4;
  local_54 = *(float *)(param_2 + 0x24);
  local_50 = *(float *)(param_2 + 0x28);
  local_4c = *(float *)(param_2 + 0x2c);
  uVar6 = FUN_004e5e08(param_1,uVar5,&local_60,&local_54,param_5);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  fVar2 = *(float *)(param_5 + 0x34) - local_60;
  fVar3 = *(float *)(param_5 + 0x38) - local_5c;
  fVar4 = *(float *)(param_5 + 0x3c) - local_58;
  *param_4 = (*(float *)(param_5 + 0x34) - local_54) * *(float *)(param_5 + 0x40) +
             (*(float *)(param_5 + 0x38) - local_50) * *(float *)(param_5 + 0x44) +
             (*(float *)(param_5 + 0x3c) - local_4c) * *(float *)(param_5 + 0x48);
  fVar1 = (local_4c - local_58) * (local_4c - local_58) +
          (local_50 - local_5c) * (local_50 - local_5c) +
          (local_54 - local_60) * (local_54 - local_60);
  fVar2 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
  if (((float)_DAT_0064a6c8 <= fVar2) && ((float)_DAT_0064a6c8 <= fVar1)) {
    fVar2 = fVar2 / fVar1;
    if ((float)_DAT_0064a660 < fVar2) {
      fVar2 = _DAT_0064b240;
    }
    *param_3 = SQRT(fVar2) * *param_3;
    return 1;
  }
  *param_3 = 0.0;
  return 2;
}

