
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_0059fa60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            float *param_5,float param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = _rand();
  uVar7 = 100;
  fVar1 = (float)iVar6 * _DAT_0064b244;
  iVar6 = _rand();
  FUN_0059a200(DAT_00695184,param_4,param_7,param_7,param_8,param_9,0x40d33333,
               ((float)iVar6 * _DAT_0064b244 - fVar1) * _DAT_0064b340 + _DAT_0064b3fc,uVar7);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *param_1 = &PTR_LAB_006501e8;
  param_1[5] = &PTR_LAB_0065019c;
  param_1[0x26] = param_3;
  param_1[0x25] = param_2;
  iVar6 = _rand();
  param_1[0x2d] = 0x3f3504f3;
  param_1[0x2c] = 0x3f3504f3;
  param_1[0x2a] = (float)iVar6 * _DAT_00650198;
  iVar6 = _rand();
  fVar3 = (float)iVar6 * _DAT_0064b244;
  iVar6 = _rand();
  fVar4 = (float)iVar6 * _DAT_0064b244;
  iVar6 = _rand();
  fVar3 = fVar3 * _DAT_0064b2f4;
  fVar5 = (float)iVar6 * _DAT_0064b244 * _DAT_0064b2f4;
  fVar1 = param_5[1];
  fVar2 = param_5[2];
  param_1[0x27] = fVar4 * _DAT_0064b2f4 * param_6 + *param_5;
  param_1[0x28] = fVar3 * param_6 + fVar1;
  param_1[0x2e] = param_7;
  param_1[0x29] = fVar5 * param_6 + fVar2;
  return param_1;
}

