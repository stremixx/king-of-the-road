
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00445a60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float10 fVar1;
  
  param_1[2] = 0;
  fVar1 = (float10)FUN_00401000();
  param_1[6] = 0;
  *(double *)(param_1 + 4) = (double)fVar1;
  param_1[7] = 0x40200000;
  param_1[8] = s_Forfeit_0066e320;
  param_1[10] = 0;
  *param_1 = &PTR_LAB_0064a70c;
  param_1[2] = param_1[2] | 1;
  fVar1 = (float10)FUN_00401000();
  *(double *)(param_1 + 4) = (double)(fVar1 + (float10)_DAT_0064a688);
  param_1[0xc] = param_2;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  *param_1 = &PTR_LAB_0064a938;
  return param_1;
}

