
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_004d9a50(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006450a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d27c0(s_mnFire_00671c58);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_0064c414;
  param_1[8] = param_2;
  local_4 = 0;
  param_1[9] = *param_3;
  param_1[10] = param_3[1];
  param_1[0xb] = param_3[2];
  param_1[0xc] = *param_4;
  param_1[0xd] = param_4[1];
  uVar1 = param_4[2];
  param_1[0xf] = param_5;
  param_1[0xe] = uVar1;
  param_1[0x1a] = 0x3f000000;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0x3e800000;
  iVar3 = _rand();
  fVar2 = (float)iVar3 * _DAT_0064b244;
  iVar3 = _rand();
  fVar2 = (float)iVar3 * _DAT_0064b244 - fVar2;
  param_1[0x13] = fVar2 + fVar2;
  iVar3 = _rand();
  fVar2 = (float)iVar3 * _DAT_0064b244;
  iVar3 = _rand();
  fVar2 = (float)iVar3 * _DAT_0064b244 - fVar2;
  param_1[0x14] = fVar2 + fVar2;
  iVar3 = _rand();
  param_1[0x15] = (float)iVar3 * _DAT_0064b47c + _DAT_0064b240;
  iVar3 = _rand();
  fVar2 = (float)iVar3 * _DAT_0064b244;
  iVar3 = _rand();
  fVar2 = (float)iVar3 * _DAT_0064b244 - fVar2;
  param_1[0x16] = fVar2 + fVar2;
  iVar3 = _rand();
  fVar2 = (float)iVar3 * _DAT_0064b244;
  iVar3 = _rand();
  fVar2 = (float)iVar3 * _DAT_0064b244 - fVar2;
  param_1[0x17] = fVar2 + fVar2;
  iVar3 = _rand();
  param_1[0x18] = (float)iVar3 * _DAT_0064b47c + _DAT_0064b240;
  FUN_004d9c30();
  FUN_005d2c20(param_1);
  ExceptionList = local_c;
  return param_1;
}

