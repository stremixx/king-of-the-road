
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00541cb0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_24;
  float local_20;
  
  iVar3 = *(int *)(param_1 + 0x28b4);
  fVar1 = (float)(&DAT_00696d18)[iVar3 * 0x25c];
  fVar4 = (float)(&DAT_00696d20)[iVar3 * 0x25c];
  local_24 = (float)(&DAT_00696d1c)[iVar3 * 0x25c] * _DAT_0064b248;
  if (((local_24 < _DAT_0064c2e8) || (*(float *)(param_1 + 0x19c) < _DAT_0064e4fc)) ||
     ((DAT_006cd29c <= iVar3 && (iVar3 < DAT_006cd2a0)))) {
    local_24 = local_24 + local_24;
  }
  if (((fVar1 < _DAT_0064b240) || (local_24 < _DAT_0064b240)) || (fVar4 < _DAT_0064b240)) {
    FUN_004e1e9c(s__Vehicle__makeVehI___x<1__y<1__z_00678db8);
  }
  fVar5 = (float10)FUN_00555d00();
  fVar2 = (float)fVar5;
  if ((float10)_DAT_0064b254 < fVar5) {
    fVar5 = (float10)FUN_00555d40();
    fVar6 = (float10)FUN_00555d20();
    fVar7 = (float10)FUN_00555ce0();
    local_20 = (float)fVar5;
    if (fVar2 < (float)fVar5) {
      local_20 = fVar2;
    }
    fVar5 = ((float10)fVar4 - (float10)_DAT_0064b240) *
            ((((float10)local_20 / (float10)fVar2) * (float10)(float)fVar6) / fVar7) +
            (float10)_DAT_0064b240;
  }
  else {
    fVar5 = (float10)_DAT_0064b240;
  }
  fVar4 = (float)(((float10)local_24 * (float10)local_24 + fVar5 * fVar5) *
                  (float10)*(float *)(param_1 + 0x19c) * (float10)_DAT_0064cae4);
  *(float *)(param_1 + 0x1a4) = fVar4;
  fVar2 = (float)(((float10)fVar1 * (float10)fVar1 + fVar5 * fVar5) *
                  (float10)*(float *)(param_1 + 0x19c) * (float10)_DAT_0064cae4);
  *(float *)(param_1 + 0x1a8) = fVar2;
  *(float *)(param_1 + 0xce8) = fVar4;
  fVar1 = ((float)((float10)fVar1 * (float10)fVar1) + (float)((float10)local_24 * (float10)local_24)
          ) * *(float *)(param_1 + 0x19c) * _DAT_0064cae4;
  *(float *)(param_1 + 0xcec) = fVar2;
  *(float *)(param_1 + 0x1ac) = fVar1;
  *(float *)(param_1 + 0xcf0) = fVar1;
  return;
}

