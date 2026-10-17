
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005a8910(undefined4 param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  iVar2 = (int)param_3;
  if (_DAT_0064a590 <= _DAT_006fa348) {
    if (_DAT_006fa348 < _DAT_0064ca48) {
      if (_DAT_0064a590 <= _DAT_006fa340) {
        if (_DAT_006fa340 < _DAT_0064ca48) {
          fVar4 = (float10)FUN_005a88b0(param_1,param_2,DAT_006fa330 * 0x10 + (int)param_3);
          fVar5 = (float10)FUN_005a88b0(param_1,param_2,DAT_006fa338 * 0x10 + (int)param_3);
          fVar6 = (float10)_DAT_0064a660;
          fVar3 = (float10)_DAT_006fa340;
          fVar9 = (float10)_DAT_006fa340;
          fVar7 = (float10)FUN_005a88b0(param_1,param_2,DAT_006fa334 * 0x10 + (int)param_3);
          fVar8 = (float10)FUN_005a88b0(param_1,param_2,DAT_006fa33c * 0x10 + (int)param_3);
          return ((float10)_DAT_0064a660 - (float10)_DAT_006fa348) *
                 (float10)(float)(fVar5 * fVar9 + (fVar6 - fVar3) * (float10)(float)fVar4) +
                 (fVar8 * (float10)_DAT_006fa340 +
                 ((float10)_DAT_0064a660 - (float10)_DAT_006fa340) * (float10)(float)fVar7) *
                 (float10)_DAT_006fa348;
        }
        fVar9 = (float10)FUN_005a88b0(param_1,param_2,DAT_006fa338 * 0x10 + (int)param_3);
        iVar1 = DAT_006fa33c;
      }
      else {
        fVar9 = (float10)FUN_005a88b0(param_1,param_2,DAT_006fa330 * 0x10 + (int)param_3);
        iVar1 = DAT_006fa334;
      }
      param_3 = (float)fVar9;
      fVar9 = (float10)FUN_005a88b0(param_1,param_2,iVar1 * 0x10 + iVar2);
      return fVar9 * (float10)_DAT_006fa348 +
             ((float10)_DAT_0064a660 - (float10)_DAT_006fa348) * (float10)param_3;
    }
    if (_DAT_0064a590 > _DAT_006fa340) {
      fVar9 = (float10)FUN_005a88b0(param_1,param_2,DAT_006fa334 * 0x10 + (int)param_3);
      return fVar9;
    }
    iVar2 = DAT_006fa33c;
    if (_DAT_006fa340 < _DAT_0064ca48) {
      fVar9 = (float10)FUN_005a88b0(param_1,param_2,DAT_006fa334 * 0x10 + (int)param_3);
      fVar3 = (float10)FUN_005a88b0(param_1,param_2,DAT_006fa33c * 0x10 + (int)param_3);
      return fVar3 * (float10)_DAT_006fa340 +
             ((float10)_DAT_0064a660 - (float10)_DAT_006fa340) * (float10)(float)fVar9;
    }
  }
  else {
    iVar2 = DAT_006fa330;
    if (_DAT_0064a590 <= _DAT_006fa340) {
      if (_DAT_0064ca48 <= _DAT_006fa340) {
        fVar9 = (float10)FUN_005a88b0(param_1,param_2,DAT_006fa338 * 0x10 + (int)param_3);
        return fVar9;
      }
      fVar9 = (float10)FUN_005a88b0(param_1,param_2,DAT_006fa330 * 0x10 + (int)param_3);
      fVar3 = (float10)FUN_005a88b0(param_1,param_2,DAT_006fa338 * 0x10 + (int)param_3);
      return fVar3 * (float10)_DAT_006fa340 +
             ((float10)_DAT_0064a660 - (float10)_DAT_006fa340) * (float10)(float)fVar9;
    }
  }
  fVar9 = (float10)FUN_005a88b0(param_1,param_2,iVar2 * 0x10 + (int)param_3);
  return fVar9;
}

