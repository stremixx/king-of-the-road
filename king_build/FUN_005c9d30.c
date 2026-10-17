
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c9d30(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float10 fVar11;
  float10 extraout_ST0;
  float local_24;
  
  if (DAT_00701518 != 0) {
    fVar1 = *(float *)(DAT_00701518 + 0x208);
    fVar2 = *(float *)(DAT_00701518 + 0x20c);
    fVar3 = *(float *)(*(int *)(DAT_00701518 + 0x200) + 0x6c);
    fVar4 = *(float *)(*(int *)(DAT_00701518 + 0x200) + 0x70);
    fVar5 = *(float *)(*(int *)(DAT_00701518 + 0x204) + 0x6c);
    fVar6 = *(float *)(*(int *)(DAT_00701518 + 0x204) + 0x70);
    fVar11 = (float10)FUN_005cb040(param_1);
    fVar1 = (float)(((float10)fVar5 + (float10)fVar3) * (float10)_DAT_0064b2f8 + fVar11 +
                   (float10)fVar1);
    fVar11 = (float10)FUN_005cb040(param_1);
    local_24 = (float)(((float10)fVar6 + (float10)fVar4) * (float10)_DAT_0064b2f8 + fVar11 +
                      (float10)fVar2);
    FUN_005cb040(param_1);
    param_1 = fVar1;
    if (_DAT_0064b240 < fVar1) {
      param_1 = 1.0;
    }
    if (_DAT_0064b240 < local_24) {
      local_24 = 1.0;
    }
    if (param_1 < _DAT_0064b254) {
      param_1 = 0.0;
    }
    if (local_24 < _DAT_0064b254) {
      local_24 = 0.0;
    }
    uVar7 = __ftol();
    uVar8 = __ftol();
    uVar9 = __ftol();
    uVar9 = ((uVar7 | 0xffffff00) << 8 | uVar8) << 8 | uVar9;
    DAT_0067e880 = uVar9;
    uVar7 = __ftol();
    uVar8 = __ftol();
    uVar10 = __ftol();
    DAT_0067e884 = ((uVar7 | 0xffffff00) << 8 | uVar8) << 8 | uVar10;
    uVar7 = __ftol();
    uVar8 = __ftol();
    uVar10 = __ftol();
    DAT_0067e888 = ((uVar7 | 0xffffff00) << 8 | uVar8) << 8 | uVar10;
    _DAT_0067e894 = (float)extraout_ST0;
    _DAT_0070cc18 = (float)extraout_ST0;
    _DAT_0067e88c = param_1;
    _DAT_0067e890 = local_24;
    _DAT_0070cc20 = param_1;
    _DAT_0070cc1c = local_24;
    _DAT_0070bec8 = uVar9;
  }
  return;
}

