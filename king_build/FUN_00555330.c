
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00555330(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  
  fVar8 = (float10)_DAT_0064b254;
  iVar7 = (&DAT_00697028)[*(int *)(param_1 + 0x28b4) * 0x25c];
  if (0 < iVar7) {
    pfVar6 = (float *)(param_1 + 0x2930);
    pfVar5 = (float *)(*(int *)(param_1 + 0x5460) + 0x3e28);
    do {
      pfVar2 = pfVar5 + -0x28;
      pfVar1 = pfVar6 + -8;
      fVar3 = *pfVar5;
      fVar4 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar5 = pfVar5 + 5;
      iVar7 = iVar7 + -1;
      fVar8 = ABS((float10)fVar3) * (float10)fVar4 +
              fVar8 + ABS((float10)*pfVar2) * (float10)*pfVar1;
    } while (iVar7 != 0);
  }
  return fVar8;
}

