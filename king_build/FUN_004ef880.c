
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004ef880(int param_1)

{
  if (((float)_DAT_0064c998 <=
       DAT_00701590 * *(float *)(param_1 + 0x18) +
       DAT_00701594 * *(float *)(param_1 + 0x24) + DAT_00701598 * *(float *)(param_1 + 0x30)) &&
     (ABS(*(float *)(param_1 + 0x24)) <= (float)_DAT_0064c990)) {
    return 0;
  }
  return 1;
}

