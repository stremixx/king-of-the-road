
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0062a2b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0062a230();
  FUN_0062a1c0();
  _DAT_00779f38 = 1;
  DAT_0072d590 = param_1;
  DAT_007355d4 = param_2;
  FUN_0062afb0();
  DAT_007355dc = 0;
  DAT_00688734 = FUN_0062a340(param_1);
  if (DAT_00688734 < 0) {
    FUN_0062a020(&param_1);
    return 0xffffffff;
  }
  iVar1 = (*(code *)PTR_FUN_006888c0)(DAT_0072d590,DAT_007355d4);
  if (iVar1 != 0) {
    DAT_00688734 = -1;
  }
  return 0;
}

