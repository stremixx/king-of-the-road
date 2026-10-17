
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00610040(int *param_1,uint *param_2,uint *param_3,uint *param_4,int param_5)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  uVar1 = *(uint *)(param_5 + 0x18);
  uVar8 = (**(code **)(*param_1 + 0x10))();
  if (uVar8 <= uVar1) {
    return (float10)_DAT_0064b254;
  }
  fVar2 = (float)param_1[1];
  fVar3 = (float)param_1[2];
  fVar4 = (float)param_1[3];
  fVar7 = ((float)*param_3 * (float)param_1[0x30] + (float)param_1[0x2c] +
          (float)*param_2 * (float)param_1[0x30] + (float)param_1[0x2c] +
          (float)*param_4 * (float)param_1[0x30] + (float)param_1[0x2c]) * _DAT_0064b8f4;
  fVar6 = ((float)param_4[1] * (float)param_1[0x31] + (float)param_1[0x2f] +
          (float)param_3[1] * (float)param_1[0x31] + (float)param_1[0x2f] +
          (float)param_2[1] * (float)param_1[0x31] + (float)param_1[0x2f]) * _DAT_0064b8f4;
  fVar5 = SQRT((float)param_1[6] * (float)param_1[6] +
               (float)param_1[5] * (float)param_1[5] + (float)param_1[4] * (float)param_1[4]);
  FUN_0041ce10((float)param_1[4] / fVar5,(float)param_1[5] / fVar5,(float)param_1[6] / fVar5);
  fVar7 = fVar7 - fVar2;
  fVar6 = fVar6 - fVar3;
  fVar4 = -fVar4;
  fVar2 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4);
  if ((fVar7 / fVar2) * fStack_c + fStack_8 * (fVar6 / fVar2) + fStack_4 * (fVar4 / fVar2) <=
      DAT_00724dc0) {
    return (float10)_DAT_0064b254;
  }
  return (float10)_DAT_0064a660 /
         (SQRT((float10)fVar6 * (float10)fVar6 + (float10)fVar7 * (float10)fVar7) +
         (float10)_DAT_0064a660);
}

