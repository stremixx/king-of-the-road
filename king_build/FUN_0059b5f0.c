
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_0059b5f0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5,uint param_6,float param_7)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  
  FUN_0059a200(param_2,param_3,0x3f800000,0x40a00000,param_5,param_6,param_7 / (float)param_6,
               param_7,100);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *param_1 = &PTR_LAB_0064fd70;
  param_1[5] = &PTR_LAB_0064fd24;
  param_1[0x20] = param_1[0x20] | 1;
  param_1[0x25] = *param_3;
  param_1[0x26] = param_3[1];
  param_1[0x27] = param_3[2];
  param_1[0x28] = *param_4;
  param_1[0x29] = param_4[1];
  uVar1 = param_4[2];
  param_1[0x2b] = 0x40400000;
  param_1[0x2a] = uVar1;
  param_1[0x2c] = 0;
  iVar3 = _rand();
  fVar2 = (float)iVar3 * _DAT_0064b244;
  iVar3 = _rand();
  fVar2 = (fVar2 - (float)iVar3 * _DAT_0064b244) * _DAT_0064fb58;
  param_1[0x2f] = 0x3f3504f3;
  param_1[0x2e] = 0x3f3504f3;
  param_1[0x2d] = fVar2 + fVar2;
  return param_1;
}

