
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00470dd0(undefined4 *param_1)

{
  float10 fVar1;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  fVar1 = (float10)FUN_00401000();
  *(double *)(param_1 + 0x12) = (double)(fVar1 + (float10)_DAT_0064a848);
  fVar1 = (float10)FUN_00401000();
  *(double *)(param_1 + 0x14) = (double)fVar1;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = 0x408c2000;
  param_1[0x19] = 0x3ff00000;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0xffffffff;
  return param_1;
}

