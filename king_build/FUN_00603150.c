
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00603150(double param_1)

{
  undefined4 uVar1;
  
  if (param_1 <= _DAT_0064a668) {
    return 0xffffd8f0;
  }
  if (_DAT_0064a660 < param_1) {
    return 0;
  }
  log2((float10)param_1);
  uVar1 = __ftol();
  return uVar1;
}

