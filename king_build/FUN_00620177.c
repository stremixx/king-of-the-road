
UINT FUN_00620177(UINT param_1)

{
  UINT UVar1;
  bool bVar2;
  
  if (param_1 == 0xfffffffe) {
    DAT_0072d100 = 1;
                    /* WARNING: Could not recover jumptable at 0x00620191. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar1 = GetOEMCP();
    return UVar1;
  }
  if (param_1 == 0xfffffffd) {
    DAT_0072d100 = 1;
                    /* WARNING: Could not recover jumptable at 0x006201a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar1 = GetACP();
    return UVar1;
  }
  bVar2 = param_1 == 0xfffffffc;
  if (bVar2) {
    param_1 = DAT_0072d1d4;
  }
  DAT_0072d100 = (uint)bVar2;
  return param_1;
}

