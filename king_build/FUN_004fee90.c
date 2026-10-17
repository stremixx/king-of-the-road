
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004fee90(int param_1)

{
  float *pfVar1;
  short *psVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = *(int *)(param_1 + 0xdd4);
  fVar4 = (float10)_DAT_0064b254;
  if (0 < iVar3) {
    pfVar1 = (float *)(param_1 + 0x2670);
    psVar2 = (short *)(param_1 + 0x19a4);
    do {
      if ((pfVar1[-0x2af] != 0.0) && (*psVar2 == 0)) {
        fVar4 = (float10)pfVar1[-0x654] * (float10)*pfVar1 + fVar4;
      }
      psVar2 = psVar2 + 1;
      pfVar1 = pfVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return fVar4;
}

