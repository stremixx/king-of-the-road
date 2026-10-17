
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004e205f(undefined4 param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = __ftol(param_1);
  fVar1 = _DAT_0064b254;
  if ((-1 < iVar2) && (iVar2 < 0x168)) {
    fVar1 = *(float *)(&DAT_00695e20 + iVar2 * 4);
  }
  return (float10)fVar1;
}

