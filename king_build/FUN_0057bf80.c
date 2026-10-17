
void FUN_0057bf80(float param_1,float param_2,int param_3,uint param_4)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float local_4;
  
  uVar3 = 0;
  uVar2 = 0;
  local_4 = 3.4028235e+38;
  if (param_4 != 0) {
    pfVar4 = (float *)(param_3 + 0x38);
    do {
      fVar1 = SQRT((param_2 - *pfVar4) * (param_2 - *pfVar4) +
                   (param_1 - pfVar4[-1]) * (param_1 - pfVar4[-1]));
      if (fVar1 < local_4) {
        uVar3 = uVar2;
        local_4 = fVar1;
      }
      uVar2 = uVar2 + 1;
      pfVar4 = pfVar4 + 0x34;
    } while (uVar2 < param_4);
  }
  param_3 = uVar3 * 0xd0 + param_3;
  FUN_0057be90(param_1,param_2,*(float *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x44),
               *(undefined4 *)(param_3 + 0x48),
               -(*(float *)(param_3 + 0x40) * *(float *)(param_3 + 0x34) +
                *(float *)(param_3 + 0x44) * *(float *)(param_3 + 0x38) +
                *(float *)(param_3 + 0x48) * *(float *)(param_3 + 0x3c)));
  return;
}

