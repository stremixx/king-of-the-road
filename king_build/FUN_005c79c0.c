
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c79c0(float *param_1,int param_2,float param_3)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float10 fVar7;
  
  if ((((param_2 != 0) && (*(int *)(param_2 + 0x44) == 0xc)) && (*(int *)(param_2 + 0x48) != 0)) &&
     ((param_3 == 0.0 || (iVar6 = FUN_005c8000(param_2,param_3), iVar6 == 0)))) {
    fVar7 = (float10)FUN_005aabc0(param_1,*(undefined4 *)(param_2 + 0x20));
    iVar6 = FUN_005c79a0((float)fVar7);
    if ((iVar6 == 0) || (iVar6 = FUN_005c8000(param_2,param_3), iVar6 == 0)) {
      fVar1 = param_1[1];
      fVar4 = *(float *)(param_2 + 0x20) * _DAT_0064b8f4;
      pfVar2 = *(float **)(param_2 + 0x48);
      param_3 = *param_1;
      if (fVar4 < *param_1) {
        param_3 = fVar4;
      }
      fVar3 = -fVar4;
      if (param_3 < fVar3) {
        param_3 = fVar3;
      }
      fVar5 = fVar4 * *pfVar2 * _DAT_0064b878 - param_3 * _DAT_0064b2f4;
      param_3 = fVar5 + param_3;
      if (_DAT_0064b254 <= param_3 * fVar5) {
        param_3 = 0.0;
      }
      pfVar2[1] = param_3 + pfVar2[1];
      if (fVar4 < fVar1) {
        fVar1 = fVar4;
      }
      if (fVar1 < fVar3) {
        fVar1 = fVar3;
      }
      fVar4 = fVar4 * pfVar2[4] * _DAT_0064b878 - param_3 * _DAT_0064b2f4;
      fVar1 = fVar4 + fVar1;
      if (_DAT_0064b254 <= fVar1 * fVar4) {
        fVar1 = _DAT_0064b254;
      }
      pfVar2[5] = fVar1 + pfVar2[5];
    }
  }
  return;
}

