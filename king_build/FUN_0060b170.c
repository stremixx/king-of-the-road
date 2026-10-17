
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060b170(void)

{
  float *pfVar1;
  float *pfVar2;
  float10 fVar3;
  int local_4;
  
  local_4 = 0;
  pfVar1 = (float *)&DAT_0072331c;
  do {
    fVar3 = (float10)local_4;
    pfVar2 = pfVar1 + 1;
    local_4 = local_4 + 1;
    fVar3 = (float10)fcos(fVar3 * (float10)_DAT_00651f10 * (float10)_DAT_00651f18);
    *pfVar1 = (float)fVar3;
    pfVar1 = pfVar2;
  } while ((int)pfVar2 < 0x7238bc);
  return;
}

