
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004ef910(int param_1)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  
  fVar3 = (float10)_DAT_0064b254;
  uVar1 = *(uint *)(param_1 + 0x3cc8);
  if (uVar1 == 0) {
    fVar3 = (float10)_DAT_00673380 * (float10)*(float *)(param_1 + 0x29e0);
  }
  else {
    iVar2 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    if (*(int *)(param_1 + 0x3ccc) + -1 <= iVar2) {
      if (0 < (int)uVar1) {
        return (float10)_DAT_00673380 * (float10)_DAT_0064a6d0;
      }
      return -(float10)_DAT_00673380 * (float10)_DAT_0064a6d0;
    }
    if (0 < iVar2) {
      if ((int)uVar1 < 1) {
        fVar3 = -(float10)_DAT_00673380;
      }
      else {
        fVar3 = (float10)_DAT_00673380;
      }
      fVar3 = fVar3 * (float10)_DAT_0064a830;
    }
    fVar3 = (float10)_DAT_00673380 * (float10)*(float *)(param_1 + 0x29e0) + fVar3;
    if ((float10)_DAT_00673380 < fVar3) {
      fVar3 = (float10)_DAT_00673380;
    }
    if (fVar3 < (float10)-_DAT_00673380) {
      return (float10)-_DAT_00673380;
    }
  }
  return fVar3;
}

