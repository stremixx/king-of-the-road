
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b85b0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float local_38;
  
  iVar9 = _rand();
  local_38 = (float)iVar9 * _DAT_0064b244;
  iVar9 = _rand();
  fVar7 = (float)iVar9 * _DAT_0064b244;
  if (_DAT_0064b240 < fVar7 + local_38) {
    local_38 = _DAT_0064b240 - local_38;
    fVar7 = _DAT_0064b240 - fVar7;
  }
  fVar8 = (_DAT_0064b240 - local_38) - fVar7;
  fVar1 = param_4[1];
  fVar2 = param_4[2];
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  *param_1 = local_38 * *param_2 + fVar7 * *param_3 + fVar8 * *param_4;
  param_1[1] = fVar8 * fVar1 + fVar7 * fVar3 + local_38 * fVar5;
  param_1[2] = fVar8 * fVar2 + fVar7 * fVar4 + local_38 * fVar6;
  return;
}

