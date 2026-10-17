
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00555590(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  
  pfVar5 = (float *)(param_1 + 0x28c0);
  fVar6 = (float10)_DAT_0064b254;
  pfVar3 = (float *)(*(int *)(param_1 + 0x2540) + 0xc);
  iVar4 = 9;
  do {
    fVar1 = *pfVar3;
    fVar2 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar3 = pfVar3 + 5;
    iVar4 = iVar4 + -1;
    fVar6 = (float10)fVar1 * (float10)fVar2 + fVar6;
  } while (iVar4 != 0);
  return fVar6;
}

