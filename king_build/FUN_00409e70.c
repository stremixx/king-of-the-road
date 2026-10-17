
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00409e70(int *param_1,uint *param_2)

{
  uint uVar1;
  double dVar2;
  float10 fVar3;
  
  dVar2 = _DAT_0064a660;
  if (param_2[5] == 2) {
    dVar2 = _DAT_0064a658;
  }
  if (param_2[5] == 3) {
    dVar2 = _DAT_0064a650;
  }
  fVar3 = (float10)dVar2;
  if (*param_1 == 1) {
    return fVar3;
  }
  uVar1 = *param_2;
  if ((uVar1 & 0x40) == 0) {
    if (param_1[1] == 1) {
      if ((uVar1 & 4) == 0) {
        return fVar3;
      }
      return fVar3 * (float10)_DAT_0064a5e0;
    }
    if ((uVar1 & 8) == 0) {
      return fVar3;
    }
  }
  return fVar3 * (float10)_DAT_0064a5e0;
}

