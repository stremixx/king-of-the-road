
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00555420(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  
  fVar4 = (float10)_DAT_0064b254;
  iVar3 = (&DAT_00697028)[*(int *)(param_1 + 0x28b4) * 0x25c];
  if (0 < iVar3) {
    pfVar2 = (float *)(param_1 + 0x28f0);
    pfVar1 = (float *)(*(int *)(param_1 + 0x5460) + 0x3ce8);
    do {
      fVar4 = fVar4 + ABS((float10)*pfVar1) * (float10)*pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar1 = pfVar1 + 5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return fVar4;
}

