
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall thunk_FUN_004feee0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  if ((*(int *)(param_1 + 0x1c1c) != 1) && (_DAT_0064b240 <= *(float *)(param_1 + 0x1c84))) {
    fVar4 = (float10)FUN_004fed20();
    fVar5 = (float10)FUN_004fec60(*(undefined4 *)(param_1 + 0x1c84));
    fVar4 = (float10)FUN_004fedd0((float)fVar4);
    fVar1 = (float)fVar4;
    fVar4 = (float10)FUN_004fedd0((float)fVar5);
    fVar2 = (float)fVar4;
    fVar4 = (float10)FUN_004fee90();
    fVar3 = (float)fVar4;
    if ((fVar4 <= ABS((float10)fVar1)) && (fVar3 != _DAT_0064b254)) {
      if (*(int *)(param_1 + 0x1c1c) == 0) {
        fVar4 = (ABS((float10)fVar2) + (float10)fVar3) / ABS((float10)fVar1 - (float10)fVar2);
      }
      else {
        fVar4 = ((float10)fVar3 - (float10)fVar2) / ((float10)fVar1 - (float10)fVar2);
      }
      fVar4 = fVar4 * (float10)_DAT_0064b948;
      if (fVar4 <= (float10)_DAT_0064b948) {
        if ((float10)_DAT_0064b254 <= fVar4) {
          return fVar4;
        }
        return (float10)_DAT_0064b254;
      }
      return (float10)_DAT_0064ca28;
    }
  }
  return (float10)_DAT_0064b240;
}

