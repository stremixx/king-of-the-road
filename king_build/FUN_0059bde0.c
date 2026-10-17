
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_0059bde0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,float *param_4,
            float *param_5,float param_6,undefined4 param_7,uint param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  FUN_0059a200(param_2,param_3,param_6 * _DAT_0064b248,param_6 + param_6,param_7,param_8,
               _DAT_0064b24c / (float)param_8,0x3f4ccccd,100);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *param_1 = &PTR_LAB_0064fe18;
  param_1[5] = &PTR_LAB_0064fdcc;
  param_1[0x20] = param_1[0x20] | 1;
  param_1[0x25] = *param_3;
  param_1[0x26] = param_3[1];
  param_1[0x27] = param_3[2];
  fVar1 = param_4[1];
  fVar2 = param_5[1];
  fVar3 = param_4[2];
  fVar4 = param_5[2];
  param_1[0x28] = *param_4 - *param_5;
  param_1[0x29] = fVar1 - fVar2;
  param_1[0x2b] = 0x41700000;
  param_1[0x2c] = 0;
  param_1[0x2a] = fVar3 - fVar4;
  iVar5 = _rand();
  fVar1 = (float)iVar5 * _DAT_0064b244;
  iVar5 = _rand();
  fVar1 = (fVar1 - (float)iVar5 * _DAT_0064b244) * _DAT_0064fb58;
  param_1[0x2f] = 0x3f3504f3;
  param_1[0x2e] = 0x3f3504f3;
  param_1[0x2d] = fVar1 + fVar1;
  return param_1;
}

