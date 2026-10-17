
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060b1b0(void)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  
  pfVar2 = (float *)&DAT_00723e64;
  fVar1 = _DAT_0064b254;
  do {
    fVar1 = fVar1 + _DAT_00651f14;
    pfVar3 = pfVar2 + 1;
    *pfVar2 = _DAT_0064b240 - fVar1 * _DAT_0064b8f4;
    pfVar2 = pfVar3;
  } while (pfVar3 < &DAT_00724314);
  return;
}

