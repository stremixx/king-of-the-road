
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_005cb0d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_00650d04;
  param_1[4] = param_2;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[5] = 0x3f400000;
  iVar3 = _rand();
  param_1[6] = 0x3f800000;
  param_1[7] = (float)iVar3 * _DAT_0064b244;
  iVar3 = _rand();
  param_1[9] = (float)iVar3 * _DAT_00650d00;
  if (param_1[4] == 0) {
    iVar3 = _rand();
    param_1[8] = param_3;
    param_1[6] = (float)iVar3 * _DAT_0064b47c + _DAT_0064b240;
    return param_1;
  }
  iVar3 = _rand();
  fVar2 = (float)iVar3 * _DAT_0064b244;
  fVar1 = *(float *)(param_1[4] + 0x18);
  param_1[8] = param_3;
  param_1[6] = fVar1 - fVar2 * (float)param_1[5];
  return param_1;
}

