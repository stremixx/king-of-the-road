
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056e630(void)

{
  float fVar1;
  float10 fVar2;
  double in_stack_0000001c;
  byte in_stack_00000024;
  
  if ((((in_stack_00000024 & 2) != 0) && ((in_stack_00000024 & 1) != 0)) &&
     (_DAT_0064a6c0 < in_stack_0000001c)) {
    fVar2 = (float10)_DAT_006f2418 * (float10)_DAT_0064c940 +
            (float10)in_stack_0000001c * (float10)_DAT_0064c328 * (float10)_DAT_0064c328;
    _DAT_006f2418 = (double)fVar2;
    fVar1 = (float)fVar2;
    FUN_005fcaa0(fVar1,fVar1,1);
  }
  return;
}

