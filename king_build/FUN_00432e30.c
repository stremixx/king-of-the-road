
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00432e30(undefined4 *param_1,undefined4 param_2)

{
  float10 fVar1;
  
  param_1[2] = 0;
  fVar1 = (float10)FUN_00401000();
  param_1[6] = 0;
  *(double *)(param_1 + 4) = (double)fVar1;
  param_1[7] = 0x40000000;
  param_1[8] = s_FineForBribing_0066d0b8;
  param_1[10] = 0;
  *param_1 = &PTR_LAB_0064a70c;
  param_1[2] = param_1[2] | 1;
  fVar1 = (float10)FUN_00401000();
  *(double *)(param_1 + 4) = (double)(fVar1 + (float10)_DAT_0064a650);
  param_1[0xc] = param_2;
  *param_1 = &PTR_LAB_0064a8b0;
  return param_1;
}

