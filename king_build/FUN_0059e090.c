
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_0059e090(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  FUN_0059d9e0(param_2,param_3,param_4,param_5,param_6,param_7);
  *param_1 = &PTR_LAB_00650068;
  param_1[5] = &PTR_LAB_0065001c;
  param_1[0x34] = param_8;
  iVar1 = _rand();
  if ((float)iVar1 * _DAT_0064b244 < _DAT_0064ca18) {
    param_1[0x33] = 0xfc;
    return param_1;
  }
  if ((float)iVar1 * _DAT_0064b244 < _DAT_00650018) {
    param_1[0x33] = 0xfd;
    return param_1;
  }
  param_1[0x33] = 0xfe;
  return param_1;
}

