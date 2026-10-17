
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00506dd0(int param_1,int param_2,undefined4 param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float local_14;
  
  if ((((param_2 < 0) || (0xe < param_2)) ||
      (iVar1 = param_2 + param_1 * 0x25c, *(float *)(&DAT_00696898 + iVar1 * 4) == _DAT_0064b254))
     || (iVar10 = param_1 * 0x970, *(float *)(&DAT_00696894 + iVar10) == _DAT_0064b254)) {
    fVar11 = (float10)_DAT_0064b254;
    *param_4 = 0.0;
    return fVar11;
  }
  fVar2 = *(float *)(&DAT_0069682c + iVar10);
  fVar7 = (float)_DAT_0064c8f8;
  fVar3 = *(float *)(&DAT_00696894 + iVar10);
  fVar4 = *(float *)(&DAT_00696898 + iVar1 * 4);
  fVar5 = (float)(&DAT_006968d4)[param_1 * 0x25c];
  local_14 = 0.0;
  fVar9 = fVar5 * _DAT_0064c2e8;
  for (fVar8 = fVar5 * (float)_DAT_0064a6d0; fVar8 < fVar9;
      fVar8 = fVar5 * (float)_DAT_0064a5a8 + fVar8) {
    fVar6 = fVar8 * ((fVar2 * fVar7) / ABS(fVar3 * fVar4));
    fVar11 = (float10)FUN_00506d50(param_1,fVar6,param_3);
    fVar12 = (float10)FUN_00506c00(fVar8,fVar5,(&DAT_00696888)[param_1 * 0x25c],0x3f800000);
    fVar12 = (float10)FUN_00506d10(param_1,(float)fVar12,param_2);
    if (ABS(fVar12) < (float10)(float)fVar11) break;
    if (local_14 < fVar6) {
      local_14 = fVar6;
    }
  }
  if (fVar8 < fVar5 * (float)_DAT_0064c308) {
    fVar11 = (float10)_DAT_0064b254;
    *param_4 = 0.0;
    return fVar11;
  }
  *param_4 = fVar8;
  return (float10)local_14;
}

