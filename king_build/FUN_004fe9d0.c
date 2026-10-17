
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004fe9d0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  short *psVar5;
  int iVar6;
  
  if (param_2 != 1) {
    iVar3 = *(int *)(param_1 + 0xdd4);
    iVar6 = 0;
    if (0 < iVar3) {
      psVar5 = (short *)(param_1 + 0x19a4);
      piVar4 = (int *)(param_1 + 0x1bb4);
      fVar1 = _DAT_0064b254;
      do {
        if ((*piVar4 != 0) && (*psVar5 == 0)) {
          fVar1 = fVar1 + *(float *)(param_1 + 0x1b70);
          iVar6 = iVar6 + 1;
        }
        piVar4 = piVar4 + 1;
        psVar5 = psVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (iVar6 != 0) {
        fVar1 = (*(float *)(param_1 + 0xdc8) / (fVar1 / (float)iVar6)) *
                *(float *)(param_1 + 0x1c44 + param_2 * 4) * (float)_DAT_0064ca20;
        fVar2 = *(float *)(param_1 + 0x1c88) * (float)_DAT_0064c328;
        if (fVar2 <= fVar1) {
          return (float10)fVar1;
        }
        return (float10)fVar2;
      }
    }
  }
  return (float10)_DAT_0064b254;
}

