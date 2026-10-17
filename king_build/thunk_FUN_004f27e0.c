
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall thunk_FUN_004f27e0(int param_1)

{
  float fVar1;
  float fVar2;
  short *psVar3;
  float *pfVar4;
  int iVar5;
  float fStack_8;
  
  if (*(int *)(param_1 + 0x2638) != 1) {
    iVar5 = *(int *)(param_1 + 0xdd4);
    fStack_8 = 1.0;
    if (0 < iVar5) {
      pfVar4 = (float *)(param_1 + 0x1a7c);
      psVar3 = (short *)(param_1 + 0x19a4);
      do {
        if (*psVar3 == 0) {
          fVar1 = ABS(pfVar4[-0x357] * pfVar4[0x2fd] * *pfVar4);
          fVar2 = _DAT_0064b240;
          if (fVar1 < pfVar4[0x87]) {
            fVar2 = fVar1 / pfVar4[0x87];
          }
          if (fVar2 < fStack_8) {
            fStack_8 = fVar2;
          }
        }
        psVar3 = psVar3 + 1;
        pfVar4 = pfVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    return (float10)fStack_8;
  }
  return (float10)_DAT_0064b240;
}

