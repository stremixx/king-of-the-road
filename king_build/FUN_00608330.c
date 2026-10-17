
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00608330(int param_1,float *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  
  uVar3 = *param_3;
  uVar4 = param_3[1];
  fVar5 = (float)uVar3 - *(float *)(param_1 + 0x9cf8);
  fVar6 = fVar5 * _DAT_0064c484;
  fVar7 = (float)uVar4 - *(float *)(param_1 + 0x9cfc);
  fVar8 = fVar7 * _DAT_0064c484;
  fVar5 = fVar5 * _DAT_0064b8f4;
  fVar7 = fVar7 * _DAT_0064b8f4;
  FUN_00608560(uVar3,uVar4,&DAT_007232d8);
  fVar9 = (float10)FUN_00608530(uVar3,uVar4);
  fVar1 = *(float *)(param_1 + 0x9cdc);
  fVar2 = *(float *)(param_1 + 0x9cd4);
  *param_2 = (float)uVar3 * *(float *)(param_1 + 0x9cd8) + *(float *)(param_1 + 0x9cc8);
  param_2[1] = (float)uVar4 * fVar1 + fVar2;
  param_2[2] = (float)fVar9;
  param_2[3] = DAT_007232d8;
  param_2[4] = DAT_007232dc;
  fVar1 = DAT_007232e0;
  param_2[6] = fVar6;
  param_2[7] = fVar8;
  param_2[8] = fVar5;
  param_2[9] = fVar7;
  param_2[5] = fVar1;
  return;
}

